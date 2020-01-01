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
const unsigned int R_out = 32;
const unsigned int C_out = 32;
const int K = 3;
const OUTTYPE FC_bias[10] = {0.16981252, -0.5442378, -0.051570684, 0.4738487, -0.05050631, 0.024526794, -0.07334793, 0.38040447, -0.25858143, -0.07002075};
#include "parameters.h"
#include "weight_new1.h"
#include "weight_new2.h"
#include "weight_new3.h"
#include "weight_new4.h"
#include "weight_new5.h"
#include "weight_new6.h"
#include "bias1.h"
#include "bias2.h"
#include "bias3.h"
#include "bias4.h"
#include "bias5.h"
#include "bias6.h"

inline BLOCKTYPE img_to_in(unsigned char x)
{
	BLOCKTYPE y = (((OUTTYPE)(x)) - 128) / (OUTTYPE)(64);
	return y;
}

int fuck = 0;
void load_w(WTYPE *W, WTYPE W_0[CHout][CHin][K][K], int bCHin, int bCHout)
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
					W_0[i][j][k][l] = W[i * (bCHin * K * K) + j * K * K + k * K + l];
				}
			}
		}
	}
	fuck ++;
	char filename[50] = "../../../../weight_new0.h";
	filename[strlen(filename) - 3] = '0' + fuck;
	FILE * f = fopen(filename, "w");
	fprintf(f, "{");
	for(int  i = 0; i < 32; i++)
	{
		fprintf(f, "{");
		for(int j = 0; j < 32; j++)
		{
			fprintf(f, "{");
			for(int k = 0; k < K; k++)
			{
				fprintf(f, "{");
				for(int l = 0; l < K; l++)
				{
					fprintf(f,"%.20f,", (i < bCHout && j< bCHin)? float(W_0[i][j][k][l]) : 0.0);
				}
				fprintf(f, "},\n");
			}
			fprintf(f, "},\n");
		}
		fprintf(f, "},\n");
	}
	fprintf(f, "};\n");
	fclose(f);
}
void load_b(d_type *b, WTYPE B_0[32], int bCHout)
{
	for (int i = 0; i < bCHout; i++)
	{
#pragma HLS pipeline
		B_0[i] = b[i];
	}
}
void load_in(unsigned long long *Img, BLOCKTYPE In[34][34][CHin])
{
	int j = 0, k = 0, i = 0;
loop_In:
	for (int iter = 0; iter < 32 * 32 * 3 / 8; iter++)
	{
		#pragma HLS pipeline
		unsigned long long xx = Img[iter];
		for(int jter = 0; jter < 8; jter++)
		{
			#pragma HLS UNROLL
			int index = (iter * 8 + jter);
			int i = index % 32; 
			int jndex = index / 32;
			int k = (jndex) % 32;
			int j = (jndex / 32);
			In[k + 1][i + 1][j] = img_to_in(((unsigned char *)(&xx))[jter]);
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
	if (errc == 100)
	{
		int *pppp = 0;
		*pppp = 0;
	}
}
#endif
void prepare_in(BLOCKTYPE In[R_out + 2][C_out + 2][CHin], int bR_out, int bC_out, int bCHin)
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
				if (fabs(realvalue - float(In[j+ 1][k+1][i])) > 0.1)
				{
					printf("check failed. %d, %d %d %d, %f, %f\n", ss, i, j, k, realvalue, float(In[j+1][k+1][i]));
					raiseerror();
				}
			}
		}
	}

#endif
	for (int r = 0; r < bR_out + 2; r++)
	{
#pragma HLS pipeline
		for (int j = 0; j < bCHin; j++)
		{
			#pragma hls LOOP_TRIPCOUNT max=32
			In[r][0][j] = 0;
			In[r][bR_out + 1][j] = 0;
			In[0][r][j] = 0;
			In[bR_out + 1][r][j] = 0;
		}
	}
}
void conv_level(BLOCKTYPE In[R_out + 2][C_out + 2][CHin], 
	OUTTYPE Out[R_out][C_out][CHout], WTYPE W_0[CHout][CHin][K][K], 
	WTYPE B_1[CHout], int bR_out, int bC_out, int bCHin, int bCHout)
{
	for (int r1 = 0; r1 < bR_out; r1++)
	{
		for (int c1 = 0; c1 < bC_out; c1++)
		{
			for (int cho = 0; cho < bCHout; cho++)
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
			for (int inpart = 0; inpart < bCHin; inpart += 8)
			{
#pragma HLS LOOP_TRIPCOUNT max = 4 min = 1
			loop_CHopart:
				for (int outpart = 0; outpart < bCHout; outpart += 16)
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
									OUTTYPE tmp = Out[r1][c1][outpart + cho];
#pragma HLS UNROLL
									// #pragma resource core=DSP48 variable=tmp
									tmp += ((W_0[outpart + cho][inpart + chi][kr][kc] * In[r1 + kr][c1 + kc][inpart + chi]));
									Out[r1][c1][outpart + cho] = tmp;
								}
							}
						}
					}
				}
			}
		}
	}
}

void MaxPoolAndRelu(BLOCKTYPE In[R_out + 2][C_out + 2][CHin], OUTTYPE Out[R_out][C_out][CHout], int bR_out, int bC_out, int bCHoutf)
{
	for (int r1 = 0; r1 < (bR_out / 2); r1++)
	{
		for (int c1 = 0; c1 < (bC_out / 2); c1++)
		{
			for (int outpart = 0; outpart < 16 * bCHoutf; outpart+=16)
			{
#pragma HLS pipeline
				for (int cho = 0; cho < 16; cho++)
				{
					// #pragma HLS dependence variable=In array inter RAW false
					OUTTYPE tmp = 0;
					for (int i = 0; i < 2; i++)
					{
						for (int j = 0; j < 2; j++)
						{
							if (Out[2 * r1 + i][2 * c1 + j][outpart+cho] > tmp)
								tmp = Out[2 * r1 + i][2 * c1 + j][outpart+cho];
						}
					}
					In[r1 + 1][c1 + 1][outpart+cho] = tmp;
				}
			}
		}
	}
}
void Relu(BLOCKTYPE In[R_out + 2][C_out + 2][CHin], OUTTYPE Out[R_out][C_out][CHout], int bR_out, int bC_out, int bCHoutf)
{
	for (int r1 = 0; r1 < bR_out; r1++)
	{
		for (int c1 = 0; c1 < bC_out; c1++)
		{
			for (int outpart = 0; outpart < 16 * bCHoutf; outpart+=16)
			{
#pragma HLS pipeline
#pragma HLS dependence variable=In array inter WAW false
				for (int cho = 0; cho < 16; cho++)
				{
					if (Out[r1][c1][outpart+cho] < 0)
						In[r1 + 1][c1 + 1][outpart+cho] = 0;
					else
					{
						In[r1 + 1][c1 + 1][outpart+cho] = Out[r1][c1][outpart+cho];
					}
					
				}
			}
		}
	}
}
void Classify(BLOCKTYPE embed[512], int *result)
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
			BLOCKTYPE x = FC_data[i][j];
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
void cnn(unsigned long long *Img, int *dest)
{
#pragma HLS INTERFACE s_axilite port = return
#pragma HLS INTERFACE s_axilite port = dest
#pragma HLS INTERFACE m_axi depth = 100000 port = Img offset = slave
	OUTTYPE Out[R_out][C_out][CHout];
	BLOCKTYPE In[R_out + 2][C_out + 2][CHin];

	const int R_outs[6] = {32, 16, 16, 8, 8, 4};
	const int C_outs[6] = {32, 16, 16, 8, 8, 4};
	const int CHins[6] = {3, 16, 32, 32, 32, 32};
	const int CHouts[6] = {16, 32, 32, 32, 32, 32};
	const bool Pools[6] = {1, 0, 1, 0, 1, 0};
#pragma HLS RESOURCE variable=weight1 core=RAM_1P_LUTRAM
#pragma HLS ARRAY_PARTITION variable = weight1 cyclic factor = 16 dim = 1
#pragma HLS ARRAY_PARTITION variable = weight1 cyclic factor = 8 dim = 2
#pragma HLS RESOURCE variable=weight2 core=RAM_1P_LUTRAM
#pragma HLS ARRAY_PARTITION variable = weight2 cyclic factor = 16 dim = 1
#pragma HLS ARRAY_PARTITION variable = weight2 cyclic factor = 8 dim = 2
#pragma HLS RESOURCE variable=weight3 core=RAM_1P_LUTRAM
#pragma HLS ARRAY_PARTITION variable = weight3 cyclic factor = 16 dim = 1
#pragma HLS ARRAY_PARTITION variable = weight3 cyclic factor = 8 dim = 2
#pragma HLS RESOURCE variable=weight4 core=RAM_1P_LUTRAM
#pragma HLS ARRAY_PARTITION variable = weight4 cyclic factor = 16 dim = 1
#pragma HLS ARRAY_PARTITION variable = weight4 cyclic factor = 8 dim = 2
#pragma HLS RESOURCE variable=weight5 core=RAM_1P_LUTRAM
#pragma HLS ARRAY_PARTITION variable = weight5 cyclic factor = 16 dim = 1
#pragma HLS ARRAY_PARTITION variable = weight5 cyclic factor = 8 dim = 2
#pragma HLS RESOURCE variable=weight6 core=RAM_1P_LUTRAM
#pragma HLS ARRAY_PARTITION variable = weight6 cyclic factor = 16 dim = 1
#pragma HLS ARRAY_PARTITION variable = weight6 cyclic factor = 8 dim = 2


#pragma HLS ARRAY_PARTITION variable = In cyclic factor = 8 dim = 3
#pragma HLS ARRAY_PARTITION variable = Out cyclic factor = 16 dim = 3
#pragma HLS ARRAY_PARTITION variable = bias1 cyclic factor = 16
#pragma HLS ARRAY_PARTITION variable = bias2 cyclic factor = 16
#pragma HLS ARRAY_PARTITION variable = bias3 cyclic factor = 16
#pragma HLS ARRAY_PARTITION variable = bias4 cyclic factor = 16
#pragma HLS ARRAY_PARTITION variable = bias5 cyclic factor = 16
#pragma HLS ARRAY_PARTITION variable = bias6 cyclic factor = 16

// 	for (int i = 0; i < 34; i++)
// 	{
// #pragma HLS pipeline
// 		for (int j = 0; j < 3; j++)
// 		{
// 			In[i][0][j] = 0;
// 			In[i][33][j] = 0;
// 			In[0][i][j] = 0;
// 			In[33][i][j] = 0;
// 		}
// 	}
	load_in(Img, In);
	for (int i = 0; i < 6; i++)
	{
#pragma HLS unroll
		// if (i > 0)
			prepare_in(In, R_outs[i], C_outs[i], CHins[i]);
		if (i == 0)
			conv_level(In, Out, weight1, bias1, R_outs[i], C_outs[i], CHins[i], CHouts[i]);
		else if (i == 1)
			conv_level(In, Out, weight2, bias2, R_outs[i], C_outs[i], CHins[i], CHouts[i]);
		else if (i == 2)
			conv_level(In, Out, weight3, bias3, R_outs[i], C_outs[i], CHins[i], CHouts[i]);
		else if (i == 3)
			conv_level(In, Out, weight4, bias4, R_outs[i], C_outs[i], CHins[i], CHouts[i]);
		else if (i == 4)
			conv_level(In, Out, weight5, bias5, R_outs[i], C_outs[i], CHins[i], CHouts[i]);
		else if (i == 5)
			conv_level(In, Out, weight6, bias6, R_outs[i], C_outs[i], CHins[i], CHouts[i]);
		if (Pools[i])
		{
			MaxPoolAndRelu(In, Out, R_outs[i], C_outs[i], CHouts[i] / 16);
		}
		else
		{
			Relu(In, Out, R_outs[i], C_outs[i], CHouts[i] / 16);
		}
	}
#ifdef DEBUG
	// prepare_in(Out, In, 4, 4, 32);
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
				embed[cho * 16 + r * 4 + c] = In[r+1][c+1][cho];
			}
		}
	}
	Classify(embed, &result);
	*dest = result;
}
