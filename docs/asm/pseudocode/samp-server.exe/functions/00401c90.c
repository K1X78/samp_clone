/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401c90
 * Name: FUN_00401c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00401c90(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  bool bVar16;
  bool bVar17;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint uStack_c;
  int local_8;
  uint local_4;
  
  if (param_1[2] == 0) {
    return 9;
  }
  if ((param_1[10] & 0x1000U) == 0) {
    return 0x13;
  }
  if (-1 < (char)((uint)param_1[10] >> 8)) {
    return 0x16;
  }
  local_8 = *param_1;
  local_4 = *(int *)(local_8 + 0x10) - *(int *)(local_8 + 0xc);
  local_14 = *(int *)(local_8 + 0xc) + local_8;
  iVar11 = param_1[1];
  if (iVar11 == 0) {
    iVar11 = *(int *)(local_8 + 0x10) + local_8;
  }
  local_18 = param_1[6];
  local_28 = param_1[8];
  local_30 = 0;
  local_2c = 0;
  local_1c = 0;
  local_24 = local_28;
  local_20 = local_18;
  if (param_3 == -1) {
    iVar9 = *(int *)(local_8 + 0x1c);
    if (iVar9 < 0) {
      return 0x14;
    }
  }
  else if (param_3 == -2) {
    local_1c = param_1[5];
    local_30 = param_1[0x15];
    iVar9 = param_1[4];
    local_2c = param_1[0x16];
    local_24 = param_1[0x17];
    local_20 = param_1[0x18];
  }
  else {
    if (param_3 < 0) {
      return 0x14;
    }
    if ((*(int *)(local_8 + 0x24) - *(int *)(local_8 + 0x20)) / (int)*(short *)(local_8 + 10) <=
        param_3) {
      return 0x14;
    }
    iVar9 = *(int *)(local_8 + *(short *)(local_8 + 10) * param_3 + *(int *)(local_8 + 0x20));
  }
  if (param_1[9] < (int)local_28) {
    return 7;
  }
  if ((int)local_18 < param_1[7]) {
    return 8;
  }
  if (param_3 != -2) {
    iVar1 = param_1[0x14];
    *(int *)((local_28 - 4) + iVar11) = iVar1 * 4;
    local_24 = local_24 + iVar1 * 4;
    local_28 = local_28 - 8;
    param_1[0x14] = 0;
    *(undefined4 *)(local_28 + iVar11) = 0;
  }
  if ((int)local_28 < (int)(local_18 + 0x40)) {
    return 3;
  }
  uVar5 = *(uint *)(iVar9 + local_14);
  puVar4 = (uint *)(iVar9 + local_14);
  local_10 = iVar11;
  uVar8 = local_30;
  while (uVar5 - 1 < 0x89) {
    puVar10 = puVar4 + 1;
    bVar6 = (byte)local_2c;
    uVar3 = uVar8;
    switch(uVar5) {
    case 1:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      uVar3 = *(uint *)(uVar5 + iVar11);
      local_30 = *(uint *)(uVar5 + iVar11);
      break;
    case 2:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_2c = *(uint *)(uVar5 + iVar11);
      break;
    case 3:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      uVar3 = *(uint *)(uVar5 + local_1c + iVar11);
      local_30 = uVar3;
      break;
    case 4:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_2c = *(uint *)(uVar5 + local_1c + iVar11);
      break;
    case 5:
      uVar3 = *(uint *)(iVar11 + *(int *)(*puVar10 + iVar11));
      puVar10 = puVar4 + 2;
      local_30 = uVar3;
      break;
    case 6:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_2c = *(uint *)(iVar11 + *(int *)(uVar5 + iVar11));
      break;
    case 7:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      uVar3 = *(uint *)(iVar11 + *(int *)(uVar5 + local_1c + iVar11));
      local_30 = uVar3;
      break;
    case 8:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_2c = *(uint *)(iVar11 + *(int *)(uVar5 + local_1c + iVar11));
      break;
    case 9:
      if ((((int)local_18 <= (int)uVar8) && ((int)uVar8 < (int)local_28)) ||
         ((uint)param_1[9] <= uVar8)) {
LAB_00402db7:
        param_1[8] = local_24;
        param_1[6] = local_20;
        return 5;
      }
      uVar3 = *(uint *)(uVar8 + iVar11);
      local_30 = *(uint *)(uVar8 + iVar11);
      break;
    case 10:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      if ((((int)local_18 <= (int)uVar8) && ((int)uVar8 < (int)local_28)) ||
         ((uint)param_1[9] <= uVar8)) {
LAB_00402d15:
        param_1[6] = local_20;
        param_1[8] = local_24;
        return 5;
      }
      if (uVar5 == 1) {
        uVar3 = (uint)*(byte *)(uVar8 + iVar11);
        local_30 = (uint)*(byte *)(uVar8 + iVar11);
      }
      else if (uVar5 == 2) {
        uVar3 = (uint)*(ushort *)(uVar8 + iVar11);
        local_30 = (uint)*(ushort *)(uVar8 + iVar11);
      }
      else if (uVar5 == 4) {
        uVar3 = *(uint *)(uVar8 + iVar11);
        local_30 = *(uint *)(uVar8 + iVar11);
      }
      break;
    case 0xb:
      uVar3 = *puVar10;
      puVar10 = puVar4 + 2;
      local_30 = uVar3;
      break;
    case 0xc:
      local_2c = *puVar10;
    case 0x88:
switchD_00401e28_caseD_88:
      puVar10 = puVar4 + 2;
      break;
    case 0xd:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      uVar3 = uVar5 + local_1c;
      local_30 = uVar5 + local_1c;
      break;
    case 0xe:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_2c = uVar5 + local_1c;
      break;
    case 0xf:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(uint *)(uVar5 + iVar11) = uVar8;
      uVar3 = local_30;
      break;
    case 0x10:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(uint *)(uVar5 + iVar11) = local_2c;
      uVar3 = local_30;
      break;
    case 0x11:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(uint *)(uVar5 + local_1c + iVar11) = uVar8;
      uVar3 = local_30;
      break;
    case 0x12:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(uint *)(uVar5 + local_1c + iVar11) = local_2c;
      uVar3 = local_30;
      break;
    case 0x13:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(uint *)(iVar11 + *(int *)(uVar5 + iVar11)) = uVar8;
      uVar3 = local_30;
      break;
    case 0x14:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(uint *)(iVar11 + *(int *)(uVar5 + iVar11)) = local_2c;
      uVar3 = local_30;
      break;
    case 0x15:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(uint *)(iVar11 + *(int *)(uVar5 + local_1c + iVar11)) = uVar8;
      uVar3 = local_30;
      break;
    case 0x16:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(uint *)(iVar11 + *(int *)(uVar5 + local_1c + iVar11)) = local_2c;
      uVar3 = local_30;
      break;
    case 0x17:
      if ((((int)local_18 <= (int)local_2c) && ((int)local_2c < (int)local_28)) ||
         ((uint)param_1[9] <= local_2c)) {
LAB_00402d30:
        param_1[8] = local_24;
        param_1[6] = local_20;
        return 5;
      }
      *(uint *)(local_2c + iVar11) = uVar8;
      uVar3 = local_30;
      break;
    case 0x18:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      if ((((int)local_18 <= (int)local_2c) && ((int)local_2c < (int)local_28)) ||
         ((uint)param_1[9] <= local_2c)) goto LAB_00402db7;
      if (uVar5 == 1) {
        *(char *)(local_2c + iVar11) = (char)uVar8;
        uVar3 = local_30;
      }
      else if (uVar5 == 2) {
        *(short *)(local_2c + iVar11) = (short)uVar8;
        uVar3 = local_30;
      }
      else if (uVar5 == 4) {
        *(uint *)(local_2c + iVar11) = uVar8;
        uVar3 = local_30;
      }
      break;
    case 0x19:
      uVar5 = local_2c + uVar8 * 4;
      if ((((int)local_18 <= (int)uVar5) && ((int)uVar5 < (int)local_28)) ||
         ((uint)param_1[9] <= uVar5)) goto LAB_00402d15;
      uVar3 = *(uint *)(uVar5 + iVar11);
      local_30 = *(uint *)(uVar5 + iVar11);
      break;
    case 0x1a:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      uVar5 = (uVar8 << ((byte)uVar5 & 0x1f)) + local_2c;
      if ((((int)local_18 <= (int)uVar5) && ((int)uVar5 < (int)local_28)) ||
         ((uint)param_1[9] <= uVar5)) goto LAB_00402d30;
      uVar3 = *(uint *)(uVar5 + iVar11);
      local_30 = *(uint *)(uVar5 + iVar11);
      break;
    case 0x1b:
      uVar3 = local_2c + uVar8 * 4;
      local_30 = uVar3;
      break;
    case 0x1c:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      uVar8 = uVar8 << ((byte)uVar5 & 0x1f);
    case 0x4e:
      uVar3 = uVar8 + local_2c;
      local_30 = uVar8 + local_2c;
      break;
    case 0x1d:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      if (uVar5 < 4) {
        uVar3 = uVar8 ^ 4 - uVar5;
        local_30 = uVar3;
      }
      break;
    case 0x1e:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      if (uVar5 < 4) {
        local_2c = local_2c ^ 4 - uVar5;
      }
      break;
    case 0x1f:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      switch(uVar5) {
      case 0:
        local_30 = *(uint *)(local_8 + 0xc);
        uVar3 = local_30;
        break;
      case 1:
        local_30 = *(uint *)(local_8 + 0x10);
        uVar3 = local_30;
        break;
      case 2:
        uVar3 = local_18;
        local_30 = local_18;
        break;
      case 3:
        uVar3 = param_1[9];
        local_30 = param_1[9];
        break;
      case 4:
        uVar3 = local_28;
        local_30 = local_28;
        break;
      case 5:
        uVar3 = local_1c;
        local_30 = local_1c;
        break;
      case 6:
        uVar3 = (int)puVar10 - local_14;
        local_30 = (int)puVar10 - local_14;
      }
      break;
    case 0x20:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      switch(uVar5) {
      case 2:
        local_18 = uVar8;
        break;
      case 4:
        local_28 = uVar8;
        break;
      case 5:
        local_1c = uVar8;
        break;
      case 6:
        puVar10 = (uint *)(uVar8 + local_14);
      }
      break;
    case 0x21:
      uVar3 = local_2c;
      local_30 = local_2c;
      break;
    case 0x22:
      local_2c = uVar8;
      break;
    case 0x23:
      uVar3 = local_2c;
      local_30 = local_2c;
      local_2c = uVar8;
      break;
    case 0x24:
      local_28 = local_28 - 4;
      *(uint *)(local_28 + iVar11) = uVar8;
      uVar3 = local_30;
      break;
    case 0x25:
      local_28 = local_28 - 4;
      *(uint *)(local_28 + iVar11) = local_2c;
      uVar3 = local_30;
      break;
    case 0x26:
      for (uVar5 = *puVar10; uVar3 = uVar8, puVar10 = puVar4 + 2, uVar5 != 0; uVar5 = uVar5 - 1) {
        local_28 = local_28 - 4;
        *(uint *)(local_28 + local_10) = uVar8;
        iVar11 = local_10;
        uVar8 = local_30;
      }
      break;
    case 0x27:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_28 = local_28 - 4;
      *(uint *)(local_28 + iVar11) = uVar5;
      uVar3 = local_30;
      break;
    case 0x28:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_28 = local_28 - 4;
      *(undefined4 *)(local_28 + iVar11) = *(undefined4 *)(uVar5 + iVar11);
      uVar3 = local_30;
      break;
    case 0x29:
      uVar5 = *puVar10;
      local_28 = local_28 - 4;
      puVar10 = puVar4 + 2;
      *(undefined4 *)(local_28 + iVar11) = *(undefined4 *)(uVar5 + local_1c + iVar11);
      uVar3 = local_30;
      break;
    case 0x2a:
      uVar3 = *(uint *)(local_28 + iVar11);
      local_30 = *(uint *)(local_28 + iVar11);
      local_28 = local_28 + 4;
      break;
    case 0x2b:
      local_2c = *(uint *)(local_28 + iVar11);
      local_28 = local_28 + 4;
      break;
    case 0x2c:
      uVar5 = local_28 + *puVar10;
      puVar10 = puVar4 + 2;
      if ((int)uVar5 < (int)(local_18 + 0x40)) {
        return 3;
      }
      local_2c = local_28;
      local_28 = uVar5;
      if (param_1[9] < (int)uVar5) {
        return 7;
      }
      break;
    case 0x2d:
      uVar5 = local_18 + *puVar10;
      puVar10 = puVar4 + 2;
      if ((int)local_28 < (int)(uVar5 + 0x40)) {
        return 3;
      }
      local_2c = local_18;
      local_18 = uVar5;
      if ((int)uVar5 < param_1[7]) {
        return 8;
      }
      break;
    case 0x2e:
      local_28 = local_28 - 4;
      *(uint *)(local_28 + iVar11) = local_1c;
      uVar3 = local_30;
      local_1c = local_28;
      if ((int)local_28 < (int)(local_18 + 0x40)) {
        return 3;
      }
      break;
    case 0x2f:
      puVar4 = (uint *)(local_28 + iVar11);
      uVar5 = *(uint *)(local_28 + 4 + iVar11);
      if (local_4 <= uVar5) goto LAB_00402db7;
      puVar10 = (uint *)(uVar5 + local_14);
      local_28 = local_28 + 8;
      local_1c = *puVar4;
      break;
    case 0x30:
      local_1c = *(uint *)(local_28 + iVar11);
      uVar5 = *(uint *)(local_28 + 4 + iVar11);
      if (local_4 <= uVar5) goto LAB_00402d15;
      local_28 = local_28 + 0xc + *(int *)(local_28 + 8 + iVar11);
      param_1[8] = local_28;
      puVar10 = (uint *)(uVar5 + local_14);
      break;
    case 0x31:
      local_28 = local_28 - 4;
      *(int *)(local_28 + iVar11) = (int)puVar10 + (4 - local_14);
      puVar10 = (uint *)*puVar10;
      uVar3 = local_30;
      break;
    case 0x32:
      param_1[8] = local_24;
      param_1[6] = local_20;
      return 6;
    case 0x33:
switchD_00401e28_caseD_33:
      puVar10 = (uint *)*puVar10;
      break;
    case 0x34:
      puVar10 = (uint *)(*puVar10 + 4 + (int)puVar10);
      break;
    case 0x35:
      if (uVar8 != 0) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x36:
      if (uVar8 == 0) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x37:
      if (uVar8 != local_2c) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x38:
      if (uVar8 == local_2c) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x39:
      if (local_2c <= uVar8) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x3a:
      if (local_2c < uVar8) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x3b:
      if (uVar8 <= local_2c) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x3c:
      if (uVar8 < local_2c) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x3d:
      if ((int)local_2c <= (int)uVar8) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x3e:
      if ((int)local_2c < (int)uVar8) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x3f:
      if ((int)uVar8 <= (int)local_2c) goto switchD_00401e28_caseD_88;
      puVar10 = (uint *)*puVar10;
      break;
    case 0x40:
      if ((int)local_2c <= (int)uVar8) goto switchD_00401e28_caseD_33;
      goto switchD_00401e28_caseD_88;
    case 0x41:
      uVar3 = uVar8 << (bVar6 & 0x1f);
      local_30 = uVar3;
      break;
    case 0x42:
      uVar3 = uVar8 >> (bVar6 & 0x1f);
      local_30 = uVar3;
      break;
    case 0x43:
      uVar3 = (int)uVar8 >> (bVar6 & 0x1f);
      local_30 = uVar3;
      break;
    case 0x44:
      uVar3 = uVar8 << ((byte)*puVar10 & 0x1f);
      puVar10 = puVar4 + 2;
      local_30 = uVar3;
      break;
    case 0x45:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_2c = local_2c << ((byte)uVar5 & 0x1f);
      break;
    case 0x46:
      uVar3 = uVar8 >> ((byte)*puVar10 & 0x1f);
      puVar10 = puVar4 + 2;
      local_30 = uVar3;
      break;
    case 0x47:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      local_2c = local_2c >> ((byte)uVar5 & 0x1f);
      break;
    case 0x48:
    case 0x4b:
      uVar3 = uVar8 * local_2c;
      local_30 = uVar8 * local_2c;
      break;
    case 0x49:
      if (local_2c == 0) {
LAB_00402d9c:
        param_1[8] = local_24;
        param_1[6] = local_20;
        return 0xb;
      }
      uVar5 = (int)((int)uVar8 % (int)local_2c + local_2c) % (int)local_2c;
      uVar3 = (int)(uVar8 - uVar5) / (int)local_2c;
      local_30 = uVar3;
      local_2c = uVar5;
      break;
    case 0x4a:
      if (uVar8 == 0) {
        param_1[6] = local_20;
        param_1[8] = local_24;
        return 0xb;
      }
      uVar5 = (int)((int)local_2c % (int)uVar8 + uVar8) % (int)uVar8;
      uVar3 = (int)(local_2c - uVar5) / (int)uVar8;
      local_30 = uVar3;
      local_2c = uVar5;
      break;
    case 0x4c:
      if (local_2c == 0) {
        param_1[8] = local_24;
        param_1[6] = local_20;
        return 0xb;
      }
      uVar3 = uVar8 / local_2c;
      local_30 = uVar8 / local_2c;
      local_2c = uVar8 % local_2c;
      break;
    case 0x4d:
      if (uVar8 == 0) goto LAB_00402d9c;
      uVar3 = local_2c / uVar8;
      local_30 = local_2c / uVar8;
      local_2c = local_2c % uVar8;
      break;
    case 0x4f:
      uVar3 = uVar8 - local_2c;
      local_30 = uVar8 - local_2c;
      break;
    case 0x50:
      uVar3 = local_2c - uVar8;
      local_30 = local_2c - uVar8;
      break;
    case 0x51:
      uVar3 = uVar8 & local_2c;
      local_30 = uVar8 & local_2c;
      break;
    case 0x52:
      uVar3 = uVar8 | local_2c;
      local_30 = uVar8 | local_2c;
      break;
    case 0x53:
      uVar3 = uVar8 ^ local_2c;
      local_30 = uVar8 ^ local_2c;
      break;
    case 0x54:
      uVar3 = (uint)(uVar8 == 0);
      local_30 = (uint)(uVar8 == 0);
      break;
    case 0x55:
      goto switchD_00401e28_caseD_55;
    case 0x56:
      uVar3 = ~uVar8;
      local_30 = ~uVar8;
      break;
    case 0x57:
      uVar5 = *puVar10;
      uVar3 = uVar8 + uVar5;
      puVar10 = puVar4 + 2;
      local_30 = uVar8 + uVar5;
      break;
    case 0x58:
      uVar5 = *puVar10;
      uVar3 = uVar5 * uVar8;
      puVar10 = puVar4 + 2;
      local_30 = uVar5 * uVar8;
      break;
    case 0x59:
      local_30 = 0;
      uVar3 = 0;
      break;
    case 0x5a:
      local_2c = 0;
      break;
    case 0x5b:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(undefined4 *)(uVar5 + iVar11) = 0;
      uVar3 = local_30;
      break;
    case 0x5c:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(undefined4 *)(uVar5 + local_1c + iVar11) = 0;
      uVar3 = local_30;
      break;
    case 0x5d:
      if (0x7f < (uVar8 & 0xff)) {
        uVar3 = uVar8 | 0xffffff00;
        local_30 = uVar8 | 0xffffff00;
      }
      break;
    case 0x5e:
      if (0x7f < (local_2c & 0xff)) {
        local_2c = local_2c | 0xffffff00;
      }
      break;
    case 0x5f:
      uVar3 = (uint)(uVar8 == local_2c);
      local_30 = (uint)(uVar8 == local_2c);
      break;
    case 0x60:
      uVar3 = (uint)(uVar8 != local_2c);
      local_30 = (uint)(uVar8 != local_2c);
      break;
    case 0x61:
      uVar3 = (uint)(uVar8 < local_2c);
      local_30 = (uint)(uVar8 < local_2c);
      break;
    case 0x62:
      uVar3 = (uint)(uVar8 <= local_2c);
      local_30 = (uint)(uVar8 <= local_2c);
      break;
    case 99:
      uVar8 = -(uint)(local_2c < uVar8);
switchD_00401e28_caseD_55:
      uVar3 = -uVar8;
      local_30 = -uVar8;
      break;
    case 100:
      uVar8 = -(uint)(uVar8 < local_2c);
    case 0x6b:
      uVar3 = uVar8 + 1;
      local_30 = uVar8 + 1;
      break;
    case 0x65:
      uVar3 = (uint)((int)uVar8 < (int)local_2c);
      local_30 = (uint)((int)uVar8 < (int)local_2c);
      break;
    case 0x66:
      uVar3 = (uint)((int)uVar8 <= (int)local_2c);
      local_30 = (uint)((int)uVar8 <= (int)local_2c);
      break;
    case 0x67:
      uVar3 = (uint)((int)local_2c < (int)uVar8);
      local_30 = (uint)((int)local_2c < (int)uVar8);
      break;
    case 0x68:
      uVar3 = (uint)((int)local_2c <= (int)uVar8);
      local_30 = (uint)((int)local_2c <= (int)uVar8);
      break;
    case 0x69:
      uVar5 = *puVar10;
      uVar3 = (uint)(uVar8 == uVar5);
      puVar10 = puVar4 + 2;
      local_30 = (uint)(uVar8 == uVar5);
      break;
    case 0x6a:
      uVar5 = *puVar10;
      uVar3 = (uint)(local_2c == uVar5);
      puVar10 = puVar4 + 2;
      local_30 = (uint)(local_2c == uVar5);
      break;
    case 0x6c:
      local_2c = local_2c + 1;
      break;
    case 0x6d:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(int *)(uVar5 + iVar11) = *(int *)(uVar5 + iVar11) + 1;
      uVar3 = local_30;
      break;
    case 0x6e:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(int *)(uVar5 + local_1c + iVar11) = *(int *)(uVar5 + local_1c + iVar11) + 1;
      uVar3 = local_30;
      break;
    case 0x6f:
      *(int *)(uVar8 + iVar11) = *(int *)(uVar8 + iVar11) + 1;
      uVar3 = local_30;
      break;
    case 0x70:
      uVar3 = uVar8 - 1;
      local_30 = uVar8 - 1;
      break;
    case 0x71:
      local_2c = local_2c - 1;
      break;
    case 0x72:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(int *)(uVar5 + iVar11) = *(int *)(uVar5 + iVar11) + -1;
      uVar3 = local_30;
      break;
    case 0x73:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      *(int *)(uVar5 + local_1c + iVar11) = *(int *)(uVar5 + local_1c + iVar11) + -1;
      uVar3 = local_30;
      break;
    case 0x74:
      *(int *)(uVar8 + iVar11) = *(int *)(uVar8 + iVar11) + -1;
      uVar3 = local_30;
      break;
    case 0x75:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      if ((((int)local_18 <= (int)uVar8) && ((int)uVar8 < (int)local_28)) ||
         ((uint)param_1[9] <= uVar8)) goto LAB_00402d15;
      uVar3 = uVar5 + uVar8;
      if ((((int)local_18 < (int)uVar3) && ((int)uVar3 < (int)local_28)) ||
         ((uint)param_1[9] < uVar3)) goto LAB_00402d30;
      if ((((int)local_18 <= (int)local_2c) && ((int)local_2c < (int)local_28)) ||
         ((uint)param_1[9] <= local_2c)) goto LAB_00402db7;
      uVar3 = local_2c + uVar5;
      if ((((int)local_18 < (int)uVar3) && ((int)uVar3 < (int)local_28)) ||
         ((uint)param_1[9] < uVar3)) goto LAB_00402d15;
      puVar12 = (undefined4 *)(uVar8 + local_10);
      puVar14 = (undefined4 *)(local_2c + local_10);
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar3 = local_30, iVar11 = local_10, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      break;
    case 0x76:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      if ((((int)local_18 <= (int)uVar8) && ((int)uVar8 < (int)local_28)) ||
         ((uint)param_1[9] <= uVar8)) goto LAB_00402d30;
      uVar3 = uVar5 + uVar8;
      if ((((int)local_18 < (int)uVar3) && ((int)uVar3 < (int)local_28)) ||
         ((uint)param_1[9] < uVar3)) goto LAB_00402db7;
      if ((((int)local_18 <= (int)local_2c) && ((int)local_2c < (int)local_28)) ||
         ((uint)param_1[9] <= local_2c)) goto LAB_00402d15;
      uVar3 = local_2c + uVar5;
      if ((((int)local_18 < (int)uVar3) && ((int)uVar3 < (int)local_28)) ||
         ((uint)param_1[9] < uVar3)) goto LAB_00402d30;
      bVar16 = false;
      local_30 = 0;
      bVar17 = true;
      pbVar13 = (byte *)(local_2c + local_10);
      pbVar15 = (byte *)(uVar8 + local_10);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar16 = *pbVar13 < *pbVar15;
        bVar17 = *pbVar13 == *pbVar15;
        pbVar13 = pbVar13 + 1;
        pbVar15 = pbVar15 + 1;
      } while (bVar17);
      uVar3 = local_30;
      iVar11 = local_10;
      if (!bVar17) {
        local_30 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        uVar3 = local_30;
      }
      break;
    case 0x77:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      if ((((int)local_18 <= (int)local_2c) && ((int)local_2c < (int)local_28)) ||
         ((uint)param_1[9] <= local_2c)) goto LAB_00402db7;
      uVar7 = local_2c + uVar5;
      if ((((int)local_18 < (int)uVar7) && ((int)uVar7 < (int)local_28)) ||
         ((uint)param_1[9] < uVar7)) goto LAB_00402d15;
      if (3 < uVar5) {
        puVar4 = (uint *)(local_2c + iVar11);
        uVar5 = uVar5 >> 2;
        do {
          *puVar4 = uVar8;
          puVar4 = puVar4 + 1;
          uVar5 = uVar5 - 1;
          uVar3 = local_30;
          uVar8 = local_30;
          iVar11 = local_10;
        } while (uVar5 != 0);
      }
      break;
    case 0x78:
      uVar5 = *puVar10;
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar8;
      }
      param_1[0x16] = local_2c;
      param_1[5] = local_1c;
      param_1[0x15] = uVar8;
      param_1[4] = (int)puVar4 + (8 - local_14);
      if (uVar5 == 0xc) {
        param_1[0x17] = local_24;
        param_1[0x18] = local_20;
        return 0xc;
      }
      param_1[8] = local_24;
      param_1[6] = local_20;
      return uVar5;
    case 0x79:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      if (uVar5 < uVar8) {
        param_1[6] = local_20;
        param_1[8] = local_24;
        return 4;
      }
      break;
    case 0x7a:
      param_1[6] = local_18;
      param_1[8] = local_28;
      param_1[4] = (int)puVar10 - local_14;
      param_1[5] = local_1c;
      uStack_c = (*(code *)param_1[2])(param_1,uVar8,&local_30,local_28 + iVar11);
      uVar3 = local_30;
      if (uStack_c != 0) {
        if (uStack_c == 0xc) {
          param_1[0x15] = local_30;
          param_1[0x17] = local_24;
          param_1[0x16] = local_2c;
          param_1[0x18] = local_20;
          return 0xc;
        }
        param_1[8] = local_24;
        param_1[6] = local_20;
        return uStack_c;
      }
      break;
    case 0x7b:
      uVar5 = *puVar10;
      puVar10 = puVar4 + 2;
      param_1[4] = (int)puVar10 - local_14;
      param_1[5] = local_1c;
      param_1[8] = local_28;
      param_1[6] = local_18;
      uStack_c = (*(code *)param_1[2])(param_1,uVar5,&local_30,local_28 + iVar11);
      uVar3 = local_30;
      if (uStack_c != 0) {
        if (uStack_c != 0xc) {
          param_1[8] = local_24;
          param_1[6] = local_20;
          return uStack_c;
        }
LAB_00402b7f:
        param_1[0x15] = local_30;
        param_1[0x16] = local_2c;
        param_1[0x17] = local_24;
        param_1[0x18] = local_20;
        return 0xc;
      }
      break;
    default:
      goto switchD_00401e28_caseD_7c;
    case 0x7d:
    case 0x7f:
      puVar10 = puVar4 + 3;
      break;
    case 0x7e:
      puVar10 = (uint *)(*puVar10 + 4 + (int)puVar10);
      break;
    case 0x81:
      uVar5 = *puVar10;
      puVar4 = (uint *)(uVar5 + 0xc);
      for (uStack_c = *(uint *)(uVar5 + 4); puVar10 = *(uint **)(uVar5 + 8), 0 < (int)uStack_c;
          uStack_c = uStack_c - 1) {
        if (*puVar4 == uVar8) {
          if (0 < (int)uStack_c) {
            puVar10 = (uint *)puVar4[1];
          }
          break;
        }
        puVar4 = puVar4 + 2;
      }
      break;
    case 0x83:
      uVar3 = *(uint *)(local_28 + iVar11);
      *(uint *)(local_28 + iVar11) = uVar8;
      local_30 = uVar3;
      break;
    case 0x84:
      uVar5 = *(uint *)(local_28 + iVar11);
      *(uint *)(local_28 + iVar11) = local_2c;
      uVar3 = local_30;
      local_2c = uVar5;
      break;
    case 0x85:
      uVar5 = *puVar10;
      local_28 = local_28 - 4;
      puVar10 = puVar4 + 2;
      *(uint *)(local_28 + iVar11) = uVar5 + local_1c;
      uVar3 = local_30;
      break;
    case 0x86:
      break;
    case 0x87:
      pcVar2 = (code *)*puVar10;
      param_1[4] = (int)(puVar4 + 2) - local_14;
      param_1[5] = local_1c;
      param_1[8] = local_28;
      param_1[6] = local_18;
      uVar3 = (*pcVar2)(param_1,local_28 + iVar11);
      uVar5 = param_1[0x13];
      puVar10 = puVar4 + 2;
      local_30 = uVar3;
      if (uVar5 != 0) {
        if (uVar5 == 0xc) {
          param_1[0x15] = uVar3;
          param_1[0x16] = local_2c;
          param_1[0x17] = local_24;
          param_1[0x18] = local_20;
          return uStack_c;
        }
LAB_00402e65:
        param_1[8] = local_24;
        param_1[6] = local_20;
        return uVar5;
      }
      break;
    case 0x89:
      if ((code *)param_1[3] != (code *)0x0) {
        param_1[5] = local_1c;
        param_1[8] = local_28;
        param_1[6] = local_18;
        param_1[4] = (int)puVar10 - local_14;
        uVar5 = (*(code *)param_1[3])(param_1);
        uVar3 = local_30;
        uStack_c = uVar5;
        if (uVar5 != 0) {
          if (uVar5 != 0xc) goto LAB_00402e65;
          goto LAB_00402b7f;
        }
      }
    }
    puVar4 = puVar10;
    uVar8 = uVar3;
    uVar5 = *puVar10;
  }
switchD_00401e28_caseD_7c:
  param_1[8] = local_24;
  param_1[6] = local_20;
  return 6;
}


/* END FUNCTION 0x00401c90 */
