/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee9f0
 * Name: FUN_100ee9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ee9f0(int *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *in_EAX;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  long lVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  uint uVar14;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  byte *local_28;
  int local_24;
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined1 uStack_8;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_30 = -1;
  local_34 = -1;
  local_4c = -1;
  local_3c = 0;
  local_38 = 0;
  bVar1 = *in_EAX;
  local_40 = -1;
  local_54 = -1;
  local_50 = -1;
  local_58 = -1;
  local_48 = 0xffffffff;
  iVar4 = -1;
  iVar7 = -1;
  iVar11 = -1;
  local_28 = in_EAX;
  if (bVar1 == 0) {
LAB_100eedf5:
    iStack_18 = 0;
    local_20 = 0;
    local_58 = iVar4;
    local_50 = iVar7;
    local_54 = iVar11;
    iStack_1c = 0;
  }
  else {
    do {
      uVar6 = 0;
      if (5 < local_38) break;
      local_24 = 0;
      do {
        iVar4 = _isalnum((uint)bVar1);
        if (iVar4 != 0) break;
        bVar1 = in_EAX[1];
        in_EAX = in_EAX + 1;
      } while (bVar1 != 0);
      iVar4 = _isalpha((uint)*in_EAX);
      if (iVar4 == 0) {
        iVar4 = _isdigit((uint)*in_EAX);
        if (iVar4 != 0) {
          local_44 = 0;
          if (local_4c == -1) {
            iVar4 = _sscanf((char *)in_EAX,"%02d:%02d:%02d%n",&local_30,&local_34,&local_4c,
                            &local_44);
            if (iVar4 == 3) {
              in_EAX = in_EAX + local_44;
            }
            else {
              if ((local_4c != -1) ||
                 (iVar4 = _sscanf((char *)in_EAX,"%02d:%02d%n",&local_30,&local_34,&local_44),
                 iVar4 != 2)) goto LAB_100eec3f;
              local_4c = 0;
              in_EAX = in_EAX + local_44;
            }
          }
          else {
LAB_100eec3f:
            piVar8 = (int *)FUN_100fdc77();
            iVar4 = *piVar8;
            puVar9 = (undefined4 *)FUN_100fdc77();
            *puVar9 = 0;
            lVar10 = _strtol((char *)in_EAX,(char **)&local_2c,10);
            piVar8 = (int *)FUN_100fdc77();
            iVar7 = *piVar8;
            piVar8 = (int *)FUN_100fdc77();
            if (*piVar8 != iVar4) {
              piVar8 = (int *)FUN_100fdc77();
              *piVar8 = iVar4;
            }
            if (iVar7 != 0) {
              return 0xffffffff;
            }
            iVar7 = FUN_100d9a30(lVar10);
            iVar4 = local_24;
            if (((((local_48 == 0xffffffff) && ((int)local_2c - (int)in_EAX == 4)) &&
                 (iVar7 < 0x579)) && (local_28 < in_EAX)) &&
               ((bVar1 = in_EAX[-1], bVar1 == 0x2b || (bVar1 == 0x2d)))) {
              iVar4 = 1;
              iVar11 = (iVar7 / 100) * 0x3c + iVar7 % 100;
              local_48 = iVar11 * 0x3c;
              if (bVar1 == 0x2b) {
                local_48 = iVar11 * -0x3c;
              }
            }
            if ((((int)local_2c - (int)in_EAX == 8) && (local_58 == -1)) &&
               ((local_54 == -1 && (local_50 == -1)))) {
              local_58 = iVar7 / 10000;
              local_54 = (iVar7 % 10000) / 100 + -1;
              local_50 = iVar7 % 100;
              in_EAX = local_2c;
            }
            else {
              in_EAX = local_2c;
              if (iVar4 == 0) {
                if (local_3c == 0) {
                  if (local_50 != -1) {
                    return 0xffffffff;
                  }
                  bVar3 = false;
                  if ((0 < iVar7) && (iVar7 < 0x20)) {
                    bVar3 = true;
                    local_50 = iVar7;
                  }
                  local_3c = 1;
                  if (bVar3) goto LAB_100eedca;
                }
                else if (local_3c != 1) {
                  return 0xffffffff;
                }
                if (local_58 != -1) {
                  return 0xffffffff;
                }
                local_58 = iVar7;
                if (iVar7 < 0x76c) {
                  if (iVar7 < 0x47) {
                    local_58 = iVar7 + 2000;
                  }
                  else {
                    local_58 = iVar7 + 0x76c;
                  }
                }
                if (local_50 == -1) {
                  local_3c = 0;
                }
              }
            }
          }
        }
      }
      else {
        iStack_1c = 0;
        iStack_18 = 0;
        iStack_14 = 0;
        iStack_10 = 0;
        iStack_c = 0;
        uStack_8 = 0;
        local_7 = 0;
        local_3 = 0;
        local_20 = 0;
        local_1 = 0;
        iVar4 = _sscanf((char *)in_EAX,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",
                        &local_20);
        if (iVar4 != 0) {
          pcVar5 = (char *)&local_20;
          do {
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          uVar6 = (int)pcVar5 - ((int)&local_20 + 1);
        }
        if (local_40 == -1) {
          ppuVar12 = &PTR_s_Monday_10128eac;
          if (uVar6 < 4) {
            ppuVar12 = &PTR_DAT_10128e90;
          }
          iVar4 = 0;
          do {
            iVar7 = FUN_100de830(&local_20,*ppuVar12);
            if (iVar7 != 0) {
              local_40 = iVar4;
              if (iVar4 == -1) goto LAB_100eeb2c;
              goto LAB_100eebb5;
            }
            ppuVar12 = ppuVar12 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 7);
          local_40 = -1;
        }
LAB_100eeb2c:
        if (local_54 == -1) {
          local_54 = 0;
          ppuVar12 = &PTR_DAT_10128ec8;
          do {
            iVar4 = FUN_100de830(&local_20,*ppuVar12);
            if (iVar4 != 0) {
              if (local_54 == -1) goto LAB_100eeb70;
              goto LAB_100eebb5;
            }
            ppuVar12 = ppuVar12 + 1;
            local_54 = local_54 + 1;
          } while (local_54 < 0xc);
          local_54 = -1;
        }
LAB_100eeb70:
        if (local_48 != 0xffffffff) {
          return 0xffffffff;
        }
        puVar13 = &DAT_10128ef8;
        uVar14 = 0;
        while (iVar4 = FUN_100de830(&local_20,puVar13), iVar4 == 0) {
          puVar13 = puVar13 + 0xc;
          uVar14 = uVar14 + 1;
          if (0x43 < uVar14) {
            return 0xffffffff;
          }
        }
        local_48 = *(int *)(puVar13 + 8) * 0x3c;
        if (local_48 == 0xffffffff) {
          return 0xffffffff;
        }
LAB_100eebb5:
        in_EAX = in_EAX + uVar6;
      }
LAB_100eedca:
      bVar1 = *in_EAX;
      local_38 = local_38 + 1;
    } while (bVar1 != 0);
    iStack_18 = local_30;
    local_20 = local_4c;
    iVar4 = local_58;
    iVar7 = local_50;
    iVar11 = local_54;
    iStack_1c = local_34;
    if (local_4c == -1) goto LAB_100eedf5;
  }
  if (((local_50 != -1) && (local_54 != -1)) && (local_58 != -1)) {
    if (0x7f5 < local_58) {
LAB_100eeec8:
      *param_1 = 0x7fffffff;
      return 1;
    }
    if (local_58 < 0x7b2) {
      *param_1 = 0;
      return 2;
    }
    if (((local_50 < 0x20) && (local_54 < 0xc)) &&
       ((iStack_18 < 0x18 && ((iStack_1c < 0x3c && (local_20 < 0x3d)))))) {
      iStack_c = local_58 + -0x76c;
      iStack_14 = local_50;
      iStack_10 = local_54;
      iVar4 = FUN_100ee930();
      if (iVar4 != -1) {
        local_48 = (local_48 == 0xffffffff) - 1 & local_48;
        if ((0 < (int)local_48) && ((int)(0x7fffffff - local_48) < iVar4)) goto LAB_100eeec8;
        iVar4 = iVar4 + local_48;
      }
      *param_1 = iVar4;
      return 0;
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x100ee9f0 */
