/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00485a80
 * Name: FUN_00485a80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00485a80(void *this,int param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 local_128;
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x302c) = param_1;
  *(undefined4 *)((int)this + 0x2fc7) = 0;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  if (param_1 == 0) {
    uVar1 = *(ushort *)((int)this + 0x2d53);
    puVar2 = &DAT_004b7ec4;
  }
  else {
    local_124[0] = *(byte *)((int)this + 0x2fc2);
    FUN_0044df40(local_120,local_124,8,'\x01');
    local_128 = *(undefined4 *)((int)this + 0x2faa);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(undefined4 *)((int)this + 0x2fae);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(undefined4 *)((int)this + 0x2fb2);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(undefined4 *)((int)this + 0x2fb6);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(undefined4 *)((int)this + 0x2fba);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(undefined4 *)((int)this + 0x2fbe);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(undefined4 *)((int)this + 0x2fc3);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    uVar1 = *(ushort *)((int)this + 0x2d53);
    puVar2 = &DAT_004bef60;
  }
  FUN_00493c10(DAT_004fc438,puVar2,local_120,uVar1,2);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00485a80 */
