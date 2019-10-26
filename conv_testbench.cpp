#include "conv.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
void cnn_test(d_type* In, d_type* Out, d_type* W, int *Parameter)
{

	/*
	In  : Input feature map, CHin*R*C
	Out : Output feature map, CHout*Rout*Cout
	W : weights, CHout*CHin*Kr*Kc
	Parameter:  CHin|CHout|R|C|K|S
	*/
	// #pragma HLS INTERFACE s_axilite port=return
	// #pragma HLS INTERFACE m_axi depth=40960 port=In offset=slave           //adjust the depth as you need
	// #pragma HLS INTERFACE m_axi depth=40960 port=Out offset=slave
	// #pragma HLS INTERFACE m_axi depth=40960 port=W offset=slave
	// #pragma HLS INTERFACE m_axi depth=256 port=Parameter offset=slave

	int CHin,CHout,R_in,C_in,K,S;
	/*
	CHin : Input channels
	CHout : output channels
	R_in : Input rows
	C_in : Input columns
	K : kernel size (Kr = Kc)
	S : Stride
	*/
	int parameter_buffer[NParameter];

	memcpy((void*)parameter_buffer, (const int*)Parameter, NParameter *sizeof(int));

	CHin = parameter_buffer[0];
	CHout = parameter_buffer[1];
	R_in = parameter_buffer[2];
	C_in = parameter_buffer[3];
	K = parameter_buffer[4];
	S = parameter_buffer[5];

	int R_out = ((R_in - K) / S) + 1;
	int C_out = ((C_in - K) / S) + 1;

	for(int r1 = 0; r1 < R_out; r1++)
	{
		for(int c1 = 0; c1 < C_out; c1++)
		{
			for(int cho = 0; cho < CHout; cho++)
			{
				for(int chi = 0; chi < CHin; chi++)
				{
					Out[cho * R_out * C_out + r1 * C_out + c1] = 0;
				}
			}
		}
	}	

	for(int kr = 0; kr < K; kr++)
	{
		for(int kc = 0; kc < K; kc++)
		{
			for(int r1 = 0; r1 < R_out; r1++)
			{
				for(int c1 = 0; c1 < C_out; c1++)
				{
					for(int cho = 0; cho < CHout; cho++)
					{
						for(int chi = 0; chi < CHin; chi++)
						{
							Out[cho * R_out * C_out + r1 * C_out + c1] 
								+= W[cho * CHin * K * K + chi * K * K + kr * K + kc] 
									* In[chi * R_in * C_in + (S * r1 + kr) * C_in + (S * c1 + kc)];
						}
					}
				}
			}
		}
	}
	
}

int example0()
{
	int CHin = 3;
	int CHout = 16;
	int R_in = 32;
	int C_in = 32;
	int K = 3;
	int S = 1;
	int In = 3 * 32 * 32;
	int weight = 3 * 16 * 3 * 3;
	int Out = 16 * 30 * 30;
	d_type *In_data = (d_type*)malloc(In * sizeof(d_type));
	d_type *Out_data = (d_type*)malloc(Out * sizeof(d_type));
	d_type *Output_data = (d_type*)malloc(Out * sizeof(d_type));
	d_type *Weight_data = (d_type*)malloc(weight * sizeof(d_type));
	int parameter[NParameter] = {CHin, CHout, R_in, C_in, K, S};

	system("pwd");
	FILE * f_in;
	f_in = fopen("../../../../dat/sample_0_input.dat", "r");
	for (int i = 0; i < In; i++)
	{
		fscanf(f_in, "%f", &In_data[i]);
	}
	fclose(f_in);
	FILE * f_weight;
	f_weight = fopen("../../../../dat/sample_0_weight.dat", "r");
	for (int i = 0; i < weight; i++)
	{
		fscanf(f_weight, "%f", &Weight_data[i]);
	}
	fclose(f_weight);

	cnn(In_data, Output_data, Weight_data, parameter);
	printf("CNN finish.\n");

	FILE * f_out;
	f_out = fopen("../../../../dat/sample_0_out.dat", "r");
	for (int i = 0; i < Out; i++)
	{
		fscanf(f_out, "%f", &Out_data[i]);
	}
	fclose(f_out);
	int cnt = 0;
	for (int i  = 0; i < Out; i++)
	{
		if (Out_data[i] - Output_data[i] > 1e-6 || Out_data[i] - Output_data[i] < -1e-6)
		{
			printf("Error, No. %d, output = %.10f, real output = %.10f, difference = %.10f\n",
				 i, Output_data[i], Out_data[i], Output_data[i] - Out_data[i]);
			// return -1;
			cnt ++;
			if (cnt==20) return -1;
		}
	}
	printf("Example 0 Passed.\n");
	delete In_data;
	delete Out_data;
	delete Output_data;
	delete Weight_data;
// 	return 0;
// }

// int example1()
// {
	CHin = 32;
	CHout = 64;
	R_in = 128;
	C_in = 128;
	K = 5;
	S = 2;
	int R_out = ((R_in - K) / S) + 1;
	int C_out = ((C_in - K) / S) + 1;
	In = CHin * R_in * C_in;
	weight = CHout * CHin * K * K;
	Out = CHout * R_out * C_out;
	In_data = (d_type*)malloc(In * sizeof(d_type));
	Out_data = (d_type*)malloc(Out * sizeof(d_type));
	Output_data = (d_type*)malloc(Out * sizeof(d_type));
	Weight_data = (d_type*)malloc(weight * sizeof(d_type));
	parameter[0] = CHin;
	parameter[1] = CHout;
	parameter[2] = R_in;
	parameter[3] = C_in;
	parameter[4] = K;
	parameter[5] = S;

	printf("Begin sample_1.\n");
	f_in = fopen("../../../../dat/sample_1_input.dat", "r");
	for (int i = 0; i < In; i++)
	{
		fscanf(f_in, "%f", &In_data[i]);
	}
	fclose(f_in);
	printf("Finish read input.\n");
	f_weight = fopen("../../../../dat/sample_1_weight.dat", "r");
	for (int i = 0; i < weight; i++)
	{
		fscanf(f_weight, "%f", &Weight_data[i]);
	}
	fclose(f_weight);
	printf("Finish read weight.\n");

	cnn(In_data, Output_data, Weight_data, parameter);
	// cnn_test(In_data, Output_data, Weight_data, parameter);
	printf("CNN finish.\n");

	f_out = fopen("../../../../dat/sample_1_out.dat", "r");
	for (int i = 0; i < Out; i++)
	{
		fscanf(f_out, "%f", &Out_data[i]);
	}
	fclose(f_out);
	for (int i  = 0; i < Out; i++)
	{
		if (Out_data[i] - Output_data[i] > 1e-4 || Out_data[i] - Output_data[i] < -1e-4)
		{
			printf("Error, No. %d, output = %.10f, real output = %.10f, difference = %.10f\n",
				 i, Output_data[i], Out_data[i], Output_data[i] - Out_data[i]);
			// return -1;
			cnt ++;
			if (cnt==20) return -1;
		}
	}
	printf("Example 1 Passed.\n");
	return 0;
}

int main()
{
	return example0();
}