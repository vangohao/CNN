// ==============================================================
// File generated on Sun Oct 20 14:13:14 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xcnn.h"

extern XCnn_Config XCnn_ConfigTable[];

XCnn_Config *XCnn_LookupConfig(u16 DeviceId) {
	XCnn_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCNN_NUM_INSTANCES; Index++) {
		if (XCnn_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XCnn_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XCnn_Initialize(XCnn *InstancePtr, u16 DeviceId) {
	XCnn_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XCnn_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XCnn_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

