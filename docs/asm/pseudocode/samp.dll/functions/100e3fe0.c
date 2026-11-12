/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3fe0
 * Name: FUN_100e3fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e3fe0(BYTE *param_1,HCRYPTPROV *param_2)

{
  DWORD local_4;
  
  local_4 = 0;
  CryptGetHashParam(param_2[1],2,(BYTE *)0x0,&local_4,0);
  if (local_4 == 0x10) {
    CryptGetHashParam(param_2[1],2,param_1,&local_4,0);
  }
  if (param_2[1] != 0) {
    CryptDestroyHash(param_2[1]);
  }
  if (*param_2 != 0) {
    CryptReleaseContext(*param_2,0);
  }
  return;
}


/* END FUNCTION 0x100e3fe0 */
