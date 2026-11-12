/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049dfc0
 * Name: FUN_0049dfc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0049dfc0(void *this,ushort param_1)

{
  int iVar1;
  uint local_128;
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1d1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_128 = (uint)*(ushort *)this;
  iVar1 = 0;
  local_4 = 0;
  FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
  local_128 = *(uint *)((int)this + 2);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x3a);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x3e);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x42);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x4a);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x4e);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0x52);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = *(uint *)((int)this + 0xa0);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_124[0] = *(byte *)((int)this + 0x97);
  FUN_0044df40(local_120,local_124,8,'\x01');
  local_128 = (uint)*(ushort *)((int)this + 0xa4);
  FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
  local_128 = (uint)*(ushort *)((int)this + 0xa6);
  FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
  if ((*(short *)((int)this + 0xa4) != -1) || (*(short *)((int)this + 0xa6) != -1)) {
    local_128 = *(uint *)((int)this + 0xa8);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + 0xac);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + 0xb0);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + 0xb4);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + 0xb8);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + 0xbc);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_124[0] = *(byte *)((int)this + 0xc0);
    FUN_0044df40(local_120,local_124,8,'\x01');
  }
  local_124[0] = *(byte *)((int)this + 0xc1);
  FUN_0044df40(local_120,local_124,8,'\x01');
  if (0 < *(int *)((int)this + 0xc1)) {
    do {
      FUN_0049dd70(this,iVar1,local_120);
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int *)((int)this + 0xc1));
  }
  FUN_00493c10(DAT_004fc438,&DAT_004b7050,local_120,param_1,2);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0049dfc0 */
