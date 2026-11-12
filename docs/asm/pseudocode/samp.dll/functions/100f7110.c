/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f7110
 * Name: FUN_100f7110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100f7110(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  ushort *puVar11;
  bool bVar12;
  bool bVar13;
  ushort auStack_80 [32];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  ushort *local_28;
  ushort *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  ushort *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  auStack_80[0x10] = 0;
  auStack_80[0x11] = 0;
  auStack_80[0x12] = 0;
  auStack_80[0x13] = 0;
  auStack_80[0x14] = 0;
  auStack_80[0x15] = 0;
  auStack_80[0x16] = 0;
  auStack_80[0x17] = 0;
  auStack_80[0x18] = 0;
  auStack_80[0x19] = 0;
  auStack_80[0x1a] = 0;
  auStack_80[0x1b] = 0;
  auStack_80[0x1c] = 0;
  auStack_80[0x1d] = 0;
  auStack_80[0x1e] = 0;
  auStack_80[0x1f] = 0;
  if (param_3 != 0) {
    do {
      auStack_80[*(ushort *)(param_2 + uVar3 * 2) + 0x10] =
           auStack_80[*(ushort *)(param_2 + uVar3 * 2) + 0x10] + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  local_8 = *param_5;
  uVar3 = 0xf;
  local_18 = 0xf;
  do {
    if (auStack_80[uVar3 + 0x10] != 0) break;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  local_18 = uVar3;
  if (uVar3 < local_8) {
    local_8 = uVar3;
  }
  if (uVar3 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    iVar8 = *param_4;
    *param_4 = iVar8 + 4;
    *(undefined4 *)(iVar8 + 4) = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    return 0;
  }
  uVar10 = 1;
  if (1 < uVar3) {
    uVar10 = 1;
    do {
      if (auStack_80[uVar10 + 0x10] != 0) break;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  if (local_8 < uVar10) {
    local_8 = uVar10;
  }
  iVar8 = 1;
  uVar4 = 1;
  do {
    iVar8 = iVar8 * 2 - (uint)auStack_80[uVar4 + 0x10];
    if (iVar8 < 0) {
      return 0xffffffff;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  if ((0 < iVar8) && ((param_1 == 0 || (uVar3 != 1)))) {
    return 0xffffffff;
  }
  auStack_80[1] = 0;
  uVar3 = 2;
  do {
    sVar5 = *(short *)((int)auStack_80 + uVar3) + *(short *)((int)auStack_80 + uVar3 + 0x20);
    *(short *)((int)auStack_80 + uVar3 + 2) = sVar5;
    *(short *)((int)auStack_80 + uVar3 + 4) = *(short *)((int)auStack_80 + uVar3 + 0x22) + sVar5;
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x1e);
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      if (*(short *)(param_2 + uVar3 * 2) != 0) {
        param_6[auStack_80[*(ushort *)(param_2 + uVar3 * 2)]] = (ushort)uVar3;
        auStack_80[*(ushort *)(param_2 + uVar3 * 2)] =
             auStack_80[*(ushort *)(param_2 + uVar3 * 2)] + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  if (param_1 == 0) {
    local_24 = param_6;
    local_28 = param_6;
    local_20 = 0x14;
  }
  else if (param_1 == 1) {
    local_28 = (ushort *)&DAT_1012ae00;
    local_24 = (ushort *)&DAT_1012ae40;
    local_20 = 0x101;
  }
  else {
    local_28 = (ushort *)&DAT_1012ae80;
    local_24 = (ushort *)&DAT_1012aec0;
    local_20 = 0;
  }
  local_10 = 0;
  local_1c = *param_4;
  local_c = 0;
  local_30 = 1 << ((byte)local_8 & 0x1f);
  local_34 = 0xffffffff;
  local_2c = local_30;
  local_38 = local_30 - 1;
  if (param_1 == 1) {
    bVar12 = local_30 < 0x354;
    bVar13 = local_30 == 0x354;
  }
  else {
    if (param_1 != 2) goto LAB_100f7312;
    bVar12 = local_30 < 0x250;
    bVar13 = local_30 == 0x250;
  }
  if (!bVar12 && !bVar13) {
    return 1;
  }
LAB_100f7312:
  local_14 = param_6;
  do {
    do {
      do {
        cVar9 = (char)uVar10;
        bVar2 = cVar9 - (byte)local_c;
        uVar1 = *local_14;
        if (uVar1 + 1 < local_20) {
          param_3 = (uint)CONCAT21(uVar1,bVar2) << 8;
        }
        else if (uVar1 < local_20) {
          param_3 = CONCAT31((uint3)bVar2,0x60);
        }
        else {
          param_3 = CONCAT22(local_28[*local_14 - local_20],
                             CONCAT11(bVar2,(char)local_24[*local_14 - local_20]));
        }
        iVar8 = 1 << (cVar9 - (byte)local_c & 0x1f);
        local_3c = local_30;
        piVar6 = (int *)(local_1c + ((local_10 >> ((byte)local_c & 0x1f)) + local_30) * 4);
        uVar3 = local_30;
        do {
          uVar3 = uVar3 - iVar8;
          piVar6 = piVar6 + -iVar8;
          *piVar6 = param_3;
        } while (uVar3 != 0);
        for (uVar3 = 1 << (cVar9 - 1U & 0x1f); (local_10 & uVar3) != 0; uVar3 = uVar3 >> 1) {
        }
        if (uVar3 == 0) {
          local_10 = 0;
        }
        else {
          local_10 = (uVar3 - 1 & local_10) + uVar3;
        }
        puVar11 = local_14 + 1;
        auStack_80[uVar10 + 0x10] = auStack_80[uVar10 + 0x10] - 1;
        local_14 = puVar11;
        if (auStack_80[uVar10 + 0x10] == 0) {
          if (uVar10 == local_18) {
            if (local_10 != 0) {
              param_3 = (uint)CONCAT11(cVar9 - (byte)local_c,0x40);
              *(uint *)(local_1c + local_10 * 4) = param_3;
            }
            *param_4 = *param_4 + local_2c * 4;
            *param_5 = local_8;
            return 0;
          }
          uVar10 = (uint)*(ushort *)(param_2 + (uint)*puVar11 * 2);
        }
      } while (uVar10 <= local_8);
      local_40 = local_38 & local_10;
    } while (local_40 == local_34);
    if (local_c == 0) {
      local_c = local_8;
    }
    local_1c = local_1c + local_3c * 4;
    iVar7 = uVar10 - local_c;
    uVar3 = local_c + iVar7;
    iVar8 = 1 << ((byte)iVar7 & 0x1f);
    if (uVar3 < local_18) {
      puVar11 = auStack_80 + uVar3 + 0x10;
      do {
        uVar1 = *puVar11;
        if ((int)(iVar8 - (uint)uVar1) < 1) break;
        iVar7 = iVar7 + 1;
        uVar3 = uVar3 + 1;
        puVar11 = puVar11 + 1;
        iVar8 = (iVar8 - (uint)uVar1) * 2;
      } while (uVar3 < local_18);
    }
    local_30 = 1 << ((byte)iVar7 & 0x1f);
    local_2c = local_2c + local_30;
    if (param_1 == 1) {
      bVar12 = local_2c < 0x354;
      bVar13 = local_2c == 0x354;
LAB_100f749c:
      if (!bVar12 && !bVar13) {
        return 1;
      }
    }
    else if (param_1 == 2) {
      bVar12 = local_2c < 0x250;
      bVar13 = local_2c == 0x250;
      goto LAB_100f749c;
    }
    *(byte *)(*param_4 + local_40 * 4) = (byte)iVar7;
    *(undefined1 *)(*param_4 + 1 + local_40 * 4) = (undefined1)local_8;
    local_34 = local_40;
    *(short *)(*param_4 + 2 + local_40 * 4) = (short)(local_1c - *param_4 >> 2);
  } while( true );
}


/* END FUNCTION 0x100f7110 */
