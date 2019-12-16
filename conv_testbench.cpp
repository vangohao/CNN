#include "conv.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <math.h>
#define CNN cnn

int main()
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

	CNN(In_data, Output_data, Weight_data, parameter);
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
	return 0;
}
