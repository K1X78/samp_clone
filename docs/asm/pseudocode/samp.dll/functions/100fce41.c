/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fce41
 * Name: _wcstoul
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulong __cdecl _wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = wcstoxl(_Str,_EndPtr,_Radix,1);
  return uVar1;
}


/* END FUNCTION 0x100fce41 */
