/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101125ba
 * Name: FUN_101125ba
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_101125ba(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_100fdc77();
    *puVar2 = 0xd;
    puVar2 = (undefined4 *)FUN_100fdc80();
    *puVar2 = 5;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x101125ba */
