/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e89e0
 * Name: FUN_100e89e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e89e0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != (undefined4 *)0x0) && (param_1[3] != 0)) {
    if (param_2 == (undefined4 *)*param_1) {
      iVar1 = param_2[2];
      *param_1 = iVar1;
      if (iVar1 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined4 *)(param_2[2] + 4) = 0;
      }
    }
    else {
      if (param_2[1] == 0) {
        *param_1 = param_2[2];
      }
      else {
        *(undefined4 *)(param_2[1] + 8) = param_2[2];
      }
      if (param_2[2] == 0) {
        param_1[1] = param_2[1];
      }
      else {
        *(undefined4 *)(param_2[2] + 4) = param_2[1];
      }
    }
    uVar2 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_1[3] = param_1[3] + -1;
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_3,uVar2);
    }
  }
  return;
}


/* END FUNCTION 0x100e89e0 */
