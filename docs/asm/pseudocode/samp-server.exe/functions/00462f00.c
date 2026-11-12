/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462f00
 * Name: FUN_00462f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00462f00(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b128b;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar3) {
    if (iVar3 == 0) {
      ExceptionList = &local_c;
      *(undefined4 *)((int)this + 8) = 0x10;
    }
    else {
      ExceptionList = &local_c;
      *(int *)((int)this + 8) = iVar3 * 2;
    }
    iVar3 = *(int *)((int)this + 8);
    puVar2 = operator_new(iVar3 * 8);
    local_4 = 0;
    puVar4 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0044e8e0(puVar2,8,iVar3,&LAB_0045b730);
      puVar4 = puVar2;
    }
    puVar2 = *(undefined4 **)this;
    puVar5 = puVar4;
    for (iVar3 = (*(uint *)((int)this + 4) & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    local_4 = 0xffffffff;
    _free(*(void **)this);
    *(undefined4 **)this = puVar4;
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + iVar3 * 8) = param_1;
  *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00462f00 */
