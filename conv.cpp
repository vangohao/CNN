#include "conv.h"

void cnn(d_type* In, d_type* Out, d_type* W, int *Parameter)
{
#pragma HLS ALLOCATION instances=fmul limit=16 operation
#pragma HLS ALLOCATION instances=fadd limit=16 operation

	/*
	In  : Input feature map, CHin*R*C
	Out : Output feature map, CHout*Rout*Cout
	W : weights, CHout*CHin*Kr*Kc
	Parameter:  CHin|CHout|R|C|K|S
	*/
	#pragma HLS INTERFACE s_axilite port=return
	#pragma HLS INTERFACE m_axi depth=24576 port=In offset=slave           //adjust the depth as you need
	#pragma HLS INTERFACE m_axi depth=14400 port=Out offset=slave
	#pragma HLS INTERFACE m_axi depth=3456 port=W offset=slave
	#pragma HLS INTERFACE m_axi depth=256 port=Parameter offset=slave

	d_type In_1[24576];
	d_type Out_1[14400];
	d_type W_1[400];
	#pragma HLS ARRAY_PARTITION variable=Out_1 cyclic factor=16 dim=1
	#pragma HLS ARRAY_PARTITION variable=W_1 cyclic factor=16 dim=1
	// #pragma HLS ARRAY_PARTITION variable=W_1 complete

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
//  = {3, 16, 32, 32, 3, 1}
	CHin = parameter_buffer[0];
	CHout = parameter_buffer[1];
	// CHin = 3;
	// CHout = 16;
	R_in = parameter_buffer[2];
	C_in = parameter_buffer[3];
	K = parameter_buffer[4];
	S = parameter_buffer[5];
	const int CHout_batch_size = 16;

	memcpy(In_1, In, CHin*R_in*C_in * sizeof(d_type));
	// memcpy(W_1, W, CHout * CHin * K * K * sizeof(d_type));
	int R_out = ((R_in - K) / S) + 1;
	int C_out = ((C_in - K) / S) + 1;
	// int C_out = 30;
	for(int CHout_batch = 0; CHout_batch < CHout; CHout_batch += CHout_batch_size)
{
#pragma HLS LOOP_FLATTEN OFF
	for (int i = 0; i<CHout_batch_size; i++)
	{
		for (int j = 0; j<CHin * K * K; j++)
		{
			#pragma HLS PIPELINE
			W_1[i + j * CHout] = W[(i+CHout_batch) * (CHin * K * K) + j];
		}
	}


	for(int i = 0; i< CHout_batch_size * R_out * C_out; i++)
	{
	#pragma HLS LOOP_TRIPCOUNT min=1 max=1048576
	#pragma HLS PIPELINE
		Out[i] = 0;
	}

	loop_Kr:for(int kr = 0; kr < K; kr++)
	{
	#pragma HLS LOOP_TRIPCOUNT min=2 max=5
		loop_Kc:for(int kc = 0; kc < K; kc++)
		{
		#pragma HLS LOOP_TRIPCOUNT min=2 max=5
			loop_CHin:for(int chi = 0; chi < CHin; chi++)
			{
			#pragma HLS LOOP_TRIPCOUNT min=1 max=4
				loop_R1:for(int r1 = 0; r1 < R_out; r1++)
				{
				#pragma HLS LOOP_TRIPCOUNT min = 1 max=128
					loop_C1:for(int c1 = 0; c1 < C_out; c1++)
					{
						#pragma HLS LOOP_TRIPCOUNT min=1 max=128
						#pragma HLS PIPELINE II=7
						loop_CHout:for(int cho = 0; cho < CHout_batch_size; cho++)
						{
						#pragma HLS UNROLL factor = 16
							Out_1[(cho) + r1 * C_out * CHout_batch_size + c1 * CHout_batch_size] 
								+= W_1[(cho) + chi * (CHout_batch_size * K * K) + kr *(CHout_batch_size * K) + kc * (CHout_batch_size)] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
						}
					}
				}
			}
		}
	}
	// memcpy(Out, Out_1, CHout * R_out * C_out * sizeof(d_type));
	for(int i = 0; i<CHout_batch_size; i++)
	{
		for(int j=0; j<R_out * C_out; j++)
		{
			#pragma HLS PIPELINE
			Out[(i+CHout_batch) * R_out * C_out + j] = Out_1[i + CHout_batch_size * j];
		}
	}
}
}

