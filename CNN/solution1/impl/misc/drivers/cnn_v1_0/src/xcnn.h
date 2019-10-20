// ==============================================================
// File generated on Sun Oct 20 14:13:14 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XCNN_H
#define XCNN_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xcnn_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XCnn_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XCnn;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XCnn_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XCnn_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XCnn_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XCnn_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XCnn_Initialize(XCnn *InstancePtr, u16 DeviceId);
XCnn_Config* XCnn_LookupConfig(u16 DeviceId);
int XCnn_CfgInitialize(XCnn *InstancePtr, XCnn_Config *ConfigPtr);
#else
int XCnn_Initialize(XCnn *InstancePtr, const char* InstanceName);
int XCnn_Release(XCnn *InstancePtr);
#endif

void XCnn_Start(XCnn *InstancePtr);
u32 XCnn_IsDone(XCnn *InstancePtr);
u32 XCnn_IsIdle(XCnn *InstancePtr);
u32 XCnn_IsReady(XCnn *InstancePtr);
void XCnn_EnableAutoRestart(XCnn *InstancePtr);
void XCnn_DisableAutoRestart(XCnn *InstancePtr);

void XCnn_Set_In_r(XCnn *InstancePtr, u32 Data);
u32 XCnn_Get_In_r(XCnn *InstancePtr);
void XCnn_Set_Out_r(XCnn *InstancePtr, u32 Data);
u32 XCnn_Get_Out_r(XCnn *InstancePtr);
void XCnn_Set_W(XCnn *InstancePtr, u32 Data);
u32 XCnn_Get_W(XCnn *InstancePtr);
void XCnn_Set_Parameter_r(XCnn *InstancePtr, u32 Data);
u32 XCnn_Get_Parameter_r(XCnn *InstancePtr);

void XCnn_InterruptGlobalEnable(XCnn *InstancePtr);
void XCnn_InterruptGlobalDisable(XCnn *InstancePtr);
void XCnn_InterruptEnable(XCnn *InstancePtr, u32 Mask);
void XCnn_InterruptDisable(XCnn *InstancePtr, u32 Mask);
void XCnn_InterruptClear(XCnn *InstancePtr, u32 Mask);
u32 XCnn_InterruptGetEnabled(XCnn *InstancePtr);
u32 XCnn_InterruptGetStatus(XCnn *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
