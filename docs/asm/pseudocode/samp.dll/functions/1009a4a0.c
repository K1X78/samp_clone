/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a4a0
 * Name: FUN_1009a4a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1009a4a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  uint local_48;
  undefined2 local_3c;
  undefined2 local_38;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_10 [16];
  
  bVar5 = FUN_10099680();
  bVar10 = bVar5 == 0;
  DAT_10181c50 = (uint)bVar5;
  FUN_10089c90(8,bVar10);
  FUN_10089c90(10,bVar10);
  FUN_10089c90(0xc,bVar10);
  FUN_10089c90(7,bVar10);
  FUN_10089c90(9,bVar10);
  FUN_10089c90(0xb,bVar10);
  FUN_10089c90(0x13,bVar5);
  local_48 = CONCAT31(local_48._1_3_,(char)(DAT_10181c5c >> 2)) & 0xffffff01;
  if (DAT_10181c50 != 0) {
    piVar6 = (int *)FUN_1007d360();
    if (piVar6 == (int *)0x0) {
      return 0x80004005;
    }
    uVar7 = (**(code **)(*piVar6 + 0x20))(piVar6,DAT_10181c20,&local_30);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    puVar8 = (undefined4 *)FUN_1007d410(auStack_10);
    uStack_20 = *puVar8;
    uStack_1c = puVar8[1];
    DAT_10181c30 = puVar8[2];
    DAT_10181c34 = puVar8[3];
    if ((DAT_10181c30 == 0) || (DAT_10181c34 == 0)) {
      DAT_10181c30 = local_30;
      DAT_10181c34 = iStack_2c;
    }
    DAT_10181c28 = uStack_24;
    DAT_10181c60 = uStack_28;
  }
  uVar4 = DAT_10181c60;
  iVar3 = DAT_10181c34;
  iVar2 = DAT_10181c30;
  uVar1 = DAT_10181c28;
  FUN_100998c0(local_48);
  iVar9 = FUN_10086cf0(7,4);
  if (iVar9 != 0) {
    FUN_1008c210();
    iVar9 = FUN_10099550();
    if (iVar9 != 0) {
      if (bVar5 == 0) {
        local_48 = 0;
        if (0 < *(int *)(iVar9 + 0x13c)) {
          do {
            FUN_100996a0(*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x138) + local_48 * 4) + 8));
            local_48 = local_48 + 1;
          } while ((int)local_48 < *(int *)(iVar9 + 0x13c));
        }
      }
      else {
        FUN_100996a0(uVar1);
      }
      FUN_10087e10(uVar1);
      uVar7 = FUN_1009abd0();
      if (-1 < (int)uVar7) {
        FUN_10086cf0(9,4);
        if (bVar5 != 0) {
          FUN_1008c210();
          FUN_1009a060(iVar2,iVar3);
        }
        local_3c = (undefined2)iVar3;
        local_38 = (undefined2)iVar2;
        FUN_10087e10(CONCAT22(local_3c,local_38));
        uVar7 = FUN_1009a2a0();
        if (-1 < (int)uVar7) {
          FUN_10086cf0(0xb,4);
          if (bVar5 != 0) {
            FUN_1008c210();
            FUN_1009a0d0(uVar4);
          }
          FUN_10087e10(uVar4);
          uVar7 = FUN_10099f90();
          uVar7 = uVar7 & (-1 < (int)uVar7) - 1;
        }
      }
      return uVar7;
    }
  }
  return 0x80004005;
}


/* END FUNCTION 0x1009a4a0 */
