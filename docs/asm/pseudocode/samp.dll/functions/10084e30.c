/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084e30
 * Name: FUN_10084e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10084e30(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x9a) <= param_2) {
    param_2 = *(int *)(param_1 + 0x9a) + -1;
  }
  if (*(int *)(param_1 + 0x8e) <= param_2) {
    if (param_2 < *(int *)(param_1 + 0x8e) + *(int *)(param_1 + 0x92)) goto LAB_10084e67;
    param_2 = (param_2 - *(int *)(param_1 + 0x92)) + 1;
  }
  *(int *)(param_1 + 0x8e) = param_2;
LAB_10084e67:
  FUN_10084da0();
  return;
}


/* END FUNCTION 0x10084e30 */
