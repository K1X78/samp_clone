/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f41f0
 * Name: FUN_100f41f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100f41f0(char *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint unaff_EBX;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  bool bVar14;
  byte *unaff_retaddr;
  undefined4 uVar15;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 *puStack_f0;
  undefined4 **ppuStack_ec;
  char ***pppcStack_e8;
  undefined4 uStack_e4;
  char *pcStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 *puStack_d4;
  undefined4 uStack_d0;
  byte *pbStack_cc;
  char **ppcStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_ac;
  uint uVar16;
  char *pcStack_a4;
  undefined4 uStack_a0;
  char **local_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  int aiStack_88 [4];
  undefined4 uStack_78;
  char *pcStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char *pcStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  uint auStack_58 [2];
  undefined4 *apuStack_50 [7];
  undefined1 auStack_34 [12];
  undefined4 auStack_28 [3];
  int iStack_1c;
  undefined4 uStack_8;
  byte *pbStack_4;
  
  local_9c = (char **)0x0;
  iVar3 = (**(code **)(DAT_102acadc + 0x44))();
  if (iVar3 != 0) {
    return 4;
  }
  pcStack_98 = *(char **)(aiStack_88[0] + 8);
  (**(code **)(DAT_102acadc + 0x40))();
  puVar4 = (undefined4 *)(*(code *)PTR__malloc_101554b8)();
  pbVar12 = pbStack_4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0x1b;
  }
  pbVar10 = (byte *)param_3[3];
  if (pbStack_4 == (byte *)0x0) {
    if (pbVar10 == (byte *)0x0) goto LAB_100f4280;
LAB_100f433a:
    puStack_c4 = (undefined4 *)param_3[2];
    if (puStack_c4 != (undefined4 *)0x0) {
      ppcStack_c8 = (char **)0x100f434a;
      (**(code **)(DAT_102acadc + 0x24))();
      ppcStack_c8 = (char **)param_3[2];
      pbStack_cc = (byte *)0x100f4354;
      (*(code *)PTR__free_101554bc)();
      param_3[2] = 0;
    }
    puStack_c4 = (undefined4 *)param_3[3];
    ppcStack_c8 = (char **)0x100f4364;
    (*(code *)PTR__free_101554bc)();
    ppcStack_c8 = (char **)param_3[4];
    param_3[3] = 0;
    pbStack_cc = (byte *)0x100f4371;
    (*(code *)PTR__free_101554bc)();
    param_3[4] = 0;
  }
  else {
    if (pbVar10 == (byte *)0x0) goto LAB_100f433a;
LAB_100f4280:
    if (unaff_retaddr == (byte *)0x0) {
      if (param_3[4] == 0) goto LAB_100f429e;
      goto LAB_100f433a;
    }
    if (param_3[4] == 0) goto LAB_100f433a;
LAB_100f429e:
    if ((pbStack_4 != (byte *)0x0) && (pbVar5 = pbStack_4, pbVar10 != (byte *)0x0)) {
      do {
        bVar1 = *pbVar5;
        bVar14 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_100f42d5:
          iVar3 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_100f42da;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar14 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_100f42d5;
        pbVar10 = pbVar10 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100f42da:
      if (iVar3 != 0) goto LAB_100f433a;
    }
    if ((unaff_retaddr != (byte *)0x0) &&
       (pbVar10 = (byte *)param_3[4], pbVar5 = unaff_retaddr, pbVar10 != (byte *)0x0)) {
      do {
        bVar1 = *pbVar5;
        bVar14 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_100f432a:
          iVar3 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_100f432f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar14 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_100f432a;
        pbVar10 = pbVar10 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100f432f:
      if (iVar3 != 0) goto LAB_100f433a;
    }
  }
  if (param_3[2] != 0) {
    piStack_90 = aiStack_88;
    pcStack_98 = (char *)0x0;
    uStack_94 = 5;
    aiStack_88[1] = 2;
    aiStack_88[2] = 0;
    aiStack_88[0] = 0;
    uStack_78 = 3;
    pcStack_74 = param_1;
    pcVar6 = param_1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    puStack_c4 = (undefined4 *)((int)pcVar6 - (int)(param_1 + 1));
    ppcStack_c8 = (char **)0x100f43d5;
    aiStack_88[3] = FUN_100d9a10();
    uStack_6c = 3;
    pcStack_68 = param_2;
    pcVar6 = param_2 + 1;
    do {
      cVar2 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
    puStack_c4 = (undefined4 *)((int)param_2 - (int)pcVar6);
    ppcStack_c8 = (char **)0x100f43ff;
    uStack_70 = FUN_100d9a10();
    ppcStack_c8 = local_9c;
    uStack_60 = 3;
    puStack_5c = (undefined4 *)0x0;
    uStack_64 = 0;
    auStack_58[1] = 9;
    pbStack_cc = (byte *)0x100f442d;
    apuStack_50[0] = puVar4;
    auStack_58[0] = FUN_100d9a10();
    uStack_d0 = param_3[2];
    puStack_c4 = (undefined4 *)0x0;
    ppcStack_c8 = &pcStack_98;
    pbStack_cc = (byte *)0x0;
    puStack_d4 = (undefined4 *)0x100f4447;
    puStack_c4 = (undefined4 *)(**(code **)(DAT_102acadc + 0x38))();
    uVar16 = auStack_58[0];
    if (puStack_c4 != (undefined4 *)0x0) {
      ppcStack_c8 = (char **)0x1012a828;
      pbStack_cc = (byte *)uStack_8;
      uStack_d0 = 0x100f4468;
      FUN_100d8ae0();
      puStack_c4 = (undefined4 *)param_3[2];
      ppcStack_c8 = (char **)0x100f4478;
      (**(code **)(DAT_102acadc + 0x24))();
      ppcStack_c8 = (char **)param_3[2];
      pbStack_cc = (byte *)0x100f4482;
      (*(code *)PTR__free_101554bc)();
      param_3[2] = 0;
      uVar16 = unaff_EBX;
    }
    puVar11 = puVar4;
    pbVar12 = pbStack_4;
    if (param_3[2] != 0) goto LAB_100f47b6;
  }
  puStack_c4 = (undefined4 *)param_3[3];
  ppcStack_c8 = (char **)0x100f44a2;
  (*(code *)PTR__free_101554bc)();
  ppcStack_c8 = (char **)param_3[4];
  param_3[3] = 0;
  pbStack_cc = (byte *)0x100f44af;
  (*(code *)PTR__free_101554bc)();
  param_3[4] = 0;
  if ((pbVar12 == (byte *)0x0) || (*pbVar12 == 0)) {
    puStack_ac = (undefined4 *)0x0;
  }
  else {
    puStack_c4 = auStack_28;
    uStack_d0 = 0x100f44d3;
    pbStack_cc = pbVar12;
    iVar3 = FUN_100cd4b0();
    if (iVar3 != 0) {
LAB_100f44f1:
      ppcStack_c8 = (char **)0x100f44fc;
      puStack_c4 = puVar4;
      (*(code *)PTR__free_101554bc)();
      return 0x1b;
    }
    ppcStack_c8 = (char **)*param_3;
    puStack_c4 = auStack_28;
    pbStack_cc = (byte *)0x100f44ea;
    iVar3 = FUN_100f40b0();
    if (iVar3 != 0) goto LAB_100f44f1;
    puStack_ac = auStack_28;
  }
  if (pbVar12 != (byte *)0x0) {
    ppcStack_c8 = (char **)0x100f452b;
    iVar3 = (*(code *)PTR___strdup_101554c4)();
    param_3[3] = iVar3;
    if (iVar3 == 0) {
      ppcStack_c8 = (char **)0x100f4540;
      puStack_c4 = puVar4;
      (*(code *)PTR__free_101554bc)();
      return 0x1b;
    }
  }
  if (unaff_retaddr != (byte *)0x0) {
    ppcStack_c8 = (char **)0x100f4565;
    iVar3 = (*(code *)PTR___strdup_101554c4)();
    param_3[4] = iVar3;
    if (iVar3 == 0) {
      ppcStack_c8 = (char **)0x100f457a;
      puStack_c4 = puVar4;
      (*(code *)PTR__free_101554bc)();
      ppcStack_c8 = (char **)param_3[3];
      pbStack_cc = (byte *)0x100f4584;
      (*(code *)PTR__free_101554bc)();
      param_3[3] = 0;
      return 0x1b;
    }
  }
  puStack_c4 = (undefined4 *)auStack_34;
  ppcStack_c8 = &pcStack_a4;
  pbStack_cc = (byte *)0x0;
  uStack_d0 = 0;
  puStack_d4 = puStack_ac;
  uStack_d8 = 0;
  uStack_dc = 2;
  pcStack_e0 = "WDigest";
  uStack_e4 = 0;
  pppcStack_e8 = (char ***)0x100f45bf;
  iVar3 = (**(code **)(DAT_102acadc + 0xc))();
  if (iVar3 != 0) {
    pppcStack_e8 = (char ***)uStack_d0;
    ppuStack_ec = (undefined4 **)0x100f45cd;
    FUN_100cd5c0();
    ppuStack_ec = (undefined4 **)puStack_d4;
    puStack_f0 = (undefined4 *)0x100f45d8;
    (*(code *)PTR__free_101554bc)();
    return 0x43;
  }
  pppcStack_e8 = (char ***)param_3[1];
  pcStack_a4 = (char *)*param_3;
  uVar16 = 2;
  ppuStack_ec = (undefined4 **)0x100f4617;
  uVar7 = FUN_100d9a10();
  local_9c = (char **)0x3;
  pcStack_98 = param_1;
  pcVar6 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  pppcStack_e8 = (char ***)((int)param_1 - (int)pcVar6);
  ppuStack_ec = (undefined4 **)0x100f463f;
  uStack_a0 = FUN_100d9a10();
  puVar11 = puStack_d4;
  pcStack_68 = (char *)&uStack_64;
  piStack_90 = (int *)0x3;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_70 = 0;
  uStack_6c = 1;
  uStack_60 = 2;
  puStack_5c = puStack_d4;
  puStack_f0 = (undefined4 *)0x100f4690;
  uStack_64 = FUN_100d9a10();
  if (iStack_1c == 0) {
    pppcStack_e8 = &ppcStack_c8;
    ppuStack_ec = (undefined4 **)0x100f46b2;
    (**(code **)(DAT_102acadc + 0x10))();
    ppuStack_ec = (undefined4 **)puStack_d4;
    puStack_f0 = (undefined4 *)0x100f46bc;
    FUN_100cd5c0();
    puStack_f0 = puVar11;
    iStack_f4 = 0x100f46c3;
    (*(code *)PTR__free_101554bc)();
    return 0x1b;
  }
  pppcStack_e8 = (char ***)0x8;
  ppuStack_ec = (undefined4 **)0x1;
  puStack_f0 = (undefined4 *)0x100f46e0;
  iStack_f4 = (*(code *)PTR__calloc_101554c8)();
  param_3[2] = iStack_f4;
  if (iStack_f4 == 0) {
    return 0x1b;
  }
  pppcStack_e8 = (char ***)auStack_58;
  ppuStack_ec = apuStack_50;
  puStack_f0 = &uStack_70;
  uStack_f8 = 0;
  uVar15 = 0;
  iVar3 = (**(code **)(DAT_102acadc + 0x18))
                    (&ppcStack_c8,0,iStack_1c,0x1000000,0,0,&stack0xffffff44);
  if ((iVar3 == 0x90313) || (iVar3 == 0x90314)) {
    (**(code **)(DAT_102acadc + 0x20))(&uStack_f8,&uStack_a0);
  }
  else if ((iVar3 != 0) && (iVar3 != 0x90312)) {
    (**(code **)(DAT_102acadc + 0x10))(&uStack_f8);
    FUN_100cd5c0(uVar15);
    (*(code *)PTR__free_101554bc)(puVar11);
    (*(code *)PTR__free_101554bc)(param_3[2]);
    param_3[2] = 0;
    return 0x1b;
  }
  (**(code **)(DAT_102acadc + 0x10))(&uStack_f8);
  ppcStack_c8 = (char **)0x100f47ad;
  puStack_c4 = (undefined4 *)uVar7;
  FUN_100cd5c0();
LAB_100f47b6:
  puStack_c4 = (undefined4 *)(uVar16 + 1);
  ppcStack_c8 = (char **)0x100f47c4;
  puVar8 = (undefined4 *)(*(code *)PTR__malloc_101554b8)();
  if (puVar8 == (undefined4 *)0x0) {
    ppcStack_c8 = (char **)0x100f47d2;
    puStack_c4 = puVar11;
    (*(code *)PTR__free_101554bc)();
    return 0x1b;
  }
  puVar13 = puVar8;
  for (uVar9 = uVar16 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar9 = uVar16 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  *(undefined1 *)((int)puVar8 + uVar16) = 0;
  *param_4 = puVar8;
  *param_5 = uVar16;
  ppcStack_c8 = (char **)0x100f481d;
  puStack_c4 = puVar4;
  (*(code *)PTR__free_101554bc)();
  return 0;
}


/* END FUNCTION 0x100f41f0 */
