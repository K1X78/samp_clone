/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bf4b0
 * Name: FUN_100bf4b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100bf4b0(undefined4 *param_1,uint param_2,byte *param_3)

{
  short *psVar1;
  undefined1 *puVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  byte *local_4c;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  uint local_28;
  uint local_1c;
  uint local_18;
  uint local_14;
  byte local_c;
  
  local_28 = param_1[0xe];
  iVar4 = param_1[4];
  local_1c = param_1[0xf];
  local_18 = param_1[0x10];
  local_14 = param_1[0x11];
  uVar5 = param_1[2];
  uVar6 = param_1[1];
  iVar7 = param_1[5];
  local_38 = param_1[9];
  uVar8 = *param_1;
  uVar9 = param_1[10];
  local_34 = param_1[0xb];
  local_4c = (byte *)param_1[6];
  local_3c = param_1[0xd];
  uVar10 = param_1[0xc];
  uVar11 = param_1[7];
  uVar21 = param_1[8];
  local_2c = 0;
  do {
    uVar18 = local_14;
    uVar17 = local_34 & (1 << ((byte)uVar5 & 0x1f)) - 1U;
    puVar15 = (ushort *)(iVar4 + (local_3c * 0x10 + uVar17) * 2);
    uVar3 = *puVar15;
    if (uVar11 < 0x1000000) {
      uVar21 = uVar21 << 8 | (uint)*local_4c;
      uVar11 = uVar11 << 8;
      local_4c = local_4c + 1;
    }
    uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
    if (uVar21 < uVar19) {
      *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
      iVar22 = iVar4 + 0xe6c;
      if ((local_34 != 0) || (uVar10 != 0)) {
        uVar11 = local_38;
        if (local_38 == 0) {
          uVar11 = uVar9;
        }
        local_c = (byte)uVar8;
        iVar22 = iVar22 + ((uint)(*(byte *)((uVar11 - 1) + iVar7) >> (8 - local_c & 0x1f)) +
                          ((local_34 & (1 << ((byte)uVar6 & 0x1f)) - 1U) << (local_c & 0x1f))) *
                          0x600;
      }
      local_34 = local_34 + 1;
      if (local_3c < 7) {
        uVar11 = local_3c;
        if (3 < local_3c) {
          uVar11 = 3;
        }
        local_3c = local_3c - uVar11;
        uVar3 = *(ushort *)(iVar22 + 2);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 * 0x100;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar11) {
          *(ushort *)(iVar22 + 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = 2;
          uVar19 = uVar11;
        }
        else {
          uVar19 = uVar19 - uVar11;
          uVar21 = uVar21 - uVar11;
          *(ushort *)(iVar22 + 2) = uVar3 - (uVar3 >> 5);
          iVar12 = 3;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar11) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar19 = uVar11;
        }
        else {
          uVar19 = uVar19 - uVar11;
          uVar21 = uVar21 - uVar11;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar11) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar19 = uVar11;
        }
        else {
          uVar19 = uVar19 - uVar11;
          uVar21 = uVar21 - uVar11;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar11) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar19 = uVar11;
        }
        else {
          uVar19 = uVar19 - uVar11;
          uVar21 = uVar21 - uVar11;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar11) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar19 = uVar11;
        }
        else {
          uVar19 = uVar19 - uVar11;
          uVar21 = uVar21 - uVar11;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar11) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar19 = uVar11;
        }
        else {
          uVar19 = uVar19 - uVar11;
          uVar21 = uVar21 - uVar11;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar11) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar19 = uVar11;
        }
        else {
          uVar19 = uVar19 - uVar11;
          uVar21 = uVar21 - uVar11;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar11) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          *(char *)(local_38 + iVar7) = (char)iVar12;
          local_38 = local_38 + 1;
        }
        else {
          uVar21 = uVar21 - uVar11;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          *(char *)(local_38 + iVar7) = (char)iVar12 + '\x01';
          local_38 = local_38 + 1;
          uVar11 = uVar19 - uVar11;
        }
      }
      else {
        local_3c = local_3c - ((-(uint)(local_3c < 10) & 0xfffffffd) + 6);
        uVar13 = (uint)*(byte *)(((-(uint)(local_38 < local_28) & uVar9) - local_28) + local_38 +
                                iVar7);
        uVar18 = uVar13 & 0x80;
        uVar17 = uVar18 * 2;
        uVar3 = *(ushort *)(iVar22 + 0x202 + uVar18 * 4);
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 * 0x100;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar20 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar20) {
          *(ushort *)(iVar22 + 0x202 + uVar18 * 4) = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = 2;
          uVar17 = ~uVar17;
          uVar11 = uVar20;
        }
        else {
          uVar11 = uVar19 - uVar20;
          uVar21 = uVar21 - uVar20;
          *(ushort *)(iVar22 + 0x202 + uVar18 * 4) = uVar3 - (uVar3 >> 5);
          iVar12 = 3;
        }
        uVar17 = uVar17 & 0x100;
        uVar18 = uVar17 & uVar13 << 2;
        puVar15 = (ushort *)(iVar22 + (uVar18 + uVar17 + iVar12) * 2);
        uVar3 = *puVar15;
        if (uVar11 < 0x1000000) {
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          uVar11 = uVar11 << 8;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = iVar12 * 2;
          uVar18 = ~uVar18;
          uVar11 = uVar19;
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          *puVar15 = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 * 2 + 1;
        }
        uVar17 = uVar17 & uVar18;
        uVar18 = uVar17 & uVar13 << 3;
        puVar15 = (ushort *)(iVar22 + (uVar18 + uVar17 + iVar12) * 2);
        uVar3 = *puVar15;
        if (uVar11 < 0x1000000) {
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          uVar11 = uVar11 << 8;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = iVar12 * 2;
          uVar18 = ~uVar18;
          uVar11 = uVar19;
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          *puVar15 = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 * 2 + 1;
        }
        uVar17 = uVar17 & uVar18;
        uVar18 = uVar17 & uVar13 << 4;
        puVar15 = (ushort *)(iVar22 + (uVar18 + uVar17 + iVar12) * 2);
        uVar3 = *puVar15;
        if (uVar11 < 0x1000000) {
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          uVar11 = uVar11 << 8;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = iVar12 * 2;
          uVar18 = ~uVar18;
          uVar11 = uVar19;
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          *puVar15 = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 * 2 + 1;
        }
        uVar17 = uVar17 & uVar18;
        uVar18 = uVar17 & uVar13 << 5;
        puVar15 = (ushort *)(iVar22 + (uVar18 + uVar17 + iVar12) * 2);
        uVar3 = *puVar15;
        if (uVar11 < 0x1000000) {
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          uVar11 = uVar11 << 8;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = iVar12 * 2;
          uVar18 = ~uVar18;
          uVar11 = uVar19;
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          *puVar15 = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 * 2 + 1;
        }
        uVar17 = uVar17 & uVar18;
        uVar18 = uVar17 & uVar13 << 6;
        puVar15 = (ushort *)(iVar22 + (uVar18 + uVar17 + iVar12) * 2);
        uVar3 = *puVar15;
        if (uVar11 < 0x1000000) {
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          uVar11 = uVar11 << 8;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = iVar12 * 2;
          uVar18 = ~uVar18;
          uVar11 = uVar19;
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          *puVar15 = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 * 2 + 1;
        }
        uVar17 = uVar17 & uVar18;
        uVar18 = uVar17 & uVar13 * 0x80;
        puVar15 = (ushort *)(iVar22 + (uVar18 + uVar17 + iVar12) * 2);
        uVar3 = *puVar15;
        if (uVar11 < 0x1000000) {
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          uVar11 = uVar11 << 8;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = iVar12 * 2;
          uVar18 = ~uVar18;
          uVar11 = uVar19;
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          *puVar15 = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 * 2 + 1;
        }
        iVar14 = (uVar13 * 0x100 & uVar17 & uVar18) + (uVar17 & uVar18) + iVar12;
        uVar3 = *(ushort *)(iVar22 + iVar14 * 2);
        psVar1 = (short *)(iVar22 + iVar14 * 2);
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar18 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar18) {
          *psVar1 = (short)(0x800 - uVar3 >> 5) + uVar3;
          *(char *)(local_38 + iVar7) = (char)iVar12 * '\x02';
          local_38 = local_38 + 1;
          uVar11 = uVar18;
        }
        else {
          uVar11 = uVar11 - uVar18;
          uVar21 = uVar21 - uVar18;
          *psVar1 = uVar3 - (uVar3 >> 5);
          *(char *)(local_38 + iVar7) = (char)iVar12 * '\x02' + '\x01';
          local_38 = local_38 + 1;
        }
      }
    }
    else {
      uVar11 = uVar11 - uVar19;
      uVar21 = uVar21 - uVar19;
      *puVar15 = uVar3 - (uVar3 >> 5);
      uVar3 = *(ushort *)(iVar4 + 0x180 + local_3c * 2);
      if (uVar11 < 0x1000000) {
        uVar11 = uVar11 * 0x100;
        uVar21 = uVar21 * 0x100 | (uint)*local_4c;
        local_4c = local_4c + 1;
      }
      uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
      if (uVar21 < uVar19) {
        *(ushort *)(iVar4 + 0x180 + local_3c * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
        local_3c = local_3c + 0xc;
        puVar15 = (ushort *)(iVar4 + 0x664);
      }
      else {
        uVar11 = uVar11 - uVar19;
        uVar21 = uVar21 - uVar19;
        *(ushort *)(iVar4 + 0x180 + local_3c * 2) = uVar3 - (uVar3 >> 5);
        if ((uVar10 == 0) && (local_34 == 0)) {
          return 1;
        }
        uVar3 = *(ushort *)(iVar4 + 0x198 + local_3c * 2);
        if (uVar11 < 0x1000000) {
          uVar21 = uVar21 * 0x100 | (uint)*local_4c;
          uVar11 = uVar11 * 0x100;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          *(ushort *)(iVar4 + 0x198 + local_3c * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
          puVar15 = (ushort *)(iVar4 + ((local_3c + 0xf) * 0x10 + uVar17) * 2);
          uVar3 = *puVar15;
          if (uVar19 < 0x1000000) {
            uVar19 = uVar19 * 0x100;
            uVar21 = uVar21 << 8 | (uint)*local_4c;
            local_4c = local_4c + 1;
          }
          uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
          if (uVar21 < uVar11) {
            *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
            *(undefined1 *)(local_38 + iVar7) =
                 *(undefined1 *)
                  (((-(uint)(local_38 < local_28) & uVar9) - local_28) + local_38 + iVar7);
            local_38 = local_38 + 1;
            local_34 = local_34 + 1;
            local_3c = (-(uint)(local_3c < 7) & 0xfffffffe) + 0xb;
            goto LAB_100c087c;
          }
          uVar19 = uVar19 - uVar11;
          uVar21 = uVar21 - uVar11;
          *puVar15 = uVar3 - (uVar3 >> 5);
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          *(ushort *)(iVar4 + 0x198 + local_3c * 2) = uVar3 - (uVar3 >> 5);
          uVar3 = *(ushort *)(iVar4 + 0x1b0 + local_3c * 2);
          if (uVar11 < 0x1000000) {
            uVar21 = uVar21 * 0x100 | (uint)*local_4c;
            uVar11 = uVar11 * 0x100;
            local_4c = local_4c + 1;
          }
          uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
          if (uVar21 < uVar19) {
            *(ushort *)(iVar4 + 0x1b0 + local_3c * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
            uVar18 = local_1c;
          }
          else {
            uVar11 = uVar11 - uVar19;
            uVar21 = uVar21 - uVar19;
            *(ushort *)(iVar4 + 0x1b0 + local_3c * 2) = uVar3 - (uVar3 >> 5);
            uVar3 = *(ushort *)(iVar4 + 0x1c8 + local_3c * 2);
            if (uVar11 < 0x1000000) {
              uVar21 = uVar21 * 0x100 | (uint)*local_4c;
              uVar11 = uVar11 * 0x100;
              local_4c = local_4c + 1;
            }
            uVar13 = (uVar11 >> 0xb) * (uint)uVar3;
            if (uVar21 < uVar13) {
              *(ushort *)(iVar4 + 0x1c8 + local_3c * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
              uVar19 = uVar13;
              uVar18 = local_18;
            }
            else {
              uVar19 = uVar11 - uVar13;
              uVar21 = uVar21 - uVar13;
              *(ushort *)(iVar4 + 0x1c8 + local_3c * 2) = uVar3 - (uVar3 >> 5);
              local_14 = local_18;
            }
            local_18 = local_1c;
          }
          local_1c = local_28;
          local_28 = uVar18;
        }
        local_3c = (-(uint)(local_3c < 7) & 0xfffffffd) + 0xb;
        puVar15 = (ushort *)(iVar4 + 0xa68);
      }
      uVar18 = local_1c;
      uVar3 = *puVar15;
      if (uVar19 < 0x1000000) {
        uVar19 = uVar19 << 8;
        uVar21 = uVar21 << 8 | (uint)*local_4c;
        local_4c = local_4c + 1;
      }
      uVar11 = (uVar19 >> 0xb) * (uint)uVar3;
      if (uVar21 < uVar11) {
        *puVar15 = (short)(0x800 - uVar3 >> 5) + uVar3;
        uVar3 = puVar15[uVar17 * 8 + 3];
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 * 0x100;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          puVar15[uVar17 * 8 + 3] = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar22 = 2;
          uVar11 = uVar19;
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          puVar15[uVar17 * 8 + 3] = uVar3 - (uVar3 >> 5);
          iVar22 = 3;
        }
        iVar12 = iVar22 * 2;
        uVar3 = puVar15[uVar17 * 8 + iVar22 + 2];
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar19 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar19) {
          puVar15[uVar17 * 8 + iVar22 + 2] = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar11 = uVar19;
        }
        else {
          uVar11 = uVar11 - uVar19;
          uVar21 = uVar21 - uVar19;
          puVar15[uVar17 * 8 + iVar22 + 2] = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        uVar3 = puVar15[uVar17 * 8 + iVar12 + 2];
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar13 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar13) {
          puVar15[uVar17 * 8 + iVar12 + 2] = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar19 = iVar12 * 2 - 8;
          uVar11 = uVar13;
        }
        else {
          uVar11 = uVar11 - uVar13;
          uVar21 = uVar21 - uVar13;
          puVar15[uVar17 * 8 + iVar12 + 2] = uVar3 - (uVar3 >> 5);
          uVar19 = iVar12 * 2 - 7;
        }
      }
      else {
        uVar19 = uVar19 - uVar11;
        uVar21 = uVar21 - uVar11;
        *puVar15 = uVar3 - (uVar3 >> 5);
        uVar3 = puVar15[1];
        if (uVar19 < 0x1000000) {
          uVar19 = uVar19 * 0x100;
          uVar21 = uVar21 * 0x100 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar13 = (uVar19 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar13) {
          puVar15[1] = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar3 = puVar15[uVar17 * 8 + 0x83];
          if (uVar13 < 0x1000000) {
            uVar13 = uVar13 * 0x100;
            uVar21 = uVar21 << 8 | (uint)*local_4c;
            local_4c = local_4c + 1;
          }
          uVar11 = (uVar13 >> 0xb) * (uint)uVar3;
          if (uVar21 < uVar11) {
            puVar15[uVar17 * 8 + 0x83] = (short)(0x800 - uVar3 >> 5) + uVar3;
            iVar22 = 2;
            uVar13 = uVar11;
          }
          else {
            uVar13 = uVar13 - uVar11;
            uVar21 = uVar21 - uVar11;
            puVar15[uVar17 * 8 + 0x83] = uVar3 - (uVar3 >> 5);
            iVar22 = 3;
          }
          iVar12 = iVar22 * 2;
          uVar3 = puVar15[uVar17 * 8 + iVar22 + 0x82];
          if (uVar13 < 0x1000000) {
            uVar13 = uVar13 << 8;
            uVar21 = uVar21 << 8 | (uint)*local_4c;
            local_4c = local_4c + 1;
          }
          uVar11 = (uVar13 >> 0xb) * (uint)uVar3;
          if (uVar21 < uVar11) {
            puVar15[uVar17 * 8 + iVar22 + 0x82] = (short)(0x800 - uVar3 >> 5) + uVar3;
            uVar13 = uVar11;
          }
          else {
            uVar13 = uVar13 - uVar11;
            uVar21 = uVar21 - uVar11;
            puVar15[uVar17 * 8 + iVar22 + 0x82] = uVar3 - (uVar3 >> 5);
            iVar12 = iVar12 + 1;
          }
          uVar19 = iVar12 * 2;
          uVar3 = puVar15[uVar17 * 8 + iVar12 + 0x82];
          if (uVar13 < 0x1000000) {
            uVar13 = uVar13 << 8;
            uVar21 = uVar21 << 8 | (uint)*local_4c;
            local_4c = local_4c + 1;
          }
          uVar11 = (uVar13 >> 0xb) * (uint)uVar3;
          if (uVar21 < uVar11) {
            puVar15[uVar17 * 8 + iVar12 + 0x82] = (short)(0x800 - uVar3 >> 5) + uVar3;
          }
          else {
            uVar21 = uVar21 - uVar11;
            puVar15[uVar17 * 8 + iVar12 + 0x82] = uVar3 - (uVar3 >> 5);
            uVar19 = uVar19 + 1;
            uVar11 = uVar13 - uVar11;
          }
        }
        else {
          uVar11 = uVar19 - uVar13;
          uVar21 = uVar21 - uVar13;
          puVar15[1] = uVar3 - (uVar3 >> 5);
          uVar17 = 1;
          do {
            uVar19 = uVar17 * 2;
            uVar3 = puVar15[uVar17 + 0x102];
            if (uVar11 < 0x1000000) {
              uVar11 = uVar11 << 8;
              uVar21 = uVar21 << 8 | (uint)*local_4c;
              local_4c = local_4c + 1;
            }
            uVar13 = (uVar11 >> 0xb) * (uint)uVar3;
            if (uVar21 < uVar13) {
              puVar15[uVar17 + 0x102] = (short)(0x800 - uVar3 >> 5) + uVar3;
              uVar11 = uVar13;
            }
            else {
              uVar11 = uVar11 - uVar13;
              uVar21 = uVar21 - uVar13;
              puVar15[uVar17 + 0x102] = uVar3 - (uVar3 >> 5);
              uVar19 = uVar19 + 1;
            }
            uVar17 = uVar19;
          } while (uVar19 < 0x100);
          uVar19 = uVar19 - 0xf0;
        }
      }
      if (0xb < local_3c) {
        uVar17 = uVar19;
        if (3 < uVar19) {
          uVar17 = 3;
        }
        iVar22 = uVar17 * 0x80 + 0x360 + iVar4;
        uVar3 = *(ushort *)(iVar22 + 2);
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar17 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar17) {
          *(ushort *)(iVar22 + 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
          iVar12 = 2;
          uVar11 = uVar17;
        }
        else {
          uVar11 = uVar11 - uVar17;
          uVar21 = uVar21 - uVar17;
          *(ushort *)(iVar22 + 2) = uVar3 - (uVar3 >> 5);
          iVar12 = 3;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar17 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar17) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar11 = uVar17;
        }
        else {
          uVar11 = uVar11 - uVar17;
          uVar21 = uVar21 - uVar17;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar17 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar17) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar11 = uVar17;
        }
        else {
          uVar11 = uVar11 - uVar17;
          uVar21 = uVar21 - uVar17;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar17 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar17) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar11 = uVar17;
        }
        else {
          uVar11 = uVar11 - uVar17;
          uVar21 = uVar21 - uVar17;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar17 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar17) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar11 = uVar17;
        }
        else {
          uVar11 = uVar11 - uVar17;
          uVar21 = uVar21 - uVar17;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 * 2;
        uVar3 = *(ushort *)(iVar22 + iVar12);
        if (uVar11 < 0x1000000) {
          uVar11 = uVar11 << 8;
          uVar21 = uVar21 << 8 | (uint)*local_4c;
          local_4c = local_4c + 1;
        }
        uVar17 = (uVar11 >> 0xb) * (uint)uVar3;
        if (uVar21 < uVar17) {
          *(ushort *)(iVar22 + iVar12) = (short)(0x800 - uVar3 >> 5) + uVar3;
          uVar11 = uVar17;
        }
        else {
          uVar11 = uVar11 - uVar17;
          uVar21 = uVar21 - uVar17;
          *(ushort *)(iVar22 + iVar12) = uVar3 - (uVar3 >> 5);
          iVar12 = iVar12 + 1;
        }
        uVar17 = iVar12 - 0x40;
        if (3 < uVar17) {
          local_40 = (uVar17 >> 1) - 1;
          uVar13 = uVar17 & 1 | 2;
          if (uVar17 < 0xe) {
            uVar13 = uVar13 << ((byte)local_40 & 0x1f);
            iVar22 = 1;
            iVar12 = iVar4 + 0x55e + (uVar13 - uVar17) * 2;
            local_14 = 1;
            uVar17 = uVar13;
            do {
              uVar3 = *(ushort *)(iVar12 + iVar22 * 2);
              if (uVar11 < 0x1000000) {
                uVar21 = uVar21 << 8 | (uint)*local_4c;
                uVar11 = uVar11 << 8;
                local_4c = local_4c + 1;
              }
              uVar13 = (uVar11 >> 0xb) * (uint)uVar3;
              if (uVar21 < uVar13) {
                *(ushort *)(iVar12 + iVar22 * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
                iVar22 = iVar22 * 2;
                uVar11 = uVar13;
              }
              else {
                uVar11 = uVar11 - uVar13;
                uVar21 = uVar21 - uVar13;
                *(ushort *)(iVar12 + iVar22 * 2) = uVar3 - (uVar3 >> 5);
                iVar22 = iVar22 * 2 + 1;
                uVar17 = uVar17 | local_14;
              }
              local_14 = local_14 << 1;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          else {
            iVar22 = (uVar17 >> 1) - 5;
            do {
              if (uVar11 < 0x1000000) {
                uVar11 = uVar11 << 8;
                uVar21 = uVar21 << 8 | (uint)*local_4c;
                local_4c = local_4c + 1;
              }
              uVar11 = uVar11 >> 1;
              uVar17 = (int)(uVar21 - uVar11) >> 0x1f;
              uVar13 = uVar17 + 1 + uVar13 * 2;
              uVar21 = (uVar21 - uVar11) + (uVar17 & uVar11);
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
            uVar3 = *(ushort *)(iVar4 + 0x646);
            uVar17 = uVar13 * 0x10;
            if (uVar11 < 0x1000000) {
              uVar11 = uVar11 << 8;
              uVar21 = uVar21 * 0x100 | (uint)*local_4c;
              local_4c = local_4c + 1;
            }
            uVar13 = (uVar11 >> 0xb) * (uint)uVar3;
            if (uVar21 < uVar13) {
              *(ushort *)(iVar4 + 0x646) = (short)(0x800 - uVar3 >> 5) + uVar3;
              iVar22 = 2;
              uVar11 = uVar13;
            }
            else {
              uVar11 = uVar11 - uVar13;
              uVar21 = uVar21 - uVar13;
              *(ushort *)(iVar4 + 0x646) = uVar3 - (uVar3 >> 5);
              iVar22 = 3;
              uVar17 = uVar17 | 1;
            }
            iVar22 = iVar22 * 2;
            uVar3 = *(ushort *)(iVar22 + 0x644 + iVar4);
            if (uVar11 < 0x1000000) {
              uVar21 = uVar21 << 8 | (uint)*local_4c;
              uVar11 = uVar11 << 8;
              local_4c = local_4c + 1;
            }
            uVar13 = (uVar11 >> 0xb) * (uint)uVar3;
            if (uVar21 < uVar13) {
              *(ushort *)(iVar22 + 0x644 + iVar4) = (short)(0x800 - uVar3 >> 5) + uVar3;
              uVar11 = uVar13;
            }
            else {
              uVar11 = uVar11 - uVar13;
              uVar21 = uVar21 - uVar13;
              *(ushort *)(iVar22 + 0x644 + iVar4) = uVar3 - (uVar3 >> 5);
              iVar22 = iVar22 + 1;
              uVar17 = uVar17 | 2;
            }
            iVar22 = iVar22 * 2;
            uVar3 = *(ushort *)(iVar22 + 0x644 + iVar4);
            if (uVar11 < 0x1000000) {
              uVar21 = uVar21 << 8 | (uint)*local_4c;
              uVar11 = uVar11 << 8;
              local_4c = local_4c + 1;
            }
            uVar13 = (uVar11 >> 0xb) * (uint)uVar3;
            if (uVar21 < uVar13) {
              *(ushort *)(iVar22 + 0x644 + iVar4) = (short)(0x800 - uVar3 >> 5) + uVar3;
              uVar11 = uVar13;
            }
            else {
              uVar11 = uVar11 - uVar13;
              uVar21 = uVar21 - uVar13;
              *(ushort *)(iVar22 + 0x644 + iVar4) = uVar3 - (uVar3 >> 5);
              iVar22 = iVar22 + 1;
              uVar17 = uVar17 | 4;
            }
            uVar3 = *(ushort *)(iVar4 + 0x644 + iVar22 * 2);
            if (uVar11 < 0x1000000) {
              uVar21 = uVar21 << 8 | (uint)*local_4c;
              uVar11 = uVar11 << 8;
              local_4c = local_4c + 1;
            }
            uVar13 = (uVar11 >> 0xb) * (uint)uVar3;
            if (uVar21 < uVar13) {
              *(ushort *)(iVar4 + 0x644 + iVar22 * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
              uVar11 = uVar13;
            }
            else {
              uVar11 = uVar11 - uVar13;
              uVar21 = uVar21 - uVar13;
              *(ushort *)(iVar4 + 0x644 + iVar22 * 2) = uVar3 - (uVar3 >> 5);
              uVar17 = uVar17 | 8;
            }
            if (uVar17 == 0xffffffff) {
              local_2c = uVar19 + 0x112;
              local_3c = local_3c - 0xc;
LAB_100c08b6:
              if (uVar11 < 0x1000000) {
                uVar11 = uVar11 << 8;
                uVar21 = uVar21 << 8 | (uint)*local_4c;
                local_4c = local_4c + 1;
              }
              param_1[7] = uVar11;
              param_1[6] = local_4c;
              param_1[9] = local_38;
              param_1[0x12] = local_2c;
              param_1[0xe] = local_28;
              param_1[0xb] = local_34;
              param_1[8] = uVar21;
              param_1[0x10] = local_18;
              param_1[0xf] = local_1c;
              param_1[0xd] = local_3c;
              param_1[0x11] = local_14;
              return 0;
            }
          }
        }
        local_14 = local_18;
        local_1c = local_28;
        local_18 = uVar18;
        local_28 = uVar17 + 1;
        if (uVar10 == 0) {
          if (local_34 <= uVar17) {
            param_1[9] = local_38;
            return 1;
          }
        }
        else if (uVar10 <= uVar17) {
          param_1[9] = local_38;
          return 1;
        }
        local_3c = (-(uint)(local_3c < 0x13) & 0xfffffffd) + 10;
      }
      uVar19 = uVar19 + 2;
      uVar18 = param_2 - local_38;
      if (uVar18 == 0) {
        param_1[9] = local_38;
        return 1;
      }
      if (uVar19 <= uVar18) {
        uVar18 = uVar19;
      }
      local_34 = local_34 + uVar18;
      uVar17 = ((-(uint)(local_38 < local_28) & uVar9) - local_28) + local_38;
      local_2c = uVar19 - uVar18;
      if (uVar9 - uVar17 < uVar18) {
        do {
          *(undefined1 *)(local_38 + iVar7) = *(undefined1 *)(uVar17 + iVar7);
          local_38 = local_38 + 1;
          uVar17 = uVar17 + 1;
          if (uVar17 == uVar9) {
            uVar17 = 0;
          }
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      else {
        iVar22 = uVar17 - local_38;
        puVar16 = (undefined1 *)(iVar7 + local_38);
        local_38 = local_38 + uVar18;
        puVar2 = puVar16 + uVar18;
        do {
          *puVar16 = puVar16[iVar22];
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar2);
      }
    }
LAB_100c087c:
    if ((param_2 <= local_38) || (param_3 <= local_4c)) goto LAB_100c08b6;
  } while( true );
}


/* END FUNCTION 0x100bf4b0 */
