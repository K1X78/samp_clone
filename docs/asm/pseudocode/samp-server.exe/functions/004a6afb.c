/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a6afb
 * Name: FUN_004a6afb
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004a6afb(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    piVar2 = FUN_004a5f9b();
    *piVar2 = 0xd;
    puVar3 = FUN_004a5fa4();
    *puVar3 = 5;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x004a6afb */
