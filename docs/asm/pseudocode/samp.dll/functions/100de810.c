/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de810
 * Name: FUN_100de810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100de810(byte param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (('`' < (char)param_1) && ((char)param_1 < '{')) {
    uVar1 = uVar1 - 0x20;
  }
  return uVar1;
}


/* END FUNCTION 0x100de810 */
