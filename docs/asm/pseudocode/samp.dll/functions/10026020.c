/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026020
 * Name: FUN_10026020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10026020(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) + param_2;
  *(uint *)(param_1 + 4) = uVar1 % *(uint *)(param_1 + 0xc);
  return uVar1 / *(uint *)(param_1 + 0xc);
}


/* END FUNCTION 0x10026020 */
