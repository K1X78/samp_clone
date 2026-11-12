/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00485950
 * Name: FUN_00485950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00485950(void *this,int param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x3028) = param_1;
  *(undefined4 *)((int)this + 0x2fa6) = 0;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  if (param_1 == 0) {
    uVar1 = *(ushort *)((int)this + 0x2d53);
    puVar2 = &DAT_004b6c80;
  }
  else {
    local_124 = *(undefined4 *)((int)this + 0x2f96);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    local_124 = *(undefined4 *)((int)this + 0x2f9a);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    local_124 = *(undefined4 *)((int)this + 0x2f9e);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    local_124 = *(undefined4 *)((int)this + 0x2fa2);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    uVar1 = *(ushort *)((int)this + 0x2d53);
    puVar2 = &DAT_004bef5c;
  }
  FUN_00493c10(DAT_004fc438,puVar2,local_120,uVar1,2);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00485950 */
