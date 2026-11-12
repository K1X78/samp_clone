/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417bf0
 * Name: FUN_00417bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00417bf0(int param_1,int param_2,undefined **param_3,double *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined **ppuVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  int extraout_ECX;
  int extraout_ECX_00;
  double *pdVar15;
  uint uVar16;
  uint extraout_EDX;
  int iVar17;
  byte bVar18;
  char *pcVar19;
  undefined **ppuVar20;
  char *pcVar21;
  undefined1 *puVar22;
  int iVar23;
  undefined4 *puVar24;
  bool bVar25;
  bool bVar26;
  undefined8 uVar27;
  longlong lVar28;
  longlong lVar29;
  byte local_1b2;
  char local_1b1;
  undefined **local_1b0;
  uint local_1a8;
  uint local_19c;
  double local_198;
  undefined1 *local_18c;
  int local_188;
  uint local_184;
  double local_180;
  undefined **local_174;
  uint local_170;
  uint local_16c;
  undefined1 local_168 [347];
  char local_d;
  char local_c;
  undefined *local_b;
  
  cVar10 = *(char *)param_3;
  local_1b0 = (undefined **)0x0;
  if (cVar10 != '\0') {
    do {
      ppuVar20 = param_3;
      if (cVar10 != '%') {
        cVar10 = *(char *)((int)param_3 + 1);
        local_1b0 = param_3;
        uVar11 = 1;
        ppuVar9 = param_3;
        while ((ppuVar20 = (undefined **)((int)ppuVar9 + 1), cVar10 != '%' &&
               (bVar26 = cVar10 != '\0', cVar10 = '\0', bVar26))) {
          uVar11 = uVar11 + 1;
          cVar10 = *(char *)((int)ppuVar9 + 2);
          ppuVar9 = ppuVar20;
        }
        FUN_00412af0((char *)param_3,uVar11);
        if (cVar10 == '\0') {
          return;
        }
      }
      iVar12 = (int)*(char *)((int)ppuVar20 + 1);
      param_3 = (undefined **)((int)ppuVar20 + 1);
      if (iVar12 == 0) {
        FUN_00412af0("%",1);
        return;
      }
      bVar26 = false;
      bVar8 = false;
      bVar7 = false;
      bVar4 = false;
      bVar25 = false;
      bVar5 = false;
      do {
        switch(iVar12) {
        case 0x20:
          bVar4 = true;
          break;
        case 0x21:
          bVar8 = true;
          break;
        default:
          goto switchD_00417c93_caseD_22;
        case 0x23:
          bVar7 = true;
          break;
        case 0x2b:
          bVar25 = true;
          break;
        case 0x2d:
          bVar5 = true;
          break;
        case 0x30:
          bVar26 = true;
        }
        iVar12 = (int)*(char *)((int)param_3 + 1);
        param_3 = (undefined **)((int)param_3 + 1);
      } while (iVar12 != 0);
switchD_00417c93_caseD_22:
      local_19c = 0;
      if (iVar12 == 0x2a) {
        local_19c = *(uint *)param_4;
        param_4 = (double *)((int)param_4 + 4);
        if ((int)local_19c < 0) {
          local_19c = -local_19c;
          bVar5 = true;
        }
        iVar12 = (int)*(char *)((int)param_3 + 1);
        param_3 = (undefined **)((int)param_3 + 1);
LAB_00417d33:
        if (0x154 < (int)local_19c) {
          local_19c = 0x154;
        }
      }
      else if (0x2f < iVar12) {
        do {
          if (0x39 < iVar12) break;
          local_19c = iVar12 + -0x30 + local_19c * 10;
          param_3 = (undefined **)((int)param_3 + 1);
          iVar12 = (int)*(char *)param_3;
        } while (0x2f < iVar12);
        goto LAB_00417d33;
      }
      if (iVar12 == 0x2e) {
        iVar12 = (int)*(char *)((int)param_3 + 1);
        local_1a8 = 0;
        ppuVar20 = (undefined **)((int)param_3 + 1);
        if (iVar12 == 0x2a) {
          local_1a8 = *(uint *)param_4;
          param_4 = (double *)((int)param_4 + 4);
          if ((int)local_1a8 < 0) {
            local_1a8 = -local_1a8;
          }
          iVar12 = (int)*(char *)((int)param_3 + 2);
          param_3 = (undefined **)((int)param_3 + 2);
        }
        else {
          while ((param_3 = ppuVar20, 0x2f < iVar12 && (iVar12 < 0x3a))) {
            local_1a8 = iVar12 + -0x30 + local_1a8 * 10;
            ppuVar20 = (undefined **)((int)param_3 + 1);
            iVar12 = (int)*(char *)((int)param_3 + 1);
          }
        }
      }
      else {
        local_1a8 = 0xffffffff;
      }
      ppuVar20 = param_3;
      if (iVar12 == 0x6c) {
        iVar12 = (int)*(char *)((int)param_3 + 1);
        ppuVar20 = (undefined **)((int)param_3 + 1);
        if (iVar12 != 0x6c) goto LAB_00417deb;
        iVar12 = (int)*(char *)((int)param_3 + 2);
        param_3 = (undefined **)((int)param_3 + 2);
        bVar6 = true;
      }
      else {
LAB_00417deb:
        param_3 = ppuVar20;
        bVar6 = false;
      }
      local_18c = &DAT_004b2c08;
      local_1b1 = '\0';
      iVar23 = 0;
      pcVar21 = "d\n\x01\x01";
      do {
        if (iVar12 == *pcVar21) {
          iVar23 = iVar23 * 6;
          local_18c = &DAT_004b2c08 + iVar23;
          if ((param_2 == 0) && (((&DAT_004b2c0a)[iVar23] & 2) != 0)) {
            return;
          }
          local_1b1 = (&DAT_004b2c0b)[iVar23];
          break;
        }
        pcVar21 = pcVar21 + 6;
        iVar23 = iVar23 + 1;
      } while ((int)pcVar21 < 0x4b2c92);
      local_174 = (undefined **)0x0;
      if ((0x136 < (int)local_1a8) && ((local_18c[2] & 4) == 0)) {
        local_1a8 = 0x136;
      }
      switch(local_1b1) {
      case '\x01':
      case '\x10':
        goto LAB_00417e8b;
      case '\x02':
      case '\x03':
      case '\x04':
        local_198 = *param_4;
        param_4 = param_4 + 1;
        if ((int)local_1a8 < 0) {
          local_1a8 = 6;
        }
        else if (0xa5 < (int)local_1a8) {
          local_1a8 = 0xa5;
        }
        if (0.0 <= local_198) {
          if (bVar25) {
            local_1b2 = 0x2b;
          }
          else {
            local_1b2 = !bVar4 - 1U & 0x20;
          }
        }
        else {
          local_1b2 = 0x2d;
          local_198 = -local_198;
        }
        if ((local_1b1 == '\x04') && (0 < (int)local_1a8)) {
          local_1a8 = local_1a8 - 1;
        }
        dVar3 = 0.5;
        local_180 = 0.5;
        uVar11 = local_1a8;
        if (7 < (int)local_1a8) {
          iVar12 = (local_1a8 - 8 >> 3) + 1;
          uVar11 = local_1a8 + iVar12 * -8;
          do {
            iVar12 = iVar12 + -1;
            dVar3 = dVar3 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1;
            local_180 = dVar3;
          } while (iVar12 != 0);
        }
        if (0 < (int)uVar11) {
          do {
            uVar11 = uVar11 - 1;
            local_180 = local_180 * 0.1;
          } while (uVar11 != 0);
        }
        if (local_1b1 == '\x02') {
          local_198 = local_180 + local_198;
        }
        local_1b0 = (undefined **)0x0;
        iVar12 = FUN_00408340();
        if (iVar12 != 0) {
          local_1b0 = &PTR_DAT_004b6cd0;
          uVar11 = 3;
          break;
        }
        if (0.0 < local_198) {
          if (1e+32 <= local_198) {
            local_1b0 = (undefined **)0x0;
            do {
              if (0x15e < (int)local_1b0) break;
              local_198 = local_198 * 1e-32;
              local_1b0 = (undefined **)((int)local_1b0 + 0x20);
            } while (1e+32 <= local_198);
          }
          for (; (100000000.0 <= local_198 && ((int)local_1b0 < 0x15f));
              local_1b0 = (undefined **)((int)local_1b0 + 8)) {
            local_198 = local_198 * 1e-08;
          }
          for (; (10.0 <= local_198 && ((int)local_1b0 < 0x15f));
              local_1b0 = (undefined **)((int)local_1b0 + 1)) {
            local_198 = local_198 * 0.1;
          }
          for (; local_198 < 1e-08; local_198 = local_198 * 100000000.0) {
            local_1b0 = (undefined **)((int)local_1b0 + -8);
          }
          for (; local_198 < 1.0; local_198 = local_198 * 10.0) {
            local_1b0 = (undefined **)((int)local_1b0 + -1);
          }
          if (0x15e < (int)local_1b0) {
            if (local_1b2 != 0x2d) {
              local_1b0 = (undefined **)&DAT_004b6c9c;
              if (local_1b2 != 0x2b) {
                local_1b0 = (undefined **)&DAT_004b6c98;
              }
              goto LAB_004182f5;
            }
            local_1b0 = (undefined **)&DAT_004b6ca4;
            uVar11 = FUN_00408380("-Inf");
            break;
          }
        }
        bVar25 = local_1b1 == '\x03';
        pcVar21 = local_168;
        if ((local_1b1 != '\x02') && (10.0 <= local_180 + local_198)) {
          local_1b0 = (undefined **)((int)local_1b0 + 1);
        }
        uVar11 = extraout_EDX;
        local_188 = (int)local_1b0;
        if (local_1b1 == '\x04') {
          bVar4 = !bVar7;
          if (((int)local_1b0 < -4) || ((int)extraout_EDX < (int)local_1b0)) {
            local_1b1 = '\x03';
            local_188 = 0;
          }
          else {
            uVar11 = extraout_EDX - (int)local_1b0;
            local_1b1 = '\x02';
            local_1a8 = uVar11;
          }
        }
        else {
          bVar4 = false;
          if (local_1b1 == '\x03') {
            local_188 = 0;
          }
        }
        local_180 = (double)((ulonglong)local_180 & 0xffffffff00000000);
        if (local_1b2 != 0) {
          local_168[0] = local_1b2;
          pcVar21 = local_168 + 1;
        }
        if (local_188 < 0) {
          *pcVar21 = '0';
          pcVar21 = pcVar21 + 1;
        }
        else {
          local_184 = local_188 + 1;
          local_188 = local_188 - local_184;
          do {
            cVar10 = FUN_00408170((int *)&local_180);
            *pcVar21 = cVar10;
            pcVar21 = pcVar21 + 1;
            local_184 = local_184 + -1;
          } while (local_184 != 0);
        }
        if ((0 < (int)uVar11 || bVar8) || bVar7) {
          *pcVar21 = '.';
          pcVar21 = pcVar21 + 1;
        }
        iVar12 = local_188 + 1;
        if (iVar12 < 0) {
          uVar13 = -iVar12;
          uVar16 = uVar13 >> 2;
          pcVar19 = pcVar21;
          while (uVar16 != 0) {
            uVar16 = uVar16 - 1;
            builtin_strncpy(pcVar19,"0000",4);
            pcVar19 = pcVar19 + 4;
          }
          for (uVar16 = uVar13 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar19 = '0';
            pcVar19 = pcVar19 + 1;
          }
          pcVar21 = pcVar21 + uVar13;
          local_1a8 = local_1a8 + iVar12;
        }
        if (0 < (int)local_1a8) {
          local_184 = local_1a8;
          do {
            cVar10 = FUN_00408170((int *)&local_180);
            *pcVar21 = cVar10;
            pcVar21 = pcVar21 + 1;
            local_184 = local_184 - 1;
          } while (local_184 != 0);
        }
        if ((bVar4) && ((0 < (int)uVar11 || bVar8) || bVar7)) {
          cVar10 = pcVar21[-1];
          while (cVar10 == '0') {
            pcVar21[-1] = '\0';
            cVar10 = pcVar21[-2];
            pcVar21 = pcVar21 + -1;
          }
          if (pcVar21[-1] == '.') {
            if (bVar8) {
              *pcVar21 = '0';
              pcVar21 = pcVar21 + 1;
            }
            else {
              pcVar21 = pcVar21 + -1;
              *pcVar21 = '\0';
            }
          }
        }
        if ((bVar25) || (local_1b1 == '\x03')) {
          *pcVar21 = "0123456789ABCDEF0123456789abcdef"[(byte)local_18c[4]];
          if ((int)local_1b0 < 0) {
            pcVar21[1] = '-';
            local_1b0 = (undefined **)-(int)local_1b0;
          }
          else {
            pcVar21[1] = '+';
          }
          pcVar19 = pcVar21 + 2;
          if (99 < (int)local_1b0) {
            iVar12 = (int)local_1b0 / 100;
            local_1b0 = (undefined **)((int)local_1b0 % 100);
            *pcVar19 = (char)iVar12 + '0';
            pcVar19 = pcVar21 + 3;
          }
          *pcVar19 = (char)((int)local_1b0 / 10) + '0';
          pcVar19[1] = (char)((int)local_1b0 % 10) + '0';
          pcVar21 = pcVar19 + 2;
        }
        local_1b0 = (undefined **)local_168;
        *pcVar21 = '\0';
        uVar11 = (int)pcVar21 - (int)local_1b0;
        if (!bVar26) break;
        if (!bVar5) {
          if ((int)uVar11 < (int)local_19c) {
            uVar16 = local_19c - uVar11;
            if ((int)uVar16 <= (int)local_19c) {
              uVar11 = local_19c;
              do {
                local_168[uVar11] = *(byte *)((int)local_1b0 + (uVar11 - uVar16));
                uVar11 = uVar11 - 1;
              } while ((int)uVar16 <= (int)uVar11);
            }
            uVar11 = local_19c;
            if (uVar16 != 0) {
              puVar24 = (undefined4 *)(local_168 + (local_1b2 != 0));
              for (uVar13 = uVar16 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar24 = 0x30303030;
                puVar24 = puVar24 + 1;
              }
              for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined1 *)puVar24 = 0x30;
                puVar24 = (undefined4 *)((int)puVar24 + 1);
              }
            }
          }
          goto LAB_004187c8;
        }
        goto LAB_004187d8;
      case '\x05':
        puVar24 = *(undefined4 **)param_4;
        param_4 = (double *)((int)param_4 + 4);
        *puVar24 = *(undefined4 *)(param_1 + 0xc);
        goto LAB_004187b6;
      case '\x06':
      case '\a':
        pdVar15 = (double *)((int)param_4 + 4);
        local_1b0 = *(undefined ***)param_4;
        if (local_1b0 == (undefined **)0x0) {
          local_1b0 = (undefined **)&DAT_004b6404;
        }
        else if (local_1b1 == '\a') {
          local_174 = local_1b0;
        }
        param_4 = pdVar15;
        if ((int)local_1a8 < 0) {
LAB_004182f5:
          uVar11 = FUN_00408380((char *)local_1b0);
        }
        else {
          uVar11 = 0;
          if (0 < (int)local_1a8) {
            do {
              if (*(byte *)((int)local_1b0 + uVar11) == 0) break;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)local_1a8);
          }
        }
        break;
      case '\b':
        local_1b0 = (undefined **)local_168;
        local_168[0] = 0x25;
        uVar11 = 1;
        break;
      case '\t':
        local_168[0] = (byte)*(undefined4 *)param_4;
        if ((int)local_1a8 < 0) {
          local_1b0 = (undefined **)local_168;
          uVar11 = 1;
          param_4 = (double *)((int)param_4 + 4);
        }
        else {
          if (1 < (int)local_1a8) {
            pbVar14 = local_168 + 1;
            for (uVar11 = local_1a8 - 1 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(uint *)pbVar14 =
                   CONCAT22(CONCAT11(local_168[0],local_168[0]),CONCAT11(local_168[0],local_168[0]))
              ;
              pbVar14 = pbVar14 + 4;
            }
            for (uVar11 = local_1a8 - 1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pbVar14 = local_168[0];
              pbVar14 = pbVar14 + 1;
            }
          }
          local_1b0 = (undefined **)local_168;
          uVar11 = local_1a8;
          param_4 = (double *)((int)param_4 + 4);
        }
        break;
      case '\n':
      case '\v':
      case '\x0f':
        puVar22 = *(undefined1 **)param_4;
        bVar18 = ((local_1b1 != '\x0f') - 1U & 0xfb) + 0x27;
        bVar26 = puVar22 == (undefined1 *)0x0;
        if ((bVar26) && (puVar22 = &DAT_004b6c90, local_1b1 != '\v')) {
          puVar22 = &DAT_004b6c88;
        }
        local_188 = 0;
        for (iVar12 = 0; (local_1a8 != 0 && (puVar22[iVar12] != 0)); iVar12 = iVar12 + 1) {
          if (puVar22[iVar12] == bVar18) {
            local_188 = local_188 + 1;
          }
          local_1a8 = local_1a8 - 1;
        }
        if ((bVar26) || (local_1b1 != '\v')) {
          iVar23 = 0;
        }
        else {
          iVar23 = 1;
        }
        iVar17 = local_188 + 1 + iVar12 + iVar23 * 2;
        if (iVar17 < 0x15f) {
          local_1b0 = (undefined **)local_168;
        }
        else {
          local_1b0 = (undefined **)FUN_004125b0(iVar17);
          local_174 = local_1b0;
          if (local_1b0 == (undefined **)0x0) {
            *(undefined1 *)(param_1 + 0x18) = 1;
            return;
          }
        }
        if (iVar23 != 0) {
          *(byte *)local_1b0 = bVar18;
        }
        uVar11 = (uint)(iVar23 != 0);
        iVar17 = 0;
        local_180 = (double)CONCAT44(local_180._4_4_,iVar12);
        uVar16 = uVar11;
        if (0 < iVar12) {
          do {
            bVar1 = puVar22[iVar17];
            *(byte *)(uVar16 + (int)local_1b0) = bVar1;
            uVar11 = uVar16 + 1;
            if (bVar1 == bVar18) {
              *(byte *)(uVar11 + (int)local_1b0) = bVar1;
              uVar11 = uVar16 + 2;
            }
            iVar17 = iVar17 + 1;
            uVar16 = uVar11;
          } while (iVar17 < iVar12);
        }
        if (iVar23 != 0) {
          *(byte *)(uVar11 + (int)local_1b0) = bVar18;
          uVar11 = uVar11 + 1;
        }
        *(byte *)(uVar11 + (int)local_1b0) = 0;
        param_4 = (double *)((int)param_4 + 4);
        break;
      case '\f':
        pdVar15 = (double *)((int)param_4 + 4);
        puVar2 = *(undefined8 **)param_4;
        param_4 = pdVar15;
        if (puVar2 != (undefined8 *)0x0) {
          uVar27 = *puVar2;
          goto LAB_004187ae;
        }
        goto LAB_004187b6;
      case '\r':
        puVar24 = (undefined4 *)(*(int *)((int)param_4 + 4) * 0x38 + 8 + *(int *)param_4);
        pcVar21 = (char *)*puVar24;
        if (pcVar21 != (char *)0x0) {
          FUN_00412af0(pcVar21,0xffffffff);
          FUN_00412af0(".",1);
        }
        uVar27 = CONCAT44(0xffffffff,puVar24[1]);
        param_4 = param_4 + 1;
LAB_004187ae:
        FUN_00412af0((char *)uVar27,(uint)((ulonglong)uVar27 >> 0x20));
LAB_004187b6:
        local_19c = 0;
        uVar11 = 0;
        break;
      case '\x0e':
        bVar6 = false;
LAB_00417e8b:
        if ((local_18c[2] & 1) == 0) {
          if (bVar6) {
            uVar11 = *(uint *)param_4;
            uVar16 = *(uint *)((int)param_4 + 4);
            param_4 = param_4 + 1;
          }
          else {
            uVar11 = *(uint *)param_4;
            param_4 = (double *)((int)param_4 + 4);
            uVar16 = 0;
          }
          local_1b2 = 0;
        }
        else {
          if (bVar6) {
            uVar11 = *(uint *)param_4;
            uVar16 = *(uint *)((int)param_4 + 4);
            param_4 = param_4 + 1;
          }
          else {
            uVar11 = *(uint *)param_4;
            param_4 = (double *)((int)param_4 + 4);
            uVar16 = (int)uVar11 >> 0x1f;
          }
          if (((int)uVar16 < 1) && ((int)uVar16 < 0)) {
            bVar25 = uVar11 != 0;
            uVar11 = -uVar11;
            uVar16 = -(uVar16 + bVar25);
            local_1b2 = 0x2d;
          }
          else if (bVar25) {
            local_1b2 = 0x2b;
          }
          else {
            local_1b2 = !bVar4 - 1U & 0x20;
          }
        }
        lVar29 = CONCAT44(uVar16,uVar11);
        if (uVar11 == 0 && uVar16 == 0) {
          bVar7 = false;
        }
        if ((bVar26) && (uVar13 = local_19c - (local_1b2 != 0), (int)local_1a8 < (int)uVar13)) {
          local_1a8 = uVar13;
        }
        local_1b0 = &local_b;
        if (local_1b1 == '\x10') {
          uVar27 = __aulldvrm(uVar11,uVar16,10,0);
          if ((3 < extraout_ECX) ||
             (lVar28 = __aullrem((uint)uVar27,(uint)((ulonglong)uVar27 >> 0x20),10,0),
             iVar12 = extraout_ECX, lVar28 == 1)) {
            iVar12 = 0;
          }
          local_d = "thstndrd"[iVar12 * 2];
          local_c = "thstndrd"[iVar12 * 2 + 1];
          local_1b0 = (undefined **)&local_d;
        }
        local_180 = (double)CONCAT44(local_180._4_4_,
                                     "0123456789ABCDEF0123456789abcdef" + (byte)local_18c[4]);
        local_170 = (uint)(byte)local_18c[1];
        local_16c = 0;
        do {
          local_1b0 = (undefined **)((int)local_1b0 + -1);
          lVar29 = __aulldvrm((uint)lVar29,(uint)((ulonglong)lVar29 >> 0x20),local_170,local_16c);
          *(byte *)local_1b0 = *(byte *)(extraout_ECX_00 + local_180._0_4_);
        } while (lVar29 != 0);
        pbVar14 = (byte *)((local_1a8 - (int)&local_b) + (int)local_1b0);
        if (0 < (int)pbVar14) {
          do {
            local_1b0 = (undefined **)((int)local_1b0 + -1);
            pbVar14 = pbVar14 + -1;
            *(byte *)local_1b0 = 0x30;
          } while (pbVar14 != (byte *)0x0);
        }
        if (local_1b2 != 0) {
          local_1b0 = (undefined **)((int)local_1b0 + -1);
          *(byte *)local_1b0 = local_1b2;
        }
        if ((bVar7) && (local_18c[5] != 0)) {
          pbVar14 = &DAT_004b2c00 + (byte)local_18c[5];
          bVar18 = *pbVar14;
          while (bVar18 != 0) {
            local_1b0 = (undefined **)((int)local_1b0 + -1);
            pbVar14 = pbVar14 + 1;
            *(byte *)local_1b0 = bVar18;
            bVar18 = *pbVar14;
          }
        }
        uVar11 = (int)&local_b - (int)local_1b0;
        break;
      default:
        goto switchD_00417e76_default;
      }
      if (!bVar5) {
LAB_004187c8:
        if (local_19c != uVar11 && -1 < (int)(local_19c - uVar11)) {
          FUN_00417ba0();
        }
      }
LAB_004187d8:
      if (0 < (int)uVar11) {
        FUN_00412af0((char *)local_1b0,uVar11);
      }
      if ((bVar5) && (local_19c != uVar11 && -1 < (int)(local_19c - uVar11))) {
        FUN_00417ba0();
      }
      if (local_174 != (undefined **)0x0) {
        FUN_004080d0((int)local_174);
      }
      param_3 = (undefined **)((int)param_3 + 1);
      cVar10 = *(char *)param_3;
      if (cVar10 == '\0') {
        return;
      }
    } while( true );
  }
switchD_00417e76_default:
  return;
}


/* END FUNCTION 0x00417bf0 */
