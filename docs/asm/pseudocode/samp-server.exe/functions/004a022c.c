/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a022c
 * Name: FUN_004a022c
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004a022c(LPCSTR param_1)

{
  BOOL BVar1;
  ulong uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


/* END FUNCTION 0x004a022c */
