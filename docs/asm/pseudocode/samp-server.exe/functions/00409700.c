/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409700
 * Name: FUN_00409700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


BOOL FUN_00409700(void)

{
  bool bVar1;
  undefined3 extraout_var;
  DWORD DVar2;
  BOOL BVar3;
  int unaff_EDI;
  HANDLE hFile;
  DWORD nNumberOfBytesToUnlockLow;
  
  bVar1 = FUN_004091c0();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    nNumberOfBytesToUnlockLow = 1;
    DVar2 = *(short *)(unaff_EDI + 0xe) + 2 + DAT_004ca204;
    hFile = *(HANDLE *)(unaff_EDI + 8);
  }
  else {
    hFile = *(HANDLE *)(unaff_EDI + 8);
    nNumberOfBytesToUnlockLow = 0x1fe;
    DVar2 = DAT_004ca204 + 2;
  }
  BVar3 = UnlockFile(hFile,DVar2,0,nNumberOfBytesToUnlockLow,0);
  if (BVar3 == 0) {
    DVar2 = GetLastError();
    *(DWORD *)(unaff_EDI + 0x10) = DVar2;
  }
  return BVar3;
}


/* END FUNCTION 0x00409700 */
