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
	d_type W_1[3456];
	#pragma HLS ARRAY_PARTITION variable=Out_1 

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

	memcpy(In_1, In, CHin*R_in*C_in * sizeof(d_type));
	memcpy(W_1, W, CHout * CHin * K * K * sizeof(d_type));

	int R_out = ((R_in - K) / S) + 1;
	int C_out = ((C_in - K) / S) + 1;

	for(int i = 0; i< CHout * R_out * C_out; i++)
	{
	#pragma HLS LOOP_TRIPCOUNT min=1 max=1048576
	#pragma HLS PIPELINE
		Out[i] = 0;
	}

	int K_mul_K = K * K;
	int R_in_mul_C_in = R_in * C_in;
	int R_out_mul_C_out = R_out * C_out;
	loop_Kr:for(int kr = 0; kr < K; kr++)
	{
	#pragma HLS LOOP_TRIPCOUNT min=2 max=5
	// #pragma HLS LOOP_FLATTEN
		loop_Kc:for(int kc = 0; kc < K; kc++)
		{
		#pragma HLS LOOP_TRIPCOUNT min=2 max=5
		// #pragma HLS LOOP_FLATTEN
			loop_R1:for(int r1 = 0; r1 < R_out; r1++)
			{
			#pragma HLS LOOP_TRIPCOUNT min = 1 max=128
			// #pragma HLS LOOP_FLATTEN
				loop_C1:for(int c1 = 0; c1 < C_out; c1++)
				{
				#pragma HLS LOOP_TRIPCOUNT min=1 max=128
				// #pragma HLS LOOP_FLATTEN
				// #pragma HLS PIPELINE
					loop_CHin:for(int chi = 0; chi < CHin; chi++)
					{
					#pragma HLS PIPELINE
					// #pragma HLS LOOP_FLATTEN
					// #pragma HLS PIPELINE
					#pragma HLS LOOP_TRIPCOUNT min=1 max=64
						loop_CHout:for(int cho = 0; cho < (CHout + 7) / 8; cho++)
						{
						#pragma HLS LOOP_TRIPCOUNT min=1 max=32
						// #pragma HLS UNROLL factor = 2 skip_exit_check
							Out_1[(cho*8) * (R_out * C_out) + r1 * C_out + c1] 
								+= W_1[(cho*8) * (CHin * (K * K)) + chi * (K * K) + kr * K + kc] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
							Out_1[(cho*8 + 1) * (R_out * C_out) + r1 * C_out + c1] 
								+= W_1[(cho*8 + 1) * (CHin * (K * K)) + chi * (K * K) + kr * K + kc] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
							Out_1[(cho*8 + 2) * (R_out * C_out) + r1 * C_out + c1] 
								+= W_1[(cho*8 + 2) * (CHin * (K * K)) + chi * (K * K) + kr * K + kc] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
							Out_1[(cho*8 + 3) * (R_out * C_out) + r1 * C_out + c1] 
								+= W_1[(cho*8 + 3) * (CHin * (K * K)) + chi * (K * K) + kr * K + kc] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
							Out_1[(cho*8 + 4) * (R_out * C_out) + r1 * C_out + c1] 
								+= W_1[(cho*8 + 4) * (CHin * (K * K)) + chi * (K * K) + kr * K + kc] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
							Out_1[(cho*8 + 5) * (R_out * C_out) + r1 * C_out + c1] 
								+= W_1[(cho*8 + 5) * (CHin * (K * K)) + chi * (K * K) + kr * K + kc] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
							Out_1[(cho*8 + 6) * (R_out * C_out) + r1 * C_out + c1] 
								+= W_1[(cho*8 + 6) * (CHin * (K * K)) + chi * (K * K) + kr * K + kc] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
							Out_1[(cho*8 + 7) * (R_out * C_out) + r1 * C_out + c1] 
								+= W_1[(cho*8 + 7) * (CHin * (K * K)) + chi * (K * K) + kr * K + kc] 
									* In_1[chi * (R_in * C_in) + (S * r1 + kr) * C_in + (S * c1 + kc)];
						}
					}
				}
			}
		}
	}
	memcpy(Out, Out_1, CHout * R_out * C_out * sizeof(d_type));
}

