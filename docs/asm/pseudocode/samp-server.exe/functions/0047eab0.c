/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047eab0
 * Name: FUN_0047eab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __fastcall FUN_0047eab0(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 unaff_EBX;
  float fVar3;
  int iVar4;
  float10 fVar5;
  ulonglong uVar6;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  undefined4 local_234 [69];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b16c6;
  local_c = ExceptionList;
  uVar1 = *(ushort *)(param_4 + 4);
  if ((uVar1 < 1000) &&
     (param_2 = (uint)uVar1, *(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + param_2 * 4) != 0)
     ) {
    uVar2 = *(ushort *)(param_4 + 8);
    fVar3 = (float)CONCAT22((short)((uint)unaff_EBX >> 0x10),uVar2);
    if ((uVar2 < 2000) && (uVar1 < 1000)) {
      iVar4 = *(int *)(*(int *)((int)DAT_004fc438 + 0x14) +
                      ((uVar1 + 0x3e9) * 2000 + (uint)uVar2) * 4);
    }
    else {
      iVar4 = 0;
    }
    local_250 = 0.0;
    ExceptionList = &local_c;
    if (iVar4 != 0) {
      ExceptionList = &local_c;
      if ((*(byte *)(iVar4 + 0x96) & 1) != 0) {
        ExceptionList = &local_c;
        *(byte *)(iVar4 + 0x96) = *(byte *)(iVar4 + 0x96) & 0xfe;
        FUN_0044d8a0(local_120);
        local_4 = 0;
        local_250 = fVar3;
        FUN_0044df40(local_120,(byte *)&local_250,0x10,'\x01');
        FUN_00493c10(DAT_004fc438,&DAT_004be95c,local_120,uVar1,2);
        local_4 = 0xffffffff;
        FUN_0044d9b0((int)local_120);
      }
      FUN_0044d8a0(local_234);
      local_244 = *(float *)(param_4 + 0x24);
      local_23c = *(float *)(param_4 + 0x10);
      local_250 = *(float *)(param_4 + 0xc);
      local_240 = *(float *)(param_4 + 0x14);
      local_24c = *(float *)(param_4 + 0x1c);
      local_238 = *(float *)(param_4 + 0x18);
      local_248 = *(float *)(param_4 + 0x20);
      local_4 = 1;
      if (local_24c < -999.0) {
        local_24c = *(float *)(iVar4 + 0x4a);
      }
      if (local_248 < -999.0) {
        local_248 = *(float *)(iVar4 + 0x4e);
      }
      if (local_244 < -999.0) {
        local_244 = *(float *)(iVar4 + 0x52);
      }
      local_254 = fVar3;
      FUN_0044df40(local_234,(byte *)&local_254,0x10,'\x01');
      local_254 = *(float *)(iVar4 + 0x3a);
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = *(float *)(iVar4 + 0x3e);
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = *(float *)(iVar4 + 0x42);
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = local_250;
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = local_23c;
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = local_240;
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = local_238;
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = local_24c;
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = local_248;
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      local_254 = local_244;
      FUN_0044df40(local_234,(byte *)&local_254,0x20,'\x01');
      FUN_00493c10(DAT_004fc438,&DAT_004be958,local_234,uVar1,2);
      fVar5 = FUN_0049d910(iVar4,local_250,local_23c,local_240,local_238,local_24c,local_248,
                           local_244);
      local_250 = (float)fVar5;
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_234);
    }
    uVar6 = FUN_004a0540();
    ExceptionList = local_c;
    return uVar6;
  }
  return (ulonglong)param_2 << 0x20;
}


/* END FUNCTION 0x0047eab0 */
