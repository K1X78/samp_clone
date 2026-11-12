/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2980
 * Name: FUN_100c2980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort * FUN_100c2980(ushort *param_1,uint param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  ushort *puVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  ushort *puVar20;
  uint uVar21;
  uint *puVar22;
  int *piVar23;
  int iVar24;
  ushort *puVar25;
  ushort *local_68;
  ushort *puStack_64;
  int *piStack_60;
  ushort *local_5c;
  ushort *puStack_58;
  int *local_54;
  char *pcStack_50;
  ushort *puStack_4c;
  ushort *puStack_48;
  int *piStack_44;
  ushort *puStack_40;
  ushort *puStack_3c;
  ushort *puStack_38;
  int iStack_34;
  ushort *puStack_30;
  ushort *puStack_2c;
  ushort *puStack_28;
  int iStack_24;
  uint auStack_20 [8];
  
  puVar3 = (undefined4 *)param_1;
  iVar7 = *(int *)((int)param_1 + 0x1c);
  if (*(int *)((int)param_1 + 0x18) != iVar7) {
    iVar4 = iVar7 * 0x30;
    iVar12 = *(int *)((int)param_1 + iVar4 + 0x541);
    *param_3 = *(int *)((int)param_1 + iVar4 + 0x545);
    *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)param_1 + iVar4 + 0x541);
    return (ushort *)(iVar12 - iVar7);
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  if (*(int *)((int)param_1 + 0x30) == 0) {
    local_5c = (ushort *)FUN_100c2700(&local_68);
  }
  else {
    local_5c = *(ushort **)((int)param_1 + 0x20);
    local_68 = *(ushort **)((int)param_1 + 0x24);
  }
  local_54 = *(int **)((int)param_1 + 0x28);
  if (local_54 < (int *)0x2) {
    *param_3 = -1;
    return (ushort *)0x1;
  }
  if ((int *)0x111 < local_54) {
    local_54 = (int *)0x111;
  }
  pcVar5 = (char *)(**(code **)((int)param_1 + 0xc))(*(undefined4 *)param_1);
  puVar20 = local_5c;
  cVar1 = pcVar5[-1];
  pcVar19 = pcVar5 + -1;
  piStack_60 = (int *)((int)param_1 + 0x34);
  puStack_48 = (ushort *)0x0;
  puStack_58 = (ushort *)0x0;
  piVar6 = (int *)0x0;
  piStack_44 = (int *)0x0;
  do {
    pcVar11 = pcVar19 + -*piStack_60;
    *(int *)((int)auStack_20 + (int)piVar6) = *piStack_60;
    if ((cVar1 == pcVar11[-1]) && (*pcVar5 == *pcVar11)) {
      piVar23 = (int *)0x2;
      if ((int *)0x2 < local_54) {
        pcVar17 = pcVar5;
        do {
          pcVar17 = pcVar17 + 1;
          if (*pcVar17 != pcVar17[(int)(pcVar11 + -1) - (int)pcVar19]) break;
          piVar23 = (int *)((int)piVar23 + 1);
        } while (piVar23 < local_54);
      }
      *(int **)((int)(auStack_20 + 4) + (int)piVar6) = piVar23;
      if (*(int **)((int)(auStack_20 + 4) + (int)piStack_44) < piVar23) {
        puStack_48 = puStack_58;
        piStack_44 = piVar6;
      }
    }
    else {
      *(undefined4 *)((int)(auStack_20 + 4) + (int)piVar6) = 0;
    }
    puStack_58 = (ushort *)((int)puStack_58 + 1);
    piVar6 = piVar6 + 1;
    piStack_60 = piStack_60 + 1;
  } while (piVar6 < (int *)0x10);
  puVar8 = (ushort *)auStack_20[(int)(puStack_48 + 2)];
  puStack_38 = puVar8;
  if (*(ushort **)((int)param_1 + 0x2c) <= puVar8) {
    *param_3 = (int)puStack_48;
    FUN_100c26e0();
    return puVar8;
  }
  if (*(ushort **)((int)param_1 + 0x2c) <= local_5c) {
    *param_3 = *(int *)((int)param_1 + (int)local_68 * 4 + 0x30f25) + 4;
    FUN_100c26e0();
    return puVar20;
  }
  cVar2 = pcVar19[-1 - auStack_20[0]];
  if (((local_5c < (ushort *)0x2) && (cVar1 != cVar2)) && (puVar8 < (ushort *)0x2)) {
    *param_3 = -1;
    return (ushort *)0x1;
  }
  uVar18 = *(uint *)((int)param_1 + 0x44);
  piStack_60 = (int *)(param_2 & *(uint *)((int)param_1 + 0x58));
  *(uint *)((int)param_1 + 0x52d) = uVar18;
  if (uVar18 < 7) {
    iVar7 = FUN_100c2280();
  }
  else {
    iVar7 = FUN_100c22c0(((uint)((byte)pcVar5[-2] >>
                                (8 - (byte)*(undefined4 *)((int)param_1 + 0x48) & 0x1f)) +
                         ((*(uint *)((int)param_1 + 0x54) & param_2) <<
                         ((byte)*(undefined4 *)((int)param_1 + 0x48) & 0x1f))) * 0x600 +
                         *(int *)((int)param_1 + 0x60));
  }
  iVar12 = uVar18 * 0x10 + (int)piStack_60;
  *(int *)((int)param_1 + 0x559) =
       *(int *)((int)param_1 +
               (uint)(*(ushort *)((int)param_1 + iVar12 * 2 + 0x323fd) >> 4) * 4 + 0x30d29) + iVar7;
  *(undefined4 *)((int)param_1 + 0x575) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x561) = 0;
  puStack_40 = *(ushort **)
                ((int)param_1 +
                ((*(ushort *)((int)param_1 + iVar12 * 2 + 0x323fd) ^ 0x7f0) >> 4) * 4 + 0x30d29);
  puVar20 = (ushort *)
            (*(int *)((int)param_1 +
                     ((*(ushort *)((int)param_1 + uVar18 * 2 + 0x3257d) ^ 0x7f0) >> 4) * 4 + 0x30d29
                     ) + (int)puStack_40);
  puStack_3c = puVar20;
  if (cVar2 == cVar1) {
    iVar7 = FUN_100c2780(piStack_60);
    if ((char *)(iVar7 + (int)puVar20) < *(char **)((int)param_1 + 0x559)) {
      *(char **)((int)param_1 + 0x559) = (char *)(iVar7 + (int)puVar20);
      *(undefined4 *)((int)param_1 + 0x575) = 0;
      *(undefined4 *)((int)param_1 + 0x561) = 0;
    }
  }
  puStack_64 = puStack_38;
  if (puStack_38 <= local_5c) {
    puStack_64 = local_5c;
  }
  if (puStack_64 < (ushort *)0x2) {
    *param_3 = *(int *)((int)param_1 + 0x575);
    return (ushort *)0x1;
  }
  *(undefined4 *)((int)param_1 + 0x571) = 0;
  *(uint *)((int)param_1 + 0x549) = auStack_20[0];
  *(uint *)((int)param_1 + 0x551) = auStack_20[2];
  *(uint *)((int)param_1 + 0x54d) = auStack_20[1];
  *(uint *)((int)param_1 + 0x555) = auStack_20[3];
  puVar14 = (undefined4 *)((int)puStack_64 * 0x30 + 0x529 + (int)param_1);
  puVar20 = puStack_64;
  do {
    *puVar14 = 0x40000000;
    puVar20 = (ushort *)((int)puVar20 + -1);
    puVar14 = puVar14 + -0xc;
  } while ((ushort *)0x1 < puVar20);
  uVar18 = 0;
  do {
    uVar21 = auStack_20[uVar18 + 4];
    if (1 < uVar21) {
      iVar7 = FUN_100c27c0(piStack_60);
      puVar15 = (uint *)(uVar21 * 0x30 + 0x545 + (int)param_1);
      piVar6 = (int *)((int)param_1 + ((int)piStack_60 * 0x110 + uVar21) * 4 + 0x376a9);
      do {
        pcVar5 = (char *)((int)puStack_3c + *piVar6 + iVar7);
        if (pcVar5 < (char *)puVar15[-7]) {
          puVar15[-7] = (uint)pcVar5;
          puVar15[-1] = 0;
          *puVar15 = uVar18;
          puVar15[-5] = 0;
        }
        uVar21 = uVar21 - 1;
        piVar6 = piVar6 + -1;
        puVar15 = puVar15 + -0xc;
      } while (1 < uVar21);
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 4);
  puStack_38 = (ushort *)
               (*(int *)((int)param_1 +
                        (uint)(*(ushort *)
                                ((int)param_1 + *(int *)((int)param_1 + 0x44) * 2 + 0x3257d) >> 4) *
                        4 + 0x30d29) + (int)puStack_40);
  puVar20 = (ushort *)(auStack_20[4] + 1);
  if (auStack_20[4] < 2) {
    puVar20 = (ushort *)0x2;
  }
  if (puVar20 <= local_5c) {
    puVar13 = (ushort *)0x0;
    puVar8 = *(ushort **)((int)param_1 + 0x30f29);
    while (puVar8 < puVar20) {
      iVar7 = (int)puVar13 * 4;
      puVar13 = puVar13 + 1;
      puVar8 = *(ushort **)((int)param_1 + iVar7 + 0x30f31);
    }
    local_54 = (int *)((int)param_1 + (int)(puVar20 + (int)piStack_60 * 0x88) * 4 + 0x32e61);
    piStack_44 = (int *)((int)puVar20 * 0x30 + 0x545 + (int)param_1);
    param_1 = puVar13;
    while( true ) {
      uVar18 = *(uint *)((int)puVar3 + (int)puVar13 * 4 + 0x30f2d);
      puVar8 = puVar20 + -1;
      if ((ushort *)0x4 < puVar20) {
        puVar8 = (ushort *)0x3;
      }
      if (uVar18 < 0x80) {
        iVar7 = *(int *)((int)puVar3 + ((int)puVar8 * 0x80 + uVar18) * 4 + 0x31bbd);
      }
      else {
        iVar7 = (-(uint)(uVar18 < 0x20000) & 0xfffffff6) + 0x10;
        iVar7 = *(int *)((int)puVar3 +
                        ((uint)*(byte *)((uVar18 >> ((byte)iVar7 & 0x1f)) + 0x30529 + (int)puVar3) +
                        ((int)puVar8 * 0x20 + iVar7) * 2) * 4 + 0x317bd) +
                *(int *)((int)puVar3 + (uVar18 & 0xf) * 4 + 0x323bd);
        puVar13 = param_1;
      }
      pcVar5 = (char *)((int)puStack_38 + iVar7 + *local_54);
      if (pcVar5 < (char *)piStack_44[-7]) {
        piStack_44[-7] = (int)pcVar5;
        piStack_44[-1] = 0;
        *piStack_44 = uVar18 + 4;
        piStack_44[-5] = 0;
      }
      if ((puVar20 == *(ushort **)((int)puVar3 + (int)puVar13 * 4 + 0x30f29)) &&
         (puVar13 = puVar13 + 1, param_1 = puVar13, puVar13 == local_68)) break;
      local_54 = local_54 + 1;
      puVar20 = (ushort *)((int)puVar20 + 1);
      piStack_44 = piStack_44 + 0xc;
    }
  }
  local_68 = (ushort *)0x1;
  if (puStack_64 != (ushort *)0x1) {
    do {
      puStack_28 = (ushort *)FUN_100c2700(&piStack_44);
      if ((ushort *)puVar3[0xb] <= puStack_28) {
        puVar3[9] = piStack_44;
        puVar3[8] = puStack_28;
        break;
      }
      uVar18 = param_2 + 1;
      iVar12 = (int)local_68 * 0x30;
      iVar7 = *(int *)(iVar12 + 0x531 + (int)puVar3);
      pcVar5 = *(char **)(iVar12 + 0x541 + (int)puVar3);
      if (iVar7 == 0) {
        iVar4 = *(int *)((int)pcVar5 * 0x30 + 0x52d + (int)puVar3);
      }
      else {
        pcVar5 = pcVar5 + -1;
        if (*(int *)((int)puVar3 + iVar12 + 0x535) == 0) {
          iVar4 = *(int *)(&DAT_1011f8f4 + *(int *)((int)pcVar5 * 0x30 + 0x52d + (int)puVar3) * 4);
        }
        else {
          iVar4 = *(int *)(*(int *)((int)puVar3 + iVar12 + 0x539) * 0x30 + 0x52d + (int)puVar3);
          if (*(uint *)((int)puVar3 + iVar12 + 0x53d) < 4) {
            iVar4 = *(int *)(&DAT_1011f8f4 + *(int *)(&DAT_1011f954 + iVar4 * 4) * 4);
          }
          else {
            iVar4 = *(int *)(&DAT_1011f8f4 + *(int *)(&DAT_1011f924 + iVar4 * 4) * 4);
          }
        }
      }
      if (pcVar5 == (char *)((int)local_68 + -1)) {
        if (*(int *)((int)puVar3 + iVar12 + 0x545) == 0) {
          piStack_60 = *(int **)(&DAT_1011f984 + iVar4 * 4);
        }
        else {
          piStack_60 = *(int **)(&DAT_1011f8f4 + iVar4 * 4);
        }
      }
      else {
        if ((iVar7 == 0) || (*(int *)((int)puVar3 + iVar12 + 0x535) == 0)) {
          param_1 = *(ushort **)((int)puVar3 + iVar12 + 0x545);
          if (param_1 < 4) {
            piStack_60 = *(int **)(&DAT_1011f954 + iVar4 * 4);
          }
          else {
            piStack_60 = *(int **)(&DAT_1011f924 + iVar4 * 4);
          }
        }
        else {
          param_1 = *(ushort **)((int)puVar3 + iVar12 + 0x53d);
          pcVar5 = *(char **)((int)puVar3 + iVar12 + 0x539);
          piStack_60 = *(int **)(&DAT_1011f954 + iVar4 * 4);
        }
        iVar7 = (int)pcVar5 * 0x30;
        if (param_1 < 4) {
          auStack_20[0] = *(uint *)((int)puVar3 + (int)param_1 * 4 + iVar7 + 0x549);
          uVar21 = 1;
          if (param_1 != (ushort *)0x0) {
            uVar21 = (int)param_1 + 1;
            puVar15 = auStack_20;
            puVar22 = (uint *)((int)puVar3 + iVar7 + 0x549);
            for (; puVar15 = puVar15 + 1, param_1 != (ushort *)0x0;
                param_1 = (ushort *)((int)param_1 - 1)) {
              *puVar15 = *puVar22;
              puVar22 = puVar22 + 1;
            }
            if (3 < uVar21) goto LAB_100c30a3;
          }
          puVar15 = (uint *)((int)puVar3 + uVar21 * 4 + iVar7 + 0x549);
          puVar22 = auStack_20 + uVar21;
          for (iVar4 = 4 - uVar21; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar22 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar22 = puVar22 + 1;
          }
        }
        else {
          auStack_20[2] = *(undefined4 *)((int)puVar3 + iVar7 + 0x54d);
          auStack_20[0] = (int)param_1 - 4;
          auStack_20[1] = *(undefined4 *)((int)puVar3 + iVar7 + 0x549);
          auStack_20[3] = *(undefined4 *)((int)puVar3 + iVar7 + 0x551);
        }
      }
LAB_100c30a3:
      uVar21 = auStack_20[0];
      *(int **)((int)puVar3 + iVar12 + 0x52d) = piStack_60;
      *(uint *)((int)puVar3 + iVar12 + 0x54d) = auStack_20[1];
      puStack_48 = *(ushort **)((int)puVar3 + iVar12 + 0x529);
      *(uint *)((int)puVar3 + iVar12 + 0x549) = auStack_20[0];
      *(uint *)((int)puVar3 + iVar12 + 0x551) = auStack_20[2];
      *(uint *)((int)puVar3 + iVar12 + 0x555) = auStack_20[3];
      puStack_58 = (ushort *)0x0;
      iVar7 = (*(code *)puVar3[3])(*puVar3);
      cVar1 = *(char *)(iVar7 + -1);
      local_5c = (ushort *)(iVar7 + -1);
      cVar2 = *(char *)((int)local_5c + (-1 - uVar21));
      puStack_3c = (ushort *)((int)local_5c + (-1 - uVar21));
      piVar6 = (int *)(uVar18 & puVar3[0x16]);
      puStack_38 = (ushort *)((int)puVar3 + (int)(piVar6 + (int)piStack_60 * 4) * 2 + 0x323fd);
      pcStack_50 = (char *)(*(int *)((int)puVar3 + (uint)(*puStack_38 >> 4) * 4 + 0x30d29) +
                           (int)puStack_48);
      local_54 = piVar6;
      if (piStack_60 < 7) {
        iVar7 = FUN_100c2280();
        piVar6 = local_54;
      }
      else {
        iVar7 = FUN_100c22c0(((uint)(*(byte *)(iVar7 + -2) >> (8 - (byte)puVar3[0x12] & 0x1f)) +
                             ((puVar3[0x15] & uVar18) << ((byte)puVar3[0x12] & 0x1f))) * 0x600 +
                             puVar3[0x18]);
      }
      pcStack_50 = (char *)((int)pcStack_50 + iVar7);
      if (pcStack_50 < *(char **)((int)puVar3 + iVar12 + 0x559)) {
        *(char **)((int)puVar3 + iVar12 + 0x559) = pcStack_50;
        *(ushort **)((int)puVar3 + iVar12 + 0x571) = local_68;
        *(undefined4 *)((int)puVar3 + iVar12 + 0x575) = 0xffffffff;
        *(undefined4 *)((int)puVar3 + iVar12 + 0x561) = 0;
        puStack_58 = (ushort *)0x1;
      }
      iStack_24 = *(int *)((int)puVar3 + ((*puStack_38 ^ 0x7f0) >> 4) * 4 + 0x30d29) +
                  (int)puStack_48;
      iVar7 = *(int *)((int)puVar3 +
                      ((*(ushort *)((int)puVar3 + (int)piStack_60 * 2 + 0x3257d) ^ 0x7f0) >> 4) * 4
                      + 0x30d29) + iStack_24;
      iStack_34 = iVar7;
      if ((cVar2 == cVar1) &&
         ((local_68 <= *(ushort **)((int)puVar3 + iVar12 + 0x571) ||
          (*(int *)((int)puVar3 + iVar12 + 0x575) != 0)))) {
        iVar4 = FUN_100c2780(piVar6);
        if ((uint)(iVar4 + iVar7) <= *(uint *)((int)puVar3 + iVar12 + 0x559)) {
          *(int *)((int)puVar3 + iVar12 + 0x559) = iVar4 + iVar7;
          *(ushort **)((int)puVar3 + iVar12 + 0x571) = local_68;
          *(undefined4 *)((int)puVar3 + iVar12 + 0x575) = 0;
          *(undefined4 *)((int)puVar3 + iVar12 + 0x561) = 0;
          puStack_58 = (ushort *)0x1;
        }
      }
      pcVar5 = pcStack_50;
      puStack_48 = (ushort *)puVar3[10];
      if ((ushort *)(0xfff - (int)local_68) < (ushort *)puVar3[10]) {
        puStack_48 = (ushort *)(0xfff - (int)local_68);
      }
      if ((ushort *)0x1 < puStack_48) {
        puVar20 = (ushort *)puVar3[0xb];
        puStack_4c = puStack_48;
        if (puVar20 < puStack_48) {
          puStack_4c = puVar20;
        }
        if ((puStack_58 == (ushort *)0x0) && (cVar2 != cVar1)) {
          puVar8 = (ushort *)((int)puVar20 + 1);
          if (puStack_48 < (ushort *)((int)puVar20 + 1)) {
            puVar8 = puStack_48;
          }
          puVar20 = (ushort *)0x1;
          if ((ushort *)0x1 < puVar8) {
            puVar13 = local_5c;
            do {
              puVar13 = (ushort *)((int)puVar13 + 1);
              if (*(char *)puVar13 != *(char *)(((int)puStack_3c - (int)local_5c) + (int)puVar13))
              break;
              puVar20 = (ushort *)((int)puVar20 + 1);
            } while (puVar20 < puVar8);
          }
          puStack_38 = (ushort *)((int)puVar20 + -1);
          if ((ushort *)0x1 < puStack_38) {
            uVar21 = param_2 + 2 & puVar3[0x16];
            iVar7 = *(int *)((int)puVar3 +
                            ((*(ushort *)
                               ((int)puVar3 +
                               (*(int *)(&DAT_1011f8f4 + (int)piStack_60 * 4) * 0x10 + uVar21) * 2 +
                               0x323fd) ^ 0x7f0) >> 4) * 4 + 0x30d29);
            iVar12 = *(int *)((int)puVar3 +
                             ((*(ushort *)
                                ((int)puVar3 +
                                *(int *)(&DAT_1011f8f4 + (int)piStack_60 * 4) * 2 + 0x3257d) ^ 0x7f0
                              ) >> 4) * 4 + 0x30d29);
            puVar20 = (ushort *)((int)puVar20 + (int)local_68);
            if (puStack_64 < puVar20) {
              puVar14 = (undefined4 *)((int)puStack_64 * 0x30 + 0x529 + (int)puVar3);
              iVar4 = (int)puVar20 - (int)puStack_64;
              puStack_64 = (ushort *)((int)puStack_64 + iVar4);
              do {
                puVar14 = puVar14 + 0xc;
                iVar4 = iVar4 + -1;
                *puVar14 = 0x40000000;
              } while (iVar4 != 0);
            }
            iVar4 = FUN_100c2880(puStack_38,uVar21);
            puVar14 = (undefined4 *)((int)puVar20 * 0x30 + 0x529 + (int)puVar3);
            if (pcVar5 + iVar4 + iVar7 + iVar12 < (char *)*puVar14) {
              *puVar14 = pcVar5 + iVar4 + iVar7 + iVar12;
              puVar14[6] = (char *)((int)local_68 + 1);
              puVar14[7] = 0;
              puVar14[2] = 1;
              puVar14[3] = 0;
            }
          }
        }
        puStack_40 = (ushort *)0x2;
        param_1 = (ushort *)0x0;
        do {
          pcVar5 = (char *)((int)local_5c - auStack_20[(int)param_1]);
          puStack_58 = (ushort *)(pcVar5 + -1);
          if (((char)*local_5c == pcVar5[-1]) && (*(char *)((int)local_5c + 1) == *pcVar5)) {
            puVar20 = (ushort *)0x2;
            if ((ushort *)0x2 < puStack_4c) {
              puVar8 = local_5c + 1;
              do {
                if ((char)*puVar8 != *(char *)(((int)puStack_58 - (int)local_5c) + (int)puVar8))
                break;
                puVar20 = (ushort *)((int)puVar20 + 1);
                puVar8 = (ushort *)((int)puVar8 + 1);
              } while (puVar20 < puStack_4c);
            }
            puVar8 = (ushort *)((int)puVar20 + (int)local_68);
            if (puStack_64 < puVar8) {
              iVar12 = (int)puStack_64 * 0x30;
              iVar7 = (int)puVar8 - (int)puStack_64;
              puStack_64 = (ushort *)((int)puStack_64 + iVar7);
              puVar14 = (undefined4 *)(iVar12 + 0x529 + (int)puVar3);
              do {
                puVar14 = puVar14 + 0xc;
                iVar7 = iVar7 + -1;
                *puVar14 = 0x40000000;
              } while (iVar7 != 0);
            }
            puStack_2c = puVar20;
            iVar7 = FUN_100c27c0(local_54);
            puStack_30 = (ushort *)(iVar7 + iStack_34);
            puStack_3c = puVar20 + (int)local_54 * 0x88;
            piVar6 = (int *)((int)puVar3 + (int)puStack_3c * 4 + 0x376a9);
            puVar15 = (uint *)((int)puVar8 * 0x30 + 0x545 + (int)puVar3);
            puVar8 = puVar20;
            do {
              if ((char *)(*piVar6 + (int)puStack_30) < (char *)puVar15[-7]) {
                puVar15[-7] = (uint)(*piVar6 + (int)puStack_30);
                puVar15[-1] = (uint)local_68;
                *puVar15 = (uint)param_1;
                puVar15[-5] = 0;
              }
              puVar8 = (ushort *)((int)puVar8 + -1);
              piVar6 = piVar6 + -1;
              puVar15 = puVar15 + -0xc;
            } while ((ushort *)0x1 < puVar8);
            if (param_1 == (ushort *)0x0) {
              puStack_40 = (ushort *)((int)puVar20 + 1);
            }
            puVar8 = (ushort *)((int)puVar20 + 1);
            puVar13 = (ushort *)(puVar3[0xb] + (int)puVar8);
            if (puStack_48 < (ushort *)(puVar3[0xb] + (int)puVar8)) {
              puVar13 = puStack_48;
            }
            if (puVar8 < puVar13) {
              pcVar5 = (char *)((int)puVar8 + (int)local_5c);
              do {
                if (*pcVar5 != pcVar5[(int)puStack_58 - (int)local_5c]) break;
                puVar8 = (ushort *)((int)puVar8 + 1);
                pcVar5 = pcVar5 + 1;
              } while (puVar8 < puVar13);
            }
            pcStack_50 = (char *)((int)puVar8 + (-1 - (int)puVar20));
            if ((char *)0x1 < pcStack_50) {
              puStack_38 = (ushort *)((int)puVar20 + uVar18 & puVar3[0x15]);
              iVar9 = FUN_100c22c0(((uint)((byte)((char *)((int)local_5c + -1))[(int)puVar20] >>
                                          (8 - (byte)puVar3[0x12] & 0x1f)) +
                                   ((int)puStack_38 << ((byte)puVar3[0x12] & 0x1f))) * 0x600 +
                                   puVar3[0x18]);
              puVar13 = puStack_2c;
              puVar8 = puStack_30;
              iVar7 = *(int *)((int)puVar3 +
                              (uint)(*(ushort *)
                                      ((int)puVar3 +
                                      (((uint)((int)puVar20 + uVar18) & puVar3[0x16]) +
                                      *(int *)(&DAT_1011f954 + (int)piStack_60 * 4) * 0x10) * 2 +
                                      0x323fd) >> 4) * 4 + 0x30d29);
              iVar12 = *(int *)((int)puVar3 + (int)puStack_3c * 4 + 0x376a9);
              uVar21 = (uint)((int)puStack_2c + param_2 + 2) & puVar3[0x16];
              iVar4 = *(int *)((int)puVar3 +
                              ((*(ushort *)
                                 ((int)puVar3 +
                                 (*(int *)(&DAT_1011f8f4 +
                                          *(int *)(&DAT_1011f954 + (int)piStack_60 * 4) * 4) * 0x10
                                 + uVar21) * 2 + 0x323fd) ^ 0x7f0) >> 4) * 4 + 0x30d29);
              iVar10 = *(int *)((int)puVar3 +
                               ((*(ushort *)
                                  ((int)puVar3 +
                                  *(int *)(&DAT_1011f8f4 +
                                          *(int *)(&DAT_1011f954 + (int)piStack_60 * 4) * 4) * 2 +
                                  0x3257d) ^ 0x7f0) >> 4) * 4 + 0x30d29);
              puVar20 = (ushort *)(pcStack_50 + (int)puStack_2c + 1 + (int)local_68);
              if (puStack_64 < puVar20) {
                puStack_2c = (ushort *)((int)puStack_64 * 0x30 + 0x529 + (int)puVar3);
                iVar24 = (int)puVar20 - (int)puStack_64;
                puStack_64 = (ushort *)((int)puStack_64 + iVar24);
                puVar16 = puStack_2c;
                do {
                  puVar16 = puVar16 + 0x18;
                  iVar24 = iVar24 + -1;
                  puVar16[0] = 0;
                  puVar16[1] = 0x4000;
                } while (iVar24 != 0);
              }
              puStack_30 = puVar20;
              iVar24 = FUN_100c2880(pcStack_50,uVar21);
              puVar14 = (undefined4 *)((int)puVar20 * 0x30 + 0x529 + (int)puVar3);
              pcVar5 = (char *)((int)puVar8 + iVar24 + iVar4 + iVar10 + iVar9 + iVar7 + iVar12);
              if (pcVar5 < (char *)*puVar14) {
                *puVar14 = pcVar5;
                puVar14[6] = (char *)((int)puVar13 + 1) + (int)local_68;
                puVar14[4] = local_68;
                puVar14[7] = 0;
                puVar14[2] = 1;
                puVar14[3] = 1;
                puVar14[5] = param_1;
              }
            }
          }
          param_1 = (ushort *)((int)param_1 + 1);
        } while (param_1 < 4);
        puVar20 = puStack_28;
        if (puStack_4c < puStack_28) {
          iVar7 = 0;
          puVar20 = *(ushort **)((int)puVar3 + 0x30f29);
          while (puVar20 < puStack_4c) {
            iVar12 = iVar7 * 4;
            iVar7 = iVar7 + 2;
            puVar20 = *(ushort **)((int)puVar3 + iVar12 + 0x30f31);
          }
          *(ushort **)((int)puVar3 + iVar7 * 4 + 0x30f29) = puStack_4c;
          piStack_44 = (int *)(iVar7 + 2);
          puVar20 = puStack_4c;
        }
        if (puStack_40 <= puVar20) {
          iStack_24 = *(int *)((int)puVar3 +
                              (uint)(*(ushort *)((int)puVar3 + (int)piStack_60 * 2 + 0x3257d) >> 4)
                              * 4 + 0x30d29) + iStack_24;
          if (puStack_64 < (ushort *)((int)puVar20 + (int)local_68)) {
            iVar12 = (int)puStack_64 * 0x30;
            iVar7 = ((int)puVar20 + (int)local_68) - (int)puStack_64;
            puStack_64 = (ushort *)((int)puStack_64 + iVar7);
            puVar14 = (undefined4 *)(iVar12 + 0x529 + (int)puVar3);
            do {
              puVar14 = puVar14 + 0xc;
              iVar7 = iVar7 + -1;
              *puVar14 = 0x40000000;
            } while (iVar7 != 0);
          }
          param_1 = (ushort *)0x0;
          puVar20 = *(ushort **)((int)puVar3 + 0x30f29);
          while (puVar20 < puStack_40) {
            iVar7 = (int)param_1 * 4;
            param_1 = (ushort *)((int)param_1 + 2);
            puVar20 = *(ushort **)((int)puVar3 + iVar7 + 0x30f31);
          }
          puVar20 = *(ushort **)((int)puVar3 + (int)param_1 * 4 + 0x30f2d);
          iVar7 = (-(uint)(puVar20 < (ushort *)0x20000) & 0xfffffff6) + 0x10;
          puStack_3c = (ushort *)
                       ((uint)*(byte *)(((uint)puVar20 >> ((byte)iVar7 & 0x1f)) + 0x30529 +
                                       (int)puVar3) + iVar7 * 2);
          puStack_4c = (ushort *)
                       ((int)puVar3 + (int)(puStack_40 + (int)local_54 * 0x88) * 4 + 0x32e61);
          local_54 = (int *)((int)((int)puStack_40 + (int)local_68) * 0x30 + 0x545 + (int)puVar3);
          puVar13 = local_5c;
          puVar8 = puStack_40;
          puStack_58 = puVar20;
          do {
            puVar25 = (ushort *)((int)puVar8 + 1);
            puVar16 = puVar8 + -1;
            if ((ushort *)0x4 < puVar8) {
              puVar16 = (ushort *)0x3;
            }
            if (puVar20 < (ushort *)0x80) {
              iVar7 = *(int *)((int)puVar3 + (int)(puVar20 + (int)puVar16 * 0x40) * 4 + 0x31bbd);
            }
            else {
              iVar7 = *(int *)((int)puVar3 + (int)(puStack_3c + (int)puVar16 * 0x20) * 4 + 0x317bd)
                      + *(int *)((int)puVar3 + ((uint)puVar20 & 0xf) * 4 + 0x323bd);
            }
            puStack_40 = (ushort *)(*(int *)puStack_4c + iStack_24 + iVar7);
            if (puStack_40 < (ushort *)local_54[-7]) {
              local_54[-7] = (int)puStack_40;
              local_54[-1] = (int)local_68;
              *local_54 = (int)(puVar20 + 2);
              local_54[-5] = 0;
            }
            if (puVar8 == *(ushort **)((int)puVar3 + (int)param_1 * 4 + 0x30f29)) {
              pcVar5 = (char *)((int)puVar13 + (-1 - (int)puVar20));
              puVar20 = (ushort *)(puVar3[0xb] + (int)puVar25);
              if (puStack_48 < (ushort *)(puVar3[0xb] + (int)puVar25)) {
                puVar20 = puStack_48;
              }
              puVar16 = puVar25;
              if (puVar25 < puVar20) {
                puStack_28 = (ushort *)((int)puVar13 - (int)pcVar5);
                pcVar5 = pcVar5 + (int)puVar25;
                do {
                  puVar13 = local_5c;
                  if (*(char *)((int)puStack_28 + (int)pcVar5) != *pcVar5) break;
                  puVar16 = (ushort *)((int)puVar16 + 1);
                  pcVar5 = pcVar5 + 1;
                } while (puVar16 < puVar20);
              }
              pcStack_50 = (char *)((int)puVar16 + (-1 - (int)puVar8));
              puStack_38 = puVar25;
              if ((char *)0x1 < pcStack_50) {
                puStack_2c = (ushort *)(param_2 + (int)puVar25 & puVar3[0x16]);
                puStack_28 = (ushort *)(uint)(byte)((char *)((int)puVar13 + -1))[(int)puVar25];
                iVar10 = FUN_100c22c0(((uint)(*(byte *)((int)(puVar13 + -1) + (int)puVar25) >>
                                             (8 - (byte)puVar3[0x12] & 0x1f)) +
                                      (((uint)(param_2 + (int)puVar25) & puVar3[0x15]) <<
                                      ((byte)puVar3[0x12] & 0x1f))) * 0x600 + puVar3[0x18]);
                puVar25 = puStack_38;
                puVar8 = puStack_40;
                iVar7 = *(int *)((int)puVar3 +
                                (uint)(*(ushort *)
                                        ((int)puVar3 +
                                        (*(int *)(&DAT_1011f924 + (int)piStack_60 * 4) * 0x10 +
                                        (int)puStack_2c) * 2 + 0x323fd) >> 4) * 4 + 0x30d29);
                uVar21 = (int)puStack_2c + 1U & puVar3[0x16];
                iVar12 = *(int *)((int)puVar3 +
                                 ((*(ushort *)
                                    ((int)puVar3 +
                                    (*(int *)(&DAT_1011f8f4 +
                                             *(int *)(&DAT_1011f924 + (int)piStack_60 * 4) * 4) *
                                     0x10 + uVar21) * 2 + 0x323fd) ^ 0x7f0) >> 4) * 4 + 0x30d29);
                iVar4 = *(int *)((int)puVar3 +
                                ((*(ushort *)
                                   ((int)puVar3 +
                                   *(int *)(&DAT_1011f8f4 +
                                           *(int *)(&DAT_1011f924 + (int)piStack_60 * 4) * 4) * 2 +
                                   0x3257d) ^ 0x7f0) >> 4) * 4 + 0x30d29);
                puVar20 = (ushort *)((char *)((int)puStack_38 + (int)pcStack_50) + (int)local_68);
                if (puStack_64 < puVar20) {
                  puStack_28 = (ushort *)((int)puStack_64 * 0x30 + 0x529 + (int)puVar3);
                  iVar9 = (int)puVar20 - (int)puStack_64;
                  puStack_64 = (ushort *)((int)puStack_64 + iVar9);
                  puVar13 = puStack_28;
                  do {
                    puVar13 = puVar13 + 0x18;
                    iVar9 = iVar9 + -1;
                    puVar13[0] = 0;
                    puVar13[1] = 0x4000;
                  } while (iVar9 != 0);
                }
                puStack_2c = puVar20;
                iVar9 = FUN_100c2880(pcStack_50,uVar21);
                puVar14 = (undefined4 *)((int)puVar20 * 0x30 + 0x529 + (int)puVar3);
                pcVar5 = (char *)((int)puVar8 + iVar9 + iVar12 + iVar4 + iVar10 + iVar7);
                puVar13 = local_5c;
                if (pcVar5 < (char *)*puVar14) {
                  *puVar14 = pcVar5;
                  puVar14[4] = local_68;
                  puVar14[6] = (char *)((int)puVar25 + (int)local_68);
                  puVar14[7] = 0;
                  puVar14[2] = 1;
                  puVar14[3] = 1;
                  puVar14[5] = puStack_58 + 2;
                }
              }
              param_1 = (ushort *)((int)param_1 + 2);
              if (param_1 == (ushort *)piStack_44) break;
              puVar20 = *(ushort **)((int)puVar3 + (int)param_1 * 4 + 0x30f2d);
              puStack_58 = puVar20;
              if ((ushort *)0x7f < puVar20) {
                iVar7 = (-(uint)(puVar20 < (ushort *)0x20000) & 0xfffffff6) + 0x10;
                puStack_3c = (ushort *)
                             ((uint)*(byte *)(((uint)puVar20 >> ((byte)iVar7 & 0x1f)) + 0x30529 +
                                             (int)puVar3) + iVar7 * 2);
              }
            }
            puStack_4c = puStack_4c + 2;
            local_54 = local_54 + 0xc;
            puVar8 = puVar25;
          } while( true );
        }
      }
      local_68 = (ushort *)((int)local_68 + 1);
      param_2 = uVar18;
    } while (local_68 != puStack_64);
  }
  puVar20 = (ushort *)FUN_100c28b0(param_3);
  return puVar20;
}


/* END FUNCTION 0x100c2980 */
