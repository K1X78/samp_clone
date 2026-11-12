/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00485eb0
 * Name: FUN_00485eb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00485eb0(void *this,ushort param_1,uint param_2,uint param_3)

{
  void *this_00;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(uint *)((int)this + 0x2fcb) = (uint)(param_2 != 0);
  FUN_0044d8a0(local_120);
  local_124 = (uint)*(ushort *)((int)this + 0x2d53);
  local_4 = 0;
  FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  local_124 = 4;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_124 = (uint)param_1;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_124 = param_2;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_124 = param_3;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  this_00 = (void *)*DAT_004fc438;
  if (((void *)DAT_004fc438[1] != (void *)0x0) && (this_00 != (void *)0x0)) {
    FUN_0046bca0((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 0x2d53),param_2,param_3);
    FUN_0046e930(this_00,(uint)*(ushort *)((int)this + 0x2d53),param_2,param_3);
  }
  FUN_00493a40(DAT_004fc438,&DAT_004bef6c,local_120,*(ushort *)((int)this + 0x2d53));
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00485eb0 */
