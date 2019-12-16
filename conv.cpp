#include "conv.h"
#include <ap_int.h>
#include <stdio.h>
#ifdef __SYNTHESIS__
#define BLOCKTYPE ap_fixed<16, 3>
#define WTYPE ap_fixed<16, 0>
#define OUTTYPE ap_fixed<32, 3>
#else
#define BLOCKTYPE ap_fixed<16, 3>
#define WTYPE ap_fixed<16, 0>
#define OUTTYPE ap_fixed<32, 3>
#endif
const unsigned int CHout = 32;
const unsigned int CHin = 32;
const unsigned int R_out = 16;
const unsigned int C_out = 16;
const int K = 3;

inline WTYPE w_to_int8(d_type x)
{
	BLOCKTYPE y = 0;
	y = x;
	return y;
}

inline BLOCKTYPE in_to_int8(d_type x)
{
	BLOCKTYPE y = 0;
	y = x;
	return y;
}

void load_w(d_type *W, WTYPE W_0[K][K][CHin][CHout], int bCHin, int bCHout)
{
	for (int i = 0; i < bCHout; i++)
	{
		for (int j = 0; j < bCHin; j++)
		{
			for (int k = 0; k < K; k++)
			{
				for (int l = 0; l < K; l++)
				{
	#pragma HLS PIPELINE
					W_0[k][l][j][i] = w_to_int8(W[i * (bCHin * K * K) + j * K * K + k * K + l]);
				}
			}
		}
	}
}
void load_w_first(d_type *W, WTYPE W_0[K][K][3][16])
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < K; k++)
			{
				for (int l = 0; l < K; l++)
				{
	#pragma HLS PIPELINE
					W_0[k][l][j][i] = w_to_int8(W[i * (3 * K * K) + j * K * K + k * K + l]);
				}
			}
		}
	}
}
void load_b(d_type *b, WTYPE B_0[32], int bCHout)
{
	for(int i = 0; i < bCHout; i++)
	{
		#pragma HLS pipeline
		B_0[i] = b[i];
	}
}
void load_in(d_type *In, BLOCKTYPE In_0[34][34][3])
{
loop_In:
	for (int j = 0; j < 32; j++)
	{
		for (int k = 0; k < 32; k++)
		{
			for (int i = 0; i < 3; i++)
			{
#pragma HLS PIPELINE
				In_0[j + 1][k + 1][i] = in_to_int8(In[i * (32 * 32) + j * 32 + k]);
			}
		}
	}
}
void prepare_in(OUTTYPE Out[R_out][C_out][CHout], BLOCKTYPE In_0[R_out+2][C_out+2][CHin], int bR_out, int bC_out, int bCHin)
{
	for(int r = 0; r < bR_out; r++)
	{
		for(int c = 0; c < bC_out; c++)
		{
			#pragma HLS pipeline
			for(int chi = 0; chi < bCHin; chi++)
			{
				#pragma HLS unroll
				In_0[r + 1][c + 1][chi] = Out[r][c][chi];
			}
		}
	}
	for(int r = 0; r < bR_out + 2; r++)
	{
		#pragma HLS pipeline
		for (int j = 0; j < bCHin; j++)
		{
			In_0[r][0][j] = 0;
			In_0[r][bR_out + 1][j] = 0;
			In_0[0][r][j] = 0;
			In_0[bR_out + 1][r][j] = 0;
		}
	}
}
void conv_first_and_pool(BLOCKTYPE In_0[34][34][3], OUTTYPE Out[R_out][C_out][CHout]
			,WTYPE W_0[3][3][3][16], WTYPE B_1[16])
{
	loop_RR:
	for (int r1 = 0; r1 < 32; r1+=2)
	{
		loop_CC:
		for (int c1 = 0; c1 < 32; c1+=2)
		{
			OUTTYPE tmpOut[2][2][16];
			for (int i = 0; i < 2; i++)
			{
				#pragma HLS UNROLL
				for (int j = 0; j < 2; j++)
				{
					#pragma HLS UNROLL
					for (int o = 0; o < 16; o ++)
					{
						#pragma HLS UNROLL
						tmpOut[i][j][o] = B_1[o];
					}
				}
			}
			loop_Kr:
			for (int kr = 0; kr < K; kr++)
			{
				loop_Kc:
				for (int kc = 0; kc < K; kc++)
				{
					loop_CHin:
					for (int chi = 0; chi < 3; chi++)
					{
	// #pragma HLS UNROLL factor = 2
						loop_CHout:
						for (int cho = 0; cho < 16; cho++)
						{
							// #pragma HLS UNROLL
							#pragma HLS PIPELINE
							#pragma resource core=DSP48 variable=tmp
							for (int i = 0; i < 2; i++)
							{
								#pragma HLS UNROLL
								for(int j = 0; j < 2; j++)
								{
									#pragma HLS UNROLL
									OUTTYPE tmp = tmpOut[i][j][cho] + ((W_0[kr][kc][chi][cho] * In_0[r1 + i + kr][c1 + j + kc][chi]));
									Out[i][j][cho] = tmp;
								}
							}
						}
					}
				}
			}
			// Max-pooling and ReLU
			loop_MaxPoolReLU:
			for (int o = 0; o < 16; o ++)
			{
				Out[r1][c1][o] = 0;
				// #pragma HLS UNROLL
				for (int i = 0; i < 2; i++)
				{
					// #pragma HLS UNROLL
					for (int j = 0; j < 2; j++)
					{
						// #pragma HLS UNROLL
						if (Out[r1][c1][o] < tmpOut[i][j][o])
							Out[r1][c1][o] = tmpOut[i][j][o];
					}
				}
			}
		}
	}
}
void conv_batch(BLOCKTYPE In_0[R_out+2][C_out+2][CHin],OUTTYPE Out[R_out][C_out][CHout]
			,WTYPE W_0[K][K][CHin][CHout], WTYPE B_1[CHout], int bR_out, int bC_out, int bCHin)
{
	for (int r1 = 0; r1 < bR_out; r1++)
	{
		for (int c1 = 0; c1 < bC_out; c1++)
		{
			#pragma HLS pipeline
			for (int cho = 0; cho < CHout; cho++)
			{
				Out[r1][c1][cho] = B_1[cho];
			}
		}
	}
	loop_Kr:
	for (int kr = 0; kr < K; kr++)
	{
	loop_Kc:
		for (int kc = 0; kc < K; kc++)
		{
		loop_CHin:
			for (int chi = 0; chi < bCHin; chi++)
			{
			loop_R1:
				for (int r1 = 0; r1 < bR_out; r1++)
				{
				loop_C1:
					for (int c1 = 0; c1 < bC_out; c1++)
					{
	// #pragma HLS UNROLL factor = 2
	#pragma HLS PIPELINE
					loop_CHout:
						for (int cho = 0; cho < CHout; cho++)
						{
	#pragma HLS UNROLL
							#pragma resource core=DSP48 variable=tmp
							OUTTYPE tmp = Out[r1][c1][cho] + ((W_0[kr][kc][chi][cho] * In_0[r1 + kr][c1 + kc][chi]));
							Out[r1][c1][cho] = tmp;
						}
					}
				}
			}
		}
	}
}

void MaxPoolAndRelu(OUTTYPE Out[R_out][C_out][CHout], int bR_out, int bC_out)
{
	for (int r1 = 0; r1 < bR_out; r1++)
	{
		for (int c1 = 0; c1 < bC_out; c1++)
		{
			#pragma HLS pipeline
			for (int cho = 0; cho < CHout; cho++)
			{
				OUTTYPE tmp = 0;
				for (int i = 0; i < 2; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						if (Out[2 * r1 + i][2 * c1 + j][cho] > tmp)
							tmp = Out[2 * r1 + i][2 * c1 + j][cho];
					}
				}
				Out[r1][c1][cho] = tmp;
			}
		}
	}
}
void Relu(OUTTYPE Out[R_out][C_out][CHout], int bR_out, int bC_out)
{
	for (int r1 = 0; r1 < bR_out; r1++)
	{
		for (int c1 = 0; c1 < bC_out; c1++)
		{
			#pragma HLS pipeline
			for (int cho = 0; cho < CHout; cho++)
			{
				if (Out[r1][c1][cho] < 0)
					Out[r1][c1][cho] = 0;
			}
		}
	}
}
void Classify(BLOCKTYPE embed[512], d_type *FC, int *result)
{
	//FC: 512 * 10
	OUTTYPE tmp[10];
	for(int i = 0; i < 512; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			#pragma HLS pipeline
			BLOCKTYPE x = FC[i * 10 + j];
			tmp[j] += x * embed[i];
		}
	}
	*result = 0;
	int maximun = 0;
	for(int i = 1; i < 10; i++)
	{
		#pragma HLS unroll
		if (tmp[i] > maximun)
		{
			*result = i;
			maximun = tmp[i];
		}
	}
}
void cnn(d_type *In, d_type *W, d_type * B, d_type * FC, int * dest)
{
// #pragma HLS ALLOCATION instances = fmul limit = 32 operation
// #pragma HLS ALLOCATION instances = fadd limit = 32 operation

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
#pragma HLS INTERFACE m_axi depth = 100000 port = In offset = slave //adjust the depth as you need
#pragma HLS INTERFACE m_axi depth = 100000 port = W offset = slave
#pragma HLS INTERFACE m_axi depth = 100000 port = B offset = slave
#pragma HLS INTERFACE m_axi depth = 100000 port = FC offset = slave
#pragma HLS INTERFACE m_axi depth = 256 port = dest offset = slave

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

	// BLOCKTYPE In_0[R_out][C_out][CHin];
	BLOCKTYPE Raw[34][34][3];
	WTYPE W_first[3][3][3][16];
	OUTTYPE Out[R_out][C_out][CHout];
	BLOCKTYPE In_0[R_out + 2][C_out + 2][CHin];
	WTYPE W_0[K][K][CHin][CHout];
	WTYPE B_0[CHout];
	WTYPE FC_0[512][10];

	const int R_outs[5] = {16, 16, 8, 8, 4};
	const int C_outs[5] = {16, 16, 8, 8, 4};
	const int CHins[5] = {16, 32, 32, 32, 32};
	const bool Pools[5] = {0, 1, 0, 1, 0};
// #pragma HLS RESOURCE variable=Out core=RAM_1P_LUTRAM
// #pragma HLS ARRAY_PARTITION variable = In_0 block factor = 16 dim = 3
#pragma HLS ARRAY_PARTITION variable = Out block factor = 16 dim = 3
// #pragma HLS ARRAY_PARTITION variable = Out complete
// #pragma HLS ARRAY_PARTITION variable = W_0 complete dim=4
#pragma HLS ARRAY_PARTITION variable = W_0 block factor = 16 dim=4
// #pragma HLS ARRAY_PARTITION variable = W_0 block factor = 16 dim=3
	// #pragma HLS ARRAY_PARTITION variable=W_0 complete

	for(int i = 0; i < 34; i++)
	{
		#pragma HLS pipeline
		for (int j = 0; j < 3; j++)
		{
			Raw[i][0][j] = 0;
			Raw[i][33][j] = 0;
			Raw[0][i][j] = 0;
			Raw[33][i][j] = 0;
		}
	}
	load_in(In, Raw);
	load_w_first(W, W_first);
	load_b(B, B_0, 16);
	int w_offset = 16 * 3 * 3 * 3;
	int b_offset = 16;
	conv_first_and_pool(Raw, Out, W_first, B_0);
	for (int i = 0; i < 5; i++)
	{
		#pragma HLS unroll
		load_w(W + w_offset, W_0, CHins[i],32);
		load_b(B + b_offset, B_0, 32);
		w_offset += R_outs[i] * R_outs[i] * CHins[i] * 32;
		b_offset += 32;
		prepare_in(Out, In_0, R_outs[i], C_outs[i], CHins[i]);
		conv_batch(In_0, Out, W_0, B_0, R_outs[i], C_outs[i], CHins[i]);
		if (Pools[i])
		{
			MaxPoolAndRelu(Out, R_outs[i], C_outs[i]);
		}
		else
		{
			Relu(Out, R_outs[i], C_outs[i]);
		}
	}
	int result;
	BLOCKTYPE embed[512];
	for(int cho = 0; cho < 32; cho++)
	{
		for(int r = 0; r < 4; r++)
		{
			for(int c = 0; c < 4; c++)
			{
				#pragma HLS pipeline
				embed[cho * 16 + r * 4 + c] = Out[r][c][cho];
			}
		}
	}
	Classify(embed, FC, &result);
	*dest = result;
}
