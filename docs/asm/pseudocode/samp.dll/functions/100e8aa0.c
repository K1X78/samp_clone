/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8aa0
 * Name: FUN_100e8aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e8aa0(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_1[3] != 0)) {
    if (param_2 == *param_1) {
      iVar1 = *(int *)(param_2 + 8);
      *param_1 = iVar1;
      if (iVar1 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
      if (*(int *)(param_2 + 8) == 0) {
        param_1[1] = *(int *)(param_2 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
      }
    }
    param_1[3] = param_1[3] + -1;
    if (param_3[3] == 0) {
      *param_3 = param_2;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(*param_3 + 8) = 0;
      param_3[1] = param_2;
      param_3[3] = param_3[3] + 1;
      return;
    }
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_4 + 8);
    *(int *)(param_2 + 4) = param_4;
    if (*(int *)(param_4 + 8) != 0) {
      *(int *)(*(int *)(param_4 + 8) + 4) = param_2;
      *(int *)(param_4 + 8) = param_2;
      param_3[3] = param_3[3] + 1;
      return;
    }
    param_3[1] = param_2;
    *(int *)(param_4 + 8) = param_2;
    param_3[3] = param_3[3] + 1;
  }
  return;
}


/* END FUNCTION 0x100e8aa0 */
