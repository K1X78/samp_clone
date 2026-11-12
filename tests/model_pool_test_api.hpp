#pragma once
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
// Compile the real installer against an isolated PE memory image. Fixed GTA
// addresses can overlap the test process's own heap on this Windows setup.
BOOL WINAPI model_pool_read(HANDLE,LPCVOID,LPVOID,SIZE_T,SIZE_T*);
BOOL WINAPI model_pool_write(HANDLE,LPVOID,LPCVOID,SIZE_T,SIZE_T*);
BOOL WINAPI model_pool_protect(LPVOID,SIZE_T,DWORD,PDWORD);
BOOL WINAPI model_pool_flush(HANDLE,LPCVOID,SIZE_T);
#define ReadProcessMemory model_pool_read
#define WriteProcessMemory model_pool_write
#define VirtualProtect model_pool_protect
#define FlushInstructionCache model_pool_flush
