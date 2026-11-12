/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451300
 * Name: FUN_00451300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00451300(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[3];
  param_1[3] = uVar1 >> 1;
  uVar2 = param_1[2];
  uVar3 = param_1[1];
  param_1[2] = uVar2 >> 1 | uVar1 << 0x1f;
  param_1[1] = uVar3 >> 1 | uVar2 << 0x1f;
  *param_1 = *param_1 >> 1 | uVar3 << 0x1f;
  return;
}


/* END FUNCTION 0x00451300 */
