/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004877e0
 * Name: FUN_004877e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004877e0(void *this,ushort param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_128;
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_128 = (uint)*(ushort *)((int)this + 0x2d53);
  uVar2 = 0;
  local_4 = 0;
  FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
  local_124[0] = *(byte *)((int)this + 0x2fe9);
  FUN_0044df40(local_120,local_124,8,'\x01');
  local_128 = *(uint *)((int)this + 0x2fea);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x2fee);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x2cfd);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x2d01);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x2d05);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x2d21);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x3024);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_124[0] = *(byte *)((int)this + 0x3020);
  FUN_0044df40(local_120,local_124,8,'\x01');
  FUN_0044dff0(local_120,(byte *)((int)this + 0x2fcf),0x16);
  FUN_00493c10(DAT_004fc438,&DAT_004b6340,local_120,param_1,2);
  piVar1 = (int *)((int)this + 0x2f61);
  do {
    if (*piVar1 != 0) {
      FUN_00486390(this,param_1,uVar2);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 10);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004877e0 */
