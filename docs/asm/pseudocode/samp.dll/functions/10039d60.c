/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10039d60
 * Name: FUN_10039d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10039d60(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  *param_1 = uVar1 * 2;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  uVar1 = param_1[3];
  param_1[2] = uVar3 * 2 | uVar2 >> 0x1f;
  uVar2 = param_1[4];
  param_1[3] = uVar1 * 2 | uVar3 >> 0x1f;
  uVar3 = param_1[5];
  param_1[4] = uVar2 * 2 | uVar1 >> 0x1f;
  uVar1 = param_1[6];
  param_1[5] = uVar3 * 2 | uVar2 >> 0x1f;
  param_1[6] = uVar1 * 2 | uVar3 >> 0x1f;
  param_1[7] = param_1[7] << 1 | uVar1 >> 0x1f;
  return;
}


/* END FUNCTION 0x10039d60 */
