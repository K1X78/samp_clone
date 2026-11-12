/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489e00
 * Name: FUN_00489e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00489e00(void *this,ushort param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)

{
  void *this_00;
  byte local_128 [4];
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b18bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xaa) = param_3;
  *(undefined4 *)((int)this + 0xae) = param_2;
  *(undefined1 *)((int)this + 0xb2) = param_4;
  *(undefined1 *)((int)this + 0xb3) = param_5;
  FUN_0044d8a0(local_120);
  local_124 = (uint)*(ushort *)((int)this + 100);
  local_4 = 0;
  FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  local_124 = *(uint *)((int)this + 0xae);
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_124 = *(uint *)((int)this + 0xaa);
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_128[0] = *(byte *)((int)this + 0xb2);
  FUN_0044df40(local_120,local_128,8,'\x01');
  local_128[0] = *(byte *)((int)this + 0xb3);
  FUN_0044df40(local_120,local_128,8,'\x01');
  if (param_1 != 0xffff) {
    this_00 = (void *)*DAT_004fc438;
    if ((this_00 != (void *)0x0) && ((void *)DAT_004fc438[1] != (void *)0x0)) {
      FUN_0046c640((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 100),(uint)param_1);
      FUN_0046f150(this_00,(uint)*(ushort *)((int)this + 100),(uint)param_1);
    }
  }
  FUN_00493b20(DAT_004fc438,&DAT_004bf134,local_120,(uint)*(ushort *)((int)this + 100),param_1);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00489e00 */
