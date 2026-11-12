/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10089cb0
 * Name: FUN_10089cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10089cb0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = (int)param_3;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x16e)) {
    piVar3 = *(int **)(param_1 + 0x16a);
    do {
      piVar4 = (int *)*piVar3;
      if ((*piVar4 == param_2) && ((int *)piVar4[1] == param_3)) {
        piVar3 = piVar4 + 2;
        for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar3 = *param_4;
          param_4 = param_4 + 1;
          piVar3 = piVar3 + 1;
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x16e));
  }
  param_3 = operator_new(0x74);
  if (param_3 == (int *)0x0) {
    return 0x8007000e;
  }
  *param_3 = param_2;
  param_3[1] = iVar2;
  piVar3 = param_4;
  piVar4 = param_3 + 2;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_100894d0(&param_3);
  return 0;
}


/* END FUNCTION 0x10089cb0 */
