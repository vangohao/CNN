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
	#pragma HLS INTERFACE m_axi depth=3072 port=In offset=slave           //adjust the depth as you need
	#pragma HLS INTERFACE m_axi depth=14400 port=Out offset=slave
	#pragma HLS INTERFACE m_axi depth=432 port=W offset=slave
	#pragma HLS INTERFACE m_axi depth=256 port=Parameter offset=slave

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

	for(int i = 0; i< CHout * R_out * C_out; i++)
	{
	#pragma HLS PIPELINE
		Out[i] = 0;
	}

	loop_Kr:for(int kr = 0; kr < K; kr++)
	{
	#pragma HLS LOOP_FLATTEN
		loop_Kc:for(int kc = 0; kc < K; kc++)
		{
		#pragma HLS LOOP_FLATTEN
			loop_R1:for(int r1 = 0; r1 < R_out; r1++)
			{
			#pragma HLS LOOP_FLATTEN
				loop_C1:for(int c1 = 0; c1 < C_out; c1++)
				{
				#pragma HLS LOOP_FLATTEN
					loop_CHout:for(int cho = 0; cho < CHout; cho++)
					{
					#pragma HLS LOOP_FLATTEN
					#pragma HLS LOOP_TRIPCOUNT min=1 max=64
					#pragma HLS UNROLL factor = 4
						loop_CHin:for(int chi = 0; chi < CHin; chi++)
						{
						#pragma HLS LOOP_FLATTEN
						#pragma HLS LOOP_TRIPCOUNT min=1 max=64
						#pragma HLS UNROLL factor = 4
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

