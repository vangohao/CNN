#include "conv.h"

void cnn(d_type *In, d_type *Out, d_type *W, int *Parameter)
{
#pragma HLS ALLOCATION instances = fmul limit = 16 operation
#pragma HLS ALLOCATION instances = fadd limit = 16 operation

/*
	In  : Input feature map, CHin*R*C
	Out : Output feature map, CHout*Rout*Cout
	W : weights, CHout*CHin*Kr*Kc
	Parameter:  CHin|CHout|R|C|K|S
	*/
#pragma HLS INTERFACE s_axilite port = return
#pragma HLS INTERFACE m_axi depth = 24576 port = In offset = slave //adjust the depth as you need
#pragma HLS INTERFACE m_axi depth = 14400 port = Out offset = slave
#pragma HLS INTERFACE m_axi depth = 3456 port = W offset = slave
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
	const int bCHout = 16;
	const int bCHin = 1;
	const int bR_in = 32;
	const int bC_in = 32;
	const int KMax = 5;
	const int SMin = 1;

	// 为方便起见, 在block计算时默认增加Padding, 并且默认Stride=1, 即bR_out=bR_in, 算完后抛弃多余的.
	const int bR_out = bR_in;
	const int bC_out = bR_in;

	d_type In_1[bCHin * bR_in * bC_in];
	d_type Out_1[bR_out * bC_out * bCHout];
	d_type W_1[bCHin * KMax * KMax * bCHout];
#pragma HLS ARRAY_PARTITION variable = In_1 cyclic factor = 1 dim = 1
#pragma HLS ARRAY_PARTITION variable = Out_1 cyclic factor = 16 dim = 1
#pragma HLS ARRAY_PARTITION variable = W_1 cyclic factor = 16 dim = 1
	// #pragma HLS ARRAY_PARTITION variable=W_1 complete

	int CHin, CHout, R_in, C_in, K, S;
	/*
	CHin : Input channels
	CHout : output channels
	R_in : Input rows
	C_in : Input columns
	K : kernel size (Kr = Kc)
	S : Stride
	*/
	int parameter_buffer[NParameter];

	memcpy((void *)parameter_buffer, (const int *)Parameter, NParameter * sizeof(int));
	//  = {3, 16, 32, 32, 3, 1}
	CHin = parameter_buffer[0];
	CHout = parameter_buffer[1];
	R_in = parameter_buffer[2];
	C_in = parameter_buffer[3];
	K = parameter_buffer[4];
	S = parameter_buffer[5];

	// memcpy(In_1, In, CHin * R_in * C_in * sizeof(d_type));
	// memcpy(W_1, W, CHout * CHin * K * K * sizeof(d_type));
	int R_out = ((R_in - K) / S) + 1;
	int C_out = ((C_in - K) / S) + 1;

	int vbR_in = bR_in - K + 1;
	int vbC_in = bC_in - K + 1;
	int vbR_out = ((bR_in - K) / S) + 1;
	int vbC_out = ((bC_in - K) / S) + 1;
	// int C_out = 30;

	for (int CHin_batch = 0; CHin_batch < CHin; CHin_batch += bCHin)
	{
		for (int CHout_batch = 0; CHout_batch < CHout; CHout_batch += bCHout)
		{
			for (int R_in_batch = 0, R_out_batch = 0; R_in_batch < R_in; (R_in_batch += vbR_in), (R_out_batch += vbR_out))
			{
				for (int C_in_batch = 0, C_out_batch = 0; C_in_batch < C_in; (C_in_batch += vbC_in), (C_out_batch += vbC_out))
				{
#pragma HLS LOOP_FLATTEN OFF

					for (int i = 0; i < bCHout; i++)
					{
						for (int j = 0; j < bCHin * K * K; j++)
						{
#pragma HLS PIPELINE
							W_1[i + j * CHout] = W[(i + CHout_batch) * (CHin * K * K) + (j + CHin_batch * K * K)];
						}
					}

					for (int i = 0; i < bCHin; i++)
					{
						for (int j = 0; j < bR_in; j++)
						{
							for (int k = 0; k < bC_in; k++)
							{
#pragma HLS PIPELINE
								In_1[i * bR_in * bC_in + j * bC_in + k] = In[(i + CHin_batch) * (bR_in * bC_in) + (j + R_in_batch) * bC_in + (k + C_in_batch)];
							}
						}
					}

					for (int i = 0; i < bR_out * bC_out * bCHout; i++)
					{
#pragma HLS PIPELINE
						Out[i] = 0;
					}

				loop_Kr:
					for (int kr = 0; kr < K; kr++)
					{
#pragma HLS LOOP_TRIPCOUNT min = 2 max = 5
					loop_Kc:
						for (int kc = 0; kc < K; kc++)
						{
#pragma HLS LOOP_TRIPCOUNT min = 2 max = 5
						loop_CHin:
							for (int chi = 0; chi < bCHin; chi++)
							{
// #pragma HLS LOOP_TRIPCOUNT min = 1 max = 4
							loop_R1:
								for (int r1 = 0; r1 < bR_in; r1++)
								{
// #pragma HLS LOOP_TRIPCOUNT min = 1 max = 128
								loop_C1:
									for (int c1 = 0; c1 < bC_in; c1++)
									{
// #pragma HLS LOOP_TRIPCOUNT min = 1 max = 128
#pragma HLS PIPELINE
									loop_CHout:
										for (int cho = 0; cho < bCHout; cho++)
										{
#pragma HLS UNROLL factor = 16
											Out_1[(cho) + r1 * C_out * bCHout + c1 * bCHout] += W_1[(cho) + chi * (bCHout * K * K) + kr * (bCHout * K) + kc * (bCHout)] * In_1[chi * (bR_in * bC_in) + (S * r1 + kr) * bC_in + (S * c1 + kc)];
										}
									}
								}
							}
						}
					}
					
					for (int r2 = 0; r2 < vbR_out && r2 + R_out_batch < R_out; r2++)
					{
						for (int c2 = 0; c2 < vbC_out && c2 + C_out_batch < C_out; c2++)
						{
							for (int cho = 0; cho < bCHout && cho + CHout_batch < CHout; cho++)
							{
#pragma HLS PIPELINE
// #pragma HLS UNROLL
								Out[(cho + CHout_batch) * R_out * C_out + (r2 + R_out_batch) * C_out + (c2 + C_out_batch)] = Out_1[cho + (r2) * (bC_in * bCHout) + (c2) * (bCHout)];
							}
						}
					}
				}
			}
		}
	}
}
