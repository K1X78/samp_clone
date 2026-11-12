/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f2d0
 * Name: FUN_1004f2d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004f2d0(int *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101158b3;
  local_c = ExceptionList;
  iVar1 = param_1[2];
  piVar5 = (int *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_1[1] == iVar1) {
    if (iVar1 == 0) {
      ExceptionList = &local_c;
      param_1[2] = 0x10;
    }
    else {
      ExceptionList = &local_c;
      param_1[2] = iVar1 * 2;
    }
    iVar1 = param_1[2];
    piVar2 = operator_new(iVar1 * 9 + 4);
    local_4._0_1_ = 1;
    if (piVar2 != (int *)0x0) {
      piVar5 = piVar2 + 1;
      *piVar2 = iVar1;
      _eh_vector_constructor_iterator_(piVar5,9,iVar1,FUN_1004edd0,FUN_1004eb60);
    }
    iVar1 = param_1[1];
    piVar2 = (int *)*param_1;
    piVar6 = piVar5;
    for (uVar4 = (uint)(iVar1 * 9) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar6 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar6 = piVar6 + 1;
    }
    for (uVar4 = iVar1 * 9 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)piVar6 = (char)*piVar2;
      piVar2 = (int *)((int)piVar2 + 1);
      piVar6 = (int *)((int)piVar6 + 1);
    }
    iVar1 = *param_1;
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar1 != 0) {
      _eh_vector_destructor_iterator_(iVar1,9,*(undefined4 *)(iVar1 + -4),FUN_1004eb60);
      _free((void *)(iVar1 + -4));
    }
    *param_1 = (int)piVar5;
  }
  puVar3 = (undefined2 *)(param_1[1] * 9 + *param_1);
  *puVar3 = (undefined2)param_2;
  *(undefined4 *)(puVar3 + 1) = param_2._2_4_;
  puVar3[3] = param_2._6_2_;
  *(undefined1 *)(puVar3 + 4) = param_3;
  param_1[1] = param_1[1] + 1;
  local_4 = 0xffffffff;
  FUN_10020550();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004f2d0 */
