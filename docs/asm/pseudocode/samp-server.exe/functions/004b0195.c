/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b0195
 * Name: ___wtomb_environ
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl ___wtomb_environ(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  int iVar1;
  undefined4 *puVar2;
  char *local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_0051c218;
  puVar2 = DAT_0051c218;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Size == 0) || (local_8 = _malloc(_Size), local_8 == (LPSTR)0x0)) break;
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      _free(local_8);
      return -1;
    }
    iVar1 = ___crtsetenv(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}


/* END FUNCTION 0x004b0195 */
