/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004096a0
 * Name: FUN_004096a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004096a0(uint param_1,longlong *param_2)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  
  uVar1 = param_1;
  DVar2 = GetFileSize(*(HANDLE *)(param_1 + 8),&param_1);
  if (DVar2 == 0xffffffff) {
    DVar3 = GetLastError();
    if (DVar3 != 0) {
      *(DWORD *)(uVar1 + 0x10) = DVar3;
      return 0x70a;
    }
  }
  lVar4 = __allmul(param_1,0,0,1);
  *param_2 = lVar4 + (ulonglong)DVar2;
  return 0;
}


/* END FUNCTION 0x004096a0 */
