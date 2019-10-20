// ==============================================================
// File generated on Sun Oct 20 14:14:00 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

module AESL_axi_slave_AXILiteS (
    clk,
    reset,
    TRAN_s_axi_AXILiteS_AWADDR,
    TRAN_s_axi_AXILiteS_AWVALID,
    TRAN_s_axi_AXILiteS_AWREADY,
    TRAN_s_axi_AXILiteS_WVALID,
    TRAN_s_axi_AXILiteS_WREADY,
    TRAN_s_axi_AXILiteS_WDATA,
    TRAN_s_axi_AXILiteS_WSTRB,
    TRAN_s_axi_AXILiteS_ARADDR,
    TRAN_s_axi_AXILiteS_ARVALID,
    TRAN_s_axi_AXILiteS_ARREADY,
    TRAN_s_axi_AXILiteS_RVALID,
    TRAN_s_axi_AXILiteS_RREADY,
    TRAN_s_axi_AXILiteS_RDATA,
    TRAN_s_axi_AXILiteS_RRESP,
    TRAN_s_axi_AXILiteS_BVALID,
    TRAN_s_axi_AXILiteS_BREADY,
    TRAN_s_axi_AXILiteS_BRESP,
    TRAN_In_r,
    TRAN_Out_r,
    TRAN_W,
    TRAN_Parameter_r,
    TRAN_AXILiteS_write_data_finish,
    TRAN_AXILiteS_start_in,
    TRAN_AXILiteS_idle_out,
    TRAN_AXILiteS_ready_out,
    TRAN_AXILiteS_ready_in,
    TRAN_AXILiteS_done_out,
    TRAN_AXILiteS_write_start_in   ,
    TRAN_AXILiteS_write_start_finish,
    TRAN_AXILiteS_interrupt,
    TRAN_AXILiteS_transaction_done_in
    );

//------------------------Parameter----------------------
`define TV_IN_In_r "../tv/cdatafile/c.cnn.autotvin_In_r.dat"
`define TV_IN_Out_r "../tv/cdatafile/c.cnn.autotvin_Out_r.dat"
`define TV_IN_W "../tv/cdatafile/c.cnn.autotvin_W.dat"
`define TV_IN_Parameter_r "../tv/cdatafile/c.cnn.autotvin_Parameter_r.dat"
parameter ADDR_WIDTH = 6;
parameter DATA_WIDTH = 32;
parameter In_r_DEPTH = 1;
reg [31 : 0] In_r_OPERATE_DEPTH = 1;
parameter In_r_c_bitwidth = 32;
parameter Out_r_DEPTH = 1;
reg [31 : 0] Out_r_OPERATE_DEPTH = 1;
parameter Out_r_c_bitwidth = 32;
parameter W_DEPTH = 1;
reg [31 : 0] W_OPERATE_DEPTH = 1;
parameter W_c_bitwidth = 32;
parameter Parameter_r_DEPTH = 1;
reg [31 : 0] Parameter_r_OPERATE_DEPTH = 1;
parameter Parameter_r_c_bitwidth = 32;
parameter START_ADDR = 0;
parameter cnn_continue_addr = 0;
parameter cnn_auto_start_addr = 0;
parameter In_r_data_in_addr = 16;
parameter Out_r_data_in_addr = 24;
parameter W_data_in_addr = 32;
parameter Parameter_r_data_in_addr = 40;
parameter STATUS_ADDR = 0;

output [ADDR_WIDTH - 1 : 0] TRAN_s_axi_AXILiteS_AWADDR;
output  TRAN_s_axi_AXILiteS_AWVALID;
input  TRAN_s_axi_AXILiteS_AWREADY;
output  TRAN_s_axi_AXILiteS_WVALID;
input  TRAN_s_axi_AXILiteS_WREADY;
output [DATA_WIDTH - 1 : 0] TRAN_s_axi_AXILiteS_WDATA;
output [DATA_WIDTH/8 - 1 : 0] TRAN_s_axi_AXILiteS_WSTRB;
output [ADDR_WIDTH - 1 : 0] TRAN_s_axi_AXILiteS_ARADDR;
output  TRAN_s_axi_AXILiteS_ARVALID;
input  TRAN_s_axi_AXILiteS_ARREADY;
input  TRAN_s_axi_AXILiteS_RVALID;
output  TRAN_s_axi_AXILiteS_RREADY;
input [DATA_WIDTH - 1 : 0] TRAN_s_axi_AXILiteS_RDATA;
input [2 - 1 : 0] TRAN_s_axi_AXILiteS_RRESP;
input  TRAN_s_axi_AXILiteS_BVALID;
output  TRAN_s_axi_AXILiteS_BREADY;
input [2 - 1 : 0] TRAN_s_axi_AXILiteS_BRESP;
input    [32 - 1 : 0] TRAN_In_r;
input    [32 - 1 : 0] TRAN_Out_r;
input    [32 - 1 : 0] TRAN_W;
input    [32 - 1 : 0] TRAN_Parameter_r;
output TRAN_AXILiteS_write_data_finish;
input     clk;
input     reset;
input     TRAN_AXILiteS_start_in;
output    TRAN_AXILiteS_done_out;
output    TRAN_AXILiteS_ready_out;
input     TRAN_AXILiteS_ready_in;
output    TRAN_AXILiteS_idle_out;
input  TRAN_AXILiteS_write_start_in   ;
output TRAN_AXILiteS_write_start_finish;
input     TRAN_AXILiteS_interrupt;
input     TRAN_AXILiteS_transaction_done_in;

reg [ADDR_WIDTH - 1 : 0] AWADDR_reg = 0;
reg  AWVALID_reg = 0;
reg  WVALID_reg = 0;
reg [DATA_WIDTH - 1 : 0] WDATA_reg = 0;
reg [DATA_WIDTH/8 - 1 : 0] WSTRB_reg = 0;
reg [ADDR_WIDTH - 1 : 0] ARADDR_reg = 0;
reg  ARVALID_reg = 0;
reg  RREADY_reg = 0;
reg [DATA_WIDTH - 1 : 0] RDATA_reg = 0;
reg  BREADY_reg = 0;
reg [In_r_c_bitwidth - 1 : 0] reg_In_r;
reg In_r_write_data_finish;
reg [Out_r_c_bitwidth - 1 : 0] reg_Out_r;
reg Out_r_write_data_finish;
reg [W_c_bitwidth - 1 : 0] reg_W;
reg W_write_data_finish;
reg [Parameter_r_c_bitwidth - 1 : 0] reg_Parameter_r;
reg Parameter_r_write_data_finish;
reg AESL_ready_out_index_reg = 0;
reg AESL_write_start_finish = 0;
reg AESL_ready_reg;
reg ready_initial;
reg AESL_done_index_reg = 0;
reg AESL_idle_index_reg = 0;
reg AESL_auto_restart_index_reg;
reg process_0_finish = 0;
reg process_1_finish = 0;
reg process_2_finish = 0;
reg process_3_finish = 0;
reg process_4_finish = 0;
reg process_5_finish = 0;
//write In_r reg
reg [31 : 0] write_In_r_count = 0;
reg write_In_r_run_flag = 0;
reg write_one_In_r_data_done = 0;
//write Out_r reg
reg [31 : 0] write_Out_r_count = 0;
reg write_Out_r_run_flag = 0;
reg write_one_Out_r_data_done = 0;
//write W reg
reg [31 : 0] write_W_count = 0;
reg write_W_run_flag = 0;
reg write_one_W_data_done = 0;
//write Parameter_r reg
reg [31 : 0] write_Parameter_r_count = 0;
reg write_Parameter_r_run_flag = 0;
reg write_one_Parameter_r_data_done = 0;
reg [31 : 0] write_start_count = 0;
reg write_start_run_flag = 0;

//===================process control=================
reg [31 : 0] ongoing_process_number = 0;
//process number depends on how much processes needed.
reg process_busy = 0;

//=================== signal connection ==============
assign TRAN_s_axi_AXILiteS_AWADDR = AWADDR_reg;
assign TRAN_s_axi_AXILiteS_AWVALID = AWVALID_reg;
assign TRAN_s_axi_AXILiteS_WVALID = WVALID_reg;
assign TRAN_s_axi_AXILiteS_WDATA = WDATA_reg;
assign TRAN_s_axi_AXILiteS_WSTRB = WSTRB_reg;
assign TRAN_s_axi_AXILiteS_ARADDR = ARADDR_reg;
assign TRAN_s_axi_AXILiteS_ARVALID = ARVALID_reg;
assign TRAN_s_axi_AXILiteS_RREADY = RREADY_reg;
assign TRAN_s_axi_AXILiteS_BREADY = BREADY_reg;
assign TRAN_AXILiteS_write_start_finish = AESL_write_start_finish;
assign TRAN_AXILiteS_done_out = AESL_done_index_reg;
assign TRAN_AXILiteS_ready_out = AESL_ready_out_index_reg;
assign TRAN_AXILiteS_idle_out = AESL_idle_index_reg;
assign TRAN_AXILiteS_write_data_finish = 1 & In_r_write_data_finish & Out_r_write_data_finish & W_write_data_finish & Parameter_r_write_data_finish;
always @(TRAN_AXILiteS_ready_in or ready_initial) 
begin
    AESL_ready_reg <= TRAN_AXILiteS_ready_in | ready_initial;
end

always @(reset or process_0_finish or process_1_finish or process_2_finish or process_3_finish or process_4_finish or process_5_finish ) begin
    if (reset == 0) begin
        ongoing_process_number <= 0;
    end
    else if (ongoing_process_number == 0 && process_0_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 1 && process_1_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 2 && process_2_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 3 && process_3_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 4 && process_4_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 5 && process_5_finish == 1) begin
            ongoing_process_number <= 0;
    end
end

always @(TRAN_In_r) 
begin
    reg_In_r = TRAN_In_r;
end
always @(TRAN_Out_r) 
begin
    reg_Out_r = TRAN_Out_r;
end
always @(TRAN_W) 
begin
    reg_W = TRAN_W;
end
always @(TRAN_Parameter_r) 
begin
    reg_Parameter_r = TRAN_Parameter_r;
end
task count_c_data_four_byte_num_by_bitwidth;
input  integer bitwidth;
output integer num;
integer factor;
integer i;
begin
    factor = 32;
    for (i = 1; i <= 32; i = i + 1) begin
        if (bitwidth <= factor && bitwidth > factor - 32) begin
            num = i;
        end
        factor = factor + 32;
    end
end    
endtask

task count_seperate_factor_by_bitwidth;
input  integer bitwidth;
output integer factor;
begin
    if (bitwidth <= 8 ) begin
        factor=4;
    end
    if (bitwidth <= 16 & bitwidth > 8 ) begin
        factor=2;
    end
    if (bitwidth <= 32 & bitwidth > 16 ) begin
        factor=1;
    end
    if (bitwidth <= 1024 & bitwidth > 32 ) begin
        factor=1;
    end
end    
endtask

task count_operate_depth_by_bitwidth_and_depth;
input  integer bitwidth;
input  integer depth;
output integer operate_depth;
integer factor;
integer remain;
begin
    count_seperate_factor_by_bitwidth (bitwidth , factor);
    operate_depth = depth / factor;
    remain = depth % factor;
    if (remain > 0) begin
        operate_depth = operate_depth + 1;
    end
end    
endtask

task write; /*{{{*/
    input  reg [ADDR_WIDTH - 1:0] waddr;   // write address
    input  reg [DATA_WIDTH - 1:0] wdata;   // write data
    output reg wresp;
    reg aw_flag;
    reg w_flag;
    reg [DATA_WIDTH/8 - 1:0] wstrb_reg;
    integer i;
begin 
    wresp = 0;
    aw_flag = 0;
    w_flag = 0;
//=======================one single write operate======================
    AWADDR_reg <= waddr;
    AWVALID_reg <= 1;
    WDATA_reg <= wdata;
    WVALID_reg <= 1;
    for (i = 0; i < DATA_WIDTH/8; i = i + 1) begin
        wstrb_reg [i] = 1;
    end    
    WSTRB_reg <= wstrb_reg;
    while (!(aw_flag && w_flag)) begin
        @(posedge clk);
        if (aw_flag != 1)
            aw_flag = TRAN_s_axi_AXILiteS_AWREADY & AWVALID_reg;
        if (w_flag != 1)
            w_flag = TRAN_s_axi_AXILiteS_WREADY & WVALID_reg;
        AWVALID_reg <= !aw_flag;
        WVALID_reg <= !w_flag;
    end

    BREADY_reg <= 1;
    while (TRAN_s_axi_AXILiteS_BVALID != 1) begin
        //wait for response 
        @(posedge clk);
    end
    @(posedge clk);
    BREADY_reg <= 0;
    if (TRAN_s_axi_AXILiteS_BRESP === 2'b00) begin
        wresp = 1;
        //input success. in fact BRESP is always 2'b00
    end   
//=======================one single write operate======================

end
endtask/*}}}*/

task read (/*{{{*/
    input  [ADDR_WIDTH - 1:0] raddr ,   // write address
    output [DATA_WIDTH - 1:0] RDATA_result ,
    output rresp
);
begin 
    rresp = 0;
//=======================one single read operate======================
    ARADDR_reg <= raddr;
    ARVALID_reg <= 1;
    while (TRAN_s_axi_AXILiteS_ARREADY !== 1) begin
        @(posedge clk);
    end
    @(posedge clk);
    ARVALID_reg <= 0;
    RREADY_reg <= 1;
    while (TRAN_s_axi_AXILiteS_RVALID !== 1) begin
        //wait for response 
        @(posedge clk);
    end
    @(posedge clk);
    RDATA_result  <= TRAN_s_axi_AXILiteS_RDATA;
    RREADY_reg <= 0;
    if (TRAN_s_axi_AXILiteS_RRESP === 2'b00 ) begin
        rresp <= 1;
        //output success. in fact RRESP is always 2'b00
    end  
    @(posedge clk);

//=======================one single read operate end======================

end
endtask/*}}}*/

initial begin : ready_initial_process
    ready_initial = 0;
    wait(reset === 1);
    @(posedge clk);
    ready_initial = 1;
    @(posedge clk);
    ready_initial = 0;
end

initial begin : update_status
    integer process_num ;
    integer read_status_resp;
    wait(reset === 1);
    @(posedge clk);
    process_num = 0;
    while (1) begin
        process_0_finish = 0;
        AESL_done_index_reg         <= 0;
        AESL_ready_out_index_reg        <= 0;
        if (ongoing_process_number === process_num && process_busy === 0) begin
            process_busy = 1;
            read (STATUS_ADDR, RDATA_reg, read_status_resp);
                AESL_done_index_reg         <= RDATA_reg[1 : 1];
                AESL_ready_out_index_reg    <= RDATA_reg[1 : 1];
                AESL_idle_index_reg         <= RDATA_reg[2 : 2];
            process_0_finish = 1;
            process_busy = 0;
        end 
        @(posedge clk);
    end
end

always @(reset or posedge clk) begin
    if (reset == 0) begin
        In_r_write_data_finish <= 0;
        write_In_r_run_flag <= 0; 
        write_In_r_count = 0;
        count_operate_depth_by_bitwidth_and_depth (In_r_c_bitwidth, In_r_DEPTH, In_r_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_AXILiteS_start_in === 1) begin
            In_r_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_In_r_run_flag <= 1; 
            write_In_r_count = 0;
        end
        if (write_one_In_r_data_done === 1) begin
            write_In_r_count = write_In_r_count + 1;
            if (write_In_r_count == In_r_OPERATE_DEPTH) begin
                write_In_r_run_flag <= 0; 
                In_r_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_In_r
    integer write_In_r_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] In_r_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = In_r_c_bitwidth;
    process_num = 1;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_1_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_In_r_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write In_r data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (In_r_c_bitwidth < 32) begin
                        In_r_data_tmp_reg = reg_In_r;
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < In_r_c_bitwidth) begin
                                In_r_data_tmp_reg[j] = reg_In_r[i*32 + j];
                            end
                            else begin
                                In_r_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    write (In_r_data_in_addr + write_In_r_count * four_byte_num * 4 + i * 4, In_r_data_tmp_reg, write_In_r_resp);
                end
                process_busy = 0;
                write_one_In_r_data_done <= 1;
                @(posedge clk);
                write_one_In_r_data_done <= 0;
            end   
            process_1_finish <= 1;
        end
        @(posedge clk);
    end    
end
always @(reset or posedge clk) begin
    if (reset == 0) begin
        Out_r_write_data_finish <= 0;
        write_Out_r_run_flag <= 0; 
        write_Out_r_count = 0;
        count_operate_depth_by_bitwidth_and_depth (Out_r_c_bitwidth, Out_r_DEPTH, Out_r_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_AXILiteS_start_in === 1) begin
            Out_r_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_Out_r_run_flag <= 1; 
            write_Out_r_count = 0;
        end
        if (write_one_Out_r_data_done === 1) begin
            write_Out_r_count = write_Out_r_count + 1;
            if (write_Out_r_count == Out_r_OPERATE_DEPTH) begin
                write_Out_r_run_flag <= 0; 
                Out_r_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_Out_r
    integer write_Out_r_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] Out_r_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = Out_r_c_bitwidth;
    process_num = 2;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_2_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_Out_r_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write Out_r data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (Out_r_c_bitwidth < 32) begin
                        Out_r_data_tmp_reg = reg_Out_r;
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < Out_r_c_bitwidth) begin
                                Out_r_data_tmp_reg[j] = reg_Out_r[i*32 + j];
                            end
                            else begin
                                Out_r_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    write (Out_r_data_in_addr + write_Out_r_count * four_byte_num * 4 + i * 4, Out_r_data_tmp_reg, write_Out_r_resp);
                end
                process_busy = 0;
                write_one_Out_r_data_done <= 1;
                @(posedge clk);
                write_one_Out_r_data_done <= 0;
            end   
            process_2_finish <= 1;
        end
        @(posedge clk);
    end    
end
always @(reset or posedge clk) begin
    if (reset == 0) begin
        W_write_data_finish <= 0;
        write_W_run_flag <= 0; 
        write_W_count = 0;
        count_operate_depth_by_bitwidth_and_depth (W_c_bitwidth, W_DEPTH, W_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_AXILiteS_start_in === 1) begin
            W_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_W_run_flag <= 1; 
            write_W_count = 0;
        end
        if (write_one_W_data_done === 1) begin
            write_W_count = write_W_count + 1;
            if (write_W_count == W_OPERATE_DEPTH) begin
                write_W_run_flag <= 0; 
                W_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_W
    integer write_W_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] W_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = W_c_bitwidth;
    process_num = 3;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_3_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_W_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write W data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (W_c_bitwidth < 32) begin
                        W_data_tmp_reg = reg_W;
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < W_c_bitwidth) begin
                                W_data_tmp_reg[j] = reg_W[i*32 + j];
                            end
                            else begin
                                W_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    write (W_data_in_addr + write_W_count * four_byte_num * 4 + i * 4, W_data_tmp_reg, write_W_resp);
                end
                process_busy = 0;
                write_one_W_data_done <= 1;
                @(posedge clk);
                write_one_W_data_done <= 0;
            end   
            process_3_finish <= 1;
        end
        @(posedge clk);
    end    
end
always @(reset or posedge clk) begin
    if (reset == 0) begin
        Parameter_r_write_data_finish <= 0;
        write_Parameter_r_run_flag <= 0; 
        write_Parameter_r_count = 0;
        count_operate_depth_by_bitwidth_and_depth (Parameter_r_c_bitwidth, Parameter_r_DEPTH, Parameter_r_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_AXILiteS_start_in === 1) begin
            Parameter_r_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_Parameter_r_run_flag <= 1; 
            write_Parameter_r_count = 0;
        end
        if (write_one_Parameter_r_data_done === 1) begin
            write_Parameter_r_count = write_Parameter_r_count + 1;
            if (write_Parameter_r_count == Parameter_r_OPERATE_DEPTH) begin
                write_Parameter_r_run_flag <= 0; 
                Parameter_r_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_Parameter_r
    integer write_Parameter_r_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] Parameter_r_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = Parameter_r_c_bitwidth;
    process_num = 4;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_4_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_Parameter_r_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write Parameter_r data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (Parameter_r_c_bitwidth < 32) begin
                        Parameter_r_data_tmp_reg = reg_Parameter_r;
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < Parameter_r_c_bitwidth) begin
                                Parameter_r_data_tmp_reg[j] = reg_Parameter_r[i*32 + j];
                            end
                            else begin
                                Parameter_r_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    write (Parameter_r_data_in_addr + write_Parameter_r_count * four_byte_num * 4 + i * 4, Parameter_r_data_tmp_reg, write_Parameter_r_resp);
                end
                process_busy = 0;
                write_one_Parameter_r_data_done <= 1;
                @(posedge clk);
                write_one_Parameter_r_data_done <= 0;
            end   
            process_4_finish <= 1;
        end
        @(posedge clk);
    end    
end

always @(reset or posedge clk) begin
    if (reset == 0) begin
        write_start_run_flag <= 0; 
        write_start_count <= 0;
    end
    else begin
        if (write_start_count >= 1) begin
            write_start_run_flag <= 0; 
        end
        else if (TRAN_AXILiteS_write_start_in === 1) begin
            write_start_run_flag <= 1; 
        end
        if (AESL_write_start_finish === 1) begin
            write_start_count <= write_start_count + 1;
            write_start_run_flag <= 0; 
        end
    end
end

initial begin : write_start
    reg [DATA_WIDTH - 1 : 0] write_start_tmp;
    integer process_num;
    integer write_start_resp;
    wait(reset === 1);
    @(posedge clk);
    process_num = 5;
    while (1) begin
        process_5_finish = 0;
        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            if (write_start_run_flag === 1) begin
                process_busy = 1;
                write_start_tmp=0;
                write_start_tmp[0 : 0] = 1;
                write (START_ADDR, write_start_tmp, write_start_resp);
                process_busy = 0;
                AESL_write_start_finish <= 1;
                @(posedge clk);
                AESL_write_start_finish <= 0;
            end
            process_5_finish <= 1;
        end 
        @(posedge clk);
    end
end

//------------------------Task and function-------------- 
task read_token; 
    input integer fp; 
    output reg [127 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end 
endtask 
 
endmodule
