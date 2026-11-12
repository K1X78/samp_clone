/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c0a40
 * Name: FUN_100c0a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100c0a40(undefined4 *param_1,byte *param_2)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  int local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  local_10 = param_1[4];
  uVar6 = param_1[7];
  uVar10 = param_1[8];
  pbVar3 = param_2 + in_EAX;
  uVar1 = param_1[0xd];
  uVar8 = param_1[0xb];
  uVar7 = (1 << ((byte)param_1[2] & 0x1f)) - 1U & uVar8;
  if (uVar6 < 0x1000000) {
    if (pbVar3 <= param_2) {
      return 0;
    }
    uVar6 = uVar6 << 8;
    uVar10 = uVar10 << 8 | (uint)*param_2;
    param_2 = param_2 + 1;
  }
  uVar4 = (uVar6 >> 0xb) * (uint)*(ushort *)(local_10 + (uVar1 * 0x10 + uVar7) * 2);
  if (uVar10 < uVar4) {
    local_10 = local_10 + 0xe6c;
    if ((param_1[0xc] != 0) || (uVar8 != 0)) {
      iVar2 = param_1[9];
      if (iVar2 == 0) {
        iVar2 = param_1[10];
      }
      local_10 = local_10 +
                 ((uint)(*(byte *)(iVar2 + -1 + param_1[5]) >> (8U - (char)*param_1 & 0x1f)) +
                 (((1 << ((byte)param_1[1] & 0x1f)) - 1U & uVar8) << ((byte)*param_1 & 0x1f))) *
                 0x600;
    }
    if (uVar1 < 7) {
      uVar6 = 1;
      do {
        if (uVar4 < 0x1000000) {
          if (pbVar3 <= param_2) {
            return 0;
          }
          uVar4 = uVar4 << 8;
          uVar10 = uVar10 << 8 | (uint)*param_2;
          param_2 = param_2 + 1;
        }
        uVar1 = (uVar4 >> 0xb) * (uint)*(ushort *)(local_10 + uVar6 * 2);
        if (uVar10 < uVar1) {
          uVar6 = uVar6 * 2;
          uVar4 = uVar1;
        }
        else {
          uVar4 = uVar4 - uVar1;
          uVar10 = uVar10 - uVar1;
          uVar6 = uVar6 * 2 + 1;
        }
      } while (uVar6 < 0x100);
    }
    else {
      if ((uint)param_1[9] < (uint)param_1[0xe]) {
        iVar2 = param_1[10];
      }
      else {
        iVar2 = 0;
      }
      uVar1 = (uint)*(byte *)((param_1[5] - param_1[0xe]) + param_1[9] + iVar2);
      uVar8 = 0x100;
      uVar6 = 1;
      do {
        uVar1 = uVar1 << 1;
        uVar7 = uVar8 & uVar1;
        if (uVar4 < 0x1000000) {
          if (pbVar3 <= param_2) {
            return 0;
          }
          uVar4 = uVar4 << 8;
          uVar10 = uVar10 << 8 | (uint)*param_2;
          param_2 = param_2 + 1;
        }
        uVar5 = (uVar4 >> 0xb) * (uint)*(ushort *)(local_10 + (uVar7 + uVar6 + uVar8) * 2);
        if (uVar10 < uVar5) {
          uVar6 = uVar6 * 2;
          uVar7 = ~uVar7;
          uVar4 = uVar5;
        }
        else {
          uVar4 = uVar4 - uVar5;
          uVar10 = uVar10 - uVar5;
          uVar6 = uVar6 * 2 + 1;
        }
        uVar8 = uVar8 & uVar7;
      } while (uVar6 < 0x100);
    }
    local_4 = 1;
    goto LAB_100c1039;
  }
  uVar6 = uVar6 - uVar4;
  uVar10 = uVar10 - uVar4;
  if (uVar6 < 0x1000000) {
    if (pbVar3 <= param_2) {
      return 0;
    }
    uVar6 = uVar6 * 0x100;
    uVar10 = uVar10 * 0x100 | (uint)*param_2;
    param_2 = param_2 + 1;
  }
  uVar8 = (uVar6 >> 0xb) * (uint)*(ushort *)(local_10 + 0x180 + uVar1 * 2);
  if (uVar10 < uVar8) {
    local_c = 0;
    puVar11 = (ushort *)(local_10 + 0x664);
    local_4 = 2;
  }
  else {
    uVar6 = uVar6 - uVar8;
    uVar10 = uVar10 - uVar8;
    local_4 = 3;
    if (uVar6 < 0x1000000) {
      if (pbVar3 <= param_2) {
        return 0;
      }
      uVar6 = uVar6 * 0x100;
      uVar10 = uVar10 * 0x100 | (uint)*param_2;
      param_2 = param_2 + 1;
    }
    uVar4 = (uVar6 >> 0xb) * (uint)*(ushort *)(local_10 + 0x198 + uVar1 * 2);
    if (uVar10 < uVar4) {
      if (uVar4 < 0x1000000) {
        if (pbVar3 <= param_2) {
          return 0;
        }
        uVar4 = uVar4 * 0x100;
        uVar10 = uVar10 << 8 | (uint)*param_2;
        param_2 = param_2 + 1;
      }
      uVar8 = (uVar4 >> 0xb) * (uint)*(ushort *)(local_10 + ((uVar1 + 0xf) * 0x10 + uVar7) * 2);
      if (uVar10 < uVar8) {
        if ((uVar8 < 0x1000000) && (pbVar3 <= param_2)) {
          return 0;
        }
        return 3;
      }
LAB_100c0dc2:
      uVar10 = uVar10 - uVar8;
      uVar8 = uVar4 - uVar8;
    }
    else {
      uVar6 = uVar6 - uVar4;
      uVar10 = uVar10 - uVar4;
      if (uVar6 < 0x1000000) {
        if (pbVar3 <= param_2) {
          return 0;
        }
        uVar6 = uVar6 * 0x100;
        uVar10 = uVar10 * 0x100 | (uint)*param_2;
        param_2 = param_2 + 1;
      }
      uVar8 = (uVar6 >> 0xb) * (uint)*(ushort *)(local_10 + 0x1b0 + uVar1 * 2);
      if (uVar8 <= uVar10) {
        uVar4 = uVar6 - uVar8;
        uVar10 = uVar10 - uVar8;
        if (uVar4 < 0x1000000) {
          if (pbVar3 <= param_2) {
            return 0;
          }
          uVar4 = uVar4 * 0x100;
          uVar10 = uVar10 * 0x100 | (uint)*param_2;
          param_2 = param_2 + 1;
        }
        uVar8 = (uVar4 >> 0xb) * (uint)*(ushort *)(local_10 + 0x1c8 + uVar1 * 2);
        if (uVar8 <= uVar10) goto LAB_100c0dc2;
      }
    }
    local_c = 0xc;
    puVar11 = (ushort *)(local_10 + 0xa68);
  }
  if (uVar8 < 0x1000000) {
    if (pbVar3 <= param_2) {
      return 0;
    }
    uVar8 = uVar8 << 8;
    uVar10 = uVar10 << 8 | (uint)*param_2;
    param_2 = param_2 + 1;
  }
  uVar4 = (uVar8 >> 0xb) * (uint)*puVar11;
  if (uVar10 < uVar4) {
    puVar11 = puVar11 + uVar7 * 8 + 2;
    iVar2 = 0;
    local_8 = 8;
  }
  else {
    uVar8 = uVar8 - uVar4;
    uVar10 = uVar10 - uVar4;
    if (uVar8 < 0x1000000) {
      if (pbVar3 <= param_2) {
        return 0;
      }
      uVar8 = uVar8 * 0x100;
      uVar10 = uVar10 * 0x100 | (uint)*param_2;
      param_2 = param_2 + 1;
    }
    uVar6 = (uVar8 >> 0xb) * (uint)puVar11[1];
    if (uVar10 < uVar6) {
      iVar2 = 8;
      puVar11 = puVar11 + uVar7 * 8 + 0x82;
      local_8 = 8;
      uVar4 = uVar6;
    }
    else {
      uVar4 = uVar8 - uVar6;
      uVar10 = uVar10 - uVar6;
      puVar11 = puVar11 + 0x102;
      iVar2 = 0x10;
      local_8 = 0x100;
    }
  }
  uVar6 = 1;
  do {
    if (uVar4 < 0x1000000) {
      if (pbVar3 <= param_2) {
        return 0;
      }
      uVar4 = uVar4 << 8;
      uVar10 = uVar10 << 8 | (uint)*param_2;
      param_2 = param_2 + 1;
    }
    uVar1 = (uVar4 >> 0xb) * (uint)puVar11[uVar6];
    if (uVar10 < uVar1) {
      uVar6 = uVar6 * 2;
      uVar4 = uVar1;
    }
    else {
      uVar4 = uVar4 - uVar1;
      uVar10 = uVar10 - uVar1;
      uVar6 = uVar6 * 2 + 1;
    }
  } while (uVar6 < local_8);
  uVar6 = uVar6 + (iVar2 - local_8);
  if (local_c < 4) {
    if (3 < uVar6) {
      uVar6 = 3;
    }
    uVar1 = 1;
    do {
      if (uVar4 < 0x1000000) {
        if (pbVar3 <= param_2) {
          return 0;
        }
        uVar4 = uVar4 << 8;
        uVar10 = uVar10 << 8 | (uint)*param_2;
        param_2 = param_2 + 1;
      }
      uVar8 = (uVar4 >> 0xb) * (uint)*(ushort *)(uVar6 * 0x80 + 0x360 + local_10 + uVar1 * 2);
      if (uVar10 < uVar8) {
        uVar1 = uVar1 * 2;
        uVar4 = uVar8;
      }
      else {
        uVar4 = uVar4 - uVar8;
        uVar10 = uVar10 - uVar8;
        uVar1 = uVar1 * 2 + 1;
      }
    } while (uVar1 < 0x40);
    uVar1 = uVar1 - 0x40;
    if (3 < uVar1) {
      iVar2 = (uVar1 >> 1) - 1;
      if (uVar1 < 0xe) {
        local_10 = local_10 + 0x55e + (((uVar1 & 1 | 2) << ((byte)iVar2 & 0x1f)) - uVar1) * 2;
      }
      else {
        iVar2 = (uVar1 >> 1) - 5;
        do {
          if (uVar4 < 0x1000000) {
            if (pbVar3 <= param_2) {
              return 0;
            }
            uVar4 = uVar4 << 8;
            uVar10 = uVar10 << 8 | (uint)*param_2;
            param_2 = param_2 + 1;
          }
          uVar4 = uVar4 >> 1;
          uVar10 = uVar10 - (0xffffffffU - ((int)(uVar10 - uVar4) >> 0x1f) & uVar4);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        local_10 = local_10 + 0x644;
        iVar2 = 4;
      }
      iVar9 = 1;
      do {
        if (uVar4 < 0x1000000) {
          if (pbVar3 <= param_2) {
            return 0;
          }
          uVar10 = uVar10 << 8 | (uint)*param_2;
          uVar4 = uVar4 << 8;
          param_2 = param_2 + 1;
        }
        uVar6 = (uVar4 >> 0xb) * (uint)*(ushort *)(local_10 + iVar9 * 2);
        if (uVar10 < uVar6) {
          iVar9 = iVar9 * 2;
          uVar4 = uVar6;
        }
        else {
          uVar4 = uVar4 - uVar6;
          uVar10 = uVar10 - uVar6;
          iVar9 = iVar9 * 2 + 1;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
LAB_100c1039:
  if ((uVar4 < 0x1000000) && (pbVar3 <= param_2)) {
    return 0;
  }
  return local_4;
}


/* END FUNCTION 0x100c0a40 */
