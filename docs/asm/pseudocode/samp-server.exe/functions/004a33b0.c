/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a33b0
 * Name: FUN_004a33b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004a33b0(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  ulong uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
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


/* END FUNCTION 0x004a33b0 */
