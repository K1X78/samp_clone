/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f5f30
 * Name: FUN_100f5f30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100f5f30(int param_1,undefined4 ******param_2)

{
  u_short uVar1;
  undefined4 ****ppppuVar2;
  char *pcVar3;
  undefined4 *****pppppuVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 ******ppppppuVar9;
  undefined4 *******unaff_EDI;
  undefined4 *puVar10;
  undefined4 uVar11;
  char cVar12;
  undefined4 *******in_stack_fffffea0;
  undefined1 *puStack_154;
  undefined4 *****pppppuStack_150;
  undefined4 *******pppppppuStack_14c;
  undefined4 *******pppppppuStack_148;
  undefined4 *******pppppppuStack_144;
  undefined4 *******pppppppuStack_140;
  undefined4 *******pppppppuStack_130;
  undefined4 *******pppppppuStack_12c;
  undefined4 ******ppppppuVar14;
  byte bStack_124;
  char cStack_123;
  u_short uStack_122;
  undefined4 uStack_120;
  undefined4 *******pppppppuStack_11c;
  undefined4 ******ppppppuStack_118;
  undefined4 *******pppppppuStack_114;
  byte bStack_110;
  char cStack_10f;
  u_short uStack_10e;
  undefined4 uStack_10c;
  undefined4 ******ppppppuStack_108;
  char *pcStack_104;
  undefined4 *******pppppppuStack_100;
  undefined4 *******pppppppuStack_fc;
  undefined4 ******ppppppuStack_f8;
  undefined4 *******pppppppuStack_f4;
  undefined4 *******pppppppuStack_f0;
  undefined4 *puStack_ec;
  undefined4 *******pppppppuStack_e8;
  undefined4 *******pppppppuStack_e4;
  char *pcStack_e0;
  char *pcStack_dc;
  undefined4 ******ppppppuStack_c4;
  undefined4 *****local_c0;
  undefined4 *****pppppuStack_bc;
  undefined4 ******ppppppuStack_b8;
  char acStack_b4 [4];
  int iStack_b0;
  undefined4 ******appppppuStack_ac [2];
  undefined4 *****local_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *******pppppppuStack_84;
  undefined4 *******pppppppuStack_80;
  undefined4 ******appppppuStack_78 [2];
  undefined1 *puStack_70;
  undefined4 uStack_64;
  undefined4 ******ppppppuStack_60;
  undefined4 uStack_5c;
  undefined4 *****local_54;
  undefined4 ****local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  char acStack_44 [4];
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined1 *puVar13;
  
  local_c0 = *param_2;
  local_a4 = param_2[param_1 + 0x66];
  local_54 = (undefined4 *****)0x0;
  local_50 = local_c0[0x19a];
  local_4c = 0;
  if (local_50 == (undefined4 ****)0x0) {
    local_50 = (undefined4 ****)&DAT_1012adc8;
  }
  iVar5 = (int)local_50 + 1;
  ppppuVar2 = local_50;
  do {
    cVar12 = *(char *)ppppuVar2;
    ppppuVar2 = (undefined4 ****)((int)ppppuVar2 + 1);
  } while (cVar12 != '\0');
  pcStack_dc = (char *)0x100f5f93;
  pcVar3 = _strchr((char *)local_50,0x2f);
  if (pcVar3 == (char *)0x0) {
    pppppuVar4 = param_2[0x31];
    do {
      cVar12 = *(char *)pppppuVar4;
      pppppuVar4 = (undefined4 *****)((int)pppppuVar4 + 1);
    } while (cVar12 != '\0');
    pppppppuStack_e4 = (undefined4 *******)(*(code *)PTR__malloc_101554b8)();
    if (pppppppuStack_e4 == (undefined4 *******)0x0) {
      return 0x1b;
    }
    pppppuVar4 = param_2[0x31];
    pcVar3 = (char *)((int)pppppuVar4 + 1);
    do {
      cVar12 = *(char *)pppppuVar4;
      pppppuVar4 = (undefined4 *****)((int)pppppuVar4 + 1);
    } while (cVar12 != '\0');
    pcStack_e0 = (char *)((int)ppppuVar2 + (int)((int)pppppuVar4 + ((2 - (int)pcVar3) - iVar5)));
    pcStack_dc = "%s/%s";
    pppppppuStack_e8 = (undefined4 *******)0x100f601d;
    appppppuStack_ac[0] = pppppppuStack_e4;
    FUN_100cc780();
  }
  else {
    appppppuStack_ac[0] = (undefined4 ******)(*(code *)PTR___strdup_101554c4)();
    if (appppppuStack_ac[0] == (undefined4 ******)0x0) {
      return 0x1b;
    }
  }
  ppppppuVar14 = appppppuStack_ac[0];
  uStack_2c = 1;
  uStack_38 = 1;
  puStack_28 = &uStack_64;
  puStack_34 = &uStack_9c;
  puStack_40 = &uStack_88;
  pcStack_dc = (char *)0x0;
  pcStack_e0 = (char *)0x0;
  pppppppuStack_e4 = (undefined4 *******)0x0;
  pppppppuStack_e8 = (undefined4 *******)0x0;
  puStack_ec = (undefined4 *)0x2;
  pppppppuStack_f0 = (undefined4 *******)0x1012adb4;
  ppppppuStack_60 = (undefined4 ******)0x2;
  uStack_98 = 2;
  pppppppuStack_f4 = (undefined4 *******)0x0;
  uStack_30 = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_3c = 0;
  uStack_9c = 0;
  uStack_94 = 0;
  acStack_44[0] = '\x03';
  acStack_44[1] = '\0';
  acStack_44[2] = '\0';
  acStack_44[3] = '\0';
  uStack_48 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  ppppppuStack_f8 = (undefined4 ******)0x100f60c6;
  ppppppuStack_f8 = (undefined4 ******)(**(code **)(DAT_102acadc + 0xc))();
  if ((((ppppppuStack_f8 != (undefined4 ******)0x0) &&
       (ppppppuStack_f8 != (undefined4 ******)0x90314)) &&
      (ppppppuStack_f8 != (undefined4 ******)0x90313)) &&
     (ppppppuStack_f8 != (undefined4 ******)0x90312)) {
    pppppppuStack_fc = (undefined4 *******)param_2;
    pppppppuStack_100 = (undefined4 *******)0x100f60e9;
    pppppppuStack_100 = (undefined4 *******)FUN_100c8280();
    pcStack_104 = "AcquireCredentialsHandle";
    ppppppuStack_108 = (undefined4 ******)0x1012a95c;
    uStack_10c._0_2_ = SUB42(*param_2,0);
    uStack_10c._2_2_ = (undefined2)((uint)*param_2 >> 0x10);
    bStack_110 = 0xfc;
    cStack_10f = 0x60;
    uStack_10e = 0x100f;
    FUN_100d8ba0();
    bStack_110 = 0x78;
    cStack_10f = 0xad;
    uStack_10e = 0x1012;
    pppppppuStack_114 = pppppppuStack_e4;
    ppppppuStack_118 = (undefined4 ******)0x100f610b;
    FUN_100d8ba0();
    pppppppuStack_11c = (undefined4 *******)0x100f6112;
    ppppppuStack_118 = ppppppuVar14;
    (*(code *)PTR__free_101554bc)();
    ppppppuStack_f8 = (undefined4 ******)acStack_b4;
    pppppppuStack_fc = (undefined4 *******)0x100f6123;
    (**(code **)(DAT_102acadc + 0x10))();
    return 7;
  }
  while( true ) {
    ppppppuStack_f8 = (undefined4 ******)acStack_44;
    pppppppuStack_fc = appppppuStack_78;
    pppppppuStack_100 = &ppppppuStack_60;
    pcStack_104 = &stack0xffffff28;
    ppppppuStack_108 = (undefined4 ******)0x0;
    uStack_10c = &local_54;
    bStack_110 = 0x10;
    cStack_10f = '\0';
    uStack_10e = 0;
    pppppppuStack_114 = (undefined4 *******)0x0;
    ppppppuStack_118 = (undefined4 ******)0x116;
    uStack_120._0_2_ = SUB42(puStack_70,0);
    uStack_120._2_2_ = (undefined2)((uint)puStack_70 >> 0x10);
    bStack_124 = (byte)acStack_b4;
    cStack_123 = (char)((uint)acStack_b4 >> 8);
    uStack_122 = (u_short)((uint)acStack_b4 >> 0x10);
    pppppppuStack_11c = unaff_EDI;
    iVar5 = (**(code **)(DAT_102acadc + 0x18))();
    if (iStack_b0 != 0) {
      pppppppuStack_12c = (undefined4 *******)0x100f6195;
      (**(code **)(DAT_102acadc + 0x40))();
      iStack_b0 = 0;
      ppppppuStack_b8 = (undefined4 ******)0x0;
    }
    if (((iVar5 != 0) && (iVar5 != 0x90314)) && ((iVar5 != 0x90313 && (iVar5 != 0x90312)))) {
      pppppppuStack_12c = (undefined4 *******)param_2;
      pppppppuStack_130 = (undefined4 *******)0x100f6325;
      pppppppuStack_130 = (undefined4 *******)FUN_100c8280();
      pppppppuStack_140 = (undefined4 *******)0x100f6338;
      FUN_100d8ba0();
      pppppppuStack_140 = pppppppuStack_100;
      pppppppuStack_144 = (undefined4 *******)0x100f6343;
      (*(code *)PTR__free_101554bc)();
      pppppppuStack_12c = (undefined4 *******)0x100f6354;
      (**(code **)(DAT_102acadc + 0x10))();
      pppppppuStack_12c = (undefined4 *******)&uStack_10c;
      pppppppuStack_130 = (undefined4 *******)0x100f6361;
      (**(code **)(DAT_102acadc + 0x24))();
      if (ppppppuStack_b8 != (undefined4 ******)0x0) {
        pppppppuStack_130 = (undefined4 *******)ppppppuStack_b8;
        (**(code **)(DAT_102acadc + 0x40))();
      }
      pppppppuStack_130 = (undefined4 *******)0x1012ad34;
      FUN_100d8ba0();
      return 7;
    }
    if (pppppppuStack_f0 != (undefined4 *******)0x0) {
      bStack_110 = 1;
      cStack_10f = '\x01';
      pppppppuStack_12c = (undefined4 *******)0x100f61d8;
      uStack_10e = htons((u_short)pppppppuStack_f0);
      pppppppuStack_12c = (undefined4 *******)0x4;
      pppppppuStack_130 = (undefined4 *******)&bStack_110;
      iVar6 = FUN_100d9150();
      if ((iVar6 != 0) || (pppppppuStack_fc != (undefined4 *******)0x4)) {
        pppppppuStack_12c = pppppppuStack_114;
        pppppppuStack_130 = (undefined4 *******)0x100f63d8;
        FUN_100d8ba0();
        pppppppuStack_130 = pppppppuStack_100;
        (*(code *)PTR__free_101554bc)();
        if (pppppppuStack_e8 != (undefined4 *******)0x0) {
          pppppppuStack_12c = (undefined4 *******)0x100f63f8;
          (**(code **)(DAT_102acadc + 0x40))();
        }
        if (iStack_b0 != 0) {
          pppppppuStack_12c = (undefined4 *******)0x100f640a;
          (**(code **)(DAT_102acadc + 0x40))();
        }
        pppppppuStack_12c = (undefined4 *******)0x100f6418;
        (**(code **)(DAT_102acadc + 0x10))();
        pppppppuStack_12c = (undefined4 *******)&uStack_10c;
        pppppppuStack_130 = (undefined4 *******)0x100f6425;
        (**(code **)(DAT_102acadc + 0x24))();
        return 7;
      }
      pppppppuStack_12c = pppppppuStack_f0;
      pppppppuStack_130 = pppppppuStack_e8;
      iVar6 = FUN_100d9150();
      if ((iVar6 != 0) || (pppppppuStack_f0 != pppppppuStack_fc)) {
        pppppppuStack_12c = pppppppuStack_114;
        pppppppuStack_130 = (undefined4 *******)0x100f63a0;
        FUN_100d8ba0();
        pppppppuStack_130 = pppppppuStack_100;
        (*(code *)PTR__free_101554bc)();
        if (pppppppuStack_e8 != (undefined4 *******)0x0) {
          pppppppuStack_12c = (undefined4 *******)0x100f63c4;
          (**(code **)(DAT_102acadc + 0x40))();
        }
        goto LAB_100f6c42;
      }
    }
    if (pppppppuStack_e8 != (undefined4 *******)0x0) {
      pppppppuStack_12c = (undefined4 *******)0x100f6253;
      (**(code **)(DAT_102acadc + 0x40))();
      pppppppuStack_e8 = (undefined4 *******)0x0;
    }
    pppppppuStack_f0 = (undefined4 *******)0x0;
    if (iStack_b0 != 0) {
      pppppppuStack_12c = (undefined4 *******)0x100f626d;
      (**(code **)(DAT_102acadc + 0x40))();
      iStack_b0 = 0;
    }
    ppppppuStack_b8 = (undefined4 ******)0x0;
    if (iVar5 != 0x90312) break;
    pppppppuStack_12c = (undefined4 *******)0x4;
    pppppppuStack_130 = (undefined4 *******)&bStack_110;
    iVar5 = FUN_100e9120();
    if ((iVar5 != 0) || (pppppppuStack_f4 != (undefined4 *******)0x4)) {
      pppppppuStack_12c = pppppppuStack_114;
      pppppppuStack_130 = (undefined4 *******)0x100f6c64;
      FUN_100d8ba0();
      pppppppuStack_130 = pppppppuStack_100;
      (*(code *)PTR__free_101554bc)();
      goto LAB_100f6c72;
    }
    if (cStack_10f == -1) {
      pppppppuStack_12c = (undefined4 *******)(uint)bStack_110;
      pppppppuStack_130 = (undefined4 *******)0x1012ab68;
      FUN_100d8ba0();
      (*(code *)PTR__free_101554bc)();
      pppppppuStack_12c = (undefined4 *******)0x100f6bc1;
      (**(code **)(DAT_102acadc + 0x10))();
      pppppppuStack_12c = (undefined4 *******)&uStack_10c;
      pppppppuStack_130 = (undefined4 *******)0x100f6bcf;
      (**(code **)(DAT_102acadc + 0x24))();
      return 7;
    }
    if (cStack_10f != '\x01') {
      pppppppuStack_12c = (undefined4 *******)(uint)bStack_110;
      pppppppuStack_130 = (undefined4 *******)0x1012a9d8;
      FUN_100d8ba0();
      (*(code *)PTR__free_101554bc)();
      goto LAB_100f6c72;
    }
    pppppppuStack_12c = (undefined4 *******)0x100f62cd;
    uVar1 = ntohs(uStack_10e);
    pppppppuStack_12c = (undefined4 *******)0x100f62db;
    ppppppuStack_b8 = (undefined4 ******)(uint)uVar1;
    pppppppuStack_80 = (undefined4 *******)(*(code *)PTR__malloc_101554b8)();
    if (pppppppuStack_80 == (undefined4 *******)0x0) {
      pppppppuStack_fc = (undefined4 *******)0x100f6c0f;
      (*(code *)PTR__free_101554bc)();
      ppppppuStack_f8 = (undefined4 ******)acStack_b4;
      pppppppuStack_fc = (undefined4 *******)0x100f6c20;
      (**(code **)(DAT_102acadc + 0x10))();
      goto LAB_100f66e9;
    }
    ppppppuStack_f8 = &ppppppuStack_c4;
    pppppppuStack_fc = (undefined4 *******)uStack_88;
    ppppppuStack_108 = param_2;
    uStack_10c._0_2_ = 0x6300;
    uStack_10c._2_2_ = 0x100f;
    pppppppuStack_100 = pppppppuStack_80;
    iVar5 = FUN_100e9120();
    if ((iVar5 != 0) || (ppppppuStack_c4 != (undefined4 ******)(uint)uVar1)) goto LAB_100f6c25;
    puStack_70 = &stack0xffffff28;
  }
  pppppppuStack_12c = (undefined4 *******)0x100f643c;
  (*(code *)PTR__free_101554bc)();
  ppppppuVar14 = appppppuStack_ac;
  pppppppuStack_12c = (undefined4 *******)0x1;
  pppppppuStack_130 = &pppppppuStack_e4;
  (**(code **)(DAT_102acadc + 8))();
  (**(code **)(DAT_102acadc + 0x10))();
  iVar5 = FUN_100f5ef0();
  if (iVar5 != 0) {
    (**(code **)(DAT_102acadc + 0x24))();
    pppppppuStack_140 = (undefined4 *******)0x100f6494;
    (**(code **)(DAT_102acadc + 0x40))();
    pppppppuStack_140 = (undefined4 *******)0x1012aca0;
    pppppppuStack_144 = pppppppuStack_12c;
    pppppppuStack_148 = (undefined4 *******)0x100f64a3;
    FUN_100d8ba0();
    return 7;
  }
  ppppppuVar9 = (undefined4 ******)CONCAT22(uStack_122,CONCAT11(cStack_123,bStack_124));
  pppppppuStack_144 = (undefined4 *******)0x100f64c6;
  pppppppuStack_140 = (undefined4 *******)ppppppuVar9;
  FUN_100d8ae0();
  (**(code **)(DAT_102acadc + 0x40))();
  bStack_124 = 1;
  cStack_123 = '\x02';
  pppppppuStack_140 = (undefined4 *******)0x1012ac18;
  pppppppuStack_148 = (undefined4 *******)0x100f6512;
  pppppppuStack_144 = (undefined4 *******)ppppppuVar9;
  FUN_100d8ae0();
  if (ppppppuVar9[0x1a5] != (undefined4 *****)0x0) {
    pppppppuStack_140 = (undefined4 *******)0x100f6527;
    uStack_122 = htons(1);
    pppppppuStack_148 = (undefined4 *******)uStack_10c;
    goto LAB_100f67b3;
  }
  pppppppuStack_140 = (undefined4 *******)0x0;
  pppppppuStack_144 = &pppppppuStack_11c;
  pppppppuStack_148 = (undefined4 *******)0x100f6543;
  (**(code **)(DAT_102acadc + 0x2c))();
  pppppppuStack_148 = (undefined4 *******)0x1012ac00;
  pppppppuStack_14c = (undefined4 *******)0x100f654f;
  iVar5 = FUN_100f5ef0();
  if (iVar5 != 0) {
LAB_100f666e:
    pppppppuStack_148 = (undefined4 *******)&stack0xfffffed8;
    pppppppuStack_14c = (undefined4 *******)0x100f667c;
    (**(code **)(DAT_102acadc + 0x24))();
    pppppppuStack_14c = (undefined4 *******)0x1012abc0;
    pppppuStack_150 = pppppuStack_bc;
    puStack_154 = (undefined1 *)0x100f668b;
    FUN_100d8ba0();
    return 7;
  }
  pppppppuStack_148 = pppppppuStack_80;
  pppppppuStack_fc = pppppppuStack_80;
  ppppppuStack_f8 = (undefined4 ******)0x2;
  pppppppuStack_14c = (undefined4 *******)0x100f6574;
  pppppppuStack_f4 = (undefined4 *******)(*(code *)PTR__malloc_101554b8)();
  if (pppppppuStack_f4 == (undefined4 *******)0x0) {
    pppppppuStack_148 = (undefined4 *******)&stack0xfffffed8;
    pppppppuStack_14c = (undefined4 *******)0x100f658d;
    (**(code **)(DAT_102acadc + 0x24))();
    return 0x1b;
  }
  pppppppuStack_148 = (undefined4 *******)0x1;
  pppppppuStack_f0 = (undefined4 *******)0x1;
  pppppppuStack_14c = (undefined4 *******)0x100f65a9;
  pppppppuStack_e8 = (undefined4 *******)(*(code *)PTR__malloc_101554b8)();
  pppppppuStack_148 = pppppppuStack_f4;
  if (pppppppuStack_e8 == (undefined4 *******)0x0) {
LAB_100f65f3:
    pppppppuStack_14c = (undefined4 *******)0x100f65fc;
    (**(code **)(DAT_102acadc + 0x40))();
    pppppppuStack_14c = &pppppppuStack_12c;
    pppppuStack_150 = (undefined4 *****)0x100f660a;
    (**(code **)(DAT_102acadc + 0x24))();
    return 0x1b;
  }
  *(undefined1 *)pppppppuStack_e8 = 0;
  pppppppuStack_148 = pppppppuStack_84;
  pcStack_e0 = (char *)0x9;
  pppppppuStack_e4 = pppppppuStack_84;
  pppppppuStack_14c = (undefined4 *******)0x100f65d6;
  pcStack_dc = (char *)(*(code *)PTR__malloc_101554b8)();
  if (pcStack_dc == (char *)0x0) {
    pppppppuStack_148 = pppppppuStack_f4;
    pppppppuStack_14c = (undefined4 *******)0x100f65ef;
    (**(code **)(DAT_102acadc + 0x40))();
    pppppppuStack_148 = pppppppuStack_e8;
    goto LAB_100f65f3;
  }
  pppppppuStack_148 = (undefined4 *******)0x0;
  pppppppuStack_14c = (undefined4 *******)&pppppuStack_bc;
  pppppuStack_150 = (undefined4 *****)0x80000001;
  puStack_154 = &stack0xfffffed8;
  (**(code **)(DAT_102acadc + 100))();
  iVar5 = FUN_100f5ef0("EncryptMessage");
  if (iVar5 != 0) {
    (**(code **)(DAT_102acadc + 0x40))(pcStack_104);
    (**(code **)(DAT_102acadc + 0x40))(pppppppuStack_fc);
    (**(code **)(DAT_102acadc + 0x40))(pppppppuStack_f4);
    goto LAB_100f666e;
  }
  uStack_120 = (undefined1 *)((int)pppppppuStack_100 + (int)pppppppuStack_f4) + (int)uStack_10c;
  ppppppuStack_118 = (undefined4 ******)(*(code *)PTR__malloc_101554b8)(uStack_120);
  if (ppppppuStack_118 == (undefined4 ******)0x0) {
    (**(code **)(DAT_102acadc + 0x40))(pcStack_104);
    (**(code **)(DAT_102acadc + 0x40))(pppppppuStack_fc);
    (**(code **)(DAT_102acadc + 0x40))(pppppppuStack_f4);
    goto LAB_100f66e9;
  }
  pcVar3 = pcStack_104;
  puVar8 = ppppppuStack_118;
  for (uVar7 = (uint)uStack_10c >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar8 = *(undefined4 *)pcVar3;
    pcVar3 = (char *)((int)pcVar3 + 4);
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = (uint)uStack_10c & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar8 = *pcVar3;
    pcVar3 = (char *)((int)pcVar3 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  ppppppuVar9 = ppppppuStack_f8;
  pcVar3 = (char *)((int)uStack_10c + (int)ppppppuStack_118);
  for (uVar7 = (uint)pppppppuStack_100 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 ******)pcVar3 = *ppppppuVar9;
    ppppppuVar9 = (undefined4 ******)((int)ppppppuVar9 + 4);
    pcVar3 = pcVar3 + 4;
  }
  for (uVar7 = (uint)pppppppuStack_100 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar3 = *(char *)ppppppuVar9;
    ppppppuVar9 = (undefined4 ******)((int)ppppppuVar9 + 1);
    pcVar3 = pcVar3 + 1;
  }
  puVar8 = puStack_ec;
  puVar10 = (undefined4 *)
            ((undefined1 *)((int)pppppppuStack_100 + (int)uStack_10c) + (int)ppppppuStack_118);
  for (uVar7 = (uint)pppppppuStack_f4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar7 = (uint)pppppppuStack_f4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  (**(code **)(DAT_102acadc + 0x40))(pcStack_104);
  ppppppuStack_108 = (undefined4 ******)0x0;
  bStack_110 = 0;
  cStack_10f = '\0';
  uStack_10e = 0;
  (**(code **)(DAT_102acadc + 0x40))(pppppppuStack_fc);
  pppppppuStack_100 = (undefined4 *******)0x0;
  ppppppuStack_108 = (undefined4 ******)0x0;
  in_stack_fffffea0 = pppppppuStack_f4;
  (**(code **)(DAT_102acadc + 0x40))(pppppppuStack_f4);
  pppppppuStack_140 = (undefined4 *******)0x100f67ac;
  ppppppuVar9 = ppppppuVar14;
  uStack_122 = htons((u_short)pcStack_104);
  pppppppuStack_148 = (undefined4 *******)uStack_10c;
LAB_100f67b3:
  pppppppuStack_140 = (undefined4 *******)0x4;
  pppppppuStack_144 = (undefined4 *******)&bStack_124;
  pppppuStack_150 = (undefined4 *****)0x100f67cf;
  pppppppuStack_14c = (undefined4 *******)param_2;
  uStack_10c = pppppppuStack_148;
  iVar5 = FUN_100d9150();
  if ((iVar5 == 0) && (CONCAT22(uStack_10e,CONCAT11(cStack_10f,bStack_110)) == 4)) {
    pppppppuStack_148 = (undefined4 *******)uStack_10c;
    if (ppppppuVar9[0x1a5] == (undefined4 *****)0x0) {
      pppppppuStack_140 = (undefined4 *******)pcStack_104;
      pppppppuStack_144 = pppppppuStack_fc;
      pppppuStack_150 = (undefined4 *****)0x100f6858;
      pppppppuStack_14c = (undefined4 *******)param_2;
      iVar5 = FUN_100d9150();
      if ((iVar5 != 0) ||
         (pcStack_104 != (char *)CONCAT22(uStack_10e,CONCAT11(cStack_10f,bStack_110))))
      goto LAB_100f6b68;
      ppppppuVar14 = uStack_10c;
      if (pppppppuStack_fc != (undefined4 *******)0x0) {
        pppppppuStack_140 = (undefined4 *******)0x100f6883;
        (**(code **)(DAT_102acadc + 0x40))();
        ppppppuVar14 = uStack_10c;
      }
    }
    else {
      pppppppuStack_140 = (undefined4 *******)0x1;
      pppppppuStack_144 = (undefined4 *******)&bStack_124;
      bStack_124 = 0;
      pppppuStack_150 = (undefined4 *****)0x100f6808;
      pppppppuStack_14c = (undefined4 *******)param_2;
      iVar5 = FUN_100d9150();
      if ((iVar5 != 0) ||
         (ppppppuVar14 = uStack_10c, CONCAT22(uStack_10e,CONCAT11(cStack_10f,bStack_110)) != 1)) {
        pppppppuStack_144 = (undefined4 *******)0x100f6821;
        pppppppuStack_140 = (undefined4 *******)ppppppuVar9;
        FUN_100d8ba0();
        pppppppuStack_140 = (undefined4 *******)0x100f6832;
        (**(code **)(DAT_102acadc + 0x24))();
        return 7;
      }
    }
    pppppppuStack_148 = (undefined4 *******)ppppppuVar14;
    pppppppuStack_140 = (undefined4 *******)0x4;
    pppppppuStack_144 = (undefined4 *******)&bStack_124;
    pppppuStack_150 = (undefined4 *****)0x100f689a;
    pppppppuStack_14c = (undefined4 *******)param_2;
    uStack_10c = pppppppuStack_148;
    iVar5 = FUN_100e9120();
    if ((iVar5 != 0) || (ppppppuStack_108 != (undefined4 ******)0x4)) {
      pppppppuStack_144 = (undefined4 *******)0x100f6b54;
      pppppppuStack_140 = (undefined4 *******)ppppppuVar9;
      FUN_100d8ba0();
      goto LAB_100f6c80;
    }
    if (cStack_123 == -1) {
      pppppppuStack_140 = (undefined4 *******)(uint)bStack_124;
      pppppppuStack_144 = (undefined4 *******)0x1012ab68;
      pppppppuStack_14c = (undefined4 *******)0x100f68ce;
      pppppppuStack_148 = (undefined4 *******)ppppppuVar9;
      FUN_100d8ba0();
      pppppppuStack_140 = (undefined4 *******)0x100f68df;
      (**(code **)(DAT_102acadc + 0x24))();
      return 7;
    }
    if (cStack_123 != '\x02') {
      pppppppuStack_140 = (undefined4 *******)(uint)bStack_124;
      pppppppuStack_144 = (undefined4 *******)0x1012ab38;
      pppppppuStack_14c = (undefined4 *******)0x100f6904;
      pppppppuStack_148 = (undefined4 *******)ppppppuVar9;
      FUN_100d8ba0();
      pppppppuStack_140 = (undefined4 *******)0x100f6914;
      (**(code **)(DAT_102acadc + 0x24))();
      return 7;
    }
    pppppppuStack_140 = (undefined4 *******)0x100f692b;
    uVar1 = ntohs(uStack_122);
    pppppppuStack_140 = (undefined4 *******)0x100f6939;
    pppppppuStack_f0 = (undefined4 *******)(uint)uVar1;
    iVar5 = (*(code *)PTR__malloc_101554b8)();
    bStack_110 = (byte)iVar5;
    cStack_10f = (char)((uint)iVar5 >> 8);
    uStack_10e = (u_short)((uint)iVar5 >> 0x10);
    if (iVar5 != 0) {
      iVar5 = FUN_100e9120(param_2,&pppppppuStack_f0,iVar5,ppppppuStack_118,&pppppppuStack_130);
      if ((iVar5 == 0) && (pppppppuStack_130 == (undefined4 *******)(uint)uVar1)) {
        if (*(int *)((int)pppppuStack_150 + 0x694) == 0) {
          pcVar3 = acStack_b4;
          uVar11 = 0;
          pppppppuStack_114 = (undefined4 *******)0xa;
          ppppppuStack_108 = (undefined4 ******)0x1;
          uStack_10c._0_2_ = 0;
          uStack_10c._2_2_ = 0;
          pcStack_104 = (char *)0x0;
          (**(code **)(DAT_102acadc + 0x68))(&pppppppuStack_144,&stack0xffffff28,0);
          iVar5 = FUN_100f5ef0("DecryptMessage");
          if (iVar5 != 0) {
            if (uStack_120 != (undefined1 *)0x0) {
              (**(code **)(DAT_102acadc + 0x40))(uStack_120);
            }
            if (pppppppuStack_114 != (undefined4 *******)0x0) {
              (**(code **)(DAT_102acadc + 0x40))(pppppppuStack_114);
            }
            (**(code **)(DAT_102acadc + 0x24))(&puStack_154);
            FUN_100d8ba0(pcVar3,"Failed to query security context attributes.");
            return 7;
          }
          if (pppppppuStack_11c != (undefined4 *******)0x1) {
            FUN_100d8ba0(in_stack_fffffea0,"Invalid SSPI encryption response length (%lu).",
                         pppppppuStack_11c);
            if (uStack_120 != (undefined1 *)0x0) {
              (**(code **)(DAT_102acadc + 0x40))(uStack_120);
            }
            if (pppppppuStack_114 != (undefined4 *******)0x0) {
              (**(code **)(DAT_102acadc + 0x40))(pppppppuStack_114);
            }
            (**(code **)(DAT_102acadc + 0x24))(&puStack_154);
            return 7;
          }
          (**(code **)(DAT_102acadc + 0x40))(uStack_120);
          cVar12 = (char)pcVar3;
          (**(code **)(DAT_102acadc + 0x40))(ppppppuStack_118);
        }
        else {
          if (ppppppuStack_118 != (undefined4 ******)0x1) {
            FUN_100d8ba0(pppppuStack_150,"Invalid SSPI encryption response length (%lu).",
                         ppppppuStack_118);
            goto LAB_100f6b22;
          }
          puVar13 = (undefined1 *)CONCAT22(uStack_10e,CONCAT11(cStack_10f,bStack_110));
          pppppppuStack_14c = (undefined4 *******)CONCAT31(pppppppuStack_14c._1_3_,*puVar13);
          uVar11 = 0x100f6ad7;
          (**(code **)(DAT_102acadc + 0x40))();
          cVar12 = (char)puVar13;
        }
        if (cVar12 == '\0') {
          pcVar3 = "out GSS-API data";
        }
        else {
          pcVar3 = " GSS-API integrity";
          if (cVar12 != '\x01') {
            pcVar3 = " GSS-API confidentiality";
          }
        }
        FUN_100d8ae0(uVar11,"SOCKS5 access with%s protection granted.\n",pcVar3);
        return 0;
      }
      FUN_100d8ba0(pppppuStack_150,"Failed to receive SSPI encryption type.");
LAB_100f6b22:
      (**(code **)(DAT_102acadc + 0x40))(CONCAT22(uStack_10e,CONCAT11(cStack_10f,bStack_110)));
      (**(code **)(DAT_102acadc + 0x24))(&pppppppuStack_148);
      return 7;
    }
LAB_100f66e9:
    (**(code **)(DAT_102acadc + 0x24))(&pppppppuStack_144);
    return 0x1b;
  }
LAB_100f6b68:
  pppppppuStack_144 = (undefined4 *******)0x100f6b6e;
  pppppppuStack_140 = (undefined4 *******)ppppppuVar9;
  FUN_100d8ba0();
  if (pppppppuStack_fc != (undefined4 *******)0x0) {
    pppppppuStack_140 = (undefined4 *******)0x100f6b87;
    (**(code **)(DAT_102acadc + 0x40))();
  }
LAB_100f6c80:
  pppppppuStack_140 = (undefined4 *******)0x100f6c8e;
  (**(code **)(DAT_102acadc + 0x24))();
  return 7;
LAB_100f6c25:
  ppppppuStack_f8 = (undefined4 ******)0x1012a9a8;
  pppppppuStack_fc = pppppppuStack_e4;
  pppppppuStack_100 = (undefined4 *******)0x100f6c34;
  FUN_100d8ba0();
  pcStack_104 = (char *)0x100f6c3f;
  pppppppuStack_100 = unaff_EDI;
  (*(code *)PTR__free_101554bc)();
LAB_100f6c42:
  if (iStack_b0 != 0) {
    pppppppuStack_12c = (undefined4 *******)0x100f6c53;
    (**(code **)(DAT_102acadc + 0x40))();
  }
LAB_100f6c72:
  pppppppuStack_12c = (undefined4 *******)0x100f6c80;
  (**(code **)(DAT_102acadc + 0x10))();
  goto LAB_100f6c80;
}


/* END FUNCTION 0x100f5f30 */
