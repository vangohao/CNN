#include "conv.h"
#include <ap_int.h>
#include <stdio.h>
void cnn(d_type *In, d_type *Out, d_type *W, int *Parameter)
{
#pragma HLS ALLOCATION instances = fmul limit = 32 operation
#pragma HLS ALLOCATION instances = fadd limit = 32 operation

/*
	In  : Input feature map, CHin*R*C
	Out : Output feature map, CHout*Rout*Cout
	W : weights, CHout*CHin*Kr*Kc
	Parameter:  CHin|CHout|R|C|K|S
	*/
#pragma HLS INTERFACE s_axilite port = return
// #pragma HLS INTERFACE m_axi depth = 24576 port = In offset = slave //adjust the depth as you need
// #pragma HLS INTERFACE m_axi depth = 14400 port = Out offset = slave
// #pragma HLS INTERFACE m_axi depth = 3456 port = W offset = slave
// #pragma HLS INTERFACE m_axi depth = 256 port = Parameter offset = slave
#pragma HLS INTERFACE m_axi depth = 10000000 port = In offset = slave //adjust the depth as you need
#pragma HLS INTERFACE m_axi depth = 10000000 port = Out offset = slave
#pragma HLS INTERFACE m_axi depth = 10000000 port = W offset = slave
#pragma HLS INTERFACE m_axi depth = 256 port = Parameter offset = slave

	// 当前block size :
	/*
	CHin : 1
	CHout : 16
	R_in : 32
	C_in : 32
	R_out : ?
	C_out : ?
	K : 2, 3, 5
	S : 1, 2
	*/
	const unsigned int bCHout = 16;
	const unsigned int bCHin = 4;
	const unsigned int bR_in = 32;
	const unsigned int bC_in = 32;
	const unsigned int KMax = 5;
	const unsigned int SMin = 1;

	// 为方便起见, 在block计算时默认增加Padding, 即bR_out=bR_in, 不过Out_1中只有部分会被使用, 算完后抛弃多余的.
	const unsigned int bR_out = bR_in;
	const unsigned int bC_out = bC_in;

	d_type In_1[bR_in][bC_in][bCHin];
	d_type Out_1[bR_out][bC_out][bCHout];
	d_type W_1[KMax][KMax][bCHin][bCHout];
#pragma HLS ARRAY_PARTITION variable = In_1 cyclic factor = 4 dim = 2
#pragma HLS ARRAY_PARTITION variable = Out_1 cyclic factor = 16 dim = 3
#pragma HLS ARRAY_PARTITION variable = Out_1 cyclic factor=2 dim = 2
#pragma HLS ARRAY_PARTITION variable = W_1 complete
	// #pragma HLS ARRAY_PARTITION variable=W_1 complete

	ap_uint<8> CHin, CHout, R_in, C_in;
	ap_uint<4> K;
	ap_uint<1> S;
	/*
	CHin : Input channels
	CHout : output channels
	R_in : Input rows
	C_in : Input columns
	K : kernel size (Kr = Kc)
	S : Stride
	*/

	CHin = Parameter[0];
	CHout = Parameter[1];
	R_in = Parameter[2];
	C_in = Parameter[3];
	K = Parameter[4];
	S = Parameter[5] & 1;
	S = ~S;

	if (R_in - K < 0 || C_in - K < 0)
	{
		return;
	}

	ap_uint<8> R_out = (((ap_uint<8>)(R_in - K)) >> S) + 1;
	ap_uint<8> C_out = (((ap_uint<8>)(C_in - K)) >> S) + 1;

	ap_uint<8> vbR_out = (((ap_uint<8>)(bR_in - K)) >> S) + 1;
	ap_uint<8> vbC_out = (((ap_uint<8>)(bC_in - K)) >> S) + 1;
	ap_uint<8> vbR_in = vbR_out << S;
	ap_uint<8> vbC_in = vbC_out << S;

	for (ap_uint<8> R_in_batch = 0, R_out_batch = 0; R_out_batch < R_out; (R_in_batch += vbR_in), (R_out_batch += vbR_out))
	{
#pragma HLS LOOP_TRIPCOUNT max=1
		for (ap_uint<8> C_in_batch = 0, C_out_batch = 0; C_out_batch < C_out; (C_in_batch += vbC_in), (C_out_batch += vbC_out))
		{
#pragma HLS LOOP_TRIPCOUNT max=1
			for (ap_uint<8> CHout_batch = 0; CHout_batch < CHout; CHout_batch += bCHout)
			{
#pragma HLS LOOP_TRIPCOUNT max=1
			loop_Out:
				for (ap_uint<8> r2 = 0; r2 < vbR_out && r2 + R_out_batch < R_out; r2++)
				{
#pragma HLS LOOP_TRIPCOUNT max=32
					for (ap_uint<8> c2 = 0; c2 < vbC_out && c2 + C_out_batch < C_out; c2++)
					{
#pragma HLS LOOP_TRIPCOUNT max=30
						for (ap_uint<8> cho = 0; cho < bCHout && cho + CHout_batch < CHout; cho++)
						{
#pragma HLS PIPELINE
							// #pragma HLS UNROLL
							Out_1[r2][c2][cho] = Out[(cho + CHout_batch) * R_out * C_out + (r2 + R_out_batch) * C_out + (c2 + C_out_batch)];
						}
					}
				}
				for (ap_uint<8> CHin_batch = 0; CHin_batch < CHin; CHin_batch += bCHin)
				{
#pragma HLS LOOP_TRIPCOUNT max=1
					printf("FUCKYOU! %u %u %u %u\n", (unsigned)CHin_batch, (unsigned)CHout_batch, (unsigned)R_in_batch, (unsigned)C_in_batch);
// #pragma HLS LOOP_FLATTEN OFF

				loop_W:
					for (ap_uint<8> i = 0; i < bCHout && i + CHout_batch < CHout; i++)
					{
						for (ap_uint<8> j = 0; j < bCHin && j + CHin_batch < CHin; j++)
						{
							for (ap_uint<4> k = 0; k < K; k++)
							{
#pragma HLS LOOP_TRIPCOUNT min=3 max=3
								for (ap_uint<4> l = 0; l < K; l++)
								{
#pragma HLS LOOP_TRIPCOUNT min=3 max=3
#pragma HLS PIPELINE

									W_1[k][l][j][i] = W[(i + CHout_batch) * (CHin * K * K) + (j + CHin_batch) * K * K + k * K + l];
								}
							}
						}
					}
				loop_In:
					for (ap_uint<8> j = 0; j < bR_in && j + R_in_batch < R_in; j++)
					{
						for (ap_uint<8> k = 0; k < bC_in && k + C_in_batch < C_in; k++)
						{
							for (ap_uint<8> i = 0; i < bCHin && i + CHin_batch < CHin; i++)
							{
#pragma HLS PIPELINE
								In_1[j][k][i] = In[(i + CHin_batch) * (R_in * C_in) + (j + R_in_batch) * C_in + (k + C_in_batch)];
							}
						}
					}

				loop_Kr:
					for (ap_uint<4> kr = 0; kr < K; kr++)
					{
#pragma HLS LOOP_TRIPCOUNT min = 2 max = 5
					loop_Kc:
						for (ap_uint<4> kc = 0; kc < K; kc++)
						{
#pragma HLS LOOP_TRIPCOUNT min = 2 max = 5
						loop_CHin:
							for (ap_uint<8> chi = 0; chi < bCHin && chi + CHin_batch < CHin; chi++)
							{
							loop_R1:
								for (ap_uint<8> r1 = 0; r1 < bR_in; r1++)
								{
								loop_C1:
									for (ap_uint<8> c1 = 0; c1 < bC_in; c1++)
									{
#pragma HLS UNROLL factor = 2
#pragma HLS PIPELINE
									loop_CHout:
										for (ap_uint<8> cho = 0; cho < bCHout; cho++)
										{
#pragma HLS UNROLL
											Out_1[r1][c1][cho] += W_1[kr][kc][chi][cho] * In_1[(r1 << S) + kr][(c1 << S) + kc][chi];
										}
									}
								}
							}
						}
					}

				}
			loop_AddedOut:
				for (ap_uint<8> r2 = 0; r2 < vbR_out && r2 + R_out_batch < R_out; r2++)
				{
#pragma HLS LOOP_TRIPCOUNT max=32
					for (ap_uint<8> c2 = 0; c2 < vbC_out && c2 + C_out_batch < C_out; c2++)
					{
#pragma HLS LOOP_TRIPCOUNT max=30
						for (ap_uint<8> cho = 0; cho < bCHout && cho + CHout_batch < CHout; cho++)
						{
#pragma HLS PIPELINE
							Out[(cho + CHout_batch) * R_out * C_out + (r2 + R_out_batch) * C_out + (c2 + C_out_batch)] = Out_1[r2][c2][cho];
						}
					}
				}
			}
		}
	}
}
