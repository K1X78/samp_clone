/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f928b
 * Name: __scprintf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __scprintf(char *_Format,...)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  local_24 = 0;
  local_20 = 0x7fffffff;
  local_18 = 0x42;
  iVar1 = __output(&local_24,_Format,&stack0x00000008);
  return iVar1;
}


/* END FUNCTION 0x100f928b */
