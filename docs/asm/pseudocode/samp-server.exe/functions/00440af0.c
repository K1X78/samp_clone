/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00440af0
 * Name: FUN_00440af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl
FUN_00440af0(int *param_1,short *param_2,byte *param_3,undefined4 *param_4,uint param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  short *extraout_ECX_00;
  short *extraout_ECX_01;
  short *extraout_ECX_02;
  short *psVar7;
  int *piVar8;
  uint uVar9;
  int *extraout_ECX_03;
  uint uVar10;
  char *extraout_EDX;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  int local_9c;
  uint *local_94;
  uint local_90;
  uint local_8c;
  int local_80;
  int local_7c;
  int local_74;
  uint *local_6c;
  uint local_68;
  uint local_64;
  uint local_60 [4];
  double local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34;
  uint local_30 [4];
  double local_20;
  double local_18;
  uint local_10;
  uint local_c;
  
  if (0x40 < *param_2) {
    FUN_00418b00((undefined **)"at most %d tables in a join");
    return (undefined4 *)0x0;
  }
  iVar11 = 1;
  if (-1 < (char)param_5) {
    iVar11 = (int)*param_2;
  }
  iVar15 = *param_1;
  puVar1 = FUN_00417b70();
  if (*(char *)(iVar15 + 0x1e) != '\0') {
    FUN_00408130(iVar15);
    return (undefined4 *)0x0;
  }
  puVar1[2] = param_2;
  puVar1[6] = iVar11;
  *puVar1 = param_1;
  iVar2 = FUN_00414e90(extraout_ECX);
  puVar12 = puVar1 + iVar11 * 0x10 + 10;
  puVar1[5] = iVar2;
  *(undefined2 *)(puVar1 + 1) = (undefined2)param_5;
  puVar1[7] = puVar12;
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_1 + 0x70);
  puVar14 = puVar12 + 0x58;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  FUN_00410680(param_1,puVar12 + 0x58);
  FUN_00438430((int)param_3);
  FUN_00417090(puVar12,param_3,0x45);
  psVar7 = extraout_ECX_00;
  if ((param_3 != (byte *)0x0) &&
     ((iVar11 == 0 || (iVar2 = FUN_00415bb0((int)param_3), psVar7 = extraout_ECX_01, iVar2 != 0))))
  {
    FUN_004351c0(param_1,(char *)param_3,puVar1[5],8);
    psVar7 = extraout_ECX_02;
  }
  iVar2 = 0;
  if (0 < *param_2) {
    piVar8 = (int *)(param_2 + 10);
    do {
      FUN_004106f0(psVar7,piVar8[3]);
      if ((*piVar8 != 0) && ((*(byte *)(*piVar8 + 0x22) & 0x10) != 0)) {
        lVar17 = __allshl((byte)iVar2,0);
        puVar12[2] = puVar12[2] | (uint)lVar17;
        puVar12[3] = puVar12[3] | (uint)((ulonglong)lVar17 >> 0x20);
      }
      iVar2 = iVar2 + 1;
      piVar8 = piVar8 + 0xe;
      psVar7 = param_2;
    } while (iVar2 < *param_2);
  }
  FUN_00440ac0(psVar7,param_2,puVar12);
  if (*(char *)(iVar15 + 0x1e) == '\0') {
    local_90 = 0xffffffff;
    local_8c = 0xffffffff;
    local_64 = 0xffffffff;
    local_94 = puVar1 + 10;
    local_80 = 0;
    local_7c = 0;
    if (0 < iVar11) {
      do {
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_50 = 1e+99;
        local_48 = 0;
        uStack_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_68 = (uint)(local_80 < iVar11 + -1);
        local_74 = -1;
        local_60[0] = 0;
        do {
          psVar7 = param_2 + local_80 * 0x1c + 4;
          local_9c = local_80;
          if (local_80 < iVar11) {
            local_6c = puVar1 + local_80 * 0x10 + 0x19;
            do {
              local_34 = (uint)((*(byte *)((int)psVar7 + 0x15) & 10) != 0);
              if ((local_9c != local_80) && (local_34 != 0)) break;
              lVar17 = FUN_004106c0(local_80,puVar12 + 0x58);
              if (((uint)lVar17 & local_90) == 0 &&
                  ((uint)((ulonglong)lVar17 >> 0x20) & local_8c) == 0) {
                if (local_9c == local_80) {
                  local_80 = local_80 + 1;
                }
              }
              else {
                if (local_68 == 0) {
                  lVar17 = CONCAT44(local_8c,local_90);
                }
                if ((local_7c == 0) && (param_4 != (undefined4 *)0x0)) {
                  piVar8 = (int *)*param_4;
                }
                else {
                  piVar8 = (int *)0x0;
                }
                uVar10 = (uint)((ulonglong)lVar17 >> 0x20);
                if ((*(byte *)(*(int *)(psVar7 + 6) + 0x22) & 0x10) == 0) {
                  FUN_00432d20(param_1,(int)puVar12,(int)psVar7,(uint)lVar17,uVar10,piVar8,local_30)
                  ;
                }
                else {
                  FUN_00437170(param_1,puVar12,psVar7,(uint)lVar17,uVar10,piVar8,local_30,local_6c);
                }
                if (((local_10 & local_90) == 0 && (local_c & local_8c) == 0) &&
                   (((local_74 < 0 || (local_20 < local_50)) ||
                    ((local_20 < local_50 != (local_20 == local_50) &&
                     (local_18 < (double)CONCAT44(uStack_44,local_48))))))) {
                  puVar13 = local_30;
                  puVar16 = local_60;
                  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar16 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar16 = puVar16 + 1;
                  }
                  local_74 = local_9c;
                }
                if (local_34 != 0) break;
              }
              local_9c = local_9c + 1;
              local_6c = local_6c + 0x10;
              psVar7 = psVar7 + 0x1c;
            } while (local_9c < iVar11);
          }
          local_68 = local_68 - 1;
        } while (-1 < (int)local_68);
        if ((local_60[0] & 0x1000000) != 0) {
          *param_4 = 0;
        }
        local_64 = local_64 & local_60[0];
        *local_94 = local_60[0];
        local_94[1] = local_60[1];
        local_94[2] = local_60[2];
        if ((local_60[0] & 0x200f0000) == 0) {
          local_94[5] = 0xffffffff;
        }
        else {
          local_94[5] = param_1[0x11];
          param_1[0x11] = param_1[0x11] + 1;
        }
        lVar17 = FUN_004106c0(param_2,puVar12 + 0x58);
        local_90 = local_90 & ~(uint)lVar17;
        local_8c = local_8c & ~(uint)((ulonglong)lVar17 >> 0x20);
        *(undefined1 *)(local_94 + 10) = (undefined1)local_74;
        if (1.0 <= (double)CONCAT44(uStack_44,local_48)) {
          *(double *)(param_1 + 0x70) =
               (double)CONCAT44(uStack_44,local_48) * *(double *)(param_1 + 0x70);
        }
        if ((*(int *)(param_2 + local_74 * 0x1c + 0x1e) != 0) && ((local_60[0] & 0xf0000) == 0)) {
          FUN_00418b00((undefined **)"cannot use index: %s");
          goto LAB_004410b0;
        }
        local_7c = local_7c + 1;
        local_94 = local_94 + 0x10;
      } while (local_7c < iVar11);
    }
    if ((param_1[0x10] == 0) && (*(char *)(iVar15 + 0x1e) == '\0')) {
      if (((local_64 & 0x4000000) != 0) && (param_4 != (undefined4 *)0x0)) {
        *param_4 = 0;
      }
      if (((param_5 & 4) != 0) && ((local_64 & 0x4000000) != 0)) {
        *(undefined1 *)((int)puVar1 + 6) = 1;
        puVar1[10] = puVar1[10] & 0xff7fffff;
      }
      FUN_0042cd30();
      puVar13 = puVar1 + 10;
      local_90 = 0xffffffff;
      local_8c = 0xffffffff;
      local_7c = 0;
      if (0 < iVar11) {
        do {
          if ((char)param_1[0x7a] == '\x02') {
            uVar10 = puVar13[10];
            pcVar3 = (char *)FUN_00418920((undefined **)"TABLE %s");
            if (*(int *)(param_2 + (uint)(byte)uVar10 * 0x1c + 8) != 0) {
              pcVar3 = (char *)FUN_00418940(pcVar3,(undefined **)"%s AS %s");
            }
            uVar10 = *puVar13;
            if ((uVar10 & 0x20000000) == 0) {
              if ((uVar10 & 0xf0000) == 0) {
                if ((uVar10 & 0x10000000) == 0) {
                  if ((uVar10 & 0x3000) == 0) {
                    if ((uVar10 & 0x8000000) != 0) {
                      pcVar3 = (char *)FUN_00418940(pcVar3,(undefined **)
                                                           "%s VIRTUAL TABLE INDEX %d:%s");
                    }
                  }
                  else {
                    pcVar3 = (char *)FUN_00418940(pcVar3,(undefined **)"%s USING PRIMARY KEY");
                  }
                }
                else {
                  pcVar3 = (char *)FUN_00418940(pcVar3,(undefined **)"%s VIA MULTI-INDEX UNION");
                }
              }
              else {
                pcVar3 = (char *)FUN_00418940(pcVar3,(undefined **)"%s WITH INDEX %s");
              }
            }
            else {
              pcVar3 = (char *)FUN_00418940(pcVar3,(undefined **)"%s WITH AUTOMATIC INDEX");
            }
            if ((*puVar13 & 0x1000000) != 0) {
              pcVar3 = (char *)FUN_00418940(pcVar3,(undefined **)"%s ORDER BY");
            }
            FUN_004197c0((uint)(byte)puVar13[10],local_7c,0x89,pcVar3,-1);
          }
          uVar10 = (uint)(byte)puVar13[10];
          iVar2 = *(int *)(param_2 + uVar10 * 0x1c + 10);
          psVar7 = param_2 + uVar10 * 0x1c + 4;
          puVar13[4] = *(uint *)(param_2 + uVar10 * 0x1c + 0x10);
          iVar4 = FUN_0040fc30(iVar15);
          if (((*(byte *)(iVar2 + 0x22) & 2) == 0) && (*(int *)(iVar2 + 0x1c) == 0)) {
            if ((*puVar13 & 0x8000000) == 0) {
              if (((*puVar13 & 0x800000) == 0) && ((param_5 & 0x10) == 0)) {
                FUN_004215c0(*(undefined4 *)(psVar7 + 0xc),iVar4,
                             (*(char *)((int)puVar1 + 6) != '\0') + 0x26);
                if ((*(char *)((int)puVar1 + 6) == '\0') && (*(int *)(iVar2 + 0xc) < 0x40)) {
                  uVar10 = *(uint *)(psVar7 + 0x14);
                  uVar9 = *(uint *)(psVar7 + 0x16);
                  if (uVar10 != 0 || uVar9 != 0) {
                    do {
                      uVar10 = uVar10 >> 1 | uVar9 << 0x1f;
                      uVar9 = uVar9 >> 1;
                    } while (uVar10 != 0 || uVar9 != 0);
                  }
                  FUN_0040d5c0();
                  FUN_00415110(-0xe,extraout_EDX,extraout_ECX_03);
                }
              }
              else {
                FUN_00416230(iVar4,*(int *)(iVar2 + 0x18),'\0',*(int *)(iVar2 + 4));
              }
            }
            else {
              iVar2 = -10;
              pcVar3 = (char *)FUN_004103b0(iVar15);
              FUN_004197c0(0,*(undefined4 *)(psVar7 + 0xc),0x7f,pcVar3,iVar2);
            }
          }
          if ((*puVar13 & 0x20000000) == 0) {
            if ((*puVar13 & 0xf0000) != 0) {
              piVar8 = (int *)puVar13[2];
              piVar5 = FUN_00430960(param_1,piVar8);
              FUN_004197c0(piVar8[5],puVar13[5],0x26,(char *)piVar5,-0x10);
            }
          }
          else {
            FUN_00438f40(param_1,(int)puVar12,(int)psVar7,local_90,local_8c,puVar13);
          }
          FUN_0042cd30();
          lVar17 = FUN_004106c0(puVar12,(int *)puVar12[1]);
          local_90 = local_90 & ~(uint)lVar17;
          local_8c = local_8c & ~(uint)((ulonglong)lVar17 >> 0x20);
          local_7c = local_7c + 1;
          puVar13 = puVar13 + 0x10;
        } while (local_7c < iVar11);
      }
      uVar6 = FUN_0040d5c0();
      puVar1[3] = uVar6;
      if (*(char *)(iVar15 + 0x1e) == '\0') {
        uVar18 = 0xffffffffffffffff;
        iVar15 = 0;
        if (0 < iVar11) {
          puVar14 = puVar1 + 0x12;
          do {
            uVar18 = FUN_00439610(puVar1,iVar15,param_5,(undefined4 *)uVar18,
                                  (uint)((ulonglong)uVar18 >> 0x20));
            puVar1[4] = *puVar14;
            iVar15 = iVar15 + 1;
            puVar14 = puVar14 + 0x10;
          } while (iVar15 < iVar11);
        }
        return puVar1;
      }
    }
  }
LAB_004410b0:
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(puVar1 + 8);
  FUN_00417430(iVar15);
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x00440af0 */
