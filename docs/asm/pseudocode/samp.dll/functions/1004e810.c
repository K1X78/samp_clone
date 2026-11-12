/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004e810
 * Name: FUN_1004e810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004e810(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115816;
  local_c = ExceptionList;
  if (param_1[3] != 0) {
    if (param_1[1] == 0) {
      ExceptionList = &local_c;
      param_1[1] = param_1[3] + -1;
    }
    else {
      ExceptionList = &local_c;
      param_1[1] = param_1[1] + -1;
    }
    uVar4 = 0;
    if (param_3 != 0) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (param_1[1] + uVar4) * 7);
        *puVar1 = *(undefined4 *)((int)puVar1 + 7);
        *(undefined2 *)(puVar1 + 1) = *(undefined2 *)((int)puVar1 + 0xb);
        uVar4 = uVar4 + 1;
        *(undefined1 *)((int)puVar1 + 6) = *(undefined1 *)((int)puVar1 + 0xd);
      } while (uVar4 < param_3);
    }
    puVar1 = (undefined4 *)((param_1[1] + uVar4) * 7 + *param_1);
    *puVar1 = *param_2;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined1 *)((int)puVar1 + 6) = *(undefined1 *)((int)param_2 + 6);
    if (param_1[2] == param_1[1]) {
      iVar7 = param_1[3] * 2;
      piVar3 = operator_new(param_1[3] * 0xe + 4);
      local_4 = 1;
      if (piVar3 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = piVar3 + 1;
        *piVar3 = iVar7;
        _eh_vector_constructor_iterator_(piVar6,7,iVar7,FUN_10020540,FUN_10020550);
      }
      uVar4 = 0;
      local_4 = 0xffffffff;
      if (param_1[3] != 0) {
        puVar5 = (undefined1 *)((int)piVar6 + 6);
        do {
          puVar1 = (undefined4 *)(((param_1[1] + uVar4) % (uint)param_1[3]) * 7 + *param_1);
          *(undefined4 *)(puVar5 + -6) = *puVar1;
          *(undefined2 *)(puVar5 + -2) = *(undefined2 *)(puVar1 + 1);
          *puVar5 = *(undefined1 *)((int)puVar1 + 6);
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 7;
        } while (uVar4 < (uint)param_1[3]);
      }
      param_1[2] = param_1[3];
      param_1[3] = param_1[3] * 2;
      iVar7 = *param_1;
      param_1[1] = 0;
      if (iVar7 != 0) {
        _eh_vector_destructor_iterator_(iVar7,7,*(undefined4 *)(iVar7 + -4),FUN_10020550);
        _free((void *)(iVar7 + -4));
      }
      *param_1 = (int)piVar6;
    }
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x74);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x10;
    _eh_vector_constructor_iterator_(puVar2,7,0x10,FUN_10020540,FUN_10020550);
  }
  *param_1 = (int)puVar2;
  param_1[1] = 0;
  param_1[2] = 1;
  *puVar2 = *param_2;
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((int)puVar2 + 6) = *(undefined1 *)((int)param_2 + 6);
  param_1[3] = 0x10;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004e810 */
