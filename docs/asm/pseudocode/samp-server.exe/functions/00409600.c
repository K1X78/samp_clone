/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409600
 * Name: FUN_00409600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00409600(int param_1,LONG param_2,uint param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  uint local_4;
  
  local_4 = param_3 & 0x7fffffff;
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 8),param_2,(PLONG)&local_4,0);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    if (DVar1 != 0) goto LAB_00409652;
  }
  BVar2 = SetEndOfFile(*(HANDLE *)(param_1 + 8));
  if (BVar2 != 0) {
    return 0;
  }
  DVar1 = GetLastError();
LAB_00409652:
  *(DWORD *)(param_1 + 0x10) = DVar1;
  return 0x60a;
}


/* END FUNCTION 0x00409600 */
