/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a3359
 * Name: _vsprintf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  FILE local_24;
  
  local_24._cnt = 0x7fffffff;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = __output(&local_24,(byte *)_Format,(wchar_t *)_Args);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}


/* END FUNCTION 0x004a3359 */
