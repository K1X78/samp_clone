/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f6ce0
 * Name: FUN_100f6ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100f6ce0(int *param_1,uint param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint local_c;
  byte *local_8;
  
  local_8 = (byte *)*param_1;
  iVar3 = param_1[7];
  pbVar1 = local_8 + param_1[1] + -5;
  puVar21 = (undefined1 *)param_1[3];
  puVar12 = puVar21 + (param_1[4] - param_2);
  puVar2 = puVar21 + param_1[4] + -0x101;
  iVar16 = *(int *)(iVar3 + 0x2c);
  uVar4 = *(uint *)(iVar3 + 0x30);
  puVar5 = *(undefined1 **)(iVar3 + 0x38);
  uVar18 = *(uint *)(iVar3 + 0x40);
  uVar6 = *(uint *)(iVar3 + 0x34);
  iVar20 = *(int *)(iVar3 + 0x54);
  iVar7 = *(int *)(iVar3 + 0x50);
  uVar8 = *(undefined4 *)(iVar3 + 0x58);
  uVar9 = *(undefined4 *)(iVar3 + 0x5c);
  uVar23 = *(uint *)(iVar3 + 0x3c);
LAB_100f6d63:
  if (uVar18 < 0xf) {
    uVar23 = uVar23 + ((uint)*local_8 << ((byte)uVar18 & 0x1f)) +
             ((uint)local_8[1] << ((byte)uVar18 + 8 & 0x1f));
    local_8 = local_8 + 2;
    uVar18 = uVar18 + 0x10;
  }
  uVar13 = *(uint *)(iVar7 + ((1 << ((byte)uVar8 & 0x1f)) - 1U & uVar23) * 4);
  uVar23 = uVar23 >> ((byte)(uVar13 >> 8) & 0x1f);
  uVar18 = uVar18 - (uVar13 >> 8 & 0xff);
  while ((uVar13 & 0xff) != 0) {
    if ((uVar13 & 0x10) != 0) {
      param_2 = uVar13 >> 0x10;
      uVar13 = uVar13 & 0xf;
      if (uVar13 != 0) {
        if (uVar18 < uVar13) {
          uVar23 = uVar23 + ((uint)*local_8 << ((byte)uVar18 & 0x1f));
          local_8 = local_8 + 1;
          uVar18 = uVar18 + 8;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar13) - 1U & uVar23);
        uVar23 = uVar23 >> (sbyte)uVar13;
        uVar18 = uVar18 - uVar13;
      }
      if (uVar18 < 0xf) {
        uVar23 = uVar23 + ((uint)*local_8 << ((byte)uVar18 & 0x1f)) +
                 ((uint)local_8[1] << ((byte)uVar18 + 8 & 0x1f));
        local_8 = local_8 + 2;
        uVar18 = uVar18 + 0x10;
      }
      local_c = *(uint *)(iVar20 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar23) * 4);
      uVar23 = uVar23 >> ((byte)(local_c >> 8) & 0x1f);
      uVar13 = local_c & 0xff;
      uVar18 = uVar18 - (local_c >> 8 & 0xff);
      if ((local_c & 0x10) == 0) goto LAB_100f6e90;
      goto LAB_100f6ecc;
    }
    if ((uVar13 & 0x40) != 0) {
      if ((uVar13 & 0x20) != 0) {
        *(undefined4 *)(iVar3 + 4) = 0x3f3f;
        goto LAB_100f70bc;
      }
      param_1[6] = (int)"invalid literal/length code";
      goto LAB_100f70b5;
    }
    uVar13 = *(uint *)(iVar7 + (((1 << ((byte)uVar13 & 0x1f)) - 1U & uVar23) + (uVar13 >> 0x10)) * 4
                      );
    uVar23 = uVar23 >> ((byte)(uVar13 >> 8) & 0x1f);
    uVar18 = uVar18 - (uVar13 >> 8 & 0xff);
  }
  *puVar21 = (char)(uVar13 >> 0x10);
  puVar21 = puVar21 + 1;
  goto LAB_100f7069;
  while( true ) {
    local_c = *(uint *)(iVar20 + (((1 << ((byte)uVar13 & 0x1f)) - 1U & uVar23) + (local_c >> 0x10))
                                 * 4);
    uVar23 = uVar23 >> ((byte)(local_c >> 8) & 0x1f);
    uVar13 = local_c & 0xff;
    uVar18 = uVar18 - (local_c >> 8 & 0xff);
    if ((local_c & 0x10) != 0) break;
LAB_100f6e90:
    if ((uVar13 & 0x40) != 0) {
      param_1[6] = (int)"invalid distance code";
LAB_100f70b5:
      *(undefined4 *)(iVar3 + 4) = 0x3f51;
      goto LAB_100f70bc;
    }
  }
LAB_100f6ecc:
  uVar13 = uVar13 & 0xf;
  uVar19 = uVar18;
  pbVar10 = local_8;
  if (uVar18 < uVar13) {
    uVar19 = uVar18 + 8;
    uVar23 = uVar23 + ((uint)*local_8 << ((byte)uVar18 & 0x1f));
    pbVar10 = local_8 + 1;
    if (uVar19 < uVar13) {
      uVar23 = uVar23 + ((uint)local_8[1] << ((byte)uVar19 & 0x1f));
      uVar19 = uVar18 + 0x10;
      pbVar10 = local_8 + 2;
    }
  }
  local_8 = pbVar10;
  uVar18 = uVar19 - uVar13;
  uVar19 = (local_c >> 0x10) + ((1 << (sbyte)uVar13) - 1U & uVar23);
  uVar23 = uVar23 >> (sbyte)uVar13;
  if ((uint)((int)puVar21 - (int)puVar12) < uVar19) {
    uVar13 = uVar19 - ((int)puVar21 - (int)puVar12);
    if ((uVar4 < uVar13) && (*(int *)(iVar3 + 0x1bc4) != 0)) {
      param_1[6] = (int)"invalid distance too far back";
      *(undefined4 *)(iVar3 + 4) = 0x3f51;
LAB_100f70bc:
      iVar16 = (int)local_8 - (uVar18 >> 3);
      iVar20 = uVar18 + (uVar18 >> 3) * -8;
      *param_1 = iVar16;
      param_1[3] = (int)puVar21;
      param_1[1] = (int)(pbVar1 + (5 - iVar16));
      param_1[4] = (int)(puVar2 + (0x101 - (int)puVar21));
      *(uint *)(iVar3 + 0x3c) = uVar23 & (1 << ((byte)iVar20 & 0x1f)) - 1U;
      *(int *)(iVar3 + 0x40) = iVar20;
      return;
    }
    if (uVar6 == 0) {
      puVar15 = puVar5 + (iVar16 - uVar13);
      if (uVar13 < param_2) {
        param_2 = param_2 - uVar13;
        do {
          *puVar21 = *puVar15;
          puVar21 = puVar21 + 1;
          puVar15 = puVar15 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
LAB_100f6fd0:
        puVar15 = puVar21 + -uVar19;
      }
    }
    else {
      puVar15 = puVar5 + (uVar6 - uVar13);
      if (uVar6 < uVar13) {
        puVar15 = puVar15 + iVar16;
        uVar13 = uVar13 - uVar6;
        if (uVar13 < param_2) {
          param_2 = param_2 - uVar13;
          do {
            *puVar21 = *puVar15;
            puVar21 = puVar21 + 1;
            puVar15 = puVar15 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          puVar15 = puVar5;
          if (uVar6 < param_2) {
            param_2 = param_2 - uVar6;
            uVar13 = uVar6;
            do {
              *puVar21 = *puVar15;
              puVar21 = puVar21 + 1;
              puVar15 = puVar15 + 1;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            goto LAB_100f6fd0;
          }
        }
      }
      else if (uVar13 < param_2) {
        param_2 = param_2 - uVar13;
        do {
          *puVar21 = *puVar15;
          puVar21 = puVar21 + 1;
          puVar15 = puVar15 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        goto LAB_100f6fd0;
      }
    }
    if (2 < param_2) {
      iVar17 = (param_2 - 3) / 3 + 1;
      do {
        *puVar21 = *puVar15;
        puVar21[1] = puVar15[1];
        puVar21[2] = puVar15[2];
        puVar21 = puVar21 + 3;
        param_2 = param_2 - 3;
        puVar15 = puVar15 + 3;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    if (param_2 == 0) goto LAB_100f7069;
    *puVar21 = *puVar15;
    puVar21 = puVar21 + 1;
    if (param_2 < 2) goto LAB_100f7069;
    uVar11 = puVar15[1];
  }
  else {
    puVar15 = puVar21 + -uVar19;
    do {
      puVar22 = puVar21;
      puVar14 = puVar15;
      *puVar22 = *puVar14;
      puVar22[1] = puVar14[1];
      puVar22[2] = puVar14[2];
      puVar21 = puVar22 + 3;
      param_2 = param_2 - 3;
      puVar15 = puVar14 + 3;
    } while (2 < param_2);
    if (param_2 == 0) goto LAB_100f7069;
    *puVar21 = puVar14[3];
    puVar21 = puVar22 + 4;
    if (param_2 < 2) goto LAB_100f7069;
    uVar11 = puVar14[4];
  }
  *puVar21 = uVar11;
  puVar21 = puVar21 + 1;
LAB_100f7069:
  if ((pbVar1 <= local_8) || (puVar2 <= puVar21)) goto LAB_100f70bc;
  goto LAB_100f6d63;
}


/* END FUNCTION 0x100f6ce0 */
