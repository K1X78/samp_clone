/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009df50
 * Name: FUN_1009df50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009df50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStackY_a4 [9];
  undefined4 uStackY_80;
  int iStackY_7c;
  float fStackY_78;
  float fStackY_74;
  char acStack_58 [8];
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [12];
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  if (DAT_1018de30 == 0) {
    DAT_1018dd48 = FUN_100a70f0();
    DAT_1018dd4c = *(undefined4 *)(DAT_102aca3c + 4);
    fStackY_74 = 502.0;
    fStackY_78 = -4.0;
    iStackY_7c = 0xc0800000;
    uStackY_80 = 0x1009df94;
    FUN_1009d5c0();
    fStackY_74 = 5.0;
    fStackY_78 = 2.719081e-29;
    FUN_1009d620();
    FUN_10001010();
    FUN_100ac3b0();
    fStackY_74 = 2.7190935e-29;
    FUN_100a0b20();
    if (DAT_1018de34 != (undefined4 *)0x0) {
      (**(code **)*DAT_1018de34)();
    }
    fStackY_74 = 5.0;
    fStackY_78 = 5.0;
    iStackY_7c = DAT_101518d4;
    uStackY_80 = 0x1009e00c;
    DAT_1018de34 = (undefined4 *)FUN_100a0090();
    DAT_1018de30 = 1;
  }
  FUN_100a1bd0();
  if ((DAT_1018de34 != (undefined4 *)0x0) && (DAT_1018de34[0x10] != 0)) {
    acStack_58[0] = '\0';
    acStack_58[1] = '\0';
    acStack_58[2] = '\0';
    acStack_58[3] = '\0';
    acStack_58[4] = '\0';
    acStack_58[5] = '\0';
    acStack_58[6] = '\0';
    acStack_58[7] = '\0';
    uStack_50 = 0x3cf5c28f;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    fStackY_74 = 2.719147e-29;
    FUN_1009eca0();
    fStackY_74 = 2.719158e-29;
    FUN_1009eb50();
    FUN_1009e950();
    fStack_10 = 5.0;
    fStack_c = 5.0;
    uStack_8 = 0x43fa0000;
    puVar2 = auStack_40;
    puVar3 = auStackY_a4;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1009ea00();
  }
  if ((*(short *)(DAT_1018dd48 + 0x1c) != 0) && (*(short *)(DAT_1018dd48 + 0x4c) == 0)) {
    DAT_101518d4 = DAT_101518d4 + -1;
    if (DAT_101518d4 == 0x21a) {
      DAT_101518d4 = 0x218;
      FUN_1009df10();
      return;
    }
    if (DAT_101518d4 == 399) {
      DAT_101518d4 = 0x263;
    }
    FUN_1009df10();
    return;
  }
  if ((*(short *)(DAT_1018dd48 + 0x20) != 0) && (*(short *)(DAT_1018dd48 + 0x50) == 0)) {
    DAT_101518d4 = DAT_101518d4 + 1;
    if (DAT_101518d4 == 0x219) {
      DAT_101518d4 = 0x21b;
      FUN_1009df10();
      return;
    }
    if (DAT_101518d4 == 0x264) {
      DAT_101518d4 = 400;
    }
    FUN_1009df10();
    return;
  }
  if ((*(short *)(DAT_1018dd48 + 0x1e) != 0) && (*(short *)(DAT_1018dd48 + 0x4e) == 0)) {
    if (DAT_1018de34 != (undefined4 *)0x0) {
      (**(code **)*DAT_1018de34)();
    }
    DAT_1018de34 = (undefined4 *)0x0;
    FUN_1009d580();
    DAT_1018dde8 = 0;
    _DAT_1018ddec = 0;
    _DAT_1018ddf0 = 0;
    iVar1 = FUN_10001010();
    if (iVar1 != 0) {
      FUN_1009e950();
      acStack_58[0] = '\0';
      acStack_58[1] = '\0';
      acStack_58[2] = '\0';
      acStack_58[3] = '\0';
      acStack_58[4] = '\0';
      acStack_58[5] = '\0';
      acStack_58[6] = '\0';
      acStack_58[7] = '\0';
      uStack_50 = uStack_50 & 0xffffff00;
      fStackY_74 = 2.7192732e-29;
      _sprintf(acStack_58,"TYPE_%d");
      fStackY_74 = fStack_c - 5.0;
      fStackY_78 = fStack_10 - 5.0;
      iStackY_7c = DAT_101518d4;
      uStackY_80 = 0x1009e272;
      iVar1 = FUN_100a0090();
      if (iVar1 != 0) {
        FUN_100abeb0();
      }
    }
    FUN_1009d670();
    FUN_1009d580();
    FUN_10001010();
    FUN_100ac3b0();
    FUN_100a1bd0();
    DAT_1018de30 = 0;
  }
  return;
}


/* END FUNCTION 0x1009df50 */
