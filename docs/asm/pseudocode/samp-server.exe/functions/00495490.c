/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00495490
 * Name: FUN_00495490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00495490(void *this,ushort *param_1)

{
  ushort uVar1;
  void *this_00;
  uint uVar2;
  void *this_01;
  int iVar3;
  undefined4 uVar4;
  void *this_02;
  byte local_1ad;
  uint local_1ac;
  uint local_1a8;
  ushort local_1a4;
  byte bStack_1a2;
  undefined4 uStack_1a1;
  undefined4 local_19d;
  undefined4 local_199;
  undefined4 local_195;
  undefined4 local_191;
  undefined4 local_18d;
  undefined4 local_189;
  undefined4 local_185;
  undefined4 local_181;
  undefined4 local_17d [6];
  undefined4 local_165;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x5e) != 1) {
    return;
  }
  uVar1 = *param_1;
  local_1ac = (uint)uVar1;
  if (uVar1 < 1000) {
    this_02 = *(void **)(*(int *)((int)this + 8) + 0x25d84 + (uint)uVar1 * 4);
  }
  else {
    this_02 = (void *)0x0;
  }
  ExceptionList = &local_c;
  FUN_0044d930(local_120,*(undefined4 **)(param_1 + 8),*(uint *)(param_1 + 4),'\0');
  local_4 = 0;
  local_1ad = 0;
  FUN_0044da70(local_120,&local_1ad,8,'\x01');
  FUN_0044de00(local_120,(byte *)&local_1a4,0x43);
  if (this_02 != (void *)0x0) {
    if (((local_1a4 < 2000) &&
        (uVar2 = CONCAT12(bStack_1a2,local_1a4) & 0xffff,
        *(int *)((int)*(void **)((int)this + 0xc) + uVar2 * 4 + 0x2014) != 0)) &&
       (*(char *)(uVar2 + 0x53d + (int)this_02) != '\0')) {
      this_01 = (void *)FUN_00467470(*(void **)((int)this + 0xc),local_1a4);
      local_130 = local_189;
      local_12c = local_185;
      local_150 = local_195;
      local_128 = local_181;
      local_14c = local_191;
      local_160 = uStack_1a1;
      local_148 = local_18d;
      local_15c = local_19d;
      local_158 = local_199;
      if (bStack_1a2 == 0) {
        iVar3 = FUN_00489660((int)this_01);
        if (iVar3 != 0) goto LAB_00495694;
        uVar4 = FUN_004676e0(*(void **)((int)this + 0xc),local_1a4);
        if ((short)uVar4 != (short)local_1ac) goto LAB_00495694;
        local_1a8 = local_1a8 & 0xffffff00;
      }
      else {
        iVar3 = FUN_004896d0((int)this_01);
        if (iVar3 != 0) goto LAB_00495694;
        local_1a8 = CONCAT31(local_1a8._1_3_,1);
      }
      this_00 = *(void **)this;
      if (((*(void **)((int)this + 4) != (void *)0x0) && (this_00 != (void *)0x0)) &&
         ((uVar2 = FUN_0046c6d0(*(void **)((int)this + 4),(uint)local_1a4,(uint)*param_1,
                                (uint)bStack_1a2,this_01,&local_189,local_17d), uVar2 != 0 &&
          (iVar3 = FUN_0046f1c0(this_00,(uint)local_1a4,(uint)*param_1,(uint)bStack_1a2,this_01,
                                &local_189,local_17d), iVar3 != 0)))) {
        FUN_00489560(this_01,(ushort)local_1ac,&local_160,local_165,0xffff,(char)local_1a8);
        FUN_00483690(this_02,&local_1a4);
      }
    }
  }
LAB_00495694:
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00495490 */
