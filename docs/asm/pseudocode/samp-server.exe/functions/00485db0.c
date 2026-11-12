/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00485db0
 * Name: FUN_00485db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00485db0(void *this,byte *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte local_128 [4];
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = thunk_FUN_0044e910();
  *(int *)((int)this + 0x307a) = (int)uVar2;
  *(undefined1 *)((int)this + 0x307e) = *(undefined1 *)((int)this + 0x3075);
  uVar1 = FUN_004842c0(this,(char *)param_1);
  if ((char)uVar1 != '\0') {
    FUN_0044d8a0(local_120);
    local_4 = 0;
    local_128[0] = 0xce;
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_124 = (uint)*(ushort *)((int)this + 0x2d53);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,param_1,0x28);
    FUN_00493d40(DAT_004fc438,local_120,*(ushort *)((int)this + 0x2d53),'\0');
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00485db0 */
