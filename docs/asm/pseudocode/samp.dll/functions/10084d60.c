/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084d60
 * Name: FUN_10084d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10084d60(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 < *(int *)((int)param_1 + 0x51)) {
    param_2 = *(int *)((int)param_1 + 0x51);
  }
  if (*(int *)((int)param_1 + 0x55) < param_2) {
    param_2 = *(int *)((int)param_1 + 0x55);
  }
  if (param_2 != *(int *)((int)param_1 + 0x4d)) {
    *(int *)((int)param_1 + 0x4d) = param_2;
    (**(code **)(*param_1 + 0x4c))();
    FUN_10084460(0x501,param_3,param_1);
  }
  return;
}


/* END FUNCTION 0x10084d60 */
