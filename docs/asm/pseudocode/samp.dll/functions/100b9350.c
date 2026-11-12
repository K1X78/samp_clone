/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b9350
 * Name: FUN_100b9350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100b9350(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1011679b;
  local_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0xc);
  local_10 = &PTR_LAB_1011f8c8;
  ExceptionList = &local_c;
  iVar3 = D3DXLoadMeshHierarchyFromXA
                    (param_2,0x220,*(undefined4 *)(param_1 + 4),&local_10,0,piVar1,
                     (int *)(param_1 + 0x30));
  if (iVar3 < 0) {
    ExceptionList = local_c;
    return 1;
  }
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar2 + 0x10))(piVar2);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
  }
  if (*piVar1 != 0) {
    FUN_100b8c30(*piVar1,0);
    iVar3 = *(int *)(param_1 + 0x24);
    puVar5 = operator_new(iVar3 << 6);
    uStack_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_1002c8a0(puVar5,0x40,iVar3,&LAB_1006b5a0);
    }
    *(undefined4 **)(param_1 + 0x10) = puVar5;
    for (iVar3 = (*(uint *)(param_1 + 0x24) & 0x3ffffff) << 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    D3DXFrameCalculateBoundingSphere(*piVar1,param_1 + 0x14,param_1 + 0x20);
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x100b9350 */
