/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de6f0
 * Name: FUN_100de6f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100de6f0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  
  if (param_1 == (int *)0x0) {
    return 0x2b;
  }
  if ((param_1[3] != 4) || ((int *)param_1[8] != param_2)) {
    if ((code *)param_1[7] != (code *)0x0) {
      (*(code *)param_1[7])(param_1[8]);
    }
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = (int)param_1;
    param_1[4] = 0;
    param_1[9] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[3] = 0;
    if (param_2 != (int *)0x0) {
      iVar1 = *param_1;
      if ((((iVar1 != 0) && (*param_2 != 0)) && (iVar1 != *param_2)) || (param_2[1] != 0)) {
        return 0x2b;
      }
      piVar2 = (int *)param_1[1];
      if (piVar2 != (int *)0x0) {
        iVar3 = piVar2[1];
        while ((iVar3 != 0 && (piVar4 = *(int **)(iVar3 + 4), piVar4 != (int *)0x0))) {
          piVar2 = piVar4;
          iVar3 = piVar4[1];
        }
        if (param_2 == piVar2) {
          if (iVar1 == 0) {
            return 0x2b;
          }
          FUN_100d8ba0(iVar1,"Can\'t add itself as a subpart!");
          return 0x2b;
        }
      }
      param_2[1] = (int)param_1;
      param_1[5] = (int)FUN_100dd740;
      param_1[6] = (int)&LAB_100dd930;
      pcVar5 = FUN_100de6c0;
      if (param_3 == 0) {
        pcVar5 = FUN_100dd9e0;
      }
      param_1[7] = (int)pcVar5;
      param_1[8] = (int)param_2;
      param_1[0x10] = -1;
      param_1[0x11] = -1;
      param_1[3] = 4;
    }
  }
  return 0;
}


/* END FUNCTION 0x100de6f0 */
