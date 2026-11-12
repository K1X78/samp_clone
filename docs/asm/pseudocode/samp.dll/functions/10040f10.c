/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040f10
 * Name: FUN_10040f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10040f10(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte *in_stack_fffff6b4;
  undefined2 uVar22;
  uint uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined4 uVar26;
  byte **ppbVar27;
  char local_928 [4];
  byte *local_924;
  uint local_920;
  byte *local_91c;
  byte *local_918;
  undefined4 local_914;
  undefined8 local_910;
  byte *local_904;
  char local_8fd;
  undefined4 *local_8fc;
  byte *local_8f8;
  byte *local_8f4;
  byte *local_8f0;
  int local_8ec;
  undefined4 local_8e8;
  undefined2 local_8e4 [2];
  undefined4 local_8e0;
  undefined2 local_8dc [2];
  uint local_8d8;
  int local_8d4;
  byte *local_8d0;
  undefined4 local_8cc;
  byte local_8c8 [14];
  byte abStack_8ba [218];
  undefined4 local_7e0 [8];
  byte *local_7c0 [3];
  byte *local_7b4;
  undefined4 local_6a8;
  undefined4 local_69c;
  undefined4 local_590;
  undefined4 local_584;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_101152c8;
  local_14 = ExceptionList;
  iVar15 = 0;
  ExceptionList = &local_14;
  do {
    iVar5 = FUN_100534c0(*(undefined4 *)((int)param_1 + 0xc0a),param_1,&local_8cc);
    if (iVar5 == -1) {
      if (local_8cc == 0x2746) {
        iVar5 = 0;
      }
      else if ((local_8cc != 0) && ((char)param_1[1] == '\0')) {
        *(undefined1 *)(param_1 + 1) = 1;
        (**(code **)(*param_1 + 0x24))(0,0);
        ExceptionList = local_14;
        return 0;
      }
    }
    if ((char)param_1[1] != '\0') {
      ExceptionList = local_14;
      return 0;
    }
  } while (0 < iVar5);
  local_910._0_4_ = 0;
  local_910._4_4_ = 0;
  local_918 = (byte *)0x0;
  puVar6 = (undefined4 *)FUN_10038f60();
  iVar5 = (int)local_910;
  while (puVar6 != (undefined4 *)0x0) {
    uVar19 = CONCAT44(local_910._4_4_,iVar15);
    uVar4 = (undefined2)((uint)in_stack_fffff6b4 >> 0x10);
    if (*(int *)((int)puVar6 + 0x25) == 0) {
      if (iVar15 == 0 && local_910._4_4_ == 0) {
        uVar19 = FUN_1002e310();
      }
      local_910._4_4_ = (int)((ulonglong)uVar19 >> 0x20);
      iVar15 = (int)uVar19;
      uVar25 = 0;
      in_stack_fffff6b4 = (byte *)CONCAT22(uVar4,*(undefined2 *)((int)puVar6 + 0x11));
      cVar3 = FUN_1003c410(*(undefined4 *)((int)puVar6 + 0x21),*puVar6,puVar6[1],puVar6[2],
                           *(undefined1 *)(puVar6 + 3),*(undefined4 *)((int)puVar6 + 0xd),
                           in_stack_fffff6b4,*(undefined1 *)((int)puVar6 + 0x13),1,uVar19);
      if (cVar3 == '\0') {
        _free(*(void **)((int)puVar6 + 0x21));
      }
      if ((puVar6[5] != 0) && (cVar3 = FUN_100331d0(&DAT_1013c7cc), cVar3 != '\0')) {
        in_stack_fffff6b4 = (byte *)0x10041057;
        iVar5 = FUN_1003c2a0(*(undefined4 *)((int)puVar6 + 0xd),
                             CONCAT22(uVar25,*(undefined2 *)((int)puVar6 + 0x11)),1,1);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0xc62) = puVar6[5];
        }
      }
    }
    else {
      in_stack_fffff6b4 = *(byte **)((int)puVar6 + 0xd);
      FUN_1003ed80(in_stack_fffff6b4,*(undefined2 *)((int)puVar6 + 0x11),0,1,
                   *(undefined1 *)(puVar6 + 3));
    }
    FUN_10038f80();
    puVar6 = (undefined4 *)FUN_10038f60();
    iVar5 = iVar15;
  }
  local_910._0_4_ = iVar5;
  puVar6 = (undefined4 *)FUN_10038d90();
  local_8fc = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    do {
      if (local_910 == 0) {
        lVar20 = FUN_1002e310();
        in_stack_fffff6b4 = (byte *)0x10041115;
        local_910 = lVar20;
        local_918 = (byte *)__alldiv(lVar20,1000,0);
      }
      if (*(uint *)((int)puVar6 + 6) < local_918) {
        local_928[0] = *(char *)((int)puVar6 + 10) == '\x06';
        cVar3 = FUN_100331a0(&DAT_1013c7cc);
        if ((local_928[0] == '\0') && (cVar3 != '\x01')) {
          *(char *)((int)puVar6 + 10) = *(char *)((int)puVar6 + 10) + '\x01';
          *(uint *)((int)puVar6 + 6) = (int)local_918 + 1000;
          local_914 = CONCAT31(CONCAT12(local_914._3_1_,(ushort)DAT_1013c7c8 ^ (ushort)DAT_10156e38)
                               ,0x18);
          in_stack_fffff6b4 = *(byte **)((int)param_1 + 0xc0a);
          FUN_10053570(in_stack_fffff6b4,&local_914,3,*puVar6,*(undefined2 *)(puVar6 + 1));
          goto LAB_100411a0;
        }
        if (*(void **)((int)puVar6 + 0xb) != (void *)0x0) {
          _free(*(void **)((int)puVar6 + 0xb));
          *(undefined4 *)((int)puVar6 + 0xb) = 0;
        }
        if (((local_928[0] != '\0') && (cVar3 != '\x01')) && (*(int *)((int)puVar6 + 0x112) == 1)) {
          puVar8 = (undefined2 *)FUN_10037d90(1);
          **(undefined1 **)(puVar8 + 8) = 0x1d;
          *(undefined4 *)(puVar8 + 6) = 8;
          *(undefined4 *)(puVar8 + 1) = *puVar6;
          puVar8[3] = *(undefined2 *)(puVar6 + 1);
          *puVar8 = 0xffff;
          puVar7 = (undefined4 *)FUN_100390c0();
          *puVar7 = puVar8;
          FUN_10039100();
        }
        if (puVar6 != local_8fc) {
          *puVar6 = DAT_1013c7cc;
          *(undefined2 *)(puVar6 + 1) = DAT_1013c7d0;
          goto LAB_100411a0;
        }
        FUN_10038dc0();
        puVar6 = (undefined4 *)FUN_10038d90();
        local_8fc = puVar6;
      }
      else {
LAB_100411a0:
        puVar6 = (undefined4 *)FUN_10038d90();
      }
    } while (puVar6 != (undefined4 *)0x0);
    if (local_8fc != (undefined4 *)0x0) {
      FUN_10038db0(local_8fc);
    }
  }
  local_918 = (byte *)0x0;
  local_914 = 0;
  uVar21 = 0;
  if (*(short *)((int)param_1 + 7) != 0) {
    do {
      uVar4 = (undefined2)((uint)in_stack_fffff6b4 >> 0x10);
      pbVar16 = (byte *)(local_914 * 0xc69 + param_1[0xcd]);
      local_910 = uVar21;
      if (*(char *)(local_914 * 0xc69 + param_1[0xcd]) != '\0') {
        local_924 = *(byte **)(pbVar16 + 1);
        local_920 = CONCAT22(local_920._2_2_,*(undefined2 *)(pbVar16 + 5));
        local_8f4 = pbVar16;
        if (uVar21 == 0) {
          uVar21 = FUN_1002e310();
          uVar4 = 0x1004;
          local_910 = uVar21;
          local_918 = (byte *)__alldiv(uVar21,1000,0);
        }
        if (((*(byte **)(pbVar16 + 0x738) < local_918) &&
            (5000 < (uint)((int)local_918 - (int)*(byte **)(pbVar16 + 0x738)))) &&
           (*(int *)(pbVar16 + 0xc62) == 8)) {
          iVar15 = FUN_10047490(0);
          if (*(int *)(iVar15 + 0x9c) == 0) {
            uVar26 = CONCAT22(uVar4,*(undefined2 *)(pbVar16 + 5));
            local_928[0] = '\x17';
            FUN_1003c410(local_928,8,3,8,0,*(undefined4 *)(pbVar16 + 1),uVar26,0,0,uVar21);
            uVar4 = (undefined2)((uint)uVar26 >> 0x10);
            iVar15 = FUN_100437b0();
            *(byte **)(pbVar16 + 0x738) = local_918 + iVar15;
          }
        }
        uVar23 = *(uint *)((int)param_1 + 0xc01);
        in_stack_fffff6b4 = (byte *)CONCAT22(uVar4,(undefined2)local_920);
        FUN_100495a0(*(undefined4 *)((int)param_1 + 0xc0a),local_924,in_stack_fffff6b4,uVar23,uVar21
                     ,(int)param_1 + 0x3ad);
        uVar25 = (undefined2)(uVar21 >> 0x30);
        cVar3 = FUN_10043b10();
        uVar4 = (undefined2)(uVar23 >> 0x10);
        if (cVar3 == '\0') {
          if ((*(int *)(pbVar16 + 0xc62) == 1) || (*(int *)(pbVar16 + 0xc62) == 2)) {
            cVar3 = FUN_10046770();
            uVar4 = (undefined2)(uVar23 >> 0x10);
            if (cVar3 == '\0') goto LAB_10041419;
          }
          if (*(int *)(pbVar16 + 0xc62) == 3) {
            cVar3 = FUN_10046810();
            uVar4 = (undefined2)(uVar23 >> 0x10);
            if (cVar3 == '\0') goto LAB_10041419;
          }
          pbVar10 = local_918;
          uVar4 = (undefined2)(uVar23 >> 0x10);
          iVar15 = *(int *)(pbVar16 + 0xc62);
          if (((((iVar15 != 4) && (iVar15 != 5)) && (iVar15 != 6)) && (iVar15 != 7)) ||
             ((local_918 <= *(byte **)(pbVar16 + 0x84d) ||
              ((uint)((int)local_918 - (int)*(byte **)(pbVar16 + 0x84d)) < 0x2711)))) {
            cVar3 = FUN_10043b00();
            if (cVar3 == '\0') {
              if (((*(int *)(pbVar16 + 0xc62) == 8) && (*(byte **)(pbVar16 + 0x734) < pbVar10)) &&
                 ((*(char *)((int)param_1 + 6) != '\0' || (*(short *)(pbVar16 + 0x732) == -1)))) {
                *(byte **)(pbVar16 + 0x734) = pbVar10 + 5000;
                uVar23 = 0x10041507;
                FUN_1003ec60(local_924,CONCAT22(uVar25,(undefined2)local_920),1);
              }
              ppbVar27 = &local_91c;
              uVar26 = 0x10041513;
              iVar15 = FUN_10044f70(ppbVar27);
              uVar21 = (ulonglong)uVar23;
              while (local_8ec = iVar15, 0 < iVar15) {
                uVar23 = (uint)uVar21;
                uVar4 = (undefined2)((uint)uVar26 >> 0x10);
                uVar25 = (undefined2)((uint)ppbVar27 >> 0x10);
                if (*(int *)((int)param_1 + 0x7d1) == 0) {
                  uVar14 = iVar15 + 7 >> 3;
                }
                else {
                  FUN_1001f220(0x5d4);
                  local_c = 0;
                  FUN_1001f3b0();
                  local_904 = (byte *)(iVar15 + 7 >> 3);
                  pbVar10 = local_91c;
                  FUN_1001fbe0(local_91c,local_904);
                  uVar4 = (undefined2)((uint)pbVar10 >> 0x10);
                  *(int *)((int)param_1 + 0x7dd) =
                       *(int *)((int)param_1 + 0x7dd) + ((int)(local_7c0[0] + 7) >> 3);
                  local_8f8 = local_7c0[0];
                  if (local_7c0[0] == (byte *)0x0) {
                    uVar14 = 0;
                  }
                  else {
                    pbVar9 = operator_new((int)(local_7c0[0] + 7) >> 3);
                    pbVar16 = local_7b4;
                    pbVar10 = pbVar9;
                    for (uVar23 = (uint)((int)(local_7c0[0] + 7) >> 3) >> 2; uVar23 != 0;
                        uVar23 = uVar23 - 1) {
                      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar16;
                      pbVar16 = pbVar16 + 4;
                      pbVar10 = pbVar10 + 4;
                    }
                    for (uVar23 = (int)(local_7c0[0] + 7) >> 3 & 3; uVar23 != 0; uVar23 = uVar23 - 1
                        ) {
                      *pbVar10 = *pbVar16;
                      pbVar16 = pbVar16 + 1;
                      pbVar10 = pbVar10 + 1;
                    }
                    FUN_1001f3b0();
                    uVar23 = 0x100415ee;
                    FUN_10026290(pbVar9,local_8f8,local_7c0);
                    *(int *)((int)param_1 + 0x7e5) =
                         *(int *)((int)param_1 + 0x7e5) + ((int)(local_7c0[0] + 7) >> 3);
                    uVar4 = 0x1004;
                    _free(pbVar9);
                    uVar14 = (int)(local_7c0[0] + 7) >> 3;
                    if ((int)local_904 < (int)uVar14) {
                      if (local_91c != (byte *)0x0) {
                        _free(local_91c);
                      }
                      uVar4 = 0x1004;
                      local_91c = operator_new(uVar14);
                    }
                    pbVar10 = local_7b4;
                    pbVar9 = local_91c;
                    for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar10;
                      pbVar10 = pbVar10 + 4;
                      pbVar9 = pbVar9 + 4;
                    }
                    for (uVar13 = uVar14 & 3; pbVar16 = local_8f4, iVar15 = local_8ec, uVar13 != 0;
                        uVar13 = uVar13 - 1) {
                      *pbVar9 = *pbVar10;
                      pbVar10 = pbVar10 + 1;
                      pbVar9 = pbVar9 + 1;
                    }
                  }
                  local_c = 0xffffffff;
                  uVar25 = 0x1004;
                  FUN_1001f390();
                  uVar21 = (ulonglong)uVar23;
                }
                uVar23 = (uint)uVar21;
                uVar22 = (undefined2)((uint)in_stack_fffff6b4 >> 0x10);
                uVar24 = (undefined2)(uVar21 >> 0x10);
                iVar5 = *(int *)(pbVar16 + 0xc62);
                bVar1 = *local_91c;
                if (iVar5 == 6) {
                  if (bVar1 == 0xb) {
                    in_stack_fffff6b4 = pbVar16;
                    pbVar10 = local_924;
                    FUN_10040530(pbVar16,local_924,local_920 & 0xffff,local_91c,uVar14);
                    uVar21 = ZEXT48(pbVar10);
                  }
                  else {
                    if (bVar1 == 0xc) {
                      in_stack_fffff6b4 = (byte *)0x100416e7;
                      pbVar10 = local_91c;
                      cVar3 = FUN_10038890(local_91c,uVar14,local_924,
                                           CONCAT22(uVar25,(undefined2)local_920));
                      uVar21 = ZEXT48(pbVar10);
                      uVar24 = (undefined2)((uint)pbVar10 >> 0x10);
                      if (cVar3 != '\0') goto LAB_10041741;
                    }
                    uVar4 = 0;
                    FUN_1003ed80(local_924,CONCAT22(uVar24,(undefined2)local_920),0,1,0);
                    iVar15 = *param_1;
                    uVar26 = FUN_100437b0();
                    uVar23 = (**(code **)(*param_1 + 0xb8))
                                       (local_924,CONCAT22(uVar4,(undefined2)local_920),uVar26);
                    in_stack_fffff6b4 = (byte *)0x1004173d;
                    (**(code **)(iVar15 + 100))(uVar23);
                    uVar21 = (ulonglong)uVar23;
                  }
LAB_10041741:
                  if (local_91c != (byte *)0x0) {
LAB_10041745:
                    _free(local_91c);
                  }
                }
                else {
                  if (bVar1 == 0xb) {
                    if (iVar5 != 8) {
                      in_stack_fffff6b4 = pbVar16;
                      pbVar10 = local_924;
                      FUN_10040530(pbVar16,local_924,local_920 & 0xffff,local_91c,uVar14);
                      uVar21 = ZEXT48(pbVar10);
                    }
                    goto LAB_10041741;
                  }
                  if (bVar1 != 0xc) {
                    if ((bVar1 == 0x1e) && (uVar14 == 7)) {
                      if ((iVar5 != 5) && (iVar5 != 7)) {
                        uVar4 = 0x1004;
                        cVar3 = FUN_100331a0((int)param_1 + 0x22d);
                        if (cVar3 == '\0') goto LAB_10041741;
                      }
                      pbVar16[0xc62] = 8;
                      pbVar16[0xc63] = 0;
                      pbVar16[0xc64] = 0;
                      pbVar16[0xc65] = 0;
                      FUN_1003ec60(local_924,CONCAT22(uVar4,(undefined2)local_920),1);
                      FUN_1003eaf0(local_924,local_920 & 0xffff,1);
                      FUN_1001f280(local_91c,7,0);
                      local_c = 1;
                      FUN_1001f7b0(8);
                      FUN_1001f470(&local_8e0,0x20,1);
                      uVar23 = 0x100418bf;
                      FUN_1001f470(local_8dc,0x10,1);
                      *(undefined4 *)(pbVar16 + 7) = local_8e0;
                      *(undefined2 *)(pbVar16 + 0xb) = local_8dc[0];
                      puVar8 = (undefined2 *)FUN_10037db0(7,local_91c);
                      *(int *)(puVar8 + 6) = iVar15;
                      *(byte **)(puVar8 + 1) = local_924;
                      puVar8[3] = (undefined2)local_920;
                      *puVar8 = (undefined2)local_914;
                      FUN_1003ab50(puVar8);
                      local_c = 0xffffffff;
                      FUN_1001f390();
                      uVar21 = (ulonglong)uVar23;
                      goto LAB_1004174e;
                    }
                    if ((bVar1 == 9) && (uVar14 == 9)) {
                      FUN_1001f280(local_91c,9,0);
                      local_c = 2;
                      FUN_1001f7b0(8);
                      FUN_1001f470(&local_8f0,0x20,1);
                      FUN_1001f470(&local_8d4,0x20,1);
                      uVar21 = FUN_1002e310();
                      in_stack_fffff6b4 = (byte *)0x1004199d;
                      local_910 = uVar21;
                      local_918 = (byte *)__alldiv(uVar21,1000,0);
                      if (local_8f0 < local_918) {
                        uVar23 = (int)local_918 - (int)local_8f0;
                      }
                      else {
                        uVar23 = 0;
                      }
                      if ((*(ushort *)(pbVar16 + *(int *)(pbVar16 + 0x72e) * 6 + 0x710) == 0) ||
                         ((uVar23 < (uint)*(ushort *)
                                           (pbVar16 + *(int *)(pbVar16 + 0x72e) * 6 + 0x710) * 3 &&
                          (uVar23 < 0x4b0)))) {
                        *(short *)(pbVar16 + *(int *)(pbVar16 + 0x72e) * 6 + 0x710) = (short)uVar23;
                        *(uint *)(pbVar16 + *(int *)(pbVar16 + 0x72e) * 6 + 0x712) =
                             local_8d4 - ((uint)(local_8f0 + (int)local_918) >> 1);
                        if ((*(ushort *)(pbVar16 + 0x732) == 0xffff) ||
                           ((int)uVar23 < (int)(uint)*(ushort *)(pbVar16 + 0x732))) {
                          *(short *)(pbVar16 + 0x732) = (short)uVar23;
                        }
                        FUN_100456c0(uVar23 & 0xffff);
                        iVar15 = *(int *)(pbVar16 + 0x72e);
                        *(int *)(pbVar16 + 0x72e) = iVar15 + 1;
                        if (iVar15 + 1 == 5) {
                          pbVar16[0x72e] = 0;
                          pbVar16[0x72f] = 0;
                          pbVar16[0x730] = 0;
                          pbVar16[0x731] = 0;
                        }
                      }
                      if (local_91c != (byte *)0x0) {
                        _free(local_91c);
                      }
                      local_c = 0xffffffff;
                      FUN_1001f390();
                      goto LAB_1004174e;
                    }
                    if ((bVar1 == 6) && (uVar14 == 5)) {
                      FUN_1001f280(local_91c,5,0);
                      local_c = 3;
                      FUN_1001f7b0(8);
                      FUN_1001f470(&local_8d0,0x20,1);
                      FUN_1001f1f0();
                      local_c = CONCAT31(local_c._1_3_,4);
                      local_928[0] = '\t';
                      FUN_1001faa0(local_928,8,1);
                      local_904 = local_8d0;
                      FUN_1001faa0(&local_904,0x20,1);
                      pbVar10 = (byte *)FUN_1002e2b0();
                      local_918 = pbVar10;
                      uVar21 = FUN_1002e310();
                      local_904 = pbVar10;
                      local_910 = uVar21;
                      FUN_1001faa0(&local_904,0x20,1);
                      uVar23 = 0;
                      in_stack_fffff6b4 = (byte *)CONCAT22(uVar22,(undefined2)local_920);
                      FUN_1003c410(local_584,local_590,0,6,0,local_924,in_stack_fffff6b4,0,0,pbVar10
                                   ,0);
                      if (local_91c != (byte *)0x0) {
                        _free(local_91c);
                      }
                      local_c = CONCAT31(local_c._1_3_,3);
                      FUN_1001f390();
                      local_c = 0xffffffff;
                      FUN_1001f390();
                      uVar21 = (ulonglong)uVar23;
                      goto LAB_1004174e;
                    }
                    if (bVar1 == 0x20) {
                      pbVar16[0xc62] = 3;
                      pbVar16[0xc63] = 0;
                      pbVar16[0xc64] = 0;
                      pbVar16[0xc65] = 0;
                      goto LAB_10041741;
                    }
                    if (bVar1 == 0x11) goto LAB_10041745;
                    if (bVar1 == 10) {
                      uVar23 = 0x10041bf3;
                      FUN_1003eaf0(local_924,CONCAT22(uVar4,(undefined2)local_920),1);
                      uVar21 = (ulonglong)uVar23;
                      goto LAB_10041741;
                    }
                    if (bVar1 == 0x29) {
                      FUN_1001f3b0();
                      FUN_1001fb50(local_91c + 1,uVar14 - 1);
                      puVar8 = (undefined2 *)FUN_10037db0(uVar14,local_91c);
                      *(int *)(puVar8 + 6) = iVar15;
                      *(byte **)(puVar8 + 1) = local_924;
                      puVar8[3] = (undefined2)local_920;
                      *puVar8 = (undefined2)local_914;
                      FUN_1003ab50(puVar8);
                      uVar21 = (ulonglong)uVar23;
                      goto LAB_1004174e;
                    }
                    if ((bVar1 == 0xf) && (uVar14 == 0x39)) {
                      FUN_10040b10(pbVar16,local_91c);
                      uVar21 = (ulonglong)uVar23;
                      goto LAB_10041741;
                    }
                    if ((bVar1 == 0x10) && (uVar14 == 0x35)) {
                      FUN_10053260();
                      local_c = 5;
                      FUN_100511b0();
                      FUN_10052e00(&local_924,4);
                      FUN_10052e00(&local_920,2);
                      FUN_10052e00((int)param_1 + 0xd85,0x14);
                      FUN_10052fb0();
                      pbVar16 = local_91c + 1;
                      piVar12 = (int *)FUN_10053250();
                      iVar15 = 5;
                      bVar17 = true;
                      do {
                        if (iVar15 == 0) break;
                        iVar15 = iVar15 + -1;
                        bVar17 = *piVar12 == *(int *)pbVar16;
                        piVar12 = piVar12 + 1;
                        pbVar16 = pbVar16 + 4;
                      } while (bVar17);
                      if (bVar17) {
LAB_10041d7a:
                        pbVar16 = local_91c + 0x15;
                        puVar6 = local_7e0;
                        for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
                          *puVar6 = *(undefined4 *)pbVar16;
                          pbVar16 = pbVar16 + 4;
                          puVar6 = puVar6 + 1;
                        }
                        FUN_10040720(local_7e0,abStack_8ba + 2);
                        local_904 = abStack_8ba + (3 - (int)local_91c);
                        local_8f8 = local_8c8 + (1 - (int)local_91c);
                        pbVar16 = local_91c + 2;
                        do {
                          pbVar10 = pbVar16 + (-2 - (int)local_91c);
                          pbVar9 = pbVar16 + 4;
                          local_8c8[(int)pbVar10] = (abStack_8ba + 2)[(int)pbVar10] ^ pbVar16[-1];
                          (local_8c8 + 1)[(int)pbVar10] = (abStack_8ba + 3)[(int)pbVar10] ^ *pbVar16
                          ;
                          bVar1 = pbVar16[2];
                          pbVar16[(int)(local_8c8 + -(int)local_91c)] =
                               pbVar16[(int)(abStack_8ba + (2 - (int)local_91c))] ^ pbVar16[1];
                          pbVar16[(int)local_8f8] = pbVar16[(int)local_904] ^ bVar1;
                          pbVar16 = pbVar9;
                        } while ((int)(pbVar9 + (-2 - (int)local_91c)) < 0x10);
                        uVar23 = 0x10041e3f;
                        FUN_1003e230(local_8f4,local_8c8,1);
                      }
                      else {
                        FUN_100511b0();
                        FUN_10052e00(&local_924,4);
                        FUN_10052e00(&local_920,2);
                        FUN_10052e00((int)param_1 + 0xd99,0x14);
                        FUN_10052fb0();
                        pbVar16 = local_91c + 1;
                        piVar12 = (int *)FUN_10053250();
                        iVar15 = 5;
                        bVar17 = true;
                        do {
                          if (iVar15 == 0) break;
                          iVar15 = iVar15 + -1;
                          bVar17 = *piVar12 == *(int *)pbVar16;
                          piVar12 = piVar12 + 1;
                          pbVar16 = pbVar16 + 4;
                        } while (bVar17);
                        if (bVar17) goto LAB_10041d7a;
                      }
                      _free(local_91c);
                      local_c = 0xffffffff;
                      FUN_10053270();
                      uVar21 = (ulonglong)uVar23;
                      pbVar16 = local_8f4;
                      goto LAB_1004174e;
                    }
                    if ((bVar1 != 0x17) || (uVar14 != 1)) {
                      if ((bVar1 == 0x22) && (uVar14 == 0xd)) {
                        if (((iVar5 == 5) || (iVar5 == 4)) ||
                           (*(char *)((int)param_1 + 0xdad) != '\0')) {
                          bVar17 = true;
                        }
                        else {
                          bVar17 = false;
                        }
                        bVar18 = iVar5 == 5;
                        local_8fd = bVar18;
                        if (!bVar17) {
                          in_stack_fffff6b4 = (byte *)0x100420e2;
                          pbVar10 = local_924;
                          FUN_1003e3b0(local_924,local_920 & 0xffff,1,0);
                          uVar21 = ZEXT48(pbVar10);
                          goto LAB_10041741;
                        }
                        FUN_1001f280(local_91c,0xd,0);
                        local_c = 6;
                        FUN_1001f7b0(8);
                        FUN_1001f470(&local_8e8,0x20,1);
                        FUN_1001f470(local_8e4,0x10,1);
                        FUN_1001f470(&local_8fc,0x10,1);
                        *(undefined4 *)(pbVar16 + 7) = local_8e8;
                        *(undefined2 *)(pbVar16 + 0xb) = local_8e4[0];
                        pbVar16[0xc62] = 8;
                        pbVar16[0xc63] = 0;
                        pbVar16[0xc64] = 0;
                        pbVar16[0xc65] = 0;
                        if (!bVar18) {
                          if (pbVar16[0x861] == 0) {
                            pbVar10 = (byte *)0x0;
                          }
                          else {
                            pbVar10 = pbVar16 + 0x851;
                          }
                          FUN_10043760(pbVar10);
                        }
                        uVar4 = 0;
                        puVar8 = (undefined2 *)FUN_10037db0(0xd,local_91c);
                        *(undefined4 *)(puVar8 + 6) = 0x68;
                        *(byte **)(puVar8 + 1) = local_924;
                        puVar8[3] = (undefined2)local_920;
                        uVar4 = FUN_1003c1f0(local_924,CONCAT22(uVar4,(undefined2)local_920),1);
                        *puVar8 = uVar4;
                        FUN_1003ab50(puVar8);
                        FUN_1001f220(7);
                        local_c = CONCAT31(local_c._1_3_,7);
                        local_928[0] = '\x1e';
                        FUN_1001faa0(local_928,8,1);
                        local_904 = local_924;
                        FUN_1001faa0(&local_904,0x20,1);
                        local_8d8 = local_920;
                        FUN_1001faa0(&local_8d8,0x10,1);
                        uVar2 = local_69c;
                        uVar26 = local_6a8;
                        uVar11 = FUN_1002e2b0();
                        uVar23 = 0;
                        in_stack_fffff6b4 = (byte *)CONCAT22(uVar22,(undefined2)local_920);
                        FUN_1003c410(uVar2,uVar26,0,8,0,local_924,in_stack_fffff6b4,0,0,uVar11,0);
                        if (local_8fd == '\0') {
                          FUN_1003ec60(local_924,local_920 & 0xffff,1);
                          uVar23 = 0x10042095;
                          FUN_1003eaf0(local_924,local_920 & 0xffff,1);
                        }
                        local_c = CONCAT31(local_c._1_3_,6);
                        FUN_1001f390();
                        local_c = 0xffffffff;
                        FUN_1001f390();
                        uVar21 = (ulonglong)uVar23;
                      }
                      else {
                        if (bVar1 < 0x14) goto LAB_10041745;
                        puVar8 = (undefined2 *)FUN_10037db0(uVar14,local_91c);
                        *(int *)(puVar8 + 6) = iVar15;
                        *(byte **)(puVar8 + 1) = local_924;
                        puVar8[3] = (undefined2)local_920;
                        *puVar8 = (undefined2)local_914;
                        FUN_1003ab50(puVar8);
                        uVar21 = (ulonglong)uVar23;
                      }
                      goto LAB_1004174e;
                    }
                    goto LAB_10041745;
                  }
                  puVar8 = (undefined2 *)FUN_10037db0(uVar14,local_91c);
                  *(uint *)(puVar8 + 6) = uVar14 * 8;
                  *(byte **)(puVar8 + 1) = local_924;
                  puVar8[3] = (undefined2)local_920;
                  uVar23 = 0x100417e0;
                  uVar4 = FUN_1003c1f0(local_924,local_920 & 0xffff,1);
                  *puVar8 = uVar4;
                  FUN_1003ab50(puVar8);
                  uVar21 = (ulonglong)uVar23;
                }
LAB_1004174e:
                ppbVar27 = &local_91c;
                uVar26 = 0x1004175b;
                iVar15 = FUN_10044f70(ppbVar27);
              }
            }
            else {
              puVar8 = (undefined2 *)FUN_10037d90(1);
              *(undefined4 *)(puVar8 + 6) = 8;
              **(undefined1 **)(puVar8 + 8) = 0x26;
              *(byte **)(puVar8 + 1) = local_924;
              puVar8[3] = (undefined2)local_920;
              *puVar8 = (undefined2)local_914;
              piVar12 = (int *)FUN_100390c0();
              *piVar12 = (int)puVar8;
              FUN_10039100();
            }
            goto LAB_1004218b;
          }
        }
LAB_10041419:
        iVar15 = *(int *)(pbVar16 + 0xc62);
        if (((iVar15 == 8) || (iVar15 == 4)) || ((iVar15 == 1 || (iVar15 == 3)))) {
          puVar8 = (undefined2 *)FUN_10037d90(1);
          if (*(int *)(pbVar16 + 0xc62) == 4) {
            **(undefined1 **)(puVar8 + 8) = 0x1d;
          }
          else if (*(int *)(pbVar16 + 0xc62) == 8) {
            **(undefined1 **)(puVar8 + 8) = 0x21;
          }
          else {
            **(undefined1 **)(puVar8 + 8) = 0x20;
          }
          *(undefined4 *)(puVar8 + 6) = 8;
          *(byte **)(puVar8 + 1) = local_924;
          puVar8[3] = (undefined2)local_920;
          *puVar8 = (undefined2)local_914;
          piVar12 = (int *)FUN_100390c0();
          *piVar12 = (int)puVar8;
          FUN_10039100();
        }
        FUN_1003ed80(local_924,CONCAT22(uVar4,(undefined2)local_920),0,1,0);
        in_stack_fffff6b4 = local_924;
      }
LAB_1004218b:
      local_914 = local_914 + 1;
      uVar21 = local_910;
    } while (local_914 < *(ushort *)((int)param_1 + 7));
  }
  ExceptionList = local_14;
  return 1;
}


/* END FUNCTION 0x10040f10 */
