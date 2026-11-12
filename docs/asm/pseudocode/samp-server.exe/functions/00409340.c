/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409340
 * Name: FUN_00409340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


LPSTR __cdecl FUN_00409340(LPCWSTR param_1)

{
  BOOL BVar1;
  size_t _Size;
  LPSTR lpMultiByteStr;
  int iVar2;
  
  BVar1 = AreFileApisANSI();
  _Size = WideCharToMultiByte((uint)(BVar1 == 0),0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  lpMultiByteStr = _malloc(_Size);
  if (lpMultiByteStr == (LPSTR)0x0) {
    return (LPSTR)0x0;
  }
  iVar2 = WideCharToMultiByte((uint)(BVar1 == 0),0,param_1,-1,lpMultiByteStr,_Size,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (iVar2 == 0) {
    _free(lpMultiByteStr);
    lpMultiByteStr = (LPSTR)0x0;
  }
  return lpMultiByteStr;
}


/* END FUNCTION 0x00409340 */
