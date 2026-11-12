/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4050
 * Name: FUN_100e4050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e4050(undefined4 param_1,BYTE *param_2)

{
  BYTE BVar1;
  BOOL BVar2;
  BYTE *pBVar3;
  DWORD dwDataLen;
  HCRYPTPROV local_8;
  HCRYPTHASH local_4;
  
  BVar2 = CryptAcquireContextA(&local_8,(LPCSTR)0x0,(LPCSTR)0x0,1,0xf0000000);
  if (BVar2 != 0) {
    CryptCreateHash(local_8,0x8003,0,0,&local_4);
  }
  pBVar3 = param_2;
  do {
    BVar1 = *pBVar3;
    pBVar3 = pBVar3 + 1;
  } while (BVar1 != '\0');
  dwDataLen = FUN_100d9a20((int)pBVar3 - (int)(param_2 + 1));
  CryptHashData(local_4,param_2,dwDataLen,0);
  FUN_100e3fe0(param_1,&local_8);
  return;
}


/* END FUNCTION 0x100e4050 */
