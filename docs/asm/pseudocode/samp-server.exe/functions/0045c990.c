/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c990
 * Name: FUN_0045c990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045c990(void *this,undefined4 param_1)

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
  puStack_8 = &LAB_004b10db;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar3) {
    piVar4 = (int *)0x0;
    if (iVar3 == 0) {
      ExceptionList = &local_c;
      *(undefined4 *)((int)this + 8) = 0x10;
    }
    else {
      ExceptionList = &local_c;
      *(int *)((int)this + 8) = iVar3 * 2;
    }
    iVar3 = *(int *)((int)this + 8);
    piVar1 = operator_new(iVar3 * 4 + 4);
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      piVar4 = piVar1 + 1;
      *piVar1 = iVar3;
      _eh_vector_constructor_iterator_(piVar4,4,iVar3,&LAB_0045b730);
    }
    piVar1 = *(int **)this;
    piVar5 = piVar4;
    for (uVar2 = *(uint *)((int)this + 4) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *piVar5 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar5 = piVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar5 = (char)*piVar1;
      piVar1 = (int *)((int)piVar1 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    }
    iVar3 = *(int *)this;
    local_4 = 0xffffffff;
    if (iVar3 != 0) {
      _eh_vector_destructor_iterator_(iVar3,4,*(int *)(iVar3 + -4),FUN_0044e1b0);
      _free((void *)(iVar3 + -4));
    }
    *(int **)this = piVar4;
  }
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0045c990 */
