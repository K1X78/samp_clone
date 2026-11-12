/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047de70
 * Name: FUN_0047de70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __fastcall FUN_0047de70(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  undefined4 unaff_EBX;
  float fVar2;
  int iVar3;
  float10 fVar4;
  ulonglong uVar5;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  undefined4 auStack_234 [69];
  undefined4 auStack_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b16c6;
  local_c = ExceptionList;
  if (*(int *)((int)DAT_004fc438 + 0x14) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar1 = *(ushort *)(param_4 + 4);
  fVar2 = (float)CONCAT22((short)((uint)unaff_EBX >> 0x10),uVar1);
  if (uVar1 < 2000) {
    iVar3 = *(int *)(*(int *)((int)DAT_004fc438 + 0x14) + 0xf46280 + (uint)uVar1 * 4);
  }
  else {
    iVar3 = 0;
  }
  fStack_250 = 0.0;
  ExceptionList = &local_c;
  if (iVar3 != 0) {
    ExceptionList = &local_c;
    if ((*(byte *)(iVar3 + 0x96) & 1) != 0) {
      ExceptionList = &local_c;
      *(byte *)(iVar3 + 0x96) = *(byte *)(iVar3 + 0x96) & 0xfe;
      FUN_0044d8a0(auStack_120);
      uStack_4 = 0;
      fStack_250 = fVar2;
      FUN_0044df40(auStack_120,(byte *)&fStack_250,0x10,'\x01');
      FUN_00493960(DAT_004fc438,&DAT_004be95c,auStack_120,0xffff);
      uStack_4 = 0xffffffff;
      FUN_0044d9b0((int)auStack_120);
    }
    FUN_0044d8a0(auStack_234);
    fStack_250 = *(float *)(param_4 + 8);
    fStack_23c = *(float *)(param_4 + 0xc);
    fStack_24c = *(float *)(param_4 + 0x10);
    fStack_244 = *(float *)(param_4 + 0x14);
    fStack_240 = *(float *)(param_4 + 0x18);
    fStack_238 = *(float *)(param_4 + 0x20);
    fStack_248 = *(float *)(param_4 + 0x1c);
    uStack_4 = 1;
    fStack_254 = fVar2;
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x10,'\x01');
    fStack_254 = *(float *)(iVar3 + 0x3a);
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = *(float *)(iVar3 + 0x3e);
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = *(float *)(iVar3 + 0x42);
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = fStack_250;
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = fStack_23c;
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = fStack_24c;
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = fStack_244;
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = fStack_240;
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = fStack_248;
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    fStack_254 = fStack_238;
    FUN_0044df40(auStack_234,(byte *)&fStack_254,0x20,'\x01');
    FUN_00493960(DAT_004fc438,&DAT_004be958,auStack_234,0xffff);
    fVar4 = FUN_0049d910(iVar3,fStack_250,fStack_23c,fStack_24c,fStack_244,fStack_240,fStack_248,
                         fStack_238);
    fStack_250 = (float)fVar4;
    uStack_4 = 0xffffffff;
    FUN_0044d9b0((int)auStack_234);
  }
  uVar5 = FUN_004a0540();
  ExceptionList = local_c;
  return uVar5;
}


/* END FUNCTION 0x0047de70 */
