/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409ad0
 * Name: FUN_00409ad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00409ad0(void)

{
  bool bVar1;
  LPCWSTR lpFileName;
  undefined3 extraout_var;
  DWORD DVar2;
  int local_8;
  DWORD local_4;
  
  local_8 = 0;
  local_4 = 0;
  lpFileName = (LPCWSTR)FUN_00409ab0();
  if (lpFileName == (LPCWSTR)0x0) {
    return 7;
  }
  bVar1 = FUN_004091c0();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    while( true ) {
      DeleteFileA((LPCSTR)lpFileName);
      DVar2 = GetFileAttributesA((LPCSTR)lpFileName);
      if (((DVar2 == 0xffffffff) && (local_4 = GetLastError(), local_4 != 5)) ||
         (local_8 = local_8 + 1, 4 < local_8)) break;
      Sleep(100);
    }
  }
  else {
    while( true ) {
      DeleteFileW(lpFileName);
      DVar2 = GetFileAttributesW(lpFileName);
      if (((DVar2 == 0xffffffff) && (local_4 = GetLastError(), local_4 != 5)) ||
         (local_8 = local_8 + 1, 4 < local_8)) break;
      Sleep(100);
    }
  }
  _free(lpFileName);
  if ((DVar2 == 0xffffffff) && (local_4 == 2)) {
    return 0;
  }
  return 0xa0a;
}


/* END FUNCTION 0x00409ad0 */
