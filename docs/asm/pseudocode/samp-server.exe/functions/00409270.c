/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409270
 * Name: FUN_00409270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


LPSTR FUN_00409270(void)

{
  size_t _Size;
  LPSTR lpMultiByteStr;
  int iVar1;
  LPCWSTR unaff_EBX;
  
  _Size = WideCharToMultiByte(0xfde9,0,unaff_EBX,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  lpMultiByteStr = _malloc(_Size);
  if (lpMultiByteStr == (LPSTR)0x0) {
    return (LPSTR)0x0;
  }
  iVar1 = WideCharToMultiByte(0xfde9,0,unaff_EBX,-1,lpMultiByteStr,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
  if (iVar1 == 0) {
    _free(lpMultiByteStr);
    lpMultiByteStr = (LPSTR)0x0;
  }
  return lpMultiByteStr;
}


/* END FUNCTION 0x00409270 */
