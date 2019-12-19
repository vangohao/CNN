#include "conv.h"
#include <ap_int.h>
#include <stdio.h>
#ifdef __SYNTHESIS__
#define BLOCKTYPE ap_fixed<16, 5>
#define WTYPE ap_fixed<16, 3>
#define OUTTYPE ap_fixed<32, 10>
#else
// #define BLOCKTYPE float
// #define WTYPE float
// #define OUTTYPE float
#define BLOCKTYPE ap_fixed<16, 5>
#define WTYPE ap_fixed<16, 3>
#define OUTTYPE ap_fixed<32, 10>
#endif
const unsigned int CHout = 32;
const unsigned int CHin = 32;
const unsigned int R_out = 16;
const unsigned int C_out = 16;
const int K = 3;
const OUTTYPE FC_bias[10] = {0.16981252, -0.5442378, -0.051570684, 0.4738487, -0.05050631, 0.024526794, -0.07334793, 0.38040447, -0.25858143, -0.07002075};
#include "parameters.h"

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
	for (int i = 0; i < bCHout; i++)
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
#ifdef DEBUG
// debug check spread_sheet
int ss = 0;
int errc = 0;
void raiseerror()
{
	errc++;
	if (errc == 0)
	{
		int *pppp = 0;
		*pppp = 0;
	}
}
#endif
void prepare_in(OUTTYPE Out[R_out][C_out][CHout], BLOCKTYPE In_0[R_out + 2][C_out + 2][CHin], int bR_out, int bC_out, int bCHin)
{
#ifdef DEBUG
	// debug check spread_sheet
	ss++;
	FILE *f;
	char filename[50] = "../../../../../cheet/0.dat";
	filename[21] = ss + '0';
	f = fopen(filename, "r");
	int aa, bb, cc;
	fscanf(f, "%d %d %d", &aa, &bb, &cc);
	if (aa != bCHin || bb != bR_out || cc != bC_out)
	{
		printf("shape failed. %d\n", ss);
		raiseerror();
	}
	for (int i = 0; i < aa; i++)
	{
		for (int j = 0; j < bb; j++)
		{
			for (int k = 0; k < cc; k++)
			{
				float realvalue;
				fscanf(f, "%f", &realvalue);
				if (fabs(realvalue - float(Out[j][k][i])) > 0.1)
				{
					printf("check failed. %d, %d %d %d, %f, %f\n", ss, i, j, k, realvalue, float(Out[j][k][i]));
					raiseerror();
				}
			}
		}
	}

#endif
	for (int r = 0; r < bR_out; r++)
	{
		for (int c = 0; c < bC_out; c++)
		{
#pragma HLS pipeline
			for (int chi = 0; chi < bCHin; chi++)
			{
#pragma HLS unroll
				In_0[r + 1][c + 1][chi] = Out[r][c][chi];
			}
		}
	}
	for (int r = 0; r < bR_out + 2; r++)
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
void conv_first_and_pool(BLOCKTYPE In_0[34][34][3], OUTTYPE Out[R_out][C_out][CHout], WTYPE W_0[3][3][3][16], WTYPE B_1[16])
{
loop_RR:
	for (int r1 = 0; r1 < 32; r1 += 2)
	{
	loop_CC:
		for (int c1 = 0; c1 < 32; c1 += 2)
		{
			OUTTYPE tmpOut[2][2][16];
			#pragma HLS array_partition variable=tmpOut complete dim=1
			#pragma HLS array_partition variable=tmpOut complete dim=2
			#pragma HLS array_partition variable=tmpOut complete dim=3

			for (int i = 0; i < 2; i++)
			{
#pragma HLS UNROLL
				for (int j = 0; j < 2; j++)
				{
#pragma HLS UNROLL
					for (int o = 0; o < 16; o++)
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
					loop_CHout:
						for (int cho = 0; cho < 16; cho++)
						{
#pragma HLS pipeline
#pragma HLS UNROLL factor = 4
							for (int i = 0; i < 2; i++)
							{
#pragma HLS UNROLL
								for (int j = 0; j < 2; j++)
								{
#pragma resource core = DSP48 variable = tmp
#pragma HLS UNROLL
									OUTTYPE tmp = tmpOut[i][j][cho] + ((W_0[kr][kc][chi][cho] * In_0[r1 + i + kr][c1 + j + kc][chi]));
									tmpOut[i][j][cho] = tmp;
								}
							}
						}
					}
				}
			}
		// Max-pooling and ReLU
		loop_MaxPoolReLU:
			for (int o = 0; o < 16; o++)
			{
				Out[r1 >> 1][c1 >> 1][o] = 0;
				// #pragma HLS UNROLL
				for (int i = 0; i < 2; i++)
				{
					// #pragma HLS UNROLL
					for (int j = 0; j < 2; j++)
					{
						// #pragma HLS UNROLL
						if (Out[r1 >> 1][c1 >> 1][o] < tmpOut[i][j][o])
							Out[r1 >> 1][c1 >> 1][o] = tmpOut[i][j][o];
					}
				}
			}
		}
	}
}
void conv_batch(BLOCKTYPE In_0[R_out + 2][C_out + 2][CHin], OUTTYPE Out[R_out][C_out][CHout], WTYPE W_0[K][K][CHin][CHout], WTYPE B_1[CHout], int bR_out, int bC_out, int bCHin)
{
	for (int r1 = 0; r1 < bR_out; r1++)
	{
		for (int c1 = 0; c1 < bC_out; c1++)
		{
			for (int cho = 0; cho < CHout; cho++)
			{
#pragma HLS pipeline
#pragma HLS UNROLL factor=16
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
		loop_CHipart:
			for (int part = 0; part < bCHin; part += 8)
			{
#pragma HLS LOOP_TRIPCOUNT max = 4 min = 2
			loop_CHohalf:
				for (int half = 0; half < 2; half++)
				// int half = 0;
				{
				loop_R1:
					for (int r1 = 0; r1 < bR_out; r1++)
					{
					loop_C1:
						for (int c1 = 0; c1 < bC_out; c1++)
						{
#pragma HLS pipeline
							// #pragma HLS PIPELINE
						loop_CHin:
							for (int chi = 0; chi < 8; chi++)
							{
#pragma HLS UNROLL
							loop_CHout:
								for (int cho = 0; cho < 16; cho++)
								{
									OUTTYPE tmp = Out[r1][c1][cho + 16 * half];
#pragma HLS UNROLL
									// #pragma resource core=DSP48 variable=tmp
									tmp += ((W_0[kr][kc][chi][cho + 16 * half] * In_0[r1 + kr][c1 + kc][part + chi]));
									Out[r1][c1][cho + 16 * half] = tmp;
								}
							}
						}
					}
				}
			}
		}
	}
}

void MaxPoolAndRelu(OUTTYPE Out[R_out][C_out][CHout], int bR_out, int bC_out)
{
	for (int r1 = 0; r1 < (bR_out / 2); r1++)
	{
		for (int c1 = 0; c1 < (bC_out / 2); c1++)
		{
#pragma HLS pipeline
			for (int cho = 0; cho < CHout; cho++)
			{
				#pragma HLS dependence variable=Out array inter RAW false
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
	for (int i = 0; i < 10; i++)
	{
#pragma HLS UNROLL
		tmp[i] = FC_bias[i];
	}
	for (int i = 0; i < 512; i++)
	{
		for (int j = 0; j < 10; j++)
		{
#pragma HLS pipeline
			BLOCKTYPE x = FC[i * 10 + j];
			tmp[j] += x * embed[i];
		}
	}
	*result = 0;
	OUTTYPE maximun = tmp[0];
	for (int i = 0; i < 10; i++)
	{
#ifdef DEBUG
		printf("%f\n", float(tmp[i]));
#endif
#pragma HLS unroll
		if (tmp[i] > maximun)
		{
			*result = i;
			maximun = tmp[i];
		}
	}
}
void cnn(d_type *In, d_type *W, d_type *B, d_type *FC, int *dest)
{
#pragma HLS INTERFACE s_axilite port = return
#pragma HLS INTERFACE s_axilite port = dest
#pragma HLS INTERFACE m_axi depth = 100000 port = In offset = slave
#pragma HLS INTERFACE m_axi depth = 100000 port = W offset = slave
#pragma HLS INTERFACE m_axi depth = 100000 port = B offset = slave
#pragma HLS INTERFACE m_axi depth = 100000 port = FC offset = slave
	// #pragma HLS INTERFACE m_axi depth = 256 port = dest offset = slave

	// BLOCKTYPE In_0[R_out][C_out][CHin];
	BLOCKTYPE Raw[34][34][3];
	// WTYPE W_first[3][3][3][16];
	OUTTYPE Out[R_out][C_out][CHout];
	BLOCKTYPE In_0[R_out + 2][C_out + 2][CHin];
	WTYPE W_0[K][K][CHin][CHout];
	WTYPE W_1[K][K][CHin][CHout];
	WTYPE B_0[CHout];
	WTYPE FC_0[512][10];

	const int R_outs[5] = {16, 16, 8, 8, 4};
	const int C_outs[5] = {16, 16, 8, 8, 4};
	const int CHins[6] = {16, 32, 32, 32, 32, 0};
	const bool Pools[5] = {0, 1, 0, 1, 0};
// #pragma HLS RESOURCE variable=Out core=RAM_1P_LUTRAM
#pragma HLS ARRAY_PARTITION variable = In_0 cyclic factor = 8 dim = 3
#pragma HLS ARRAY_PARTITION variable = Out cyclic factor = 16 dim = 3
// #pragma HLS ARRAY_PARTITION variable = Raw cyclic factor = 2 dim = 0
// #pragma HLS ARRAY_PARTITION variable = Raw cyclic factor = 2 dim = 1

// #pragma HLS ARRAY_PARTITION variable = Out complete
// #pragma HLS ARRAY_PARTITION variable = W_0 complete dim=4
#pragma HLS ARRAY_PARTITION variable = W_0 cyclic factor = 16 dim = 4
#pragma HLS ARRAY_PARTITION variable = W_0 cyclic factor = 8 dim = 3
#pragma HLS ARRAY_PARTITION variable = W_1 cyclic factor = 16 dim = 4
#pragma HLS ARRAY_PARTITION variable = W_1 cyclic factor = 8 dim = 3
#pragma HLS ARRAY_PARTITION variable = B_0 cyclic factor = 16
	// #pragma HLS ARRAY_PARTITION variable = W_0 block factor = 16 dim=3
	// #pragma HLS ARRAY_PARTITION variable=W_0 complete

	for (int i = 0; i < 34; i++)
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
	// load_w_first(W, W_first);
	load_b(B, B_0, 16);
	int w_offset = 16 * 3 * 3 * 3;
	int b_offset = 16;
	conv_first_and_pool(Raw, Out, W_first, B_0);
	load_w(W + w_offset, W_0, CHins[0], 32);
	for (int i = 0; i < 5; i++)
	{
#pragma HLS unroll
		w_offset += 3 * 3 * CHins[i] * 32;
		if (i % 2 == 0)
		{
			load_w(W + w_offset, W_1, CHins[i + 1], 32);
		}
		else
		{
			load_w(W + w_offset, W_0, CHins[i + 1], 32);
		}

		load_b(B + b_offset, B_0, 32);
		prepare_in(Out, In_0, R_outs[i], C_outs[i], CHins[i]);
		if (i % 2 == 0)
		{
			conv_batch(In_0, Out, W_0, B_0, R_outs[i], C_outs[i], CHins[i]);
		}
		else
		{
			conv_batch(In_0, Out, W_1, B_0, R_outs[i], C_outs[i], CHins[i]);
		}

		if (Pools[i])
		{
			MaxPoolAndRelu(Out, R_outs[i], C_outs[i]);
		}
		else
		{
			Relu(Out, R_outs[i], C_outs[i]);
		}

		b_offset += 32;
	}
#ifdef DEBUG
	// prepare_in(Out, In_0, 4, 4, 32);
#endif
	int result;
	BLOCKTYPE embed[512];
	for (int cho = 0; cho < 32; cho++)
	{
		for (int r = 0; r < 4; r++)
		{
			for (int c = 0; c < 4; c++)
			{
#pragma HLS pipeline
				embed[cho * 16 + r * 4 + c] = Out[r][c][cho];
			}
		}
	}
	Classify(embed, FC, &result);
	*dest = result;
}
