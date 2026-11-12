/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fee44
 * Name: __strtoi64
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  longlong lVar1;
  
  lVar1 = strtoxq(_String,_EndPtr,_Radix,0);
  return lVar1;
}


/* END FUNCTION 0x100fee44 */
