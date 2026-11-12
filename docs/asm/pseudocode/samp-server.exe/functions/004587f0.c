/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004587f0
 * Name: FUN_004587f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_004587f0(int *param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  uint *puVar16;
  byte *pbVar17;
  char *pcVar18;
  uint *puVar19;
  bool bVar20;
  bool bVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  undefined2 uVar25;
  byte local_928 [4];
  byte *local_924;
  undefined4 local_920;
  byte *local_91c;
  byte *local_918;
  uint local_914;
  undefined8 local_910;
  byte *local_904;
  char local_8fd;
  undefined4 *local_8fc;
  byte *local_8f8;
  char *local_8f4;
  byte *local_8f0;
  int local_8ec;
  undefined4 local_8e8;
  undefined2 local_8e4 [2];
  undefined4 local_8e0;
  undefined2 local_8dc [2];
  undefined4 local_8d8;
  int local_8d4;
  byte *local_8d0;
  undefined4 local_8cc;
  byte local_8c8 [14];
  byte abStack_8ba [2];
  undefined4 local_8b8;
  undefined4 local_898 [46];
  uint local_7e0 [8];
  byte *local_7c0 [3];
  byte *local_7b4;
  int local_6a8 [3];
  int local_69c;
  int local_590 [3];
  int local_584;
  undefined1 local_478 [280];
  undefined1 local_360 [280];
  undefined1 local_248 [280];
  undefined1 local_130 [284];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b1018;
  local_14 = ExceptionList;
  iVar15 = 0;
  ExceptionList = &local_14;
  do {
    uVar5 = FUN_00462b50(param_1[0x306],param_1,&local_8cc);
    if (uVar5 == 0xffffffff) {
      if (local_8cc == 0x2746) {
        uVar5 = 0;
      }
      else if ((local_8cc != 0) && ((char)param_1[1] == '\0')) {
        *(undefined1 *)(param_1 + 1) = 1;
        uVar5 = (**(code **)(*param_1 + 0x24))(0,0);
        goto LAB_00458954;
      }
    }
    if ((char)param_1[1] != '\0') {
LAB_00458954:
      ExceptionList = local_14;
      return uVar5 & 0xffffff00;
    }
  } while (0 < (int)uVar5);
  local_910 = 0;
  local_918 = (byte *)0x0;
  piVar6 = (int *)FUN_00450ca0(param_1 + 0x1fd);
  if (piVar6 != (int *)0x0) {
    do {
      if (piVar6[10] == 0) {
        if (iVar15 == 0 && local_910._4_4_ == 0) {
          lVar22 = FUN_0044e970();
          iVar15 = (int)lVar22;
          local_910 = CONCAT44((int)((ulonglong)lVar22 >> 0x20),(int)local_910);
        }
        uVar25 = 0;
        puVar9 = (undefined4 *)((int)piVar6 + 0xd);
        cVar3 = FUN_00453ac0(param_1,piVar6[9],*piVar6,piVar6[1],piVar6[2],
                             (uint)*(byte *)(piVar6 + 3),*puVar9,*(undefined2 *)((int)piVar6 + 0x11)
                             ,*(char *)((int)piVar6 + 0x13),'\x01',iVar15,
                             (int)((ulonglong)local_910 >> 0x20));
        if (cVar3 == '\0') {
          _free((void *)piVar6[9]);
        }
        if (((piVar6[5] != 0) && (uVar7 = FUN_0044eef0(puVar9,&DAT_004cac3c), (char)uVar7 != '\0'))
           && (iVar8 = FUN_00453950(param_1,*puVar9,
                                    CONCAT22(uVar25,*(undefined2 *)((int)piVar6 + 0x11)),'\x01',
                                    '\x01'), iVar8 != 0)) {
          *(int *)(iVar8 + 0xcb0) = piVar6[5];
        }
      }
      else {
        FUN_004564d0(param_1,*(int *)((int)piVar6 + 0xd),*(undefined2 *)((int)piVar6 + 0x11),'\0',1,
                     (uint)*(byte *)(piVar6 + 3));
      }
      FUN_00450cc0((int)(param_1 + 0x1fd));
      piVar6 = (int *)FUN_00450ca0(param_1 + 0x1fd);
    } while (piVar6 != (int *)0x0);
    local_910 = CONCAT44(local_910._4_4_,iVar15);
  }
  puVar9 = (undefined4 *)FUN_00450ae0(param_1 + 0xf1);
  uVar5 = 0;
  local_8fc = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    do {
      if ((int)local_910 == 0 && local_910._4_4_ == 0) {
        local_910 = FUN_0044e970();
        uVar23 = __alldiv((uint)local_910,(uint)((ulonglong)local_910 >> 0x20),1000,0);
        local_918 = (byte *)uVar23;
      }
      if ((uint)puVar9[2] < local_918) {
        local_928[0] = *(char *)(puVar9 + 3) == '\x06';
        uVar7 = FUN_0044eec0(puVar9,&DAT_004cac3c);
        bVar20 = (char)uVar7 != '\x01';
        if ((local_928[0] == 0) && (bVar20)) {
          *(char *)(puVar9 + 3) = *(char *)(puVar9 + 3) + '\x01';
          puVar9[2] = (int)local_918 + 1000;
          local_914 = CONCAT31(local_914._1_3_,0x18);
          FUN_00462c60(param_1[0x306],(char *)&local_914,3,*puVar9,*(u_short *)(puVar9 + 1));
          goto LAB_00458b0d;
        }
        if ((void *)puVar9[4] != (void *)0x0) {
          _free((void *)puVar9[4]);
          puVar9[4] = 0;
        }
        if (((local_928[0] != 0) && (bVar20)) && (puVar9[0x46] == 1)) {
          puVar11 = (undefined2 *)FUN_0044fd50(1);
          **(undefined1 **)(puVar11 + 8) = 0x1d;
          *(undefined4 *)(puVar11 + 6) = 8;
          *(undefined4 *)(puVar11 + 1) = *puVar9;
          puVar11[3] = *(undefined2 *)(puVar9 + 1);
          *puVar11 = 0xffff;
          puVar10 = (undefined4 *)FUN_00450e00((int)(param_1 + 0x374));
          *puVar10 = puVar11;
          FUN_00450e40((int)(param_1 + 0x374));
        }
        if (puVar9 != local_8fc) {
          *puVar9 = DAT_004cac3c;
          *(undefined2 *)(puVar9 + 1) = DAT_004cac40;
          goto LAB_00458b0d;
        }
        FUN_00450b00((int)(param_1 + 0xf1));
        puVar9 = (undefined4 *)FUN_00450ae0(param_1 + 0xf1);
        local_8fc = puVar9;
      }
      else {
LAB_00458b0d:
        puVar9 = (undefined4 *)FUN_00450ae0(param_1 + 0xf1);
      }
    } while (puVar9 != (undefined4 *)0x0);
    uVar5 = 0;
    if (local_8fc != (undefined4 *)0x0) {
      uVar5 = FUN_0044dd10(param_1 + 0xf1,local_8fc);
    }
  }
  local_910._4_4_ = 0;
  local_910._0_4_ = 0;
  local_910 = 0;
  local_918 = (byte *)0x0;
  local_914 = 0;
  if ((short)param_1[2] == 0) {
LAB_00459a84:
    ExceptionList = local_14;
    return CONCAT31((int3)(uVar5 >> 8),1);
  }
  do {
    lVar22 = CONCAT44(local_910._4_4_,(int)local_910);
    pcVar18 = (char *)(local_914 * 0xcb8 + param_1[0xcf]);
    if (*pcVar18 != '\0') {
      local_924 = *(byte **)(pcVar18 + 1);
      local_920 = CONCAT22(local_920._2_2_,*(undefined2 *)(pcVar18 + 5));
      local_8f4 = pcVar18;
      if ((int)local_910 == 0 && local_910._4_4_ == 0) {
        lVar22 = FUN_0044e970();
        local_910 = lVar22;
        uVar23 = __alldiv((uint)lVar22,(uint)((ulonglong)lVar22 >> 0x20),1000,0);
        local_918 = (byte *)uVar23;
      }
      uVar5 = (uint)((ulonglong)lVar22 >> 0x20);
      if ((((*(byte **)(pcVar18 + 0x780) < local_918) &&
           (5000 < (uint)((int)local_918 - (int)*(byte **)(pcVar18 + 0x780)))) &&
          (*(int *)(pcVar18 + 0xcb0) == 8)) &&
         (piVar6 = FUN_0045df80(pcVar18 + 0x10,'\0'), piVar6[0x28] == 0)) {
        local_928[0] = 0x17;
        FUN_00453ac0(param_1,(int)local_928,8,3,8,0,*(undefined4 *)(pcVar18 + 1),
                     *(undefined2 *)(pcVar18 + 5),'\0','\0',(uint)lVar22,uVar5);
        iVar15 = FUN_0045b060((int)(pcVar18 + 0x10));
        *(byte **)(pcVar18 + 0x780) = local_918 + iVar15;
      }
      FUN_00460230(pcVar18 + 0x10,param_1[0x306],local_924,(u_short)local_920,param_1[0x303],
                   (uint)lVar22,uVar5,param_1 + 0xee);
      cVar3 = FUN_0045b280((int)(pcVar18 + 0x10));
      if (((cVar3 == '\0') &&
          ((((*(int *)(pcVar18 + 0xcb0) != 1 && (*(int *)(pcVar18 + 0xcb0) != 2)) ||
            (uVar7 = FUN_0045d440((int)(pcVar18 + 0x10)), (char)uVar7 != '\0')) &&
           ((*(int *)(pcVar18 + 0xcb0) != 3 ||
            (bVar20 = FUN_0045d4e0((int)(pcVar18 + 0x10)), bVar20)))))) &&
         (((pbVar14 = local_918, iVar15 = *(int *)(pcVar18 + 0xcb0), iVar15 != 4 &&
           (((iVar15 != 5 && (iVar15 != 6)) && (iVar15 != 7)))) ||
          ((local_918 <= *(byte **)(pcVar18 + 0x898) ||
           ((uint)((int)local_918 - (int)*(byte **)(pcVar18 + 0x898)) < 0x2711)))))) {
        cVar3 = FUN_0045b270((int)(pcVar18 + 0x10));
        if (cVar3 == '\0') {
          iVar15 = *(int *)(pcVar18 + 0xcb0);
          uVar4 = (undefined1)local_920;
          uVar24 = (undefined1)((uint)local_920 >> 8);
          if (((iVar15 == 1) || (iVar15 == 2)) &&
             (20000 < (uint)((int)pbVar14 - *(int *)(pcVar18 + 0x780)))) goto LAB_00459a68;
          if (iVar15 == 8) {
            if ((pcVar18[0xcb6] == '\0') &&
               (30000 < (uint)((int)pbVar14 - *(int *)(pcVar18 + 0x898)))) {
              (**(code **)(*param_1 + 0xb8))((char)local_924,uVar4);
              FUN_00491fa0("Kicking %s because they didn\'t logon to the game.");
              FUN_00455b00(param_1,local_924,(u_short)local_920,'\x01',0);
              goto LAB_00459a6f;
            }
            if ((*(byte **)(pcVar18 + 0x77c) < pbVar14) &&
               ((*(char *)((int)param_1 + 6) != '\0' || (*(short *)(pcVar18 + 0x778) == -1)))) {
              *(byte **)(pcVar18 + 0x77c) = pbVar14 + 5000;
              FUN_004563b0(param_1,local_924,(u_short)local_920,'\x01');
            }
          }
          iVar15 = FUN_0045be10(pcVar18 + 0x10,&local_91c);
          while (local_8ec = iVar15, 0 < iVar15) {
            if (param_1[0x1f7] == 0) {
              uVar5 = iVar15 + 7 >> 3;
            }
            else {
              FUN_0044d8d0(local_7c0,0x5d4);
              local_c = 0;
              FUN_0044d9d0(local_7c0);
              local_904 = (byte *)(iVar15 + 7 >> 3);
              FUN_0044e070(local_7c0,local_91c,
                           CONCAT22((short)(iVar15 + 7 >> 0x13),(short)local_904));
              iVar8 = (int)(local_7c0[0] + 7) >> 3;
              param_1[0x1fa] = param_1[0x1fa] + iVar8;
              local_8f8 = local_7c0[0];
              if (local_7c0[0] == (byte *)0x0) {
                uVar5 = 0;
              }
              else {
                pbVar12 = operator_new(CONCAT22((short)((int)(local_7c0[0] + 7) >> 0x13),
                                                (short)iVar8));
                pbVar14 = local_7b4;
                pbVar17 = pbVar12;
                for (uVar5 = (uint)((int)(local_7c0[0] + 7) >> 3) >> 2; uVar5 != 0;
                    uVar5 = uVar5 - 1) {
                  *(undefined4 *)pbVar17 = *(undefined4 *)pbVar14;
                  pbVar14 = pbVar14 + 4;
                  pbVar17 = pbVar17 + 4;
                }
                for (uVar5 = (int)(local_7c0[0] + 7) >> 3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *pbVar17 = *pbVar14;
                  pbVar14 = pbVar14 + 1;
                  pbVar17 = pbVar17 + 1;
                }
                FUN_0044d9d0(local_7c0);
                FUN_0044e1d0((void *)param_1[0x1f7],(undefined4 *)pbVar12,(int)local_8f8,local_7c0);
                param_1[0x1fc] = param_1[0x1fc] + ((int)(local_7c0[0] + 7) >> 3);
                _free(pbVar12);
                pbVar14 = local_7c0[0] + 7;
                uVar5 = (int)pbVar14 >> 3;
                if ((int)local_904 < (int)uVar5) {
                  if (local_91c != (byte *)0x0) {
                    _free(local_91c);
                  }
                  local_91c = operator_new(CONCAT22((short)((int)pbVar14 >> 0x13),(short)uVar5));
                }
                pbVar14 = local_7b4;
                pbVar17 = local_91c;
                for (uVar13 = uVar5 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pbVar17 = *(undefined4 *)pbVar14;
                  pbVar14 = pbVar14 + 4;
                  pbVar17 = pbVar17 + 4;
                }
                for (uVar13 = uVar5 & 3; iVar15 = local_8ec, pcVar18 = local_8f4, uVar13 != 0;
                    uVar13 = uVar13 - 1) {
                  *pbVar17 = *pbVar14;
                  pbVar14 = pbVar14 + 1;
                  pbVar17 = pbVar17 + 1;
                }
              }
              local_c = 0xffffffff;
              FUN_0044d9b0((int)local_7c0);
            }
            iVar8 = *(int *)(pcVar18 + 0xcb0);
            bVar2 = *local_91c;
            if (iVar8 == 6) {
              if (bVar2 == 0xb) {
                FUN_00457e80(param_1,(int)pcVar18,local_924,(u_short)local_920,(char *)local_91c,
                             uVar5);
              }
              else if ((bVar2 != 0xc) ||
                      (uVar7 = FUN_00450820((undefined4 *)local_91c,uVar5,local_924,
                                            (u_short)local_920), (char)uVar7 == '\0')) {
                FUN_004564d0(param_1,(int)local_924,(u_short)local_920,'\0',1,0);
                iVar15 = *param_1;
                uVar7 = FUN_0045b060((int)(pcVar18 + 0x10));
                uVar4 = (**(code **)(*param_1 + 0xb8))((char)local_924,(char)local_920,(char)uVar7);
                (**(code **)(iVar15 + 100))(uVar4);
              }
LAB_004590b2:
              if (local_91c != (byte *)0x0) {
LAB_004590b6:
                _free(local_91c);
              }
            }
            else {
              if (bVar2 == 0xb) {
                if (iVar8 != 8) {
                  FUN_00457e80(param_1,(int)pcVar18,local_924,(u_short)local_920,(char *)local_91c,
                               uVar5);
                }
                goto LAB_004590b2;
              }
              if ((bVar2 != 0x1e) || (uVar5 != 7)) {
                if ((bVar2 == 9) && (uVar5 == 9)) {
                  FUN_0044d930(local_248,(undefined4 *)local_91c,9,'\0');
                  local_c = 2;
                  FUN_0044dd00(local_248,8);
                  FUN_0044da70(local_248,(byte *)&local_8f0,0x20,'\x01');
                  FUN_0044da70(local_248,(byte *)&local_8d4,0x20,'\x01');
                  local_910 = FUN_0044e970();
                  uVar23 = __alldiv((uint)local_910,(uint)((ulonglong)local_910 >> 0x20),1000,0);
                  local_918 = (byte *)uVar23;
                  if (local_8f0 < local_918) {
                    uVar5 = (int)local_918 - (int)local_8f0;
                  }
                  else {
                    uVar5 = 0;
                  }
                  if ((*(ushort *)(pcVar18 + *(int *)(pcVar18 + 0x774) * 8 + 0x74c) == 0) ||
                     ((uVar5 < (uint)*(ushort *)(pcVar18 + *(int *)(pcVar18 + 0x774) * 8 + 0x74c) *
                               3 && (uVar5 < 0x4b0)))) {
                    *(short *)(pcVar18 + *(int *)(pcVar18 + 0x774) * 8 + 0x74c) = (short)uVar5;
                    *(uint *)(pcVar18 + *(int *)(pcVar18 + 0x774) * 8 + 0x750) =
                         local_8d4 - ((uint)(local_8f0 + (int)local_918) >> 1);
                    if ((*(ushort *)(pcVar18 + 0x778) == 0xffff) ||
                       ((int)uVar5 < (int)(uint)*(ushort *)(pcVar18 + 0x778))) {
                      *(short *)(pcVar18 + 0x778) = (short)uVar5;
                    }
                    FUN_0045c520(pcVar18 + 0x10,uVar5 & 0xffff);
                    iVar15 = *(int *)(pcVar18 + 0x774);
                    *(int *)(pcVar18 + 0x774) = iVar15 + 1;
                    if (iVar15 + 1 == 5) {
                      pcVar18[0x774] = '\0';
                      pcVar18[0x775] = '\0';
                      pcVar18[0x776] = '\0';
                      pcVar18[0x777] = '\0';
                    }
                  }
                  if (local_91c != (byte *)0x0) {
                    _free(local_91c);
                  }
                  local_c = 0xffffffff;
                  FUN_0044d9b0((int)local_248);
                  goto LAB_004590bf;
                }
                if ((bVar2 == 6) && (uVar5 == 5)) {
                  FUN_0044d930(local_130,(undefined4 *)local_91c,5,'\0');
                  local_c = 3;
                  FUN_0044dd00(local_130,8);
                  FUN_0044da70(local_130,(byte *)&local_8d0,0x20,'\x01');
                  FUN_0044d8a0(local_590);
                  local_c = CONCAT31(local_c._1_3_,4);
                  local_928[0] = 9;
                  FUN_0044df40(local_590,local_928,8,'\x01');
                  local_904 = local_8d0;
                  FUN_0044df40(local_590,(byte *)&local_904,0x20,'\x01');
                  uVar23 = FUN_0044e910();
                  pbVar14 = (byte *)uVar23;
                  local_918 = pbVar14;
                  local_910 = FUN_0044e970();
                  local_904 = pbVar14;
                  FUN_0044df40(local_590,(byte *)&local_904,0x20,'\x01');
                  FUN_00453ac0(param_1,local_584,local_590[0],0,6,0,local_924,(u_short)local_920,
                               '\0','\0',pbVar14,0);
                  if (local_91c != (byte *)0x0) {
                    _free(local_91c);
                  }
                  local_c = CONCAT31(local_c._1_3_,3);
                  FUN_0044d9b0((int)local_590);
                  local_c = 0xffffffff;
                  FUN_0044d9b0((int)local_130);
                  goto LAB_004590bf;
                }
                if (bVar2 == 0x20) {
                  pcVar18[0xcb0] = '\x03';
                  pcVar18[0xcb1] = '\0';
                  pcVar18[0xcb2] = '\0';
                  pcVar18[0xcb3] = '\0';
                  goto LAB_004590b2;
                }
                if (bVar2 == 0x11) goto LAB_004590b6;
                if (bVar2 == 10) {
                  FUN_00456240(param_1,local_924,(u_short)local_920,'\x01');
                  goto LAB_004590b2;
                }
                if (bVar2 == 0x29) {
                  FUN_0044d9d0((undefined4 *)(pcVar18 + 0x784));
                  FUN_0044dff0(pcVar18 + 0x784,local_91c + 1,uVar5 - 1);
LAB_00459534:
                  puVar11 = (undefined2 *)FUN_0044fd70(uVar5,(int)local_91c);
                  *(int *)(puVar11 + 6) = iVar15;
                  *(byte **)(puVar11 + 1) = local_924;
                  puVar11[3] = (u_short)local_920;
                  *puVar11 = (undefined2)local_914;
                  FUN_00452280(param_1,puVar11);
                  goto LAB_004590bf;
                }
                if ((bVar2 == 0xf) && (uVar5 == 0x39)) {
                  FUN_004583f0(param_1,(int)pcVar18,(int)local_91c);
                  goto LAB_004590b2;
                }
                if ((bVar2 == 0x10) && (uVar5 == 0x35)) {
                  FUN_00462940(local_898);
                  local_c = 5;
                  FUN_00460b10((int)local_898);
                  FUN_00462760(local_898,&local_924,4);
                  FUN_00462760(local_898,&local_920,2);
                  FUN_00462760(local_898,param_1 + 0x367,0x14);
                  FUN_00462830(local_898);
                  pbVar14 = local_91c + 1;
                  piVar6 = (int *)FUN_00462930((int)local_898);
                  iVar15 = 5;
                  bVar20 = true;
                  do {
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    bVar20 = *piVar6 == *(int *)pbVar14;
                    piVar6 = piVar6 + 1;
                    pbVar14 = pbVar14 + 4;
                  } while (bVar20);
                  if (bVar20) {
LAB_0045968d:
                    puVar16 = (uint *)(local_91c + 0x15);
                    puVar19 = local_7e0;
                    for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
                      *puVar19 = *puVar16;
                      puVar16 = puVar16 + 1;
                      puVar19 = puVar19 + 1;
                    }
                    FUN_00458000(param_1 + 0x30f,local_7e0,(uint *)(abStack_8ba + 2));
                    local_904 = abStack_8ba + (3 - (int)local_91c);
                    local_8f8 = local_8c8 + (1 - (int)local_91c);
                    pbVar14 = local_91c + 2;
                    do {
                      pbVar17 = pbVar14 + (-2 - (int)local_91c);
                      pbVar12 = pbVar14 + 4;
                      local_8c8[(int)pbVar17] = (abStack_8ba + 2)[(int)pbVar17] ^ pbVar14[-1];
                      (local_8c8 + 1)[(int)pbVar17] = (abStack_8ba + 3)[(int)pbVar17] ^ *pbVar14;
                      bVar2 = pbVar14[2];
                      pbVar14[(int)(local_8c8 + -(int)local_91c)] =
                           pbVar14[(int)(abStack_8ba + (2 - (int)local_91c))] ^ pbVar14[1];
                      pbVar14[(int)local_8f8] = pbVar14[(int)local_904] ^ bVar2;
                      pbVar14 = pbVar12;
                    } while ((int)(pbVar12 + (-2 - (int)local_91c)) < 0x10);
                    FUN_004558c0(param_1,(int)local_8f4,(undefined4 *)local_8c8,'\x01');
                  }
                  else {
                    FUN_00460b10((int)local_898);
                    FUN_00462760(local_898,&local_924,4);
                    FUN_00462760(local_898,&local_920,2);
                    FUN_00462760(local_898,param_1 + 0x36c,0x14);
                    FUN_00462830(local_898);
                    pbVar14 = local_91c + 1;
                    piVar6 = (int *)FUN_00462930((int)local_898);
                    iVar15 = 5;
                    bVar20 = true;
                    do {
                      if (iVar15 == 0) break;
                      iVar15 = iVar15 + -1;
                      bVar20 = *piVar6 == *(int *)pbVar14;
                      piVar6 = piVar6 + 1;
                      pbVar14 = pbVar14 + 4;
                    } while (bVar20);
                    if (bVar20) goto LAB_0045968d;
                  }
                  _free(local_91c);
                  local_c = 0xffffffff;
                  FUN_00462950(local_898);
                  pcVar18 = local_8f4;
                  goto LAB_004590bf;
                }
                if ((bVar2 != 0x17) || (uVar5 != 1)) {
                  if ((bVar2 == 0x22) && (uVar5 == 0xd)) {
                    if (((iVar8 == 5) || (iVar8 == 4)) || ((char)param_1[0x371] != '\0')) {
                      bVar20 = true;
                    }
                    else {
                      bVar20 = false;
                    }
                    bVar21 = iVar8 == 5;
                    local_8fd = bVar21;
                    if (bVar20) {
                      FUN_0044d930(local_478,(undefined4 *)local_91c,0xd,'\0');
                      local_c = 6;
                      FUN_0044dd00(local_478,8);
                      FUN_0044da70(local_478,(byte *)&local_8e8,0x20,'\x01');
                      FUN_0044da70(local_478,(byte *)local_8e4,0x10,'\x01');
                      FUN_0044da70(local_478,(byte *)&local_8fc,0x10,'\x01');
                      *(undefined4 *)(pcVar18 + 7) = local_8e8;
                      *(undefined2 *)(pcVar18 + 0xb) = local_8e4[0];
                      pcVar18[0xcb0] = '\b';
                      pcVar18[0xcb1] = '\0';
                      pcVar18[0xcb2] = '\0';
                      pcVar18[0xcb3] = '\0';
                      if (!bVar21) {
                        if (pcVar18[0x8ac] == '\0') {
                          uVar4 = 0;
                          uVar24 = 0;
                          uVar25 = 0;
                        }
                        else {
                          pcVar1 = pcVar18 + 0x89c;
                          uVar4 = SUB41(pcVar1,0);
                          uVar24 = (undefined1)((uint)pcVar1 >> 8);
                          uVar25 = (undefined2)((uint)pcVar1 >> 0x10);
                        }
                        FUN_0045b030(pcVar18 + 0x10,CONCAT22(uVar25,CONCAT11(uVar24,uVar4)));
                      }
                      uVar25 = 0;
                      puVar11 = (undefined2 *)FUN_0044fd70(0xd,(int)local_91c);
                      *(undefined4 *)(puVar11 + 6) = 0x68;
                      *(byte **)(puVar11 + 1) = local_924;
                      puVar11[3] = (u_short)local_920;
                      uVar5 = FUN_004538a0(param_1,local_924,CONCAT22(uVar25,(u_short)local_920),
                                           '\x01');
                      *puVar11 = (short)uVar5;
                      FUN_00452280(param_1,puVar11);
                      FUN_0044d8d0(local_6a8,7);
                      local_c = CONCAT31(local_c._1_3_,7);
                      local_928[0] = 0x1e;
                      FUN_0044df40(local_6a8,local_928,8,'\x01');
                      local_904 = local_924;
                      FUN_0044df40(local_6a8,(byte *)&local_904,0x20,'\x01');
                      local_8d8 = local_920;
                      FUN_0044df40(local_6a8,(byte *)&local_8d8,0x10,'\x01');
                      iVar8 = local_69c;
                      iVar15 = local_6a8[0];
                      uVar23 = FUN_0044e910();
                      FUN_00453ac0(param_1,iVar8,iVar15,0,8,0,local_924,(u_short)local_920,'\0','\0'
                                   ,(int)uVar23,0);
                      if (local_8fd == '\0') {
                        FUN_004563b0(param_1,local_924,(u_short)local_920,'\x01');
                        FUN_00456240(param_1,local_924,(u_short)local_920,'\x01');
                      }
                      local_c = CONCAT31(local_c._1_3_,6);
                      FUN_0044d9b0((int)local_6a8);
                      local_c = 0xffffffff;
                      FUN_0044d9b0((int)local_478);
                      goto LAB_004590bf;
                    }
                    FUN_00455b00(param_1,local_924,(u_short)local_920,'\x01',0);
                    goto LAB_004590b2;
                  }
                  if (0x13 < bVar2) goto LAB_00459534;
                }
                goto LAB_004590b6;
              }
              if (((iVar8 != 5) && (iVar8 != 7)) &&
                 (uVar7 = FUN_0044eec0(&local_924,param_1 + 0x8d), (char)uVar7 == '\0'))
              goto LAB_004590b2;
              pcVar18[0xcb0] = '\b';
              pcVar18[0xcb1] = '\0';
              pcVar18[0xcb2] = '\0';
              pcVar18[0xcb3] = '\0';
              FUN_004563b0(param_1,local_924,(u_short)local_920,'\x01');
              FUN_00456240(param_1,local_924,(u_short)local_920,'\x01');
              FUN_0044d930(local_360,(undefined4 *)local_91c,7,'\0');
              local_c = 1;
              FUN_0044dd00(local_360,8);
              FUN_0044da70(local_360,(byte *)&local_8e0,0x20,'\x01');
              FUN_0044da70(local_360,(byte *)local_8dc,0x10,'\x01');
              *(undefined4 *)(pcVar18 + 7) = local_8e0;
              *(undefined2 *)(pcVar18 + 0xb) = local_8dc[0];
              puVar11 = (undefined2 *)FUN_0044fd70(7,(int)local_91c);
              *(int *)(puVar11 + 6) = iVar15;
              *(byte **)(puVar11 + 1) = local_924;
              puVar11[3] = (u_short)local_920;
              *puVar11 = (undefined2)local_914;
              FUN_00452280(param_1,puVar11);
              local_c = 0xffffffff;
              FUN_0044d9b0((int)local_360);
            }
LAB_004590bf:
            iVar15 = FUN_0045be10(pcVar18 + 0x10,&local_91c);
          }
        }
        else {
          puVar11 = (undefined2 *)FUN_0044fd50(1);
          *(undefined4 *)(puVar11 + 6) = 8;
          **(undefined1 **)(puVar11 + 8) = 0x26;
          *(byte **)(puVar11 + 1) = local_924;
          puVar11[3] = (u_short)local_920;
          *puVar11 = (undefined2)local_914;
          piVar6 = (int *)FUN_00450e00((int)(param_1 + 0x374));
          *piVar6 = (int)puVar11;
          FUN_00450e40((int)(param_1 + 0x374));
        }
      }
      else {
        iVar15 = *(int *)(pcVar18 + 0xcb0);
        if ((iVar15 == 8) || (((iVar15 == 4 || (iVar15 == 1)) || (iVar15 == 3)))) {
          puVar11 = (undefined2 *)FUN_0044fd50(1);
          if (*(int *)(pcVar18 + 0xcb0) == 4) {
            **(undefined1 **)(puVar11 + 8) = 0x1d;
          }
          else if (*(int *)(pcVar18 + 0xcb0) == 8) {
            **(undefined1 **)(puVar11 + 8) = 0x21;
          }
          else {
            **(undefined1 **)(puVar11 + 8) = 0x20;
          }
          *(undefined4 *)(puVar11 + 6) = 8;
          *(byte **)(puVar11 + 1) = local_924;
          puVar11[3] = (u_short)local_920;
          *puVar11 = (undefined2)local_914;
          piVar6 = (int *)FUN_00450e00((int)(param_1 + 0x374));
          *piVar6 = (int)puVar11;
          FUN_00450e40((int)(param_1 + 0x374));
        }
        uVar4 = (undefined1)local_920;
        uVar24 = (undefined1)((uint)local_920 >> 8);
LAB_00459a68:
        FUN_004564d0(param_1,(int)local_924,CONCAT11(uVar24,uVar4),'\0',1,0);
      }
    }
LAB_00459a6f:
    uVar5 = local_914 + 1;
    if (*(ushort *)(param_1 + 2) <= uVar5) goto LAB_00459a84;
    local_914 = uVar5;
  } while( true );
}


/* END FUNCTION 0x004587f0 */
