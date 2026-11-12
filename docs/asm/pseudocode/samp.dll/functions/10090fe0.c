/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10090fe0
 * Name: FUN_10090fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10090fe0(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *local_8;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 0x204);
  uVar4 = 0;
  local_8 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    uVar2 = (**(code **)(iVar3 + 0x24))(piVar1,param_3,param_2,&local_8);
    iVar3 = (**(code **)(iVar3 + 0x2c))(*(undefined4 *)(param_1 + 0x204),uVar2);
    if (iVar3 < 0) {
      return 0x80004005;
    }
  }
  piVar1 = *(int **)(param_1 + 0x208);
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    uVar2 = (**(code **)(iVar3 + 0x24))(piVar1,param_3,param_2,&local_4);
    iVar3 = (**(code **)(iVar3 + 0x2c))(*(undefined4 *)(param_1 + 0x208),uVar2);
    if (iVar3 < 0) {
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      return 0x80004005;
    }
  }
  piVar1 = *(int **)(param_1 + 0x204);
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x204);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x208);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  if (local_8 != (int *)0x0) {
    *(int **)(param_1 + 0x204) = local_8;
  }
  if (local_4 != 0) {
    *(int *)(param_1 + 0x208) = local_4;
  }
  if (((uVar4 & 0x10) == 0) && ((param_3 & 0x10) != 0)) {
    if (*(int *)(param_1 + 0x204) != 0) {
      D3DXComputeNormals(*(int *)(param_1 + 0x204),0);
    }
    if (*(int *)(param_1 + 0x208) != 0) {
      D3DXComputeNormals(*(int *)(param_1 + 0x208),0);
    }
  }
  return 0;
}


/* END FUNCTION 0x10090fe0 */
