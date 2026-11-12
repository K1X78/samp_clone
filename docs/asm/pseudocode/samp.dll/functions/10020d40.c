/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020d40
 * Name: FUN_10020d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10020d40(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113f46;
  local_c = ExceptionList;
  if (param_1[3] == 0) {
    ExceptionList = &local_c;
    puVar2 = operator_new(0x74);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = puVar2 + 1;
      *puVar2 = 0x10;
      _eh_vector_constructor_iterator_(puVar3,7,0x10,FUN_10020540,FUN_10020550);
    }
    param_1[1] = 0;
    *param_1 = (int)puVar3;
    param_1[2] = 1;
    *puVar3 = *param_2;
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined1 *)((int)puVar3 + 6) = *(undefined1 *)((int)param_2 + 6);
    param_1[3] = 0x10;
    ExceptionList = local_c;
    return;
  }
  puVar2 = (undefined4 *)(param_1[2] * 7 + *param_1);
  ExceptionList = &local_c;
  param_1[2] = param_1[2] + 1;
  *puVar2 = *param_2;
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((int)puVar2 + 6) = *(undefined1 *)((int)param_2 + 6);
  iVar1 = param_1[3];
  if (param_1[2] == iVar1) {
    param_1[2] = 0;
  }
  if (param_1[2] == param_1[1]) {
    piVar4 = operator_new(iVar1 * 0xe + 4);
    local_4 = 1;
    if (piVar4 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = piVar4 + 1;
      *piVar4 = iVar1 * 2;
      _eh_vector_constructor_iterator_(piVar6,7,iVar1 * 2,FUN_10020540,FUN_10020550);
    }
    uVar7 = 0;
    local_4 = 0xffffffff;
    if (param_1[3] != 0) {
      puVar5 = (undefined1 *)((int)piVar6 + 6);
      do {
        puVar2 = (undefined4 *)(((param_1[1] + uVar7) % (uint)param_1[3]) * 7 + *param_1);
        *(undefined4 *)(puVar5 + -6) = *puVar2;
        *(undefined2 *)(puVar5 + -2) = *(undefined2 *)(puVar2 + 1);
        *puVar5 = *(undefined1 *)((int)puVar2 + 6);
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 7;
      } while (uVar7 < (uint)param_1[3]);
    }
    param_1[2] = param_1[3];
    param_1[3] = param_1[3] * 2;
    iVar1 = *param_1;
    param_1[1] = 0;
    if (iVar1 != 0) {
      _eh_vector_destructor_iterator_(iVar1,7,*(undefined4 *)(iVar1 + -4),FUN_10020550);
      _free((void *)(iVar1 + -4));
    }
    *param_1 = (int)piVar6;
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10020d40 */
