// ==============================================================
// File generated on Sun Oct 20 14:13:51 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "gmem"
#define AUTOTB_TVIN_gmem  "../tv/cdatafile/c.cnn.autotvin_gmem.dat"
#define AUTOTB_TVOUT_gmem  "../tv/cdatafile/c.cnn.autotvout_gmem.dat"
// wrapc file define: "In_r"
#define AUTOTB_TVIN_In_r  "../tv/cdatafile/c.cnn.autotvin_In_r.dat"
// wrapc file define: "Out_r"
#define AUTOTB_TVIN_Out_r  "../tv/cdatafile/c.cnn.autotvin_Out_r.dat"
// wrapc file define: "W"
#define AUTOTB_TVIN_W  "../tv/cdatafile/c.cnn.autotvin_W.dat"
// wrapc file define: "Parameter_r"
#define AUTOTB_TVIN_Parameter_r  "../tv/cdatafile/c.cnn.autotvin_Parameter_r.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "gmem"
#define AUTOTB_TVOUT_PC_gmem  "../tv/rtldatafile/rtl.cnn.autotvout_gmem.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			gmem_depth = 0;
			In_r_depth = 0;
			Out_r_depth = 0;
			W_depth = 0;
			Parameter_r_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{gmem " << gmem_depth << "}\n";
			total_list << "{In_r " << In_r_depth << "}\n";
			total_list << "{Out_r " << Out_r_depth << "}\n";
			total_list << "{W " << W_depth << "}\n";
			total_list << "{Parameter_r " << Parameter_r_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int gmem_depth;
		int In_r_depth;
		int Out_r_depth;
		int W_depth;
		int Parameter_r_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void cnn (
float* In,
float* Out,
float* W,
int* Parameter);

void AESL_WRAP_cnn (
float* In,
float* Out,
float* W,
int* Parameter)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "gmem"
		aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // data

			sc_bv<32> *gmem_pc_buffer = new sc_bv<32>[18160];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'gmem', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'gmem', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					gmem_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_gmem))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: gmem
				{
					// bitslice(31, 0)
					// {
						// celement: In(31, 0)
						// {
							sc_lv<32>* In_lv0_0_3071_1 = new sc_lv<32>[18160];
						// }
						// celement: Out(31, 0)
						// {
							sc_lv<32>* Out_lv0_0_14399_1 = new sc_lv<32>[18160];
						// }
						// celement: W(31, 0)
						// {
							sc_lv<32>* W_lv0_0_431_1 = new sc_lv<32>[18160];
						// }
						// celement: Parameter(31, 0)
						// {
							sc_lv<32>* Parameter_lv0_0_255_1 = new sc_lv<32>[18160];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: In(31, 0)
						{
							// carray: (0) => (3071) @ (1)
							for (int i_0 = 0; i_0 <= 3071; i_0 += 1)
							{
								hls_map_index++;
							}
						}
						// celement: Out(31, 0)
						{
							// carray: (0) => (14399) @ (1)
							for (int i_0 = 0; i_0 <= 14399; i_0 += 1)
							{
								if (&(Out[0]) != NULL) // check the null address if the c port is array or others
								{
									Out_lv0_0_14399_1[hls_map_index].range(31, 0) = sc_bv<32>(gmem_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
						// celement: W(31, 0)
						{
							// carray: (0) => (431) @ (1)
							for (int i_0 = 0; i_0 <= 431; i_0 += 1)
							{
								hls_map_index++;
							}
						}
						// celement: Parameter(31, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								hls_map_index++;
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: In(31, 0)
						{
							// carray: (0) => (3071) @ (1)
							for (int i_0 = 0; i_0 <= 3071; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : In[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : In[0]
								// output_left_conversion : *(int*)&In[i_0]
								// output_type_conversion : (In_lv0_0_3071_1[hls_map_index]).to_uint64()
								hls_map_index++;
							}
						}
						// celement: Out(31, 0)
						{
							// carray: (0) => (14399) @ (1)
							for (int i_0 = 0; i_0 <= 14399; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : Out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : Out[0]
								// output_left_conversion : *(int*)&Out[i_0]
								// output_type_conversion : (Out_lv0_0_14399_1[hls_map_index]).to_uint64()
								if (&(Out[0]) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&Out[i_0] = (Out_lv0_0_14399_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
						// celement: W(31, 0)
						{
							// carray: (0) => (431) @ (1)
							for (int i_0 = 0; i_0 <= 431; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : W[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : W[0]
								// output_left_conversion : *(int*)&W[i_0]
								// output_type_conversion : (W_lv0_0_431_1[hls_map_index]).to_uint64()
								hls_map_index++;
							}
						}
						// celement: Parameter(31, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : Parameter[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : Parameter[0]
								// output_left_conversion : Parameter[i_0]
								// output_type_conversion : (Parameter_lv0_0_255_1[hls_map_index]).to_uint64()
								hls_map_index++;
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] gmem_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "gmem"
		char* tvin_gmem = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_gmem);
		char* tvout_gmem = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_gmem);

		// "In_r"
		char* tvin_In_r = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_In_r);

		// "Out_r"
		char* tvin_Out_r = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Out_r);

		// "W"
		char* tvin_W = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_W);

		// "Parameter_r"
		char* tvin_Parameter_r = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Parameter_r);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_gmem, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);

		sc_bv<32>* gmem_tvin_wrapc_buffer = new sc_bv<32>[18160];

		// RTL Name: gmem
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: In(31, 0)
				{
					// carray: (0) => (3071) @ (1)
					for (int i_0 = 0; i_0 <= 3071; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : In[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : In[0]
						// regulate_c_name       : In
						// input_type_conversion : *(int*)&In[i_0]
						if (&(In[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> In_tmp_mem;
							In_tmp_mem = *(int*)&In[i_0];
							gmem_tvin_wrapc_buffer[hls_map_index].range(31, 0) = In_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: Out(31, 0)
				{
					// carray: (0) => (14399) @ (1)
					for (int i_0 = 0; i_0 <= 14399; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : Out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Out[0]
						// regulate_c_name       : Out
						// input_type_conversion : *(int*)&Out[i_0]
						if (&(Out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> Out_tmp_mem;
							Out_tmp_mem = *(int*)&Out[i_0];
							gmem_tvin_wrapc_buffer[hls_map_index].range(31, 0) = Out_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: W(31, 0)
				{
					// carray: (0) => (431) @ (1)
					for (int i_0 = 0; i_0 <= 431; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : W[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : W[0]
						// regulate_c_name       : W
						// input_type_conversion : *(int*)&W[i_0]
						if (&(W[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> W_tmp_mem;
							W_tmp_mem = *(int*)&W[i_0];
							gmem_tvin_wrapc_buffer[hls_map_index].range(31, 0) = W_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: Parameter(31, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : Parameter[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Parameter[0]
						// regulate_c_name       : Parameter
						// input_type_conversion : Parameter[i_0]
						if (&(Parameter[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> Parameter_tmp_mem;
							Parameter_tmp_mem = Parameter[i_0];
							gmem_tvin_wrapc_buffer[hls_map_index].range(31, 0) = Parameter_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 18160; i++)
		{
			sprintf(tvin_gmem, "%s\n", (gmem_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);
		}

		tcl_file.set_num(18160, &tcl_file.gmem_depth);
		sprintf(tvin_gmem, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);

		// release memory allocation
		delete [] gmem_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_In_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_In_r, tvin_In_r);

		sc_bv<32> In_r_tvin_wrapc_buffer;

		// RTL Name: In_r
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_In_r, "%s\n", (In_r_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_In_r, tvin_In_r);
		}

		tcl_file.set_num(1, &tcl_file.In_r_depth);
		sprintf(tvin_In_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_In_r, tvin_In_r);

		// [[transaction]]
		sprintf(tvin_Out_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Out_r, tvin_Out_r);

		sc_bv<32> Out_r_tvin_wrapc_buffer;

		// RTL Name: Out_r
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_Out_r, "%s\n", (Out_r_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Out_r, tvin_Out_r);
		}

		tcl_file.set_num(1, &tcl_file.Out_r_depth);
		sprintf(tvin_Out_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Out_r, tvin_Out_r);

		// [[transaction]]
		sprintf(tvin_W, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_W, tvin_W);

		sc_bv<32> W_tvin_wrapc_buffer;

		// RTL Name: W
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_W, "%s\n", (W_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_W, tvin_W);
		}

		tcl_file.set_num(1, &tcl_file.W_depth);
		sprintf(tvin_W, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_W, tvin_W);

		// [[transaction]]
		sprintf(tvin_Parameter_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Parameter_r, tvin_Parameter_r);

		sc_bv<32> Parameter_r_tvin_wrapc_buffer;

		// RTL Name: Parameter_r
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_Parameter_r, "%s\n", (Parameter_r_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Parameter_r, tvin_Parameter_r);
		}

		tcl_file.set_num(1, &tcl_file.Parameter_r_depth);
		sprintf(tvin_Parameter_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Parameter_r, tvin_Parameter_r);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		cnn(In, Out, W, Parameter);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_gmem, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);

		sc_bv<32>* gmem_tvout_wrapc_buffer = new sc_bv<32>[18160];

		// RTL Name: gmem
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: In(31, 0)
				{
					// carray: (0) => (3071) @ (1)
					for (int i_0 = 0; i_0 <= 3071; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : In[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : In[0]
						// regulate_c_name       : In
						// input_type_conversion : *(int*)&In[i_0]
						if (&(In[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> In_tmp_mem;
							In_tmp_mem = *(int*)&In[i_0];
							gmem_tvout_wrapc_buffer[hls_map_index].range(31, 0) = In_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: Out(31, 0)
				{
					// carray: (0) => (14399) @ (1)
					for (int i_0 = 0; i_0 <= 14399; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : Out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Out[0]
						// regulate_c_name       : Out
						// input_type_conversion : *(int*)&Out[i_0]
						if (&(Out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> Out_tmp_mem;
							Out_tmp_mem = *(int*)&Out[i_0];
							gmem_tvout_wrapc_buffer[hls_map_index].range(31, 0) = Out_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: W(31, 0)
				{
					// carray: (0) => (431) @ (1)
					for (int i_0 = 0; i_0 <= 431; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : W[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : W[0]
						// regulate_c_name       : W
						// input_type_conversion : *(int*)&W[i_0]
						if (&(W[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> W_tmp_mem;
							W_tmp_mem = *(int*)&W[i_0];
							gmem_tvout_wrapc_buffer[hls_map_index].range(31, 0) = W_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: Parameter(31, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : Parameter[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Parameter[0]
						// regulate_c_name       : Parameter
						// input_type_conversion : Parameter[i_0]
						if (&(Parameter[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> Parameter_tmp_mem;
							Parameter_tmp_mem = Parameter[i_0];
							gmem_tvout_wrapc_buffer[hls_map_index].range(31, 0) = Parameter_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 18160; i++)
		{
			sprintf(tvout_gmem, "%s\n", (gmem_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);
		}

		tcl_file.set_num(18160, &tcl_file.gmem_depth);
		sprintf(tvout_gmem, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);

		// release memory allocation
		delete [] gmem_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "gmem"
		delete [] tvin_gmem;
		delete [] tvout_gmem;
		// release memory allocation: "In_r"
		delete [] tvin_In_r;
		// release memory allocation: "Out_r"
		delete [] tvin_Out_r;
		// release memory allocation: "W"
		delete [] tvin_W;
		// release memory allocation: "Parameter_r"
		delete [] tvin_Parameter_r;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

