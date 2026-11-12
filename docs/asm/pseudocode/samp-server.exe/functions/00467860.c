/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467860
 * Name: FUN_00467860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00467860(void *this,uint param_1,ushort param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  float10 fVar7;
  byte local_264 [4];
  uint local_260;
  undefined2 local_25c;
  undefined4 local_25a;
  undefined4 local_256;
  undefined4 local_252;
  undefined4 local_24e;
  float local_24a;
  undefined1 local_246;
  undefined1 local_245;
  undefined4 local_244;
  undefined1 local_240;
  undefined4 local_23f;
  undefined4 local_23b;
  undefined1 local_237;
  undefined1 local_236;
  undefined1 local_235;
  undefined4 local_234 [69];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1531;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  iVar2 = *(int *)((int)this + (param_1 & 0xffff) * 4 + 0x3f54);
  local_4 = 0;
  if (iVar2 != 0) {
    if ((((*(float *)(iVar2 + 0x1c) == 0.0) && (*(float *)(iVar2 + 0x20) == 0.0)) ||
        (*(int *)(iVar2 + 0x82) == 0x219)) || (*(int *)(iVar2 + 0x82) == 0x21a)) {
      local_24a = *(float *)(iVar2 + 0x92);
    }
    else {
      fVar7 = (float10)fpatan(-(float10)*(float *)(iVar2 + 0x1c),(float10)*(float *)(iVar2 + 0x20));
      local_24a = (float)(fVar7 * (float10)57.295776);
      if ((float10)0.0 <= fVar7 * (float10)57.295776) {
        if (360.0 <= local_24a) {
          local_24a = local_24a - 360.0;
        }
      }
      else {
        local_24a = local_24a + 360.0;
      }
    }
    local_25c = (undefined2)param_1;
    local_25a = *(undefined4 *)(iVar2 + 0x82);
    local_256 = *(undefined4 *)(iVar2 + 0x3c);
    local_252 = *(undefined4 *)(iVar2 + 0x40);
    local_24e = *(undefined4 *)(iVar2 + 0x44);
    local_246 = *(undefined1 *)(iVar2 + 0x96);
    local_245 = *(undefined1 *)(iVar2 + 0x9a);
    local_244 = *(undefined4 *)(iVar2 + 0xa6);
    local_240 = *(undefined1 *)(iVar2 + 0xa2);
    local_23f = *(undefined4 *)(iVar2 + 0xaa);
    local_23b = *(undefined4 *)(iVar2 + 0xae);
    local_237 = *(undefined1 *)(iVar2 + 0xb2);
    local_236 = *(undefined1 *)(iVar2 + 0xb3);
    local_235 = *(undefined1 *)(iVar2 + 0x109);
    FUN_0044dff0(local_120,(byte *)&local_25c,0x28);
    FUN_0044dff0(local_120,(byte *)(iVar2 + 0xb7),0x17);
    FUN_00493c10(DAT_004fc438,&DAT_004bb334,local_120,param_2,2);
    pbVar6 = (byte *)(iVar2 + 0xce);
    pbVar4 = pbVar6;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    local_260 = (int)pbVar4 - (iVar2 + 0xcf);
    if (local_260 != 0) {
      FUN_0044d8a0(local_234);
      local_4._0_1_ = 1;
      pbVar4 = pbVar6;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      uVar5 = (int)pbVar4 - (iVar2 + 0xcf);
      local_260 = param_1;
      FUN_0044df40(local_234,(byte *)&local_260,0x10,'\x01');
      local_264[0] = (byte)uVar5;
      FUN_0044df40(local_234,local_264,8,'\x01');
      FUN_0044dff0(local_234,pbVar6,uVar5 & 0xff);
      FUN_00493c10(DAT_004fc438,&DAT_004bb330,local_234,param_2,2);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0044d9b0((int)local_234);
    }
    bVar3 = FUN_004899d0(iVar2);
    if (bVar3) {
      pbVar6 = (byte *)FUN_004899c0(iVar2);
      FUN_0044d8a0(local_234);
      local_4._0_1_ = 2;
      local_260 = param_1;
      FUN_0044df40(local_234,(byte *)&local_260,0x10,'\x01');
      FUN_0044dff0(local_234,pbVar6,0x10);
      FUN_00493c10(DAT_004fc438,&DAT_004bb32c,local_234,param_2,2);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0044d9b0((int)local_234);
    }
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00467860 */
