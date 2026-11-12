/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8960
 * Name: FUN_100e8960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e8960(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  *param_4 = param_3;
  if (param_1[3] == 0) {
    *param_1 = (int)param_4;
    param_4[1] = 0;
    *(undefined4 *)(*param_1 + 8) = 0;
    param_1[1] = (int)param_4;
    param_1[3] = param_1[3] + 1;
    return;
  }
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  else {
    iVar1 = *(int *)(param_2 + 8);
  }
  param_4[2] = iVar1;
  param_4[1] = param_2;
  if (param_2 == 0) {
    *(undefined4 **)(*param_1 + 4) = param_4;
    *param_1 = (int)param_4;
    param_1[3] = param_1[3] + 1;
    return;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *(undefined4 **)(*(int *)(param_2 + 8) + 4) = param_4;
    *(undefined4 **)(param_2 + 8) = param_4;
    param_1[3] = param_1[3] + 1;
    return;
  }
  param_1[1] = (int)param_4;
  *(undefined4 **)(param_2 + 8) = param_4;
  param_1[3] = param_1[3] + 1;
  return;
}


/* END FUNCTION 0x100e8960 */
