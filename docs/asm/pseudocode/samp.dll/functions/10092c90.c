/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10092c90
 * Name: FUN_10092c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10092c90(int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(int *)(param_1 + 200) = param_2;
  *(int *)(param_1 + 0xcc) = param_3;
  *(undefined4 *)(param_1 + 0xd8) = param_4;
  *(float *)(param_1 + 0xd0) = (float)param_2 * 0.5;
  *(float *)(param_1 + 0xd4) = (float)param_3 * 0.5;
  return;
}


/* END FUNCTION 0x10092c90 */
