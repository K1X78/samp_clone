/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496ce0
 * Name: FUN_00496ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00496ce0(void *this,ushort param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  byte local_128 [4];
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1bab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  uVar2 = 0;
  local_4 = 0;
  if (*(int *)((int)this + 0x109) != 0) {
    bVar3 = *(int *)((int)this + 0x109) != 0;
    do {
      if (bVar3) {
        pbVar1 = *(byte **)(*(int *)((int)this + 0x105) + uVar2 * 4);
      }
      else {
        pbVar1 = (byte *)0x0;
      }
      local_124 = uVar2;
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_124 = *(uint *)((int)this + 0x109);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_128[0] = *pbVar1;
      FUN_0044df40(local_120,local_128,8,'\x01');
      local_124 = *(uint *)(pbVar1 + 1);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_124 = *(uint *)(pbVar1 + 5);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_124 = *(uint *)(pbVar1 + 9);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_124 = *(uint *)(pbVar1 + 0x217);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_124 = *(uint *)(pbVar1 + 0x21b);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_124 = *(uint *)(pbVar1 + 0x21f);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_124 = *(uint *)(pbVar1 + 0x223);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      local_128[0] = pbVar1[0x227];
      FUN_0044df40(local_120,local_128,8,'\x01');
      local_128[0] = pbVar1[0x228];
      FUN_0044df40(local_120,local_128,8,'\x01');
      if (DAT_004fc438 != (void *)0x0) {
        FUN_00493c10(DAT_004fc438,&DAT_004c006c,local_120,param_1,2);
      }
      FUN_0044d9d0(local_120);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)((int)this + 0x109);
    } while (uVar2 != *(uint *)((int)this + 0x109));
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00496ce0 */
