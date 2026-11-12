/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a220d
 * Name: _sscanf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  FILE local_24;
  
  local_24._flag = 0x49;
  local_24._base = _Src;
  local_24._ptr = _Src;
  local_24._cnt = _strlen(_Src);
  iVar1 = __input(&local_24,(byte *)_Format,(undefined4 *)&stack0x0000000c);
  return iVar1;
}


/* END FUNCTION 0x004a220d */
