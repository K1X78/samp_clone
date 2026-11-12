/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409210
 * Name: FUN_00409210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


LPWSTR FUN_00409210(void)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  LPCSTR unaff_EBX;
  
  iVar1 = MultiByteToWideChar(0xfde9,0,unaff_EBX,-1,(LPWSTR)0x0,0);
  lpWideCharStr = _malloc(iVar1 * 2);
  if (lpWideCharStr == (LPWSTR)0x0) {
    return (LPWSTR)0x0;
  }
  iVar1 = MultiByteToWideChar(0xfde9,0,unaff_EBX,-1,lpWideCharStr,iVar1);
  if (iVar1 == 0) {
    _free(lpWideCharStr);
    lpWideCharStr = (LPWSTR)0x0;
  }
  return lpWideCharStr;
}


/* END FUNCTION 0x00409210 */
