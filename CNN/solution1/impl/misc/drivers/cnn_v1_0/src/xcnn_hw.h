// ==============================================================
// File generated on Sun Oct 20 14:13:14 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of In_r
//        bit 31~0 - In_r[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of Out_r
//        bit 31~0 - Out_r[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of W
//        bit 31~0 - W[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of Parameter_r
//        bit 31~0 - Parameter_r[31:0] (Read/Write)
// 0x2c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCNN_AXILITES_ADDR_AP_CTRL          0x00
#define XCNN_AXILITES_ADDR_GIE              0x04
#define XCNN_AXILITES_ADDR_IER              0x08
#define XCNN_AXILITES_ADDR_ISR              0x0c
#define XCNN_AXILITES_ADDR_IN_R_DATA        0x10
#define XCNN_AXILITES_BITS_IN_R_DATA        32
#define XCNN_AXILITES_ADDR_OUT_R_DATA       0x18
#define XCNN_AXILITES_BITS_OUT_R_DATA       32
#define XCNN_AXILITES_ADDR_W_DATA           0x20
#define XCNN_AXILITES_BITS_W_DATA           32
#define XCNN_AXILITES_ADDR_PARAMETER_R_DATA 0x28
#define XCNN_AXILITES_BITS_PARAMETER_R_DATA 32

