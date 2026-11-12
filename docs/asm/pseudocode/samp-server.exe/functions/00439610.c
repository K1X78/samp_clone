/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00439610
 * Name: FUN_00439610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __cdecl
FUN_00439610(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  int *piVar1;
  void *this;
  int iVar2;
  void *pvVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  short sVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar12;
  undefined4 uVar13;
  char cVar14;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  short *extraout_ECX_02;
  short *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  short *extraout_ECX_09;
  uint *extraout_ECX_10;
  uint *puVar15;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  int iVar16;
  int iVar17;
  short *extraout_ECX_13;
  short *extraout_ECX_14;
  short *extraout_ECX_15;
  short *extraout_ECX_16;
  short *psVar18;
  undefined4 *extraout_ECX_17;
  undefined4 *extraout_ECX_18;
  undefined4 *puVar19;
  undefined4 *extraout_ECX_19;
  uint *extraout_EDX;
  int extraout_EDX_00;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  char *pcVar24;
  longlong lVar25;
  int *local_6c;
  int local_60;
  int *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  short *local_50;
  char *local_4c;
  int local_48;
  short *local_44;
  int *local_40;
  uint local_3c;
  char *local_38;
  uint local_34;
  int *local_30;
  int local_2c [11];
  
  piVar1 = (int *)*param_1;
  this = (void *)piVar1[3];
  iVar2 = param_1[7];
  puVar20 = param_1 + param_2 * 0x10 + 10;
  local_54 = (undefined4 *)((uint)(byte)puVar20[10] * 0x38 + 8 + param_1[2]);
  pvVar3 = (void *)local_54[6];
  uVar22 = *puVar20 >> 0x19 & 1;
  local_48 = 0;
  if (((*puVar20 & 0x800000) == 0) || (local_30 = (int *)0x1, (param_3 & 0x40) != 0)) {
    local_30 = (int *)0x0;
  }
  local_50 = (short *)FUN_00414e90(0);
  puVar20[7] = (uint)local_50;
  puVar20[6] = (uint)local_50;
  local_3c = FUN_00414e90(extraout_ECX);
  puVar20[8] = local_3c;
  puVar9 = extraout_ECX_00;
  if (((char)puVar20[10] != '\0') && (puVar9 = local_54, (*(byte *)((int)local_54 + 0x15) & 8) != 0)
     ) {
    iVar21 = piVar1[0x12];
    piVar1[0x12] = iVar21 + 1U;
    puVar20[3] = iVar21 + 1U;
    FUN_00414e70(0,7);
    puVar9 = extraout_ECX_01;
  }
  uVar10 = *puVar20;
  if ((uVar10 & 0x8000000) == 0) {
    if ((uVar10 & 0x1000) == 0) {
      if ((uVar10 & 0x2000) == 0) {
        if ((uVar10 & 0x30000) == 0) {
          if ((uVar10 & 0x10000000) == 0) {
            *(undefined *)((int)puVar20 + 0x29) = (&DAT_004b370c)[uVar22];
            puVar20[0xb] = (uint)pvVar3;
            iVar21 = FUN_00414e70(pvVar3,(&DAT_004b3710)[uVar22]);
            puVar20[0xc] = iVar21 + 1;
            *(undefined1 *)((int)puVar20 + 0x2a) = 1;
            psVar18 = extraout_ECX_16;
          }
          else {
            uVar22 = piVar1[0x12] + 1;
            piVar1[0x12] = uVar22;
            local_38 = (char *)0x0;
            local_34 = 0;
            iVar11 = FUN_00414e90(puVar9);
            iVar21 = *(int *)(puVar20[2] + 0xc);
            *(undefined1 *)((int)puVar20 + 0x29) = 3;
            puVar20[0xb] = uVar22;
            bVar6 = false;
            if ((int)param_1[6] < 2) {
              local_50 = (short *)param_1[2];
            }
            else {
              local_40 = (int *)((param_1[6] - param_2) + -1);
              local_50 = (short *)FUN_00412930((int)local_40 * 0x38 + 0x40);
              if (local_50 == (short *)0x0) goto LAB_0043a3f6;
              sVar7 = (short)local_40 + 1;
              local_50[1] = sVar7;
              *local_50 = sVar7;
              puVar9 = local_54;
              psVar18 = local_50 + 4;
              for (iVar16 = 0xe; iVar16 != 0; iVar16 = iVar16 + -1) {
                *(undefined4 *)psVar18 = *puVar9;
                puVar9 = puVar9 + 1;
                psVar18 = psVar18 + 2;
              }
              iVar16 = param_1[2];
              if (0 < (int)local_40) {
                local_44 = local_50 + 0x20;
                puVar15 = puVar20 + 0x1a;
                local_30 = local_40;
                do {
                  puVar9 = (undefined4 *)((uint)(byte)*puVar15 * 0x38 + iVar16 + 8);
                  psVar18 = local_44;
                  for (iVar17 = 0xe; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *(undefined4 *)psVar18 = *puVar9;
                    puVar9 = puVar9 + 1;
                    psVar18 = psVar18 + 2;
                  }
                  local_44 = local_44 + 0x1c;
                  puVar15 = puVar15 + 0x10;
                  local_30 = (int *)((int)local_30 + -1);
                } while (local_30 != (int *)0x0);
              }
            }
            local_30 = (int *)(param_3 & 8);
            if (local_30 == (int *)0x0) {
              local_38 = (char *)(piVar1[0x12] + 1);
              local_34 = piVar1[0x12] + 2;
              piVar1[0x12] = local_34;
              FUN_00414e70(0,10);
            }
            local_44 = (short *)FUN_00414e70(0,7);
            local_4c = (char *)0x0;
            if (0 < *(int *)(iVar21 + 0x14)) {
              local_40 = (int *)0x0;
              do {
                puVar9 = (undefined4 *)(*(int *)(iVar21 + 0x1c) + (int)local_40);
                if ((((void *)puVar9[2] == pvVar3) || (*(short *)(puVar9 + 4) == 0x200)) &&
                   (piVar12 = FUN_00440af0(piVar1,local_50,(byte *)*puVar9,(undefined4 *)0x0,0xf0),
                   piVar12 != (int *)0x0)) {
                  if ((short)local_30 == 0) {
                    pcVar23 = local_4c;
                    if (local_4c == (char *)(*(int *)(iVar21 + 0x14) + -1)) {
                      pcVar23 = (char *)0xffffffff;
                    }
                    FUN_00437690(local_54[3],-1,pvVar3,local_34);
                    iVar16 = FUN_0040d5c0();
                    FUN_004197f0(iVar16 + 2,local_38,0x6b,pcVar23);
                  }
                  FUN_00414e70(uVar22,2);
                  if (*(char *)((int)piVar12 + 7) != '\0') {
                    bVar6 = true;
                  }
                  FUN_004174c0(piVar12);
                }
                local_4c = local_4c + 1;
                local_40 = local_40 + 10;
              } while ((int)local_4c < *(int *)(iVar21 + 0x14));
            }
            uVar13 = FUN_0040d5c0();
            FUN_0040d600(this,uVar13);
            FUN_00414e70(0,1);
            FUN_0040d4e0((int)this,iVar11);
            psVar18 = extraout_ECX_13;
            if (1 < (int)param_1[6]) {
              FUN_00408130(*piVar1);
              psVar18 = extraout_ECX_14;
            }
            if (!bVar6) {
              FUN_00410880(psVar18,(int)puVar20);
              psVar18 = extraout_ECX_15;
            }
          }
        }
        else {
          local_50 = (short *)puVar20[5];
          uVar10 = puVar20[2];
          pcVar23 = (char *)puVar20[1];
          iVar21 = *(int *)(*(int *)(uVar10 + 8) + (int)pcVar23 * 4);
          iVar11 = 0;
          local_2c[3] = 0;
          local_2c[4] = 0;
          local_2c[5] = 0x41;
          local_2c[6] = 0x3f;
          local_2c[7] = 0x2f;
          local_2c[8] = 0x2c;
          local_2c[9] = 0x2e;
          local_2c[10] = 0x2d;
          local_2c[0] = 0x88;
          local_2c[1] = 0x5c;
          local_2c[2] = 0x51;
          local_38 = (char *)0x0;
          local_5c = (int *)0x0;
          local_6c = (int *)0x0;
          if ((((param_3 & 1) != 0) && ((*puVar20 & 0x1000000) != 0)) &&
             ((int)pcVar23 < *(int *)(uVar10 + 4))) {
            iVar11 = 1;
            local_38 = (char *)0x1;
          }
          if ((*puVar20 & 0x100000) != 0) {
            local_6c = (int *)FUN_00432a40(iVar2,(int)pvVar3,iVar21,(uint)param_4,param_5,0x18,
                                           uVar10);
            iVar11 = 1;
          }
          piVar12 = local_6c;
          if ((*puVar20 & 0x200000) != 0) {
            local_5c = (int *)FUN_00432a40(iVar2,(int)pvVar3,iVar21,(uint)param_4,param_5,0x24,
                                           uVar10);
            iVar11 = 1;
          }
          iVar21 = FUN_00439460(piVar1,puVar20,iVar2,(uint)param_4,param_5,iVar11,&local_54);
          local_4c = FUN_00412a70();
          uVar5 = puVar20[7];
          if (((int)pcVar23 < *(int *)(uVar10 + 4)) &&
             (uVar22 == (pcVar23[*(int *)(uVar10 + 0x28)] == '\0'))) {
            local_6c = local_5c;
            local_5c = piVar12;
          }
          if ((local_5c == (int *)0x0) || ((*(byte *)(local_5c + 4) & 0x28) != 0)) {
            local_44 = (short *)0x1;
          }
          else {
            local_44 = (short *)0x0;
          }
          if ((local_6c == (int *)0x0) || (local_34 = 0, (*(byte *)(local_6c + 4) & 0x28) != 0)) {
            local_34 = 1;
          }
          if ((local_5c != (int *)0x0) || (local_40 = (int *)0x0, 0 < (int)pcVar23)) {
            local_40 = (int *)0x1;
          }
          if (local_5c == (int *)0x0) {
            pcVar24 = pcVar23;
            if (local_38 != (char *)0x0) {
              FUN_00414e70(0,10);
              local_44 = (short *)0x0;
              local_40 = (int *)0x1;
              pcVar24 = pcVar23 + 1;
            }
          }
          else {
            pcVar24 = *(char **)(*local_5c + 0xc);
            local_38 = pcVar24;
            FUN_00415dc0();
            FUN_00415bd0(pcVar24,this,pcVar23 + iVar21);
            puVar9 = local_54;
            if (local_54 != (undefined4 *)0x0) {
              cVar14 = FUN_00415810();
              if (cVar14 == 'b') {
                *(char *)((int)puVar9 + (int)pcVar23) = 'b';
              }
              bVar6 = FUN_0040e7c0(local_38,*(char *)((int)puVar9 + (int)pcVar23));
              if (CONCAT31(extraout_var,bVar6) != 0) {
                *(char *)((int)puVar9 + (int)pcVar23) = 'b';
              }
            }
            pcVar24 = pcVar23 + 1;
          }
          FUN_004173c0((int)pcVar24,iVar21,(int)piVar1);
          FUN_004197f0(uVar5,local_50,
                       (char)local_2c[uVar22 + (int)(local_44 + (int)local_40) * 2 + 3],pcVar24);
          pcVar24 = pcVar23;
          if (local_6c != (int *)0x0) {
            pcVar24 = *(char **)(*local_6c + 0xc);
            local_38 = pcVar24;
            FUN_0040ea60(1);
            FUN_00415dc0();
            FUN_00415bd0(pcVar24,this,pcVar23 + iVar21);
            pcVar24 = local_4c;
            if (local_4c != (char *)0x0) {
              cVar14 = FUN_00415810();
              if (cVar14 == 'b') {
                pcVar24[(int)pcVar23] = 'b';
              }
              bVar6 = FUN_0040e7c0(local_38,pcVar24[(int)pcVar23]);
              if (CONCAT31(extraout_var_00,bVar6) != 0) {
                pcVar24[(int)pcVar23] = 'b';
              }
            }
            pcVar24 = pcVar23 + 1;
            FUN_004173c0((int)pcVar24,iVar21,(int)piVar1);
          }
          FUN_00408130(*piVar1);
          FUN_00408130(*piVar1);
          uVar10 = FUN_0040d5c0();
          puVar20[0xc] = uVar10;
          if ((local_6c == (int *)0x0) && (pcVar23 == (char *)0x0)) {
            iVar21 = 0;
          }
          else {
            iVar21 = 1;
          }
          if (local_2c[(uVar22 + 1) * iVar21] != 0x88) {
            FUN_004197f0(uVar5,local_50,(char)local_2c[(uVar22 + 1) * iVar21],pcVar24);
            FUN_0040d660(local_34,local_34 != uVar22);
          }
          iVar21 = FUN_0040ec00();
          puVar15 = puVar20;
          if ((*puVar20 & 0x300000) != 0) {
            FUN_00414dd0(0x1c,local_50,pcVar23,iVar21);
            FUN_00414e70(iVar21,0x49);
            puVar15 = extraout_ECX_10;
          }
          FUN_0040ec20(puVar15,(int)piVar1);
          FUN_00410880(extraout_ECX_11,(int)puVar20);
          FUN_00410880(extraout_ECX_12,extraout_EDX_00);
          if (local_30 == (int *)0x0) {
            iVar21 = FUN_0040ec00();
            local_48 = iVar21;
            FUN_00414e70(local_50,0x48);
            FUN_0040e950((int)pvVar3,-1,iVar21);
            FUN_00414e70(pvVar3,0x30);
          }
          *(char *)((int)puVar20 + 0x29) = (uVar22 == 0) + 'B';
          puVar20[0xb] = (uint)local_50;
          psVar18 = local_50;
        }
      }
      else {
        local_60 = 0x88;
        local_40 = (int *)0x0;
        puVar9 = (undefined4 *)FUN_00432a40(iVar2,(int)pvVar3,-1,(uint)param_4,param_5,0x24,0);
        local_58 = (undefined4 *)FUN_00432a40(iVar2,(int)pvVar3,-1,(uint)param_4,param_5,0x18,0);
        local_5c = puVar9;
        if (uVar22 != 0) {
          local_5c = local_58;
          local_58 = puVar9;
        }
        if (local_5c == (undefined4 *)0x0) {
          FUN_00414e70(pvVar3,(uVar22 == 0) * '\x02' + '?');
        }
        else {
          pbVar4 = (byte *)*local_5c;
          local_54 = (undefined4 *)0x2e2c2d2f;
          iVar21 = FUN_00415d80(*(undefined4 *)(pbVar4 + 0xc),(int *)&local_30);
          FUN_00414dd0((&stack0xffffff5f)[*pbVar4],pvVar3,local_50,iVar21);
          thunk_FUN_0040ea60(1);
          FUN_0040ec20(extraout_ECX_04,(int)piVar1);
          FUN_00410880(extraout_ECX_05,(int)puVar20);
          puVar20 = extraout_EDX;
        }
        if (local_58 != (undefined4 *)0x0) {
          local_30 = (int *)*local_58;
          local_40 = (int *)(piVar1[0x12] + 1);
          piVar1[0x12] = (int)local_40;
          FUN_00415dc0();
          if (((char)*local_30 == 'O') || ((char)*local_30 == 'M')) {
            local_60 = (uint)(uVar22 == 0) * 2 + 0x4e;
            iVar21 = extraout_ECX_06;
          }
          else {
            iVar21 = (uint)(uVar22 != 0) * 2 + 0x4d;
            local_60 = iVar21;
          }
          FUN_00410880(iVar21,(int)puVar20);
        }
        uVar10 = FUN_0040d5c0();
        puVar20[0xc] = uVar10;
        cVar14 = (uVar22 == 0) + 'B';
        *(char *)((int)puVar20 + 0x29) = cVar14;
        puVar20[0xb] = (uint)pvVar3;
        if ((local_5c == (undefined4 *)0x0) && (local_58 == (undefined4 *)0x0)) {
          *(undefined1 *)((int)puVar20 + 0x2a) = 1;
        }
        psVar18 = (short *)CONCAT31((int3)((uint)extraout_ECX_07 >> 8),cVar14);
        if (local_60 != 0x88) {
          iVar21 = FUN_0040ec00();
          local_48 = iVar21;
          FUN_00414e70(pvVar3,0x3d);
          FUN_0040e950((int)pvVar3,-1,iVar21);
          FUN_00414dd0((char)local_60,local_40,local_50,iVar21);
          FUN_0040d660(extraout_ECX_08,0x6b);
          psVar18 = extraout_ECX_09;
        }
      }
    }
    else {
      iVar21 = FUN_0040ec00();
      local_48 = iVar21;
      puVar9 = (undefined4 *)FUN_00432a40(iVar2,(int)pvVar3,-1,(uint)param_4,param_5,3,0);
      iVar21 = FUN_00439300(puVar9,iVar21);
      uVar22 = puVar20[7];
      FUN_00414e70(iVar21,0x15);
      FUN_00414dd0(0x34,pvVar3,uVar22,iVar21);
      FUN_0040e950((int)pvVar3,-1,iVar21);
      *(undefined1 *)((int)puVar20 + 0x29) = 0x88;
      psVar18 = extraout_ECX_03;
    }
  }
  else {
    local_30 = (int *)puVar20[2];
    piVar12 = (int *)*local_30;
    iVar21 = local_30[4];
    local_44 = (short *)local_30[1];
    local_40 = piVar12;
    FUN_0040ea90();
    local_34 = (int)piVar12 + 2;
    local_4c = (char *)FUN_0040ec60((int)piVar1);
    local_54 = (undefined4 *)0x1;
    if (0 < (int)piVar12) {
      do {
        piVar8 = (int *)0x0;
        if (0 < (int)piVar12) {
          do {
            if (*(undefined4 **)(iVar21 + (int)piVar8 * 8) == local_54) {
              FUN_00415dc0();
              piVar12 = local_40;
              break;
            }
            piVar8 = (int *)((int)piVar8 + 1);
          } while ((int)piVar8 < (int)piVar12);
        }
      } while ((piVar8 != piVar12) &&
              (local_54 = (undefined4 *)((int)local_54 + 1), (int)local_54 <= (int)piVar12));
    }
    piVar12 = local_30;
    FUN_00414e70(local_30[5],7);
    FUN_00414e70((int)local_54 + -1,7);
    FUN_004197c0(local_50,pvVar3,0x80,(char *)piVar12[6],(-(uint)(piVar12[7] != 0) & 0xfffffff7) - 2
                );
    piVar12[7] = 0;
    if (0 < (int)local_40) {
      pcVar23 = (char *)(iVar21 + 4);
      do {
        if (*pcVar23 != '\0') {
          FUN_00410880(*(undefined4 *)(iVar2 + 0x1c),(int)puVar20);
        }
        pcVar23 = pcVar23 + 8;
        local_40 = (int *)((int)local_40 + -1);
      } while (local_40 != (int *)0x0);
    }
    *(undefined1 *)((int)puVar20 + 0x29) = 0x83;
    puVar20[0xb] = (uint)pvVar3;
    uVar22 = FUN_0040d5c0();
    puVar20[0xc] = uVar22;
    FUN_0040ec90(local_4c);
    FUN_0040eaa0(1);
    psVar18 = extraout_ECX_02;
  }
  lVar25 = FUN_004106c0(psVar18,*(int **)(iVar2 + 4));
  param_4 = (undefined4 *)((uint)param_4 & ~(uint)lVar25);
  param_5 = param_5 & ~(uint)((ulonglong)lVar25 >> 0x20);
  puVar9 = *(undefined4 **)(iVar2 + 0x1c);
  puVar19 = param_4;
  piVar12 = *(int **)(iVar2 + 0x14);
  if (0 < (int)*(int **)(iVar2 + 0x14)) {
    do {
      local_30 = piVar12;
      if ((*(byte *)((int)puVar9 + 0x12) & 6) == 0) {
        if ((puVar9[8] & (uint)param_4) == 0 && (puVar9[9] & param_5) == 0) {
          puVar19 = (undefined4 *)puVar20[3];
          if ((puVar19 == (undefined4 *)0x0) || ((((char *)*puVar9)[2] & 1U) != 0)) {
            FUN_004351c0(piVar1,(char *)*puVar9,local_3c,8);
            *(byte *)((int)puVar9 + 0x12) = *(byte *)((int)puVar9 + 0x12) | 4;
            puVar19 = extraout_ECX_17;
          }
        }
        else {
          *(undefined1 *)((int)param_1 + 7) = 1;
          puVar19 = param_1;
        }
      }
      puVar9 = puVar9 + 10;
      local_30 = (int *)((int)local_30 + -1);
      piVar12 = local_30;
    } while (local_30 != (int *)0x0);
  }
  if (puVar20[3] != 0) {
    uVar22 = FUN_0040d5c0();
    puVar20[9] = uVar22;
    FUN_00414e70(1,7);
    FUN_0040eb00();
    puVar9 = *(undefined4 **)(iVar2 + 0x1c);
    iVar21 = 0;
    puVar19 = extraout_ECX_18;
    if (0 < *(int *)(iVar2 + 0x14)) {
      do {
        if (((*(byte *)((int)puVar9 + 0x12) & 6) == 0) &&
           (puVar19 = (undefined4 *)(puVar9[9] & param_5),
           (puVar9[8] & (uint)param_4) == 0 && puVar19 == (undefined4 *)0x0)) {
          FUN_004351c0(piVar1,(char *)*puVar9,local_3c,8);
          *(byte *)((int)puVar9 + 0x12) = *(byte *)((int)puVar9 + 0x12) | 4;
          puVar19 = extraout_ECX_19;
        }
        iVar21 = iVar21 + 1;
        puVar9 = puVar9 + 10;
      } while (iVar21 < *(int *)(iVar2 + 0x14));
    }
  }
  FUN_0040ec20(puVar19,(int)piVar1);
LAB_0043a3f6:
  return CONCAT44(param_5,param_4);
}


/* END FUNCTION 0x00439610 */
