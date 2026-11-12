/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409510
 * Name: FUN_00409510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00409510(int param_1,LPCVOID param_2,DWORD param_3,LONG param_4,uint param_5)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD local_8;
  uint local_4;
  
  local_4 = param_5 & 0x7fffffff;
  local_8 = 0;
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 8),param_4,(PLONG)&local_4,0);
  if ((DVar1 == 0xffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    *(DWORD *)(param_1 + 0x10) = DVar2;
    return ((DVar2 != 0x27) - 1 & 0xfffffd03) + 0x30a;
  }
  for (; 0 < (int)param_3; param_3 = param_3 - local_8) {
    DVar1 = WriteFile(*(HANDLE *)(param_1 + 8),param_2,param_3,&local_8,(LPOVERLAPPED)0x0);
    if (DVar1 == 0) goto LAB_004095d1;
    if (local_8 == 0) break;
    param_2 = (LPCVOID)((int)param_2 + local_8);
  }
  if ((DVar1 != 0) && ((int)param_3 <= (int)local_8)) {
    return 0;
  }
LAB_004095d1:
  DVar1 = GetLastError();
  *(DWORD *)(param_1 + 0x10) = DVar1;
  return ((DVar1 != 0x27) - 1 & 0xfffffd03) + 0x30a;
}


/* END FUNCTION 0x00409510 */
