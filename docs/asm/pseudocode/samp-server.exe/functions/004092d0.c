/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004092d0
 * Name: FUN_004092d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


LPWSTR __cdecl FUN_004092d0(LPCSTR param_1)

{
  BOOL BVar1;
  int iVar2;
  LPWSTR lpWideCharStr;
  
  BVar1 = AreFileApisANSI();
  iVar2 = MultiByteToWideChar((uint)(BVar1 == 0),0,param_1,-1,(LPWSTR)0x0,0);
  lpWideCharStr = _malloc(iVar2 * 4);
  if (lpWideCharStr == (LPWSTR)0x0) {
    return (LPWSTR)0x0;
  }
  iVar2 = MultiByteToWideChar((uint)(BVar1 == 0),0,param_1,-1,lpWideCharStr,iVar2 * 2);
  if (iVar2 == 0) {
    _free(lpWideCharStr);
    lpWideCharStr = (LPWSTR)0x0;
  }
  return lpWideCharStr;
}


/* END FUNCTION 0x004092d0 */
