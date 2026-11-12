/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ad80
 * Name: FUN_1009ad80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1009ad80(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined1 local_48 [72];
  
  FUN_10083da0();
  puVar1 = (undefined4 *)FUN_1007d630(local_48);
  puVar4 = &DAT_10181c20;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1009a020(DAT_10181c24);
  FUN_10099630(DAT_10181c50 != 0);
  FUN_100998c0(DAT_10181c5c >> 2 & 0xffffff01);
  FUN_100996a0(DAT_10181c28);
  FUN_1009a060(DAT_10181c30,DAT_10181c34);
  FUN_1009a0d0(DAT_10181c60);
  FUN_10099760(DAT_10181c38);
  FUN_100997d0(DAT_10181c58);
  FUN_1009a160(DAT_10181c40);
  FUN_1009a1a0(DAT_10181c44);
  if (((byte)DAT_10181c2c & 0x10) == 0) {
    if (((byte)DAT_10181c2c & 0x40) == 0) {
      if (((byte)DAT_10181c2c & 0x20) == 0) {
        if (-1 < (char)(byte)DAT_10181c2c) goto LAB_1009ae74;
        uVar6 = 0x80;
      }
      else {
        uVar6 = 0x20;
      }
    }
    else {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = 0x10;
  }
  FUN_1009a200(uVar6);
LAB_1009ae74:
  FUN_1009a240(DAT_10181c64);
  iVar3 = FUN_10082a60(DAT_10181c20,DAT_10181c24,DAT_10181c28,DAT_10181c38,DAT_10181c50 != 0);
  if (iVar3 == 0) {
    return -0x7ff8ffa9;
  }
  piVar2 = (int *)FUN_10082120();
  if (piVar2[1] != 0) {
    FUN_10086cf0(3,4);
    FUN_1008c210();
    iVar3 = 0;
    if (0 < piVar2[1]) {
      do {
        puVar1 = *(undefined4 **)(*piVar2 + iVar3 * 4);
        FUN_100995b0(puVar1 + 0x114,*puVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < piVar2[1]);
    }
    FUN_10087e10(DAT_10181c20);
    iVar3 = FUN_1009ab30();
    if (-1 < iVar3) {
      fVar5 = (float10)FUN_1007d450();
      _DAT_10180608 = (double)fVar5;
      iVar3 = 0;
    }
    return iVar3;
  }
  return -0x7ffbf6fe;
}


/* END FUNCTION 0x1009ad80 */
