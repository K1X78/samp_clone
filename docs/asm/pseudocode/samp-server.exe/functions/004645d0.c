/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004645d0
 * Name: FUN_004645d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __thiscall FUN_004645d0(void *this,int param_1,undefined4 *param_2,undefined4 param_3)

{
  void *this_00;
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b13ab;
  local_c = ExceptionList;
  uVar3 = 0;
  while (*(int *)((int)this + (uint)uVar3 * 4 + 4000) != 0) {
    uVar3 = uVar3 + 1;
    if (uVar3 == 1000) {
      return 0xffff;
    }
  }
  if (uVar3 == 1000) {
    return 0xffff;
  }
  ExceptionList = &local_c;
  this_00 = operator_new(0xd7);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_0048f1a0(this_00,param_1,param_2,param_3);
  }
  uVar2 = (uint)uVar3;
  *(undefined1 **)((int)this + uVar2 * 4 + 8000) = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    ExceptionList = local_c;
    return 0xffff;
  }
  *(ushort *)(puVar1 + 0xd5) = uVar3;
  *(undefined4 *)((int)this + uVar2 * 4 + 4000) = 1;
  *(undefined4 *)((int)this + uVar2 * 4) = 0;
  FUN_00464540((int)this);
  ExceptionList = local_c;
  return uVar3;
}


/* END FUNCTION 0x004645d0 */
