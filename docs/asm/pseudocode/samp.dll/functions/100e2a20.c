/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e2a20
 * Name: FUN_100e2a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e2a20(undefined4 param_1,BYTE *param_2,DWORD param_3)

{
  BOOL BVar1;
  HCRYPTPROV local_4;
  
  local_4 = 0;
  BVar1 = CryptAcquireContextA(&local_4,(LPCSTR)0x0,(LPCSTR)0x0,1,0xf0000040);
  if (BVar1 != 0) {
    BVar1 = CryptGenRandom(local_4,param_3,param_2);
    if (BVar1 != 0) {
      CryptReleaseContext(local_4,0);
      return 0;
    }
    CryptReleaseContext(local_4,0);
  }
  return 2;
}


/* END FUNCTION 0x100e2a20 */
