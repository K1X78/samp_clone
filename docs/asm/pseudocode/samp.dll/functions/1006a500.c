/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a500
 * Name: FUN_1006a500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006a500(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011608b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x28) = param_2;
  if (param_2 != 0) {
    pvVar3 = operator_new(0x158);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1008e810(*(undefined4 *)(param_1 + 0x28));
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    FUN_1008c140(uVar4);
    piVar1 = *(int **)(param_1 + 0x2c);
    piVar1[2] = 2;
    piVar1[3] = 2;
    (**(code **)(*piVar1 + 0x4c))();
    piVar1 = *(int **)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x14);
    piVar1[5] = *(int *)(param_1 + 0x18) + -0x23;
    piVar1[4] = iVar2 + -4;
    (**(code **)(*piVar1 + 0x4c))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
    FUN_10085e90(0xc8ffffff,0xc8808080,0);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x38))(0);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(0);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x4d) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x51) = *(undefined4 *)(param_1 + 0x23c);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x55) = *(undefined4 *)(param_1 + 0x240);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1006a500 */
