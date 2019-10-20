// ==============================================================
// File generated on Sun Oct 20 14:13:14 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xcnn.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XCnn_CfgInitialize(XCnn *InstancePtr, XCnn_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XCnn_Start(XCnn *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_AP_CTRL) & 0x80;
    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XCnn_IsDone(XCnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XCnn_IsIdle(XCnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XCnn_IsReady(XCnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XCnn_EnableAutoRestart(XCnn *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XCnn_DisableAutoRestart(XCnn *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_AP_CTRL, 0);
}

void XCnn_Set_In_r(XCnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_IN_R_DATA, Data);
}

u32 XCnn_Get_In_r(XCnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_IN_R_DATA);
    return Data;
}

void XCnn_Set_Out_r(XCnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_OUT_R_DATA, Data);
}

u32 XCnn_Get_Out_r(XCnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_OUT_R_DATA);
    return Data;
}

void XCnn_Set_W(XCnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_W_DATA, Data);
}

u32 XCnn_Get_W(XCnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_W_DATA);
    return Data;
}

void XCnn_Set_Parameter_r(XCnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_PARAMETER_R_DATA, Data);
}

u32 XCnn_Get_Parameter_r(XCnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_PARAMETER_R_DATA);
    return Data;
}

void XCnn_InterruptGlobalEnable(XCnn *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_GIE, 1);
}

void XCnn_InterruptGlobalDisable(XCnn *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_GIE, 0);
}

void XCnn_InterruptEnable(XCnn *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_IER);
    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_IER, Register | Mask);
}

void XCnn_InterruptDisable(XCnn *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_IER);
    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_IER, Register & (~Mask));
}

void XCnn_InterruptClear(XCnn *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_WriteReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_ISR, Mask);
}

u32 XCnn_InterruptGetEnabled(XCnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_IER);
}

u32 XCnn_InterruptGetStatus(XCnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCnn_ReadReg(InstancePtr->Axilites_BaseAddress, XCNN_AXILITES_ADDR_ISR);
}

