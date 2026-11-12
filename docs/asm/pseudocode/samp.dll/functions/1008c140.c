/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c140
 * Name: FUN_1008c140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1008c140(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1008c0d0(param_1);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_10089490(&param_1);
    uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
  }
  return uVar1;
}


/* END FUNCTION 0x1008c140 */
