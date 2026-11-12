/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00492f60
 * Name: FUN_00492f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00492f60(void *this,ushort param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  byte local_128 [4];
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1a3b;
  local_c = ExceptionList;
  if (param_1 < 1000) {
    ExceptionList = &local_c;
    *(undefined4 *)((int)this + (uint)param_1 * 4 + 0x361) = 1;
    FUN_0044d8a0(local_120);
    local_128[0] = *(byte *)this;
    local_4 = 0;
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_124 = (uint)(*(char *)((int)this + 0x1351) == '\x02');
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    FUN_0044dff0(local_120,(byte *)((int)this + 1),0x20);
    local_124 = *(uint *)((int)this + 0x1341);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    local_124 = *(uint *)((int)this + 0x1345);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    local_124 = *(uint *)((int)this + 0x1349);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    if (*(char *)((int)this + 0x1351) == '\x02') {
      local_124 = *(uint *)((int)this + 0x134d);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    }
    local_124 = *(uint *)((int)this + 0x1301);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    puVar4 = (uint *)((int)this + 0x1305);
    iVar2 = 0xc;
    do {
      local_124 = *puVar4;
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_0044dff0(local_120,(byte *)((int)this + 0x321),0x20);
    bVar1 = *(byte *)((int)this + 0x1352);
    local_128[0] = bVar1;
    FUN_0044df40(local_120,local_128,8,'\x01');
    if (bVar1 != 0) {
      pbVar5 = (byte *)((int)this + 0x21);
      uVar3 = (uint)bVar1;
      do {
        FUN_0044dff0(local_120,pbVar5,0x20);
        pbVar5 = pbVar5 + 0x40;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (*(char *)((int)this + 0x1351) == '\x02') {
      FUN_0044dff0(local_120,(byte *)((int)this + 0x341),0x20);
      bVar1 = *(byte *)((int)this + 0x1353);
      local_128[0] = bVar1;
      FUN_0044df40(local_120,local_128,8,'\x01');
      if (bVar1 != 0) {
        pbVar5 = (byte *)((int)this + 0x41);
        uVar3 = (uint)bVar1;
        do {
          FUN_0044dff0(local_120,pbVar5,0x20);
          pbVar5 = pbVar5 + 0x40;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    FUN_00493c10(DAT_004fc438,&DAT_004bf9b8,local_120,param_1,2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00492f60 */
