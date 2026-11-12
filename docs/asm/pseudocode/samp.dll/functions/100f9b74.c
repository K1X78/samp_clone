/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9b74
 * Name: _strtoul
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = strtoxl(_Str,_EndPtr,_Radix,1);
  return uVar1;
}


/* END FUNCTION 0x100f9b74 */
