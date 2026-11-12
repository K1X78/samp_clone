/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042b430
 * Name: FUN_0042b430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_0042b430(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  short *psVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 *in_EAX;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined8 uVar21;
  char cVar22;
  uint local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  undefined4 *local_a4;
  undefined4 *local_a0;
  uint local_9c;
  int local_98;
  undefined1 *local_94;
  uint local_90;
  undefined1 *local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined1 *local_70 [2];
  uint local_68 [4];
  int local_58;
  uint local_54 [5];
  uint local_40 [4];
  uint uStack_30;
  undefined1 *local_2c;
  uint auStack_28 [4];
  uint local_18;
  uint local_14;
  
  local_ac = (undefined1 *)0x0;
  iVar10 = *(int *)(param_1 + 0x3c);
  local_9c = 0;
  local_90 = 0;
  local_84 = 0;
  local_a8 = (undefined1 *)0x0;
  local_78 = 0;
  local_88 = 0;
  if (param_2 == 0) {
    return 7;
  }
  puVar15 = (undefined1 *)(uint)*(ushort *)(param_1 + 0x10) + *(byte *)(param_1 + 1);
  if (puVar15 < (undefined1 *)0x2) {
    local_8c = puVar15 + 1;
  }
  else {
    local_8c = (undefined1 *)0x3;
    if ((in_EAX != (undefined1 *)0x0) && (local_ac = puVar15 + 0xfffffffe, in_EAX != puVar15)) {
      local_ac = in_EAX + 0xffffffff;
    }
    puVar15 = (undefined1 *)0x2;
  }
  if (local_ac + ((int)puVar15 - (uint)*(byte *)(param_1 + 1)) ==
      (undefined1 *)(uint)*(ushort *)(param_1 + 0x10)) {
    local_70[0] = (undefined1 *)(*(byte *)(param_1 + 5) + 8 + *(int *)(param_1 + 0x40));
  }
  else {
    puVar14 = (undefined1 *)
              ((uint)*(ushort *)(param_1 + 0xc) + *(int *)(param_1 + 0x40) +
              (int)(local_ac + ((int)puVar15 - (uint)*(byte *)(param_1 + 1))) * 2);
    local_70[0] = (undefined1 *)
                  (*(int *)(param_1 + 0x40) +
                  (uint)(CONCAT11(*puVar14,puVar14[1]) & *(ushort *)(param_1 + 0x12)));
  }
  local_80 = iVar10;
  local_a0 = (undefined4 *)FUN_00408f80();
  puVar17 = local_54 + (int)puVar15;
  local_b0 = FUN_0042a810();
  if (local_b0 == 0) {
    local_94 = local_ac + (int)puVar15;
    puVar14 = puVar15;
    do {
      puVar1 = local_8c;
      local_90 = *(byte *)(*puVar17 + 1) + local_90 + 1 + (uint)*(ushort *)(*puVar17 + 0x10);
      puVar15 = puVar14 + 0xffffffff;
      local_94 = local_94 + 0xffffffff;
      if (puVar14 == (undefined1 *)0x0) {
        local_74 = *(ushort *)(local_80 + 0x16) + 0x50;
        uVar9 = local_90 + 3 & 0xfffffffc;
        local_88 = FUN_00412610(local_74 * (int)local_8c + (uint)*(ushort *)(local_80 + 0x16));
        if (local_88 == 0) {
          local_b0 = 7;
        }
        else {
          local_98 = local_88 + uVar9 * 4;
          local_94 = (undefined1 *)(local_98 + uVar9 * 2);
          local_7c = (uint)*(byte *)(local_54[0] + 4);
          local_a4 = (undefined4 *)0x0;
          local_90 = CONCAT22((short)((uint)local_94 >> 0x10),(ushort)*(byte *)(local_54[0] + 3)) <<
                     2;
          if (0 < (int)puVar1) {
            local_58 = 0;
            do {
              puVar16 = (undefined4 *)(local_94 + local_58 + (uint)*(ushort *)(local_80 + 0x16));
              (&uStack_30)[(int)local_a4 + 1] = (uint)puVar16;
              puVar12 = (undefined4 *)local_54[(int)local_a4];
              puVar13 = puVar12;
              puVar19 = puVar16;
              for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar19 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar19 = puVar19 + 1;
              }
              puVar16[0x10] = puVar16 + 0x13;
              uVar4 = *(ushort *)(local_80 + 0x16);
              puVar12 = (undefined4 *)puVar12[0x10];
              puVar13 = puVar16 + 0x13;
              for (uVar9 = (uint)(uVar4 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar13 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              }
              for (uVar9 = uVar4 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              }
              iVar18 = (uint)*(ushort *)(puVar16 + 4) + (uint)*(byte *)((int)puVar16 + 1);
              iVar10 = 0;
              if (iVar18 != 0) {
                do {
                  uVar6 = FUN_0040c780();
                  uVar9 = local_9c;
                  *(uint *)(local_88 + local_9c * 4) = uVar6;
                  pbVar5 = FUN_0040c950(uVar6);
                  local_9c = uVar9 + 1;
                  *(short *)(local_98 + -2 + local_9c * 2) = (short)pbVar5;
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar18);
              }
              if (((int)local_a4 < (int)(local_8c + -1)) && (local_7c == 0)) {
                uVar4 = *(ushort *)(local_68 + (int)local_a4 + 0xffffffff);
                puVar12 = (undefined4 *)local_54[(int)local_a4 + 3];
                *(ushort *)(local_98 + local_9c * 2) = uVar4;
                puVar19 = (undefined4 *)(local_a8 + (int)local_94);
                local_a8 = local_a8 + uVar4;
                puVar13 = puVar19;
                for (uVar9 = (uint)(uVar4 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
                  *puVar13 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar13 = puVar13 + 1;
                }
                for (uVar9 = uVar4 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
                  puVar12 = (undefined4 *)((int)puVar12 + 1);
                  puVar13 = (undefined4 *)((int)puVar13 + 1);
                }
                *(undefined1 **)(local_88 + local_9c * 4) =
                     (undefined1 *)((local_90 & 0xffff) + (int)puVar19);
                psVar2 = (short *)(local_98 + local_9c * 2);
                *psVar2 = *psVar2 - (short)local_90;
                if (*(char *)((int)puVar16 + 3) == '\0') {
                  **(undefined4 **)(local_88 + local_9c * 4) = *(undefined4 *)(puVar16[0x10] + 8);
                }
                else if (*(ushort *)(local_98 + local_9c * 2) < 4) {
                  *(undefined2 *)(local_98 + local_9c * 2) = 4;
                }
                local_9c = local_9c + 1;
              }
              local_a4 = (undefined4 *)((int)local_a4 + 1);
              local_58 = local_58 + local_74;
            } while ((int)local_a4 < (int)local_8c);
          }
          iVar10 = local_80;
          uVar4 = *(ushort *)(local_80 + 0x18);
          uVar9 = 0;
          iVar18 = 0;
          puVar15 = (undefined1 *)0x0;
          if (0 < (int)local_9c) {
            do {
              uVar6 = (uint)*(ushort *)(local_98 + uVar9 * 2);
              puVar15 = puVar15 + uVar6 + 2;
              if ((int)((uVar4 - 0xc) + (local_90 & 0xffff)) < (int)puVar15) {
                local_68[iVar18 + 0xffffffff] = (uint)(puVar15 + -uVar6);
                local_54[iVar18 + 5] = uVar9;
                if (local_7c != 0) {
                  uVar9 = uVar9 - 1;
                }
                puVar15 = (undefined1 *)0x0;
                iVar18 = iVar18 + 1;
                if (4 < iVar18) {
                  local_b0 = FUN_0041d790();
                  goto LAB_0042be36;
                }
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)local_9c);
          }
          local_54[iVar18 + 5] = local_9c;
          uVar9 = iVar18 + 1;
          local_70[uVar9] = puVar15;
          for (iVar20 = iVar18; 0 < iVar20; iVar20 = iVar20 + -1) {
            iVar11 = local_68[iVar20 + 0xffffffff];
            puVar15 = local_70[iVar20];
            while( true ) {
              iVar7 = local_54[iVar20 + 4] - 1;
              iVar8 = (iVar7 - local_7c) + 1;
              if ((iVar11 != 0) &&
                 ((int)(puVar15 + (-2 - (uint)*(ushort *)(local_98 + iVar7 * 2))) <
                  (int)(iVar11 + *(ushort *)(local_98 + iVar8 * 2) + 2))) break;
              iVar11 = iVar11 + *(ushort *)(local_98 + iVar8 * 2) + 2;
              puVar15 = puVar15 + (-2 - (uint)*(ushort *)(local_98 + iVar7 * 2));
              local_54[iVar20 + 4] = local_54[iVar20 + 4] - 1;
            }
            local_68[iVar20 + 0xffffffff] = iVar11;
            local_70[iVar20] = puVar15;
          }
          local_74 = uVar9;
          if (*(uint *)(local_54[0] + 0x48) < 2) {
            local_b0 = FUN_0041d790();
            goto LAB_0042be36;
          }
          local_94 = (undefined1 *)(uint)**(byte **)(local_54[0] + 0x40);
          iVar20 = 0;
          if (0 < (int)uVar9) {
            do {
              if (iVar20 < (int)local_8c) {
                local_a8 = (undefined1 *)local_54[iVar20];
                iVar11 = *(int *)(local_a8 + 0x44);
                local_68[iVar20 + 0xffffffff] = (uint)local_a8;
                local_54[iVar20] = 0;
                local_b0 = FUN_00423650(iVar11);
                local_84 = local_84 + 1;
LAB_0042b9eb:
                if (local_b0 != 0) goto LAB_0042be36;
              }
              else {
                local_b0 = FUN_00428700(iVar10,(int *)&local_a8,&local_a0,local_a0,'\0');
                if (local_b0 != 0) goto LAB_0042be36;
                cVar22 = *(char *)(iVar10 + 0x14);
                local_84 = local_84 + 1;
                local_68[iVar20 + 0xffffffff] = (uint)local_a8;
                if (cVar22 != '\0') {
                  FUN_00427460('\x05',*(int *)(param_1 + 0x48));
                  goto LAB_0042b9eb;
                }
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 < (int)uVar9);
          }
          if (iVar20 < (int)local_8c) {
            do {
              FUN_00428f50();
              if (local_b0 != 0) goto LAB_0042be36;
              FUN_00427610();
              local_54[iVar20] = 0;
              iVar20 = iVar20 + 1;
            } while (iVar20 < (int)local_8c);
          }
          iVar10 = local_84;
          iVar20 = 0;
          if (uVar9 != 1 && -1 < iVar18) {
            do {
              local_74 = local_68[iVar20 + 0xffffffff];
              uVar6 = *(uint *)(local_74 + 0x48);
              iVar11 = iVar20 + 1;
              iVar7 = iVar11;
              iVar8 = iVar20;
              if (iVar11 < (int)uVar9) {
                do {
                  if (*(uint *)(local_68[iVar7 + 0xffffffff] + 0x48) < uVar6) {
                    uVar6 = *(uint *)(local_68[iVar7 + 0xffffffff] + 0x48);
                    iVar8 = iVar7;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)uVar9);
                if (iVar20 < iVar8) {
                  local_68[iVar20 + 0xffffffff] = local_68[iVar8 + 0xffffffff];
                  local_68[iVar8 + 0xffffffff] = local_74;
                }
              }
              iVar20 = iVar11;
            } while (iVar11 < iVar18);
          }
          puVar15 = local_70[local_84];
          local_a8 = puVar15;
          FUN_00408fa0(local_70[0]);
          uVar9 = 0;
          local_a4 = (undefined4 *)0x0;
          if (0 < iVar10) {
            do {
              puVar16 = local_a4;
              iVar10 = local_68[(int)local_a4 + 0xffffffff];
              FUN_0041f920((uint)local_94);
              uVar6 = local_54[(int)puVar16 + 5];
              FUN_0040cf30(iVar10,uVar6 - uVar9,local_88 + uVar9 * 4,local_98 + uVar9 * 2);
              if ((int)uVar6 < (int)local_9c) {
                puVar16 = *(undefined4 **)(local_88 + uVar6 * 4);
                uVar4 = *(ushort *)(local_98 + uVar6 * 2);
                uVar9 = (uint)uVar4 + (local_90 & 0xffff);
                puVar13 = (undefined4 *)(param_2 + local_78);
                puVar12 = puVar13;
                if (*(char *)(iVar10 + 3) == '\0') {
                  *(undefined4 *)(*(int *)(iVar10 + 0x40) + 8) = *puVar16;
                }
                else if (local_7c == 0) {
                  puVar16 = puVar16 + -1;
                  if (uVar4 == 4) {
                    pbVar5 = FUN_0040c950((uint)puVar16);
                    uVar9 = (uint)pbVar5 & 0xffff;
                  }
                }
                else {
                  iVar18 = uVar6 * 4;
                  uVar6 = uVar6 - 1;
                  FUN_0040c7d0(iVar10,*(int *)(local_88 + -4 + iVar18),(int *)(auStack_28 + 2));
                  uVar21 = FUN_00408c30(puVar13 + 1,local_18,local_14);
                  uVar9 = (int)uVar21 + 4;
                  puVar12 = (undefined4 *)0x0;
                  puVar16 = puVar13;
                }
                local_78 = local_78 + uVar9;
                FUN_00429380(param_1,(undefined1 *)puVar12,param_1,(int)local_ac,
                             (undefined1 *)puVar16,*(int *)(iVar10 + 0x48),&local_b0);
                if (local_b0 != 0) goto LAB_0042be36;
                uVar6 = uVar6 + 1;
                local_ac = local_ac + 1;
                puVar16 = local_a4;
              }
              local_a4 = (undefined4 *)((int)puVar16 + 1);
              puVar15 = local_a8;
              uVar9 = uVar6;
            } while ((int)local_a4 < local_84);
          }
          if (((uint)local_94 & 8) == 0) {
            *(undefined4 *)(*(int *)(puVar15 + 0x40) + 8) =
                 *(undefined4 *)(*(int *)((&uStack_30)[(int)local_8c] + 0x40) + 8);
          }
          if (((param_3 != 0) && (*(short *)(param_1 + 0x10) == 0)) &&
             ((ushort)*(byte *)(param_1 + 5) <= *(ushort *)(local_70[1] + 0xe))) {
            FUN_004296a0((int *)&local_b0);
            FUN_00428f50();
            goto LAB_0042be36;
          }
          if (*(char *)(local_80 + 0x14) == '\0') goto LAB_0042be36;
          local_78 = (uint)(byte)local_2c[1];
          puVar16 = (undefined4 *)(*(ushort *)(local_2c + 0x10) + local_78);
          local_ac = local_70[1];
          local_94 = local_2c;
          if (local_78 == 0) {
            puVar12 = (undefined4 *)0xffffffff;
          }
          else {
            puVar12 = (undefined4 *)(uint)*(ushort *)(local_2c + 0x18);
          }
          local_70[0] = (undefined1 *)0x0;
          local_a4 = (undefined4 *)0x0;
          local_a0 = puVar12;
          if (0 < (int)local_9c) {
            local_a8 = (undefined1 *)0x0;
            do {
              puVar13 = local_a4;
              uVar9 = 0;
              if (local_a4 == puVar16) {
                uVar9 = (uint)(local_7c == 0);
                do {
                  local_2c = (undefined1 *)(&uStack_30)[(int)(local_70[0] + 2)];
                  local_70[0] = local_70[0] + 1;
                  bVar3 = local_2c[1];
                  puVar16 = (undefined4 *)
                            ((uint)bVar3 + *(ushort *)(local_2c + 0x10) + uVar9 + (int)local_a4);
                  if (bVar3 != 0) {
                    local_78 = (uint)bVar3;
                    puVar12 = (undefined4 *)(*(ushort *)(local_2c + 0x18) + uVar9 + (int)local_a4);
                  }
                  local_70[1] = local_ac;
                  local_a0 = puVar12;
                  local_94 = local_2c;
                } while (local_a4 == puVar16);
              }
              if (local_a4 == puVar12) {
                local_78 = local_78 - 1;
                uVar9 = 1;
                if (0 < (int)local_78) {
                  puVar12 = (undefined4 *)((int)puVar12 + 1);
                  local_a0 = puVar12;
                }
              }
              if (local_a4 == *(undefined4 **)((int)local_54 + (int)(local_a8 + 0x14))) {
                local_70[1] = *(undefined1 **)(local_a8 + 4 + (int)(local_70 + 1));
                local_a8 = local_a8 + 4;
                local_ac = local_70[1];
                if (local_7c != 0) goto LAB_0042bd42;
              }
              else {
LAB_0042bd42:
                if ((uVar9 != 0) || (*(int *)(local_2c + 0x48) != *(int *)(local_70[1] + 0x48))) {
                  if ((short)local_90 == 0) {
                    iVar10 = *(int *)(local_ac + 0x48);
                    cVar22 = '\x05';
                    FUN_00408f80();
                    FUN_00427460(cVar22,iVar10);
                    puVar12 = local_a0;
                    local_70[1] = local_ac;
                  }
                  if (*(ushort *)(local_70[1] + 10) < *(ushort *)(local_98 + (int)puVar13 * 2)) {
                    FUN_004275c0();
                    puVar12 = local_a0;
                    local_2c = local_94;
                    puVar13 = local_a4;
                  }
                }
              }
              local_a4 = (undefined4 *)((int)puVar13 + 1);
            } while ((int)local_a4 < (int)local_9c);
          }
          iVar10 = local_84;
          if (((short)local_90 == 0) && (iVar18 = 0, 0 < local_84)) {
            do {
              iVar20 = *(int *)(local_68[iVar18 + 0xffffffff] + 0x48);
              cVar22 = '\x05';
              FUN_00408f80();
              FUN_00427460(cVar22,iVar20);
              iVar18 = iVar18 + 1;
            } while (iVar18 < iVar10);
          }
        }
        goto LAB_0042be36;
      }
      if ((local_94 == (undefined1 *)(uint)*(ushort *)(param_1 + 0x18)) &&
         (*(char *)(param_1 + 1) != '\0')) {
        uVar9 = *(uint *)(param_1 + 0x14);
        local_54[(int)(puVar14 + 2)] = uVar9;
        local_a0 = (undefined4 *)FUN_00408f80();
        pbVar5 = FUN_0040c950(uVar9);
        local_68[(int)puVar15 + 0xffffffff] = (uint)pbVar5 & 0xffff;
        *(undefined1 *)(param_1 + 1) = 0;
      }
      else {
        puVar1 = (undefined1 *)
                 ((uint)*(ushort *)(param_1 + 0xc) + *(int *)(param_1 + 0x40) +
                 (int)(local_ac + ((int)puVar15 - (uint)*(byte *)(param_1 + 1))) * 2);
        puVar16 = (undefined4 *)
                  ((uint)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(param_1 + 0x12)) +
                  *(int *)(param_1 + 0x40));
        local_54[(int)(puVar14 + 2)] = (uint)puVar16;
        local_a0 = (undefined4 *)FUN_00408f80();
        pbVar5 = FUN_0040c950((uint)puVar16);
        local_74 = (uint)pbVar5 & 0xffff;
        cVar22 = *(char *)(iVar10 + 0x12);
        local_68[(int)puVar15 + 0xffffffff] = local_74;
        if (cVar22 != '\0') {
          if ((int)(uint)*(ushort *)(iVar10 + 0x18) <
              (int)((int)puVar16 + (local_74 - *(int *)(param_1 + 0x40)))) {
            local_b0 = FUN_0041d790();
            break;
          }
          puVar12 = puVar16;
          puVar13 = (undefined4 *)((int)puVar16 + (param_2 - *(int *)(param_1 + 0x40)));
          for (uVar9 = local_74 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar9 = (uint)pbVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          local_54[(int)(puVar14 + 2)] = (uint)((int)puVar16 + (param_2 - *(int *)(param_1 + 0x40)))
          ;
          iVar10 = local_80;
        }
        FUN_0041fb30((int)(local_ac + ((int)puVar15 - (uint)*(byte *)(param_1 + 1))),local_74,
                     (int *)&local_b0);
      }
      puVar17 = local_54 + (int)puVar15;
      local_b0 = FUN_0042a810();
      puVar14 = puVar15;
    } while (local_b0 == 0);
  }
  puVar17 = local_54;
  for (uVar9 = (int)puVar15 * 4 + 4U >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined1 *)puVar17 = 0;
    puVar17 = (uint *)((int)puVar17 + 1);
  }
LAB_0042be36:
  FUN_004126f0();
  puVar15 = local_8c;
  iVar10 = 0;
  if (0 < (int)local_8c) {
    do {
      FUN_00427610();
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)puVar15);
  }
  iVar10 = local_84;
  iVar18 = 0;
  if (0 < local_84) {
    do {
      FUN_00427610();
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar10);
  }
  return local_b0;
}


/* END FUNCTION 0x0042b430 */
