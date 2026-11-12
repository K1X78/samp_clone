/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee690
 * Name: FUN_100ee690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ee690(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    return 1;
  }
  if ((((0x7fffffff < (uint)param_2[4]) && (-2 < param_2[4])) && (0x7fffffff < (uint)param_2[5])) &&
     (-2 < param_2[5])) {
    if ((int *)param_2[2] == param_2) {
      return 3;
    }
    *(int **)(param_2[3] + 8) = (int *)param_2[2];
    *(int *)(param_2[2] + 0xc) = param_2[3];
    param_2[2] = (int)param_2;
    *param_3 = param_1;
    return 0;
  }
  piVar2 = (int *)FUN_100ee3f0(param_2[4],param_2[5],param_1);
  if (piVar2 != param_2) {
    return 2;
  }
  piVar1 = (int *)piVar2[2];
  if (piVar1 != piVar2) {
    piVar1[4] = piVar2[4];
    piVar1[5] = piVar2[5];
    piVar1[1] = piVar2[1];
    *piVar1 = *piVar2;
    piVar1[3] = piVar2[3];
    *(int **)(piVar2[3] + 8) = piVar1;
    *param_3 = (int)piVar1;
    return 0;
  }
  if (*piVar2 == 0) {
    *param_3 = piVar2[1];
    return 0;
  }
  iVar3 = FUN_100ee3f0(param_2[4],param_2[5],*piVar2);
  *(int *)(iVar3 + 4) = piVar2[1];
  *param_3 = iVar3;
  return 0;
}


/* END FUNCTION 0x100ee690 */
