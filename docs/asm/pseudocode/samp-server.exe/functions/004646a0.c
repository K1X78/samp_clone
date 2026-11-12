/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004646a0
 * Name: FUN_004646a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004646a0(void *this,ushort param_1,ushort param_2)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  ushort local_140;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined4 local_136;
  undefined4 local_132;
  undefined4 local_12e;
  undefined4 local_12a;
  undefined4 local_126;
  undefined1 local_122;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b13cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  if ((param_1 < 1000) && (uVar2 = (uint)param_1, *(int *)((int)this + uVar2 * 4 + 4000) != 0)) {
    iVar1 = *(int *)((int)this + uVar2 * 4 + 8000);
    local_140 = param_1;
    local_13e = *(undefined4 *)(iVar1 + 1);
    local_13a = *(undefined4 *)(iVar1 + 5);
    local_136 = *(undefined4 *)(iVar1 + 0xbc);
    local_132 = *(undefined4 *)(iVar1 + 0xc0);
    local_12e = *(undefined4 *)(iVar1 + 0xc4);
    local_12a = *(undefined4 *)(iVar1 + 0xb8);
    local_126 = *(undefined4 *)(iVar1 + 0xb0);
    local_122 = *(undefined1 *)(iVar1 + 0xd4);
    FUN_0044dff0(local_120,(byte *)&local_140,0x1f);
    FUN_00493c10(DAT_004fc438,&DAT_004bb248,local_120,param_2,2);
    this_00 = *(void **)((int)this + uVar2 * 4 + 8000);
    if (*(char *)((int)this_00 + 0x21) != '\0') {
      FUN_0048f420(this_00,param_2,(byte *)((int)this_00 + 0x22));
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  else {
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004646a0 */
