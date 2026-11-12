/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fc26b
 * Name: _sscanf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  char *local_24;
  size_t local_20;
  char *local_1c;
  undefined4 local_18;
  
  local_18 = 0x49;
  local_1c = _Src;
  local_24 = _Src;
  local_20 = _strlen(_Src);
  iVar1 = __input(&local_24,_Format,&stack0x0000000c);
  return iVar1;
}


/* END FUNCTION 0x100fc26b */
