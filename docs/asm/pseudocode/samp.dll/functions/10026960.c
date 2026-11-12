/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026960
 * Name: FUN_10026960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10026960(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  iVar1 = param_1;
  if (*param_2 == 0) {
    FUN_100264d0(&param_1);
    return;
  }
  if (param_2[1] != 0) {
    param_2[2] = param_2[1];
  }
  iVar3 = 0;
  if (*(uint *)(*(int *)param_2[2] + 1) < *(uint *)(param_1 + 1)) {
    do {
      FUN_100266a0();
      iVar3 = iVar3 + 1;
      if (iVar3 == *piVar2) {
        if (piVar2[1] != 0) {
          piVar2[2] = *(int *)(piVar2[1] + 4);
        }
        FUN_100265a0(&param_1);
        return;
      }
    } while (*(uint *)(*(int *)piVar2[2] + 1) < *(uint *)(iVar1 + 1));
  }
  FUN_100264d0(&param_1);
  return;
}


/* END FUNCTION 0x10026960 */
