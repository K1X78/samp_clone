/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006e4e0
 * Name: FUN_1006e4e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006e4e0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011616b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x34) = param_2;
  if (param_2 != 0) {
    uVar2 = FUN_100f9324();
    uVar3 = FUN_100f9324();
    *(undefined4 *)(param_2 + 0x11e) = uVar3;
    *(undefined4 *)(param_2 + 0x122) = uVar2;
    pvVar4 = operator_new(0x158);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1008e810(*(undefined4 *)(param_1 + 0x34));
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    FUN_1008c140(uVar2);
    iVar5 = FUN_100f9324();
    piVar1 = *(int **)(param_1 + 0x38);
    piVar1[2] = 0;
    piVar1[3] = iVar5;
    (**(code **)(*piVar1 + 0x4c))();
    iVar5 = FUN_100f9324();
    piVar1 = *(int **)(param_1 + 0x38);
    iVar6 = FUN_100f9324();
    piVar1[4] = iVar6;
    piVar1[5] = iVar5;
    (**(code **)(*piVar1 + 0x4c))();
    (**(code **)(**(int **)(param_1 + 0x38) + 4))();
    FUN_10085e90(0xc8ffffff,0xc8808080,0);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x4d) = 3;
    uVar2 = FUN_100f9324();
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x51) = uVar2;
    uVar2 = FUN_100f9324();
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x59) = uVar2;
    uVar2 = FUN_100f9324();
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x55) = uVar2;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x38))(0);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x40))(0);
    FUN_1006e360();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1006e4e0 */
