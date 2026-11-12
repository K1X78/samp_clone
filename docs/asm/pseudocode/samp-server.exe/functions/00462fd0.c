/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462fd0
 * Name: FUN_00462fd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00462fd0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  void *_Src;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b128b;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 8);
  ExceptionList = &local_c;
  if (*(int *)((int)this + 4) == iVar2) {
    if (iVar2 == 0) {
      ExceptionList = &local_c;
      *(undefined4 *)((int)this + 8) = 0x10;
    }
    else {
      ExceptionList = &local_c;
      *(int *)((int)this + 8) = iVar2 * 2;
    }
    iVar2 = *(int *)((int)this + 8);
    puVar1 = operator_new(iVar2 * 8);
    local_4 = 0;
    puVar3 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0044e8e0(puVar1,8,iVar2,&LAB_0045b730);
      puVar3 = puVar1;
    }
    puVar1 = *(undefined4 **)this;
    puVar4 = puVar3;
    for (iVar2 = (*(uint *)((int)this + 4) & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    local_4 = 0xffffffff;
    _free(*(void **)this);
    *(undefined4 **)this = puVar3;
  }
  _Src = (void *)(*(int *)this + param_3 * 8);
  _memmove((void *)((int)_Src + 8),_Src,(*(int *)((int)this + 4) - param_3) * 8);
  iVar2 = *(int *)this;
  *(undefined4 *)(iVar2 + param_3 * 8) = param_1;
  *(undefined4 *)(iVar2 + 4 + param_3 * 8) = param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00462fd0 */
