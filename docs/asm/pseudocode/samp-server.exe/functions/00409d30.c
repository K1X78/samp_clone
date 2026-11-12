/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409d30
 * Name: FUN_00409d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00409d30(undefined4 param_1,uint param_2,DWORD *param_3)

{
  DWORD DVar1;
  int iVar2;
  LARGE_INTEGER local_10;
  DWORD local_8;
  DWORD local_4;
  
  iVar2 = 0;
  if (0xf < param_2) {
    GetSystemTime((LPSYSTEMTIME)&local_10.s);
    *param_3 = local_10.s.LowPart;
    param_3[1] = local_10.s.HighPart;
    param_3[2] = local_8;
    param_3[3] = local_4;
    iVar2 = 0x10;
  }
  if (3 < param_2 - iVar2) {
    DVar1 = GetCurrentProcessId();
    *(DWORD *)(iVar2 + (int)param_3) = DVar1;
    iVar2 = iVar2 + 4;
  }
  if (3 < param_2 - iVar2) {
    DVar1 = GetTickCount();
    *(DWORD *)(iVar2 + (int)param_3) = DVar1;
    iVar2 = iVar2 + 4;
  }
  if (7 < param_2 - iVar2) {
    QueryPerformanceCounter(&local_10);
    *(DWORD *)(iVar2 + (int)param_3) = local_10.s.LowPart;
    *(LONG *)(iVar2 + 4 + (int)param_3) = local_10.s.HighPart;
    iVar2 = iVar2 + 8;
  }
  return iVar2;
}


/* END FUNCTION 0x00409d30 */
