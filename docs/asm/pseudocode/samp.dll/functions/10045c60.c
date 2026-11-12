/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045c60
 * Name: FUN_10045c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10045c60(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101153eb;
  local_c = ExceptionList;
  iVar3 = param_1[2];
  if (param_1[1] == iVar3) {
    piVar4 = (int *)0x0;
    if (iVar3 == 0) {
      ExceptionList = &local_c;
      param_1[2] = 0x10;
    }
    else {
      ExceptionList = &local_c;
      param_1[2] = iVar3 * 2;
    }
    iVar3 = param_1[2];
    piVar1 = operator_new(iVar3 * 4 + 4);
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      piVar4 = piVar1 + 1;
      *piVar1 = iVar3;
      _eh_vector_constructor_iterator_(piVar4,4,iVar3,&LAB_10044360,&DAT_10044370);
    }
    piVar1 = (int *)*param_1;
    piVar5 = piVar4;
    for (uVar2 = param_1[1] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *piVar5 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar5 = piVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar5 = (char)*piVar1;
      piVar1 = (int *)((int)piVar1 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    }
    iVar3 = *param_1;
    local_4 = 0xffffffff;
    if (iVar3 != 0) {
      _eh_vector_destructor_iterator_(iVar3,4,*(undefined4 *)(iVar3 + -4),&DAT_10044370);
      _free((void *)(iVar3 + -4));
    }
    *param_1 = (int)piVar4;
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = param_2;
  param_1[1] = param_1[1] + 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10045c60 */
