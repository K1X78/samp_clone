/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a000
 * Name: FUN_1003a000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003a000(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  *param_1 = uVar1 * 2;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = uVar3 * 2 | uVar2 >> 0x1f;
  param_1[3] = param_1[3] << 1 | uVar3 >> 0x1f;
  return;
}


/* END FUNCTION 0x1003a000 */
