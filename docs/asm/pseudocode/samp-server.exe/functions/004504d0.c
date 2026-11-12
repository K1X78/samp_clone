/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004504d0
 * Name: FUN_004504d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_004504d0(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 uVar3;
  void *unaff_EBX;
  int unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b0da6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(*(int *)this + 0x28))();
  if ((char)uVar1 != '\0') {
    ExceptionList = pvStack_c;
    return uVar1 & 0xffffff00;
  }
  (**(code **)(*(int *)this + 0xdc))(param_2);
  puVar2 = operator_new(0x804);
  if ((char)param_2 == '\0') {
    puStack_8 = (undefined1 *)0x1;
    if (puVar2 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)FUN_0044e1c0(puVar2);
    }
    *(void **)((int)this + 0x7e0) = this_00;
  }
  else {
    puStack_8 = (undefined1 *)0x0;
    if (puVar2 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
      *(undefined4 *)((int)this + 0x7dc) = 0;
    }
    else {
      this_00 = (void *)FUN_0044e1c0(puVar2);
      *(void **)((int)this + 0x7dc) = this_00;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  uVar3 = FUN_0044e700(this_00,unaff_retaddr);
  ExceptionList = unaff_EBX;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


/* END FUNCTION 0x004504d0 */
