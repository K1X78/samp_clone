/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100280a0
 * Name: FUN_100280a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100280a0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011443b;
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
    piVar1 = operator_new(iVar3 * 0x24 + 4);
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      piVar4 = piVar1 + 1;
      *piVar1 = iVar3;
      _eh_vector_constructor_iterator_(piVar4,0x24,iVar3,&LAB_10026ef0,&DAT_10026f00);
    }
    piVar1 = (int *)*param_1;
    piVar5 = piVar4;
    for (uVar2 = param_1[1] * 9 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
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
      _eh_vector_destructor_iterator_(iVar3,0x24,*(undefined4 *)(iVar3 + -4),&DAT_10026f00);
      _free((void *)(iVar3 + -4));
    }
    *param_1 = (int)piVar4;
  }
  puVar6 = (undefined4 *)(*param_1 + param_1[1] * 0x24);
  for (iVar3 = 9; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar3 != 0;
      iVar3 = iVar3 + -1) {
    *puVar6 = *(undefined4 *)register0x00000010;
    puVar6 = puVar6 + 1;
  }
  param_1[1] = param_1[1] + 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100280a0 */
