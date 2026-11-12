/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9b5d
 * Name: _strtol
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  long lVar1;
  
  lVar1 = strtoxl(_Str,_EndPtr,_Radix,0);
  return lVar1;
}


/* END FUNCTION 0x100f9b5d */
