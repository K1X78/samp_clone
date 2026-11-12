/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004935f0
 * Name: FUN_004935f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004935f0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1ab3;
  local_c = ExceptionList;
  puVar3 = *(undefined4 **)((int)this + 8);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x86) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    pvVar1 = operator_new(0x30d58);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)((int)this + 8) = 0;
    }
    else {
      iVar2 = FUN_00465cb0((int)pvVar1);
      *(int *)((int)this + 8) = iVar2;
    }
  }
  else {
    puVar5 = puVar3 + 0x4e5;
    for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = puVar3 + 0x8cd;
    for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  local_4 = 0xffffffff;
  if (*(int *)((int)this + 0xc) == 0) {
    puVar3 = operator_new(0x5e98);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    else {
      puVar3 = FUN_004674f0(puVar3);
      *(undefined4 **)((int)this + 0xc) = puVar3;
    }
  }
  local_4 = 0xffffffff;
  if (*(int *)((int)this + 0x10) == 0) {
    pvVar1 = operator_new(0x1c004);
    if (pvVar1 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00493310((int)pvVar1);
    }
    *(undefined4 *)((int)this + 0x10) = uVar4;
  }
  if (*(int *)((int)this + 0x14) == 0) {
    pvVar1 = operator_new(0xf481c0);
    local_4 = 2;
    if (pvVar1 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00465320((int)pvVar1);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)((int)this + 0x14) = uVar4;
  }
  if (*(int *)((int)this + 0x18) == 0) {
    puVar3 = operator_new(0x7e8);
    local_4 = 3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00465160(puVar3);
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x18) = puVar3;
  }
  if (*(int *)((int)this + 0x1c) == 0) {
    pvVar1 = operator_new(0x1fa000);
    local_4 = 4;
    if (pvVar1 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00466b80((int)pvVar1);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)((int)this + 0x1c) = uVar4;
  }
  if (*(int *)((int)this + 0x24) == 0) {
    pvVar1 = operator_new(0x5000);
    local_4 = 5;
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00464950((int)pvVar1);
    }
    local_4 = 0xffffffff;
    *(int *)((int)this + 0x24) = iVar2;
  }
  if (*(int *)((int)this + 0x20) == 0) {
    puVar3 = operator_new(0x9400);
    local_4 = 6;
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00463de0(puVar3);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)((int)this + 0x20) = uVar4;
  }
  if (*(int *)((int)this + 0x28) == 0) {
    pvVar1 = operator_new(0x2ee4);
    local_4 = 7;
    if (pvVar1 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004645a0((int)pvVar1);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)((int)this + 0x28) = uVar4;
  }
  if (*(int *)this == 0) {
    pvVar1 = operator_new(0x6e);
    local_4 = 8;
    if (pvVar1 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0046da80((int)pvVar1);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)this = uVar4;
  }
  *(undefined4 *)((int)this + 0x6e) = 0x461c4000;
  *(undefined4 *)((int)this + 0x7a) = 0x461c4000;
  *(undefined1 *)((int)this + 0x58) = 1;
  *(undefined4 *)((int)this + 0x54) = 1;
  *(undefined1 *)((int)this + 0x77) = 1;
  *(undefined1 *)((int)this + 0x6d) = 0;
  *(undefined1 *)((int)this + 0x59) = 0xc;
  *(undefined1 *)((int)this + 0x5d) = 1;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x79) = 0;
  *(undefined4 *)((int)this + 0x72) = 0x428c0000;
  *(undefined1 *)((int)this + 0x76) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  if (param_1 != 0) {
    FUN_004933b0((int)this);
  }
  FUN_0046f910(*(void **)this,&DAT_0051c080);
  FUN_00467690(*(int *)((int)this + 0xc));
  FUN_00491fa0("Number of vehicle models: %d");
  *(undefined4 *)((int)this + 0x5e) = 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004935f0 */
