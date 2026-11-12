/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010a9c4
 * Name: __control87
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __abstract_cw();
  __hw_cw();
  return uVar1 & ~_Mask | _NewValue & _Mask;
}


/* END FUNCTION 0x1010a9c4 */
