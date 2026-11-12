/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef6b0
 * Name: FUN_100ef6b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ef6b0(int *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  ushort uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  uint local_40;
  int local_30;
  uint local_2c;
  uint local_28;
  byte *local_24;
  char local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  uint local_1c;
  uint local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  uint local_8;
  
  piVar4 = param_1;
  if ((((((param_1 == (int *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
       ((puVar2 = (undefined4 *)param_1[7], puVar2 == (undefined4 *)0x0 ||
        ((int *)*puVar2 != param_1)))) || ((int)puVar2[1] < 0x3f34)) ||
     (((0x3f53 < (int)puVar2[1] || (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))))) {
    return -2;
  }
  if (puVar2[1] == 0x3f3f) {
    puVar2[1] = 0x3f40;
  }
  local_24 = (byte *)param_1[3];
  local_2c = param_1[4];
  uVar3 = param_1[1];
  uVar16 = puVar2[0x10];
  pbVar18 = (byte *)*param_1;
  local_c = puVar2[0xf];
  uVar12 = puVar2[1] - 0x3f34;
  local_30 = 0;
  local_1c = local_2c;
  local_14 = uVar16;
  local_10 = pbVar18;
  local_8 = uVar3;
  if (0x1e < uVar12) {
    return -2;
  }
  do {
    uVar7 = local_c;
    switch((&switchD_100ef780::switchdataD_100f0d98)[uVar12]) {
    case (undefined *)0x100ef787:
      if (puVar2[3] == 0) {
        puVar2[1] = 0x3f40;
      }
      else {
        while (local_c = uVar7, uVar16 < 0x10) {
          if (local_8 == 0) goto LAB_100f0c36;
          local_8 = local_8 - 1;
          bVar11 = *pbVar18;
          bVar10 = (byte)uVar16;
          pbVar18 = pbVar18 + 1;
          uVar16 = uVar16 + 8;
          local_14 = uVar16;
          local_10 = pbVar18;
          uVar7 = uVar7 + ((uint)bVar11 << (bVar10 & 0x1f));
        }
        if (((*(byte *)(puVar2 + 3) & 2) == 0) || (uVar7 != 0x8b1f)) {
          puVar2[5] = 0;
          if (puVar2[9] != 0) {
            *(undefined4 *)(puVar2[9] + 0x30) = 0xffffffff;
          }
          if (((*(byte *)(puVar2 + 3) & 1) == 0) ||
             (((uVar7 & 0xff) * 0x100 + (uVar7 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else if (((byte)uVar7 & 0xf) == 8) {
            local_c = uVar7 >> 4;
            local_14 = uVar16 - 4;
            uVar12 = (local_c & 0xf) + 8;
            if (puVar2[10] == 0) {
              puVar2[10] = uVar12;
            }
            if ((uVar12 < 0x10) && (uVar12 <= (uint)puVar2[10])) {
              uVar16 = 0;
              puVar2[6] = 1 << (sbyte)uVar12;
              iVar8 = FUN_100f7770(0,0,0);
              puVar2[7] = iVar8;
              param_1[0xc] = iVar8;
              puVar2[1] = ~(local_c >> 8) & 2 | 0x3f3d;
              local_c = 0;
              local_14 = 0;
              break;
            }
            param_1[6] = (int)"invalid window size";
            uVar16 = local_14;
          }
          else {
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_100f0bcd;
        }
        if (puVar2[10] == 0) {
          puVar2[10] = 0xf;
        }
        uVar16 = 0;
        uVar5 = FUN_100f7ff0(0,0,0);
        puVar2[7] = uVar5;
        local_20 = '\x1f';
        local_1f = 0x8b;
        uVar5 = FUN_100f7ff0(puVar2[7],&local_20,2);
        puVar2[7] = uVar5;
        local_c = 0;
        local_14 = 0;
        puVar2[1] = 0x3f35;
      }
      break;
    case (undefined *)0x100ef904:
      while (local_c = uVar7, uVar16 < 0x10) {
        if (local_8 == 0) goto LAB_100f0c36;
        local_8 = local_8 - 1;
        uVar7 = uVar7 + ((uint)*pbVar18 << ((byte)uVar16 & 0x1f));
        pbVar18 = pbVar18 + 1;
        uVar16 = uVar16 + 8;
        local_14 = uVar16;
        local_10 = pbVar18;
      }
      puVar2[5] = uVar7;
      if ((char)uVar7 == '\b') {
        if ((uVar7 & 0xe000) == 0) {
          if ((uint *)puVar2[9] != (uint *)0x0) {
            *(uint *)puVar2[9] = uVar7 >> 8 & 1;
          }
          if (((puVar2[5] & 0x200) != 0) && ((*(byte *)(puVar2 + 3) & 4) != 0)) {
            local_1f = (undefined1)(uVar7 >> 8);
            local_20 = (char)uVar7;
            uVar5 = FUN_100f7ff0(puVar2[7],&local_20,2);
            puVar2[7] = uVar5;
          }
          uVar7 = 0;
          uVar16 = 0;
          puVar2[1] = 0x3f36;
          do {
            if (local_8 == 0) goto LAB_100f0c36;
            local_8 = local_8 - 1;
            bVar11 = (byte)uVar16;
            uVar16 = uVar16 + 8;
            uVar7 = uVar7 + ((uint)*pbVar18 << (bVar11 & 0x1f));
            pbVar18 = pbVar18 + 1;
joined_r0x100ef9b4:
            local_c = uVar7;
          } while (uVar16 < 0x20);
          if (puVar2[9] != 0) {
            *(uint *)(puVar2[9] + 4) = uVar7;
          }
          if (((puVar2[5] & 0x200) != 0) && ((*(byte *)(puVar2 + 3) & 4) != 0)) {
            local_20 = (char)uVar7;
            local_1d = (undefined1)(uVar7 >> 0x18);
            local_1f = (undefined1)(uVar7 >> 8);
            local_1e = (undefined1)(uVar7 >> 0x10);
            uVar5 = FUN_100f7ff0(puVar2[7],&local_20,4);
            puVar2[7] = uVar5;
          }
          uVar7 = 0;
          uVar16 = 0;
          puVar2[1] = 0x3f37;
          do {
            if (local_8 == 0) goto LAB_100f0c36;
            local_8 = local_8 - 1;
            bVar11 = (byte)uVar16;
            uVar16 = uVar16 + 8;
            uVar7 = uVar7 + ((uint)*pbVar18 << (bVar11 & 0x1f));
            pbVar18 = pbVar18 + 1;
            local_10 = pbVar18;
joined_r0x100efa3f:
            local_c = uVar7;
          } while (uVar16 < 0x10);
          if (puVar2[9] != 0) {
            *(uint *)(puVar2[9] + 8) = uVar7 & 0xff;
            *(uint *)(puVar2[9] + 0xc) = uVar7 >> 8;
          }
          if (((puVar2[5] & 0x200) != 0) && ((*(byte *)(puVar2 + 3) & 4) != 0)) {
            local_20 = (char)uVar7;
            local_1f = (undefined1)(uVar7 >> 8);
            uVar5 = FUN_100f7ff0(puVar2[7],&local_20,2);
            puVar2[7] = uVar5;
          }
          uVar16 = 0;
          local_c = 0;
          local_14 = 0;
          puVar2[1] = 0x3f38;
          goto switchD_100ef780_caseD_100efac5;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_100f0bcd;
    case (undefined *)0x100ef9b1:
      goto joined_r0x100ef9b4;
    case (undefined *)0x100efa3c:
      goto joined_r0x100efa3f;
    case (undefined *)0x100efac5:
switchD_100ef780_caseD_100efac5:
      uVar7 = local_c;
      if ((puVar2[5] & 0x400) == 0) {
        if (puVar2[9] != 0) {
          *(undefined4 *)(puVar2[9] + 0x10) = 0;
        }
      }
      else {
        for (; local_c = uVar7, uVar16 < 0x10; uVar16 = uVar16 + 8) {
          if (local_8 == 0) goto LAB_100f0c36;
          local_8 = local_8 - 1;
          bVar11 = *pbVar18;
          bVar10 = (byte)uVar16;
          pbVar18 = pbVar18 + 1;
          local_10 = pbVar18;
          uVar7 = uVar7 + ((uint)bVar11 << (bVar10 & 0x1f));
        }
        puVar2[0x11] = uVar7;
        if (puVar2[9] != 0) {
          *(uint *)(puVar2[9] + 0x14) = uVar7;
        }
        if (((puVar2[5] & 0x200) != 0) && ((*(byte *)(puVar2 + 3) & 4) != 0)) {
          local_20 = (char)uVar7;
          local_1f = (undefined1)(uVar7 >> 8);
          uVar5 = FUN_100f7ff0(puVar2[7],&local_20,2);
          puVar2[7] = uVar5;
        }
        uVar16 = 0;
        local_c = 0;
        local_14 = 0;
      }
      puVar2[1] = 0x3f39;
    case (undefined *)0x100efb58:
      if ((puVar2[5] & 0x400) == 0) {
LAB_100efc0a:
        puVar2[0x11] = 0;
        puVar2[1] = 0x3f3a;
switchD_100ef780_caseD_100efc18:
        if ((puVar2[5] & 0x800) == 0) {
          if (puVar2[9] != 0) {
            *(undefined4 *)(puVar2[9] + 0x1c) = 0;
          }
LAB_100efcc9:
          puVar2[0x11] = 0;
          puVar2[1] = 0x3f3b;
switchD_100ef780_caseD_100efcd7:
          if ((puVar2[5] & 0x1000) == 0) {
            if (puVar2[9] != 0) {
              *(undefined4 *)(puVar2[9] + 0x24) = 0;
            }
LAB_100efd88:
            puVar2[1] = 0x3f3c;
switchD_100ef780_caseD_100efd8f:
            if ((puVar2[5] & 0x200) != 0) {
              while (uVar16 < 0x10) {
                uVar7 = local_c;
                if (local_8 == 0) goto LAB_100f0c36;
                local_8 = local_8 - 1;
                local_c = local_c + ((uint)*pbVar18 << ((byte)uVar16 & 0x1f));
                pbVar18 = pbVar18 + 1;
                uVar16 = uVar16 + 8;
                local_14 = uVar16;
                local_10 = pbVar18;
              }
              if (((*(byte *)(puVar2 + 3) & 4) != 0) && (local_c != (puVar2[7] & 0xffff))) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_100f0bcd;
              }
              uVar16 = 0;
              local_c = 0;
              local_14 = 0;
            }
            if (puVar2[9] != 0) {
              *(uint *)(puVar2[9] + 0x2c) = (int)puVar2[5] >> 9 & 1;
              *(undefined4 *)(puVar2[9] + 0x30) = 1;
            }
            iVar8 = FUN_100f7ff0(0,0,0);
            puVar2[7] = iVar8;
            param_1[0xc] = iVar8;
            puVar2[1] = 0x3f3f;
            break;
          }
          uVar7 = local_c;
          if (local_8 != 0) {
            local_18 = 0;
            do {
              bVar11 = pbVar18[local_18];
              local_18 = local_18 + 1;
              iVar8 = puVar2[9];
              if (((iVar8 != 0) && (*(int *)(iVar8 + 0x24) != 0)) &&
                 ((uint)puVar2[0x11] < *(uint *)(iVar8 + 0x28))) {
                *(byte *)(*(int *)(iVar8 + 0x24) + puVar2[0x11]) = bVar11;
                puVar2[0x11] = puVar2[0x11] + 1;
                pbVar18 = local_10;
              }
            } while ((bVar11 != 0) && (local_18 < local_8));
            if (((puVar2[5] & 0x200) != 0) && ((*(byte *)(puVar2 + 3) & 4) != 0)) {
              uVar5 = FUN_100f7ff0(puVar2[7],pbVar18,local_18);
              puVar2[7] = uVar5;
            }
            local_8 = local_8 - local_18;
            pbVar18 = pbVar18 + local_18;
            uVar7 = local_c;
            local_10 = pbVar18;
            if (bVar11 == 0) goto LAB_100efd88;
          }
        }
        else {
          uVar7 = local_c;
          if (local_8 != 0) {
            local_18 = 0;
            do {
              bVar11 = pbVar18[local_18];
              local_18 = local_18 + 1;
              iVar8 = puVar2[9];
              if (((iVar8 != 0) && (*(int *)(iVar8 + 0x1c) != 0)) &&
                 ((uint)puVar2[0x11] < *(uint *)(iVar8 + 0x20))) {
                *(byte *)(*(int *)(iVar8 + 0x1c) + puVar2[0x11]) = bVar11;
                puVar2[0x11] = puVar2[0x11] + 1;
                pbVar18 = local_10;
              }
            } while ((bVar11 != 0) && (local_18 < local_8));
            if (((puVar2[5] & 0x200) != 0) && ((*(byte *)(puVar2 + 3) & 4) != 0)) {
              uVar5 = FUN_100f7ff0(puVar2[7],pbVar18,local_18);
              puVar2[7] = uVar5;
            }
            local_8 = local_8 - local_18;
            pbVar18 = pbVar18 + local_18;
            uVar7 = local_c;
            local_10 = pbVar18;
            if (bVar11 == 0) goto LAB_100efcc9;
          }
        }
      }
      else {
        local_18 = puVar2[0x11];
        if (local_8 < (uint)puVar2[0x11]) {
          local_18 = local_8;
        }
        if (local_18 != 0) {
          if ((puVar2[9] != 0) && (iVar8 = *(int *)(puVar2[9] + 0x10), iVar8 != 0)) {
            uVar16 = *(uint *)(puVar2[9] + 0x18);
            iVar19 = *(int *)(puVar2[9] + 0x14) - puVar2[0x11];
            uVar12 = local_18;
            if (uVar16 < local_18 + iVar19) {
              uVar12 = uVar16 - iVar19;
            }
            pbVar6 = local_10;
            pbVar17 = (byte *)(iVar19 + iVar8);
            for (uVar16 = uVar12 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pbVar17 = *(undefined4 *)pbVar6;
              pbVar6 = pbVar6 + 4;
              pbVar17 = pbVar17 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar16 = local_14, pbVar18 = local_10, uVar12 != 0;
                uVar12 = uVar12 - 1) {
              *pbVar17 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              pbVar17 = pbVar17 + 1;
            }
          }
          if (((puVar2[5] & 0x200) != 0) && ((*(byte *)(puVar2 + 3) & 4) != 0)) {
            uVar5 = FUN_100f7ff0(puVar2[7],pbVar18,local_18);
            puVar2[7] = uVar5;
          }
          local_8 = local_8 - local_18;
          pbVar18 = pbVar18 + local_18;
          puVar2[0x11] = puVar2[0x11] - local_18;
          local_10 = pbVar18;
        }
        uVar7 = local_c;
        if (puVar2[0x11] == 0) goto LAB_100efc0a;
      }
LAB_100f0c36:
      param_1[3] = (int)local_24;
      param_1[4] = local_1c;
      *param_1 = (int)pbVar18;
      param_1[1] = local_8;
      puVar2[0xf] = uVar7;
      puVar2[0x10] = uVar16;
      if (((puVar2[0xb] == 0) &&
          (((local_2c == param_1[4] || (0x3f50 < (int)puVar2[1])) ||
           ((0x3f4d < (int)puVar2[1] && (param_2 == 4)))))) ||
         (iVar8 = FUN_100ef590(param_1[3],local_2c - param_1[4]), iVar8 == 0)) {
        iVar8 = uVar3 - param_1[1];
        iVar19 = local_2c - param_1[4];
        param_1[2] = param_1[2] + iVar8;
        param_1[5] = param_1[5] + iVar19;
        puVar2[8] = puVar2[8] + iVar19;
        if (((*(byte *)(puVar2 + 3) & 4) != 0) && (iVar19 != 0)) {
          if (puVar2[5] == 0) {
            iVar9 = FUN_100f7770(puVar2[7],param_1[3] - iVar19,iVar19);
          }
          else {
            iVar9 = FUN_100f7ff0(puVar2[7],param_1[3] - iVar19);
          }
          puVar2[7] = iVar9;
          param_1[0xc] = iVar9;
        }
        iVar9 = puVar2[1];
        if ((iVar9 == 0x3f47) || (param_1 = (int *)0x0, iVar9 == 0x3f42)) {
          param_1 = (int *)0x100;
        }
        piVar4[0xb] = (-(uint)(puVar2[2] != 0) & 0x40) + ((iVar9 != 0x3f3f) - 1 & 0x80) +
                      puVar2[0x10] + (int)param_1;
        if (((iVar8 != 0) || (iVar19 != 0)) && (param_2 != 4)) {
          return local_30;
        }
        if (local_30 != 0) {
          return local_30;
        }
        return -5;
      }
      puVar2[1] = 0x3f52;
switchD_100ef780_caseD_100f0c9c:
      return -4;
    case (undefined *)0x100efc18:
      goto switchD_100ef780_caseD_100efc18;
    case (undefined *)0x100efcd7:
      goto switchD_100ef780_caseD_100efcd7;
    case (undefined *)0x100efd8f:
      goto switchD_100ef780_caseD_100efd8f;
    case (undefined *)0x100efe36:
      for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
        uVar7 = local_c;
        if (local_8 == 0) goto LAB_100f0c36;
        local_8 = local_8 - 1;
        local_c = local_c + ((uint)*pbVar18 << ((byte)uVar16 & 0x1f));
        pbVar18 = pbVar18 + 1;
        local_10 = pbVar18;
      }
      iVar8 = (local_c >> 0x18) +
              ((local_c & 0xff00) + local_c * 0x10000) * 0x100 + (local_c >> 0x10 & 0xff) * 0x100;
      puVar2[7] = iVar8;
      param_1[0xc] = iVar8;
      local_c = 0;
      uVar16 = 0;
      puVar2[1] = 0x3f3e;
    case (undefined *)0x100efe9e:
      if (puVar2[4] == 0) {
        param_1[3] = (int)local_24;
        param_1[4] = local_1c;
        *param_1 = (int)pbVar18;
        param_1[1] = local_8;
        puVar2[0x10] = uVar16;
        puVar2[0xf] = local_c;
        return 2;
      }
      iVar8 = FUN_100f7770(0,0,0);
      puVar2[7] = iVar8;
      param_1[0xc] = iVar8;
      puVar2[1] = 0x3f3f;
switchD_100ef780_caseD_100efeca:
      uVar7 = local_c;
      if ((param_2 == 5) || (param_2 == 6)) goto LAB_100f0c36;
switchD_100ef780_caseD_100efedf:
      uVar7 = local_c;
      if (puVar2[2] != 0) {
        local_c = local_c >> (sbyte)(uVar16 & 7);
        uVar16 = uVar16 - (uVar16 & 7);
        puVar2[1] = 0x3f4e;
        local_14 = uVar16;
        break;
      }
      for (; uVar16 < 3; uVar16 = uVar16 + 8) {
        if (local_8 == 0) goto LAB_100f0c36;
        local_8 = local_8 - 1;
        bVar11 = *pbVar18;
        bVar10 = (byte)uVar16;
        pbVar18 = pbVar18 + 1;
        local_10 = pbVar18;
        uVar7 = uVar7 + ((uint)bVar11 << (bVar10 & 0x1f));
      }
      puVar2[2] = uVar7 & 1;
      switch(uVar7 >> 1 & 3) {
      case 0:
        local_c = uVar7 >> 3;
        uVar16 = uVar16 - 3;
        puVar2[1] = 0x3f41;
        local_14 = uVar16;
        goto LAB_100f0bd4;
      case 1:
        puVar2[0x14] = &DAT_10129368;
        puVar2[0x16] = 9;
        puVar2[0x15] = &DAT_10129b68;
        puVar2[0x17] = 5;
        puVar2[1] = 0x3f47;
        if (param_2 == 6) {
          uVar7 = uVar7 >> 3;
          uVar16 = uVar16 - 3;
          goto LAB_100f0c36;
        }
        break;
      case 2:
        local_c = uVar7 >> 3;
        uVar16 = uVar16 - 3;
        puVar2[1] = 0x3f44;
        local_14 = uVar16;
        goto LAB_100f0bd4;
      case 3:
        param_1[6] = (int)"invalid block type";
        puVar2[1] = 0x3f51;
      }
      local_c = uVar7 >> 3;
      uVar16 = uVar16 - 3;
      local_14 = uVar16;
      break;
    case (undefined *)0x100efeca:
      goto switchD_100ef780_caseD_100efeca;
    case (undefined *)0x100efedf:
      goto switchD_100ef780_caseD_100efedf;
    case (undefined *)0x100effdc:
      uVar7 = local_c >> (sbyte)(uVar16 & 7);
      for (uVar16 = uVar16 - (uVar16 & 7); local_14 = uVar16, local_c = uVar7, uVar16 < 0x20;
          uVar16 = uVar16 + 8) {
        if (local_8 == 0) goto LAB_100f0c36;
        local_8 = local_8 - 1;
        uVar7 = uVar7 + ((uint)*pbVar18 << ((byte)uVar16 & 0x1f));
        pbVar18 = pbVar18 + 1;
        local_10 = pbVar18;
      }
      if ((uVar7 & 0xffff) == ~uVar7 >> 0x10) {
        puVar2[0x11] = uVar7 & 0xffff;
        uVar16 = 0;
        local_c = 0;
        local_14 = 0;
        puVar2[1] = 0x3f42;
        uVar7 = 0;
        if (param_2 != 6) goto switchD_100ef780_caseD_100f005c;
        goto LAB_100f0c36;
      }
      param_1[6] = (int)"invalid stored block lengths";
      goto LAB_100f0bcd;
    case (undefined *)0x100f005c:
switchD_100ef780_caseD_100f005c:
      puVar2[1] = 0x3f43;
    case (undefined *)0x100f0063:
      local_18 = puVar2[0x11];
      if (local_18 == 0) {
LAB_100f0740:
        puVar2[1] = 0x3f3f;
        break;
      }
      if (local_8 < local_18) {
        local_18 = local_8;
      }
      if (local_1c < local_18) {
        local_18 = local_1c;
      }
      uVar7 = local_c;
      if (local_18 != 0) {
        pbVar18 = local_10;
        pbVar6 = local_24;
        for (uVar16 = local_18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar18;
          pbVar18 = pbVar18 + 4;
          pbVar6 = pbVar6 + 4;
        }
        for (uVar16 = local_18 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pbVar6 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          pbVar6 = pbVar6 + 1;
        }
        local_8 = local_8 - local_18;
        pbVar18 = local_10 + local_18;
        local_1c = local_1c - local_18;
        local_24 = local_24 + local_18;
        puVar2[0x11] = puVar2[0x11] - local_18;
        uVar16 = local_14;
        local_10 = pbVar18;
        break;
      }
      goto LAB_100f0c36;
    case (undefined *)0x100f00da:
      for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
        if (local_8 == 0) goto LAB_100f0c36;
        local_8 = local_8 - 1;
        uVar7 = uVar7 + ((uint)*pbVar18 << ((byte)uVar16 & 0x1f));
        pbVar18 = pbVar18 + 1;
        local_10 = pbVar18;
      }
      puVar2[0x19] = (uVar7 & 0x1f) + 0x101;
      puVar2[0x18] = (uVar7 >> 10 & 0xf) + 4;
      uVar12 = (uVar7 >> 5 & 0x1f) + 1;
      local_c = uVar7 >> 0xe;
      uVar16 = uVar16 - 0xe;
      puVar2[0x1a] = uVar12;
      local_14 = uVar16;
      if (((uint)puVar2[0x19] < 0x11f) && (uVar12 < 0x1f)) {
        puVar2[0x1b] = 0;
        puVar2[1] = 0x3f45;
        goto switchD_100ef780_caseD_100f0162;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_100f0bcd;
    case (undefined *)0x100f0162:
switchD_100ef780_caseD_100f0162:
      uVar7 = local_c;
      if ((uint)puVar2[0x1b] < (uint)puVar2[0x18]) {
        do {
          for (; uVar16 < 3; uVar16 = uVar16 + 8) {
            if (local_8 == 0) goto LAB_100f0c36;
            local_8 = local_8 - 1;
            bVar11 = *pbVar18;
            bVar10 = (byte)uVar16;
            pbVar18 = pbVar18 + 1;
            local_10 = pbVar18;
            uVar7 = uVar7 + ((uint)bVar11 << (bVar10 & 0x1f));
          }
          local_c = uVar7 >> 3;
          uVar16 = uVar16 - 3;
          *(ushort *)((int)puVar2 + (uint)*(ushort *)(&DAT_10129be8 + puVar2[0x1b] * 2) * 2 + 0x74)
               = (ushort)uVar7 & 7;
          iVar8 = puVar2[0x1b];
          puVar2[0x1b] = iVar8 + 1U;
          local_14 = uVar16;
          uVar7 = local_c;
        } while (iVar8 + 1U < (uint)puVar2[0x18]);
      }
      uVar12 = puVar2[0x1b];
      while (uVar12 < 0x13) {
        *(undefined2 *)
         ((int)puVar2 + (uint)*(ushort *)(&DAT_10129be8 + puVar2[0x1b] * 2) * 2 + 0x74) = 0;
        uVar12 = puVar2[0x1b] + 1;
        puVar2[0x1b] = uVar12;
      }
      puVar2[0x1c] = puVar2 + 0x14d;
      puVar2[0x14] = puVar2 + 0x14d;
      puVar2[0x16] = 7;
      local_30 = FUN_100f7110(0,puVar2 + 0x1d,0x13,puVar2 + 0x1c,puVar2 + 0x16,puVar2 + 0xbd);
      if (local_30 == 0) {
        puVar2[0x1b] = 0;
        puVar2[1] = 0x3f46;
        goto switchD_100ef780_caseD_100f0261;
      }
      param_1[6] = (int)"invalid code lengths set";
LAB_100f0bcd:
      puVar2[1] = 0x3f51;
      break;
    case (undefined *)0x100f0261:
switchD_100ef780_caseD_100f0261:
      if ((uint)puVar2[0x1b] < (uint)(puVar2[0x1a] + puVar2[0x19])) {
        do {
          uVar12 = *(uint *)(puVar2[0x14] + ((1 << ((byte)puVar2[0x16] & 0x1f)) - 1U & local_c) * 4)
          ;
          uVar7 = local_c;
          if (uVar16 < (uVar12 >> 8 & 0xff)) {
            do {
              if (local_8 == 0) goto LAB_100f0c36;
              local_8 = local_8 - 1;
              bVar11 = (byte)uVar16;
              uVar16 = uVar16 + 8;
              uVar7 = uVar7 + ((uint)*pbVar18 << (bVar11 & 0x1f));
              pbVar18 = pbVar18 + 1;
              uVar12 = *(uint *)(puVar2[0x14] +
                                ((1 << ((byte)puVar2[0x16] & 0x1f)) - 1U & uVar7) * 4);
              local_10 = pbVar18;
            } while (uVar16 < (uVar12 >> 8 & 0xff));
          }
          uVar15 = (ushort)(uVar12 >> 0x10);
          uVar13 = uVar12 >> 8 & 0xff;
          bVar11 = (byte)(uVar12 >> 8);
          if (uVar15 < 0x10) {
            local_c = uVar7 >> (bVar11 & 0x1f);
            local_14 = uVar16 - uVar13;
            *(ushort *)((int)puVar2 + puVar2[0x1b] * 2 + 0x74) = uVar15;
            puVar2[0x1b] = puVar2[0x1b] + 1;
          }
          else {
            if (uVar15 == 0x10) {
              if (uVar16 < uVar13 + 2) {
                do {
                  if (local_8 == 0) goto LAB_100f0c36;
                  local_8 = local_8 - 1;
                  bVar10 = (byte)uVar16;
                  uVar16 = uVar16 + 8;
                  uVar7 = uVar7 + ((uint)*pbVar18 << (bVar10 & 0x1f));
                  pbVar18 = pbVar18 + 1;
                  local_10 = pbVar18;
                } while (uVar16 < uVar13 + 2);
              }
              local_c = uVar7 >> (bVar11 & 0x1f);
              uVar16 = uVar16 - uVar13;
              if (puVar2[0x1b] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                local_14 = uVar16;
                goto LAB_100f0bcd;
              }
              uVar1 = *(undefined2 *)((int)puVar2 + puVar2[0x1b] * 2 + 0x72);
              local_18 = (local_c & 3) + 3;
              local_c = local_c >> 2;
              local_14 = uVar16 - 2;
            }
            else {
              if (uVar15 == 0x11) {
                if (uVar16 < uVar13 + 3) {
                  do {
                    if (local_8 == 0) goto LAB_100f0c36;
                    local_8 = local_8 - 1;
                    bVar10 = (byte)uVar16;
                    uVar16 = uVar16 + 8;
                    uVar7 = uVar7 + ((uint)*pbVar18 << (bVar10 & 0x1f));
                    pbVar18 = pbVar18 + 1;
                    local_10 = pbVar18;
                  } while (uVar16 < uVar13 + 3);
                }
                uVar7 = uVar7 >> (bVar11 & 0x1f);
                local_18 = (uVar7 & 7) + 3;
                local_c = uVar7 >> 3;
                iVar8 = -3;
              }
              else {
                if (uVar16 < uVar13 + 7) {
                  do {
                    if (local_8 == 0) goto LAB_100f0c36;
                    local_8 = local_8 - 1;
                    bVar10 = (byte)uVar16;
                    uVar16 = uVar16 + 8;
                    uVar7 = uVar7 + ((uint)*pbVar18 << (bVar10 & 0x1f));
                    pbVar18 = pbVar18 + 1;
                    local_10 = pbVar18;
                  } while (uVar16 < uVar13 + 7);
                }
                uVar7 = uVar7 >> (bVar11 & 0x1f);
                local_18 = (uVar7 & 0x7f) + 0xb;
                local_c = uVar7 >> 7;
                iVar8 = -7;
              }
              uVar1 = 0;
              local_14 = uVar16 + (iVar8 - uVar13);
            }
            if ((uint)(puVar2[0x1a] + puVar2[0x19]) < puVar2[0x1b] + local_18) {
              param_1[6] = (int)"invalid bit length repeat";
              uVar16 = local_14;
              goto LAB_100f0bcd;
            }
            for (; local_18 != 0; local_18 = local_18 - 1) {
              *(undefined2 *)((int)puVar2 + puVar2[0x1b] * 2 + 0x74) = uVar1;
              puVar2[0x1b] = puVar2[0x1b] + 1;
            }
          }
          uVar16 = local_14;
        } while ((uint)puVar2[0x1b] < (uint)(puVar2[0x1a] + puVar2[0x19]));
      }
      if (puVar2[1] != 0x3f51) {
        if (*(short *)(puVar2 + 0x9d) == 0) {
          param_1[6] = (int)"invalid code -- missing end-of-block";
        }
        else {
          puVar2[0x1c] = puVar2 + 0x14d;
          puVar2[0x14] = puVar2 + 0x14d;
          puVar2[0x16] = 9;
          local_30 = FUN_100f7110(1,puVar2 + 0x1d,puVar2[0x19],puVar2 + 0x1c,puVar2 + 0x16,
                                  puVar2 + 0xbd);
          if (local_30 == 0) {
            puVar2[0x15] = puVar2[0x1c];
            puVar2[0x17] = 6;
            local_30 = FUN_100f7110(2,(int)puVar2 + puVar2[0x19] * 2 + 0x74,puVar2[0x1a],
                                    puVar2 + 0x1c,puVar2 + 0x17,puVar2 + 0xbd);
            if (local_30 == 0) {
              puVar2[1] = 0x3f47;
              uVar7 = local_c;
              if (param_2 != 6) goto switchD_100ef780_caseD_100f054c;
              goto LAB_100f0c36;
            }
            param_1[6] = (int)"invalid distances set";
          }
          else {
            param_1[6] = (int)"invalid literal/lengths set";
          }
        }
        goto LAB_100f0bcd;
      }
      break;
    case (undefined *)0x100f054c:
switchD_100ef780_caseD_100f054c:
      puVar2[1] = 0x3f48;
    case (undefined *)0x100f0553:
      if ((5 < local_8) && (0x101 < local_1c)) {
        param_1[3] = (int)local_24;
        param_1[1] = local_8;
        param_1[4] = local_1c;
        *param_1 = (int)pbVar18;
        puVar2[0xf] = local_c;
        puVar2[0x10] = uVar16;
        FUN_100f6ce0(param_1,local_2c);
        local_24 = (byte *)param_1[3];
        local_1c = param_1[4];
        pbVar18 = (byte *)*param_1;
        uVar16 = puVar2[0x10];
        local_8 = param_1[1];
        local_c = puVar2[0xf];
        local_14 = uVar16;
        local_10 = pbVar18;
        if (puVar2[1] == 0x3f3f) {
          puVar2[0x6f2] = 0xffffffff;
        }
        break;
      }
      puVar2[0x6f2] = 0;
      uVar12 = *(uint *)(puVar2[0x14] + ((1 << ((byte)puVar2[0x16] & 0x1f)) - 1U & local_c) * 4);
      uVar7 = local_c;
      if (uVar16 < (uVar12 >> 8 & 0xff)) {
        do {
          if (local_8 == 0) goto LAB_100f0c36;
          local_8 = local_8 - 1;
          bVar11 = (byte)uVar16;
          uVar16 = uVar16 + 8;
          uVar7 = uVar7 + ((uint)*pbVar18 << (bVar11 & 0x1f));
          pbVar18 = pbVar18 + 1;
          uVar12 = *(uint *)(puVar2[0x14] + ((1 << ((byte)puVar2[0x16] & 0x1f)) - 1U & uVar7) * 4);
          local_10 = pbVar18;
        } while (uVar16 < (uVar12 >> 8 & 0xff));
      }
      cVar14 = (char)uVar12;
      local_40 = uVar12;
      if ((cVar14 != '\0') && ((uVar12 & 0xf0) == 0)) {
        bVar11 = (byte)(uVar12 >> 8);
        local_40 = *(uint *)(puVar2[0x14] +
                            ((((1 << (cVar14 + bVar11 & 0x1f)) - 1U & uVar7) >> (bVar11 & 0x1f)) +
                            (uVar12 >> 0x10)) * 4);
        uVar13 = uVar12 >> 8 & 0xff;
        local_18 = uVar12;
        if (uVar16 < (local_40 >> 8 & 0xff) + uVar13) {
          do {
            if (local_8 == 0) goto LAB_100f0c36;
            local_8 = local_8 - 1;
            bVar10 = (byte)uVar16;
            uVar16 = uVar16 + 8;
            uVar7 = uVar7 + ((uint)*pbVar18 << (bVar10 & 0x1f));
            pbVar18 = pbVar18 + 1;
            local_40 = *(uint *)(puVar2[0x14] +
                                ((((1 << (cVar14 + bVar11 & 0x1f)) - 1U & uVar7) >> (bVar11 & 0x1f))
                                + (uVar12 >> 0x10)) * 4);
            local_10 = pbVar18;
          } while (uVar16 < (local_40 >> 8 & 0xff) + uVar13);
        }
        uVar7 = uVar7 >> (bVar11 & 0x1f);
        uVar16 = uVar16 - uVar13;
        puVar2[0x6f2] = uVar13;
      }
      local_c = uVar7 >> ((byte)(local_40 >> 8) & 0x1f);
      uVar12 = local_40 >> 8 & 0xff;
      puVar2[0x6f2] = puVar2[0x6f2] + uVar12;
      uVar16 = uVar16 - uVar12;
      puVar2[0x11] = local_40 >> 0x10;
      local_14 = uVar16;
      if ((char)local_40 == '\0') {
        puVar2[1] = 0x3f4d;
        break;
      }
      if ((local_40 & 0x20) != 0) {
        puVar2[0x6f2] = 0xffffffff;
        goto LAB_100f0740;
      }
      if ((local_40 & 0x40) != 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_100f0bcd;
      }
      puVar2[0x13] = local_40 & 0xf;
      puVar2[1] = 0x3f49;
switchD_100ef780_caseD_100f076d:
      uVar7 = local_c;
      if (puVar2[0x13] != 0) {
        if (uVar16 < (uint)puVar2[0x13]) {
          do {
            if (local_8 == 0) goto LAB_100f0c36;
            local_8 = local_8 - 1;
            bVar11 = (byte)uVar16;
            uVar16 = uVar16 + 8;
            uVar7 = uVar7 + ((uint)*pbVar18 << (bVar11 & 0x1f));
            pbVar18 = pbVar18 + 1;
            local_10 = pbVar18;
          } while (uVar16 < (uint)puVar2[0x13]);
        }
        puVar2[0x11] = puVar2[0x11] + ((1 << ((byte)puVar2[0x13] & 0x1f)) - 1U & uVar7);
        iVar8 = puVar2[0x13];
        uVar7 = uVar7 >> ((byte)iVar8 & 0x1f);
        uVar16 = uVar16 - iVar8;
        puVar2[0x6f2] = puVar2[0x6f2] + iVar8;
      }
      puVar2[0x6f3] = puVar2[0x11];
      puVar2[1] = 0x3f4a;
switchD_100ef780_caseD_100f07e2:
      uVar12 = *(uint *)(puVar2[0x15] + ((1 << ((byte)puVar2[0x17] & 0x1f)) - 1U & uVar7) * 4);
      if (uVar16 < (uVar12 >> 8 & 0xff)) {
        do {
          if (local_8 == 0) goto LAB_100f0c36;
          local_8 = local_8 - 1;
          bVar11 = (byte)uVar16;
          uVar16 = uVar16 + 8;
          uVar7 = uVar7 + ((uint)*pbVar18 << (bVar11 & 0x1f));
          pbVar18 = pbVar18 + 1;
          uVar12 = *(uint *)(puVar2[0x15] + ((1 << ((byte)puVar2[0x17] & 0x1f)) - 1U & uVar7) * 4);
          local_10 = pbVar18;
        } while (uVar16 < (uVar12 >> 8 & 0xff));
      }
      local_40 = uVar12;
      if ((uVar12 & 0xf0) == 0) {
        bVar11 = (byte)(uVar12 >> 8);
        local_40 = *(uint *)(puVar2[0x15] +
                            ((((1 << ((char)uVar12 + bVar11 & 0x1f)) - 1U & uVar7) >>
                             (bVar11 & 0x1f)) + (uVar12 >> 0x10)) * 4);
        uVar13 = uVar12 >> 8 & 0xff;
        local_18 = uVar12;
        if (uVar16 < (local_40 >> 8 & 0xff) + uVar13) {
          do {
            if (local_8 == 0) goto LAB_100f0c36;
            local_8 = local_8 - 1;
            bVar10 = (byte)uVar16;
            uVar16 = uVar16 + 8;
            uVar7 = uVar7 + ((uint)*pbVar18 << (bVar10 & 0x1f));
            pbVar18 = pbVar18 + 1;
            local_40 = *(uint *)(puVar2[0x15] +
                                ((((1 << ((char)uVar12 + bVar11 & 0x1f)) - 1U & uVar7) >>
                                 (bVar11 & 0x1f)) + (uVar12 >> 0x10)) * 4);
            local_10 = pbVar18;
          } while (uVar16 < (local_40 >> 8 & 0xff) + uVar13);
        }
        uVar7 = uVar7 >> (bVar11 & 0x1f);
        uVar16 = uVar16 - uVar13;
        puVar2[0x6f2] = puVar2[0x6f2] + uVar13;
      }
      local_c = uVar7 >> ((byte)(local_40 >> 8) & 0x1f);
      uVar12 = local_40 >> 8 & 0xff;
      puVar2[0x6f2] = puVar2[0x6f2] + uVar12;
      uVar16 = uVar16 - uVar12;
      local_14 = uVar16;
      if ((local_40 & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_100f0bcd;
      }
      puVar2[0x12] = local_40 >> 0x10;
      puVar2[0x13] = local_40 & 0xf;
      puVar2[1] = 0x3f4b;
switchD_100ef780_caseD_100f093a:
      if (puVar2[0x13] != 0) {
        uVar7 = local_c;
        if (uVar16 < (uint)puVar2[0x13]) {
          do {
            if (local_8 == 0) goto LAB_100f0c36;
            local_8 = local_8 - 1;
            bVar11 = (byte)uVar16;
            uVar16 = uVar16 + 8;
            uVar7 = uVar7 + ((uint)*pbVar18 << (bVar11 & 0x1f));
            pbVar18 = pbVar18 + 1;
            local_10 = pbVar18;
          } while (uVar16 < (uint)puVar2[0x13]);
        }
        puVar2[0x12] = puVar2[0x12] + ((1 << ((byte)puVar2[0x13] & 0x1f)) - 1U & uVar7);
        iVar8 = puVar2[0x13];
        local_c = uVar7 >> ((byte)iVar8 & 0x1f);
        uVar16 = uVar16 - iVar8;
        puVar2[0x6f2] = puVar2[0x6f2] + iVar8;
        local_14 = uVar16;
      }
      puVar2[1] = 0x3f4c;
switchD_100ef780_caseD_100f09af:
      uVar7 = local_c;
      if (local_1c != 0) {
        uVar12 = puVar2[0x12];
        if (local_2c - local_1c < uVar12) {
          local_18 = uVar12 - (local_2c - local_1c);
          if (((uint)puVar2[0xc] < local_18) && (puVar2[0x6f1] != 0)) {
            param_1[6] = (int)"invalid distance too far back";
            goto LAB_100f0bcd;
          }
          uVar12 = puVar2[0xd];
          if (uVar12 < local_18) {
            local_18 = local_18 - uVar12;
            pbVar6 = (byte *)((puVar2[0xe] + puVar2[0xb]) - local_18);
          }
          else {
            pbVar6 = (byte *)((puVar2[0xe] - local_18) + uVar12);
          }
          local_28 = puVar2[0x11];
          if (local_28 < local_18) goto LAB_100f0a1c;
        }
        else {
          pbVar6 = local_24 + -uVar12;
          local_28 = puVar2[0x11];
LAB_100f0a1c:
          local_18 = local_28;
        }
        if (local_1c < local_18) {
          local_18 = local_1c;
        }
        local_1c = local_1c - local_18;
        puVar2[0x11] = local_28 - local_18;
        do {
          *local_24 = *pbVar6;
          local_24 = local_24 + 1;
          pbVar6 = pbVar6 + 1;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
        local_18 = 0;
        if (puVar2[0x11] == 0) {
          puVar2[1] = 0x3f48;
        }
        break;
      }
      goto LAB_100f0c36;
    case (undefined *)0x100f076d:
      goto switchD_100ef780_caseD_100f076d;
    case (undefined *)0x100f07e2:
      goto switchD_100ef780_caseD_100f07e2;
    case (undefined *)0x100f093a:
      goto switchD_100ef780_caseD_100f093a;
    case (undefined *)0x100f09af:
      goto switchD_100ef780_caseD_100f09af;
    case (undefined *)0x100f0a69:
      if (local_1c == 0) goto LAB_100f0c36;
      *local_24 = *(byte *)(puVar2 + 0x11);
      local_24 = local_24 + 1;
      local_1c = local_1c - 1;
      puVar2[1] = 0x3f48;
      break;
    case (undefined *)0x100f0a8f:
      if (puVar2[3] != 0) {
        while (uVar16 < 0x20) {
          uVar7 = local_c;
          if (local_8 == 0) goto LAB_100f0c36;
          local_8 = local_8 - 1;
          local_c = local_c + ((uint)*pbVar18 << ((byte)uVar16 & 0x1f));
          pbVar18 = pbVar18 + 1;
          uVar16 = uVar16 + 8;
          local_14 = uVar16;
          local_10 = pbVar18;
        }
        iVar8 = local_2c - local_1c;
        param_1[5] = param_1[5] + iVar8;
        puVar2[8] = puVar2[8] + iVar8;
        if (((*(byte *)(puVar2 + 3) & 4) != 0) && (iVar8 != 0)) {
          if (puVar2[5] == 0) {
            iVar8 = FUN_100f7770(puVar2[7],(int)local_24 - iVar8,iVar8);
          }
          else {
            iVar8 = FUN_100f7ff0(puVar2[7],(int)local_24 - iVar8);
          }
          puVar2[7] = iVar8;
          param_1[0xc] = iVar8;
        }
        local_2c = local_1c;
        if ((*(byte *)(puVar2 + 3) & 4) != 0) {
          uVar12 = local_c;
          if (puVar2[5] == 0) {
            uVar12 = ((local_c & 0xff00) + local_c * 0x10000) * 0x100 +
                     (local_c >> 0x10 & 0xff) * 0x100 + (local_c >> 0x18);
          }
          if (uVar12 != puVar2[7]) {
            param_1[6] = (int)"incorrect data check";
            goto LAB_100f0bcd;
          }
        }
        uVar16 = 0;
        local_c = 0;
        local_14 = 0;
      }
      puVar2[1] = 0x3f4f;
    case (undefined *)0x100f0b77:
      uVar7 = local_c;
      if ((puVar2[3] != 0) && (puVar2[5] != 0)) {
        while (uVar16 < 0x20) {
          uVar7 = local_c;
          if (local_8 == 0) goto LAB_100f0c36;
          local_8 = local_8 - 1;
          local_c = local_c + ((uint)*pbVar18 << ((byte)uVar16 & 0x1f));
          pbVar18 = pbVar18 + 1;
          uVar16 = uVar16 + 8;
          local_14 = uVar16;
          local_10 = pbVar18;
        }
        if (local_c != puVar2[8]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_100f0bcd;
        }
        uVar7 = 0;
        uVar16 = 0;
      }
      puVar2[1] = 0x3f50;
switchD_100ef780_caseD_100f0c26:
      local_30 = 1;
      goto LAB_100f0c36;
    case (undefined *)0x100f0c26:
      goto switchD_100ef780_caseD_100f0c26;
    case (undefined *)0x100f0c2f:
      local_30 = -3;
      goto LAB_100f0c36;
    case (undefined *)0x100f0c9c:
      goto switchD_100ef780_caseD_100f0c9c;
    }
LAB_100f0bd4:
    uVar12 = puVar2[1] - 0x3f34;
    if (0x1e < uVar12) {
      return -2;
    }
  } while( true );
}


/* END FUNCTION 0x100ef6b0 */
