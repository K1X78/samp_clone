/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3f80
 * Name: FUN_100e3f80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e3f80(HCRYPTPROV *param_1)

{
  BOOL BVar1;
  
  BVar1 = CryptAcquireContextA(param_1,(LPCSTR)0x0,(LPCSTR)0x0,1,0xf0000000);
  if (BVar1 != 0) {
    CryptCreateHash(*param_1,0x8003,0,0,param_1 + 1);
  }
  return;
}


/* END FUNCTION 0x100e3f80 */
