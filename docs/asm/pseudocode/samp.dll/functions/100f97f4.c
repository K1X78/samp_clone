/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f97f4
 * Name: __snprintf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  FILE local_24;
  
  local_24._cnt = _Count;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = __output(&local_24,_Format,&stack0x00000010);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt - 1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}


/* END FUNCTION 0x100f97f4 */
