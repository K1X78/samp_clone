/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10076840
 * Name: FUN_10076840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10076840(HKEY param_1,LPCSTR param_2,LPBYTE param_3,undefined4 param_4)

{
  LSTATUS LVar1;
  DWORD local_8;
  DWORD local_4;
  
  local_8 = 4;
  LVar1 = RegQueryValueExA(param_1,param_2,(LPDWORD)0x0,&local_4,param_3,&local_8);
  if (LVar1 != 0) {
    *(undefined4 *)param_3 = param_4;
    return 1;
  }
  if (local_4 != 4) {
    *(undefined4 *)param_3 = param_4;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10076840 */
