/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004515a0
 * Name: FUN_004515a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004515a0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[7];
  param_1[7] = uVar1 >> 1;
  uVar2 = param_1[6];
  uVar3 = param_1[5];
  param_1[6] = uVar2 >> 1 | uVar1 << 0x1f;
  uVar1 = param_1[4];
  param_1[5] = uVar3 >> 1 | uVar2 << 0x1f;
  uVar2 = param_1[3];
  param_1[4] = uVar1 >> 1 | uVar3 << 0x1f;
  uVar3 = param_1[2];
  param_1[3] = uVar2 >> 1 | uVar1 << 0x1f;
  uVar1 = param_1[1];
  param_1[2] = uVar3 >> 1 | uVar2 << 0x1f;
  param_1[1] = uVar1 >> 1 | uVar3 << 0x1f;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


/* END FUNCTION 0x004515a0 */
