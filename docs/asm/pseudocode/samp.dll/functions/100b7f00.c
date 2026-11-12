/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7f00
 * Name: FUN_100b7f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_100b7f00(undefined4 *param_1,uint param_2,float param_3,float param_4,float param_5,
            float param_6,undefined4 param_7,int param_8)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined *apuStackY_a4 [4];
  undefined4 uStackY_94;
  undefined4 uStackY_90;
  undefined *puStackY_8c;
  undefined *puStackY_88;
  undefined1 auStackY_84 [8];
  undefined1 auStackY_7c [8];
  undefined1 auStackY_74 [8];
  char *pcStackY_6c;
  undefined4 local_4c [12];
  float local_1c;
  float local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116758;
  local_c = ExceptionList;
  puVar3 = param_1;
  ExceptionList = &local_c;
  for (iVar2 = 0xf; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
  }
  local_4 = 0;
  *param_1 = &PTR_FUN_1011f82c;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_2 == 0x21a) {
    uVar5 = 5;
  }
  else if (param_2 == 0x219) {
    uVar5 = 3;
  }
  else {
    if ((param_2 == 0x23a) || (param_2 == 0x239)) {
      if (param_2 != 0x1c1) {
        if ((param_2 == 0x23a) || (param_2 == 0x239)) {
          if (DAT_102abe64 != 0) {
            iVar2 = *(int *)(DAT_102abe64 + 0x5d4);
            param_1[0x13] = iVar2;
            if (iVar2 != 0) {
              pcStackY_6c = (char *)0x100b819c;
              _DAT_102abe68 = FUN_100b3800();
              param_1[0x11] = _DAT_102abe68;
              param_1[0x10] = param_1[0x13];
              DAT_102abe64 = param_1[0x13];
              goto LAB_100b83ad;
            }
            pcStackY_6c = (char *)DAT_102aca10;
            auStackY_74._4_4_ = 0x100b8182;
            FUN_10067b60();
          }
          param_1[0x10] = 0;
          param_1[0x13] = 0;
          DAT_102abe64 = 0;
          ExceptionList = local_c;
          return param_1;
        }
        goto LAB_100b83ad;
      }
    }
    else if (param_2 != 0x1c1) {
      pcStackY_6c = (char *)0x100b7f94;
      iVar2 = FUN_100a07b0();
      if (iVar2 == 0) {
        pcStackY_6c = (char *)param_2;
        auStackY_74._4_4_ = 0x100b7fa6;
        FUN_100a0780();
        FUN_100a07a0();
        pcStackY_6c = (char *)0x100b7fbd;
        iVar2 = FUN_100a07b0();
        while (iVar2 == 0) {
          pcStackY_6c = (char *)0x100b7fca;
          Sleep(0);
          pcStackY_6c = (char *)0x100b7fd6;
          iVar2 = FUN_100a07b0();
        }
      }
      if (param_8 == 0) {
        *(undefined4 *)((int)param_1 + 0x8b) = 0;
      }
      else {
        DAT_1018f6a4 = 1;
        *(undefined4 *)((int)param_1 + 0x8b) = 1;
      }
      unique0x0000aa00 = (double)param_5;
      unique0x0000aa00 = (double)param_4;
      unique0x0000aa00 = (double)param_3;
      auStackY_84._0_4_ = param_2;
      puStackY_88 = &DAT_1011f5ec;
      puStackY_8c = (undefined *)0x100b802b;
      FUN_100b1f10();
      pcStackY_6c = SUB84((double)param_6,0);
      auStackY_74._4_4_ = 0;
      auStackY_74._0_4_ = &DAT_1011f614;
      auStackY_7c._4_4_ = 0x100b8048;
      FUN_100b1f10();
      auStackY_7c._4_4_ = 0;
      auStackY_7c._0_4_ = 0;
      auStackY_84._4_4_ = &DAT_1011f6f0;
      auStackY_84._0_4_ = 0x100b8058;
      FUN_100b1f10();
      auStackY_84._0_4_ = 0;
      puStackY_88 = (undefined *)0x0;
      puStackY_8c = &DAT_1011f718;
      uStackY_90 = 0x100b8068;
      FUN_100b1f10();
      uStackY_90 = 0;
      uStackY_94 = 0;
      apuStackY_a4[3] = &DAT_1011f790;
      apuStackY_a4[2] = (undefined *)0x100b8078;
      FUN_100b1f10();
      pcStackY_6c = (char *)0x100b8085;
      iVar2 = FUN_100b37d0();
      param_1[0x13] = iVar2;
      param_1[0x10] = iVar2;
      param_1[0x11] = 0;
      if (iVar2 == 0) {
        pcStackY_6c = "Warning: couldn\'t create vehicle type: %u";
        auStackY_74._4_4_ = DAT_102aca10;
        auStackY_74._0_4_ = 0x100b80a7;
        FUN_10067b60();
        ExceptionList = local_c;
        return param_1;
      }
      _DAT_102abe68 = 0;
      *(undefined4 *)(param_1[0x13] + 0x4f8) = 0;
      *(undefined4 *)(param_1[0x13] + 0x4b0) = 0;
      param_1[0x17] = 0;
      pcStackY_6c = (char *)0x100b80d6;
      FUN_1009e950();
      iVar2 = FUN_100b6ed0();
      if ((iVar2 != 2) && (iVar2 = FUN_100b6ed0(), iVar2 != 6)) {
        param_5 = param_5 + 0.25;
      }
      local_14 = param_5;
      local_1c = param_3;
      local_18 = param_4;
      puVar3 = local_4c;
      ppuVar4 = apuStackY_a4;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppuVar4 = (undefined *)*puVar3;
        puVar3 = puVar3 + 1;
        ppuVar4 = ppuVar4 + 1;
      }
      FUN_1009ea00();
      *(undefined4 *)((int)param_1 + 0x87) = param_7;
      goto LAB_100b83ad;
    }
    uVar5 = 9;
  }
  param_2 = (uint)(180.0 < param_6);
  pcStackY_6c = (char *)0x21a;
  auStackY_74._4_4_ = 0x100b81fd;
  FUN_100a0780();
  pcStackY_6c = (char *)0x23a;
  auStackY_74._4_4_ = 0x100b820f;
  FUN_100a0780();
  pcStackY_6c = (char *)0x219;
  auStackY_74._4_4_ = 0x100b8221;
  FUN_100a0780();
  pcStackY_6c = (char *)0x239;
  auStackY_74._4_4_ = 0x100b8233;
  FUN_100a0780();
  pcStackY_6c = (char *)0x1c1;
  auStackY_74._4_4_ = 0x100b8245;
  FUN_100a0780();
  FUN_100a07a0();
  pcStackY_6c = (char *)0x100b8260;
  iVar2 = FUN_100a07b0();
  while (iVar2 == 0) {
    pcStackY_6c = (char *)0x100b8273;
    Sleep(0);
    pcStackY_6c = (char *)0x100b8283;
    iVar2 = FUN_100a07b0();
  }
  pcStackY_6c = (char *)0x100b8297;
  iVar2 = FUN_100a07b0();
  while (iVar2 == 0) {
    pcStackY_6c = (char *)0x100b82a3;
    Sleep(0);
    pcStackY_6c = (char *)0x100b82b3;
    iVar2 = FUN_100a07b0();
  }
  pcStackY_6c = (char *)0x100b82c7;
  iVar2 = FUN_100a07b0();
  while (iVar2 == 0) {
    pcStackY_6c = (char *)0x100b82d3;
    Sleep(0);
    pcStackY_6c = (char *)0x100b82e3;
    iVar2 = FUN_100a07b0();
  }
  pcStackY_6c = (char *)0x100b82f7;
  iVar2 = FUN_100a07b0();
  while (iVar2 == 0) {
    pcStackY_6c = (char *)0x100b8303;
    Sleep(0);
    pcStackY_6c = (char *)0x100b8313;
    iVar2 = FUN_100a07b0();
  }
  pcStackY_6c = (char *)0x100b8327;
  iVar2 = FUN_100a07b0();
  while (iVar2 == 0) {
    pcStackY_6c = (char *)0x100b8333;
    Sleep(0);
    pcStackY_6c = (char *)0x100b8343;
    iVar2 = FUN_100a07b0();
  }
  pcStackY_6c = (char *)param_2;
  auStackY_74 = (undefined1  [8])(double)param_5;
  auStackY_7c = (undefined1  [8])(double)param_4;
  auStackY_84 = (undefined1  [8])(double)param_3;
  puStackY_8c = &DAT_1011f6c8;
  uStackY_90 = 0x100b837c;
  puStackY_88 = (undefined *)uVar5;
  FUN_100b1f10();
  pcStackY_6c = (char *)0x100b8389;
  uVar5 = FUN_100b37d0();
  param_1[0x13] = uVar5;
  param_1[0x10] = uVar5;
  param_1[0x11] = 0;
  _DAT_102abe68 = 0;
  DAT_102abe64 = param_1[0x13];
  pcStackY_6c = (char *)0x100b83ad;
  FUN_100b3eb0();
LAB_100b83ad:
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x65) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)((int)param_1 + 0x6d) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x69) = DVar1;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  *(undefined4 *)((int)param_1 + 0x7b) = 0;
  *(undefined4 *)((int)param_1 + 0x71) = 0;
  *(undefined4 *)((int)param_1 + 0x75) = 0;
  *(undefined4 *)((int)param_1 + 0x8f) = 0;
  *(undefined4 *)((int)param_1 + 0x93) = 0;
  *(undefined4 *)((int)param_1 + 0x97) = 0;
  *(undefined4 *)((int)param_1 + 0x9b) = 0;
  *(undefined4 *)((int)param_1 + 0x9f) = 0;
  *(undefined4 *)((int)param_1 + 0xa3) = 0;
  *(undefined4 *)((int)param_1 + 0xa7) = 0;
  *(undefined4 *)((int)param_1 + 0xab) = 0;
  *(undefined4 *)((int)param_1 + 0xaf) = 0;
  *(undefined1 *)((int)param_1 + 0xb3) = 0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x100b7f00 */
