/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b95e0
 * Name: FUN_100b95e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b95e0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 100000.0;
  param_2[1] = 100000.0;
  param_2[2] = 100000.0;
  *param_3 = -100000.0;
  param_3[1] = -100000.0;
  param_3[2] = -100000.0;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x12) != 0) {
      iVar1 = 0;
      do {
        if (*(float *)(*(int *)(param_1 + 0x44) + iVar1) < *param_2) {
          *param_2 = *(float *)(*(int *)(param_1 + 0x44) + iVar1);
        }
        if (*(float *)(*(int *)(param_1 + 0x44) + 4 + iVar1) < param_2[1]) {
          param_2[1] = *(float *)(*(int *)(param_1 + 0x44) + 4 + iVar1);
        }
        if (*(float *)(*(int *)(param_1 + 0x44) + 8 + iVar1) < param_2[2]) {
          param_2[2] = *(float *)(*(int *)(param_1 + 0x44) + 8 + iVar1);
        }
        if (*param_3 < *(float *)(*(int *)(param_1 + 0x44) + iVar1)) {
          *param_3 = *(float *)(*(int *)(param_1 + 0x44) + iVar1);
        }
        if (param_3[1] < *(float *)(*(int *)(param_1 + 0x44) + 4 + iVar1)) {
          param_3[1] = *(float *)(*(int *)(param_1 + 0x44) + 4 + iVar1);
        }
        if (param_3[2] < *(float *)(*(int *)(param_1 + 0x44) + 8 + iVar1)) {
          param_3[2] = *(float *)(*(int *)(param_1 + 0x44) + 8 + iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0xc;
      } while (iVar2 != *(int *)(param_1 + 0x12));
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100b95e0 */
