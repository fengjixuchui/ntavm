#pragma once
#include "stdafx.h"
VOID DbgkCreateThread(PETHREAD Thread, PVOID StartAddress);
VOID DbgkExitThread(NTSTATUS ExitStatus);
#define DbgPrintElevated(msg, var) DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, msg, var);