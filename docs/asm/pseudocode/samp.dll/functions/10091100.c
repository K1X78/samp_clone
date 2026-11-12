/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10091100
 * Name: FUN_10091100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10091100(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *local_420;
  int local_41c;
  undefined1 auStack_418 [6];
  char acStack_412 [514];
  undefined1 auStack_210 [6];
  char acStack_20a [518];
  
  piVar1 = *(int **)(param_1 + 0x204);
  local_420 = (int *)0x0;
  local_41c = 0;
  if (piVar1 != (int *)0x0) {
    iVar5 = *piVar1;
    uVar4 = (**(code **)(iVar5 + 0x24))(piVar1,param_3,param_2,&local_420);
    iVar5 = (**(code **)(iVar5 + 0x30))(*(undefined4 *)(param_1 + 0x204),uVar4);
    if (iVar5 < 0) {
      return 0x80004005;
    }
  }
  piVar1 = *(int **)(param_1 + 0x208);
  if (piVar1 != (int *)0x0) {
    iVar5 = *piVar1;
    uVar4 = (**(code **)(iVar5 + 0x24))(piVar1,param_3,param_2,&local_41c);
    iVar5 = (**(code **)(iVar5 + 0x30))(*(undefined4 *)(param_1 + 0x208),uVar4);
    if (iVar5 < 0) {
      if (local_420 != (int *)0x0) {
        (**(code **)(*local_420 + 8))(local_420);
      }
      return 0x80004005;
    }
  }
  piVar1 = *(int **)(param_1 + 0x204);
  bVar2 = false;
  if ((piVar1 != (int *)0x0) &&
     (iVar5 = (**(code **)(*piVar1 + 0x1c))(piVar1,auStack_418), -1 < iVar5)) {
    uVar7 = 0;
    iVar5 = D3DXGetDeclLength(auStack_418);
    if (iVar5 != 0) {
      do {
        if (acStack_412[uVar7 * 8] == '\x03') {
          bVar2 = true;
          break;
        }
        uVar7 = uVar7 + 1;
        uVar6 = D3DXGetDeclLength(auStack_418);
      } while (uVar7 < uVar6);
    }
  }
  bVar3 = false;
  if (((local_420 != (int *)0x0) &&
      (iVar5 = (**(code **)(*local_420 + 0x1c))(local_420,auStack_210), -1 < iVar5)) &&
     (iVar5 = D3DXGetDeclLength(auStack_210), iVar5 != 0)) {
    uVar7 = 0;
    do {
      if (acStack_20a[uVar7 * 8] == '\x03') {
        bVar3 = true;
        break;
      }
      uVar7 = uVar7 + 1;
      uVar6 = D3DXGetDeclLength(auStack_210);
    } while (uVar7 < uVar6);
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
  if (((local_420 != (int *)0x0) && (*(int **)(param_1 + 0x204) = local_420, !bVar2)) && (bVar3)) {
    D3DXComputeNormals(local_420,0);
  }
  if (((local_41c != 0) && (*(int *)(param_1 + 0x208) = local_41c, !bVar2)) && (bVar3)) {
    D3DXComputeNormals(local_41c,0);
  }
  return 0;
}


/* END FUNCTION 0x10091100 */
