/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428700
 * Name: FUN_00428700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_00428700(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,char param_5)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined1 *extraout_ECX;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool local_22;
  byte local_21;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  int local_4;
  
  iVar5 = param_1;
  iVar7 = *(int *)(param_1 + 0xc);
  iVar11 = 0;
  local_20 = 0;
  local_1c = 0;
  local_c = iVar7;
  local_10 = (undefined4 *)FUN_0040ca90();
  puVar3 = (undefined4 *)FUN_00408f80();
  if (local_10 <= puVar3) {
    uVar4 = FUN_0041d790();
    return uVar4;
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = FUN_00423650(*(int *)(iVar7 + 0x44));
    if (uVar4 != 0) {
      return uVar4;
    }
    iVar11 = DAT_004ca204 / (int)(uint)*(ushort *)(iVar5 + 0x16);
    iVar7 = *(int *)(iVar5 + 0x28);
    iVar10 = iVar7 + 1;
    *(int *)(iVar5 + 0x28) = iVar10;
    if (iVar10 == iVar11 + 1) {
      *(int *)(iVar5 + 0x28) = iVar7 + 2;
    }
    if (*(char *)(iVar5 + 0x14) != '\0') {
      pvVar1 = *(void **)(iVar5 + 0x28);
      pvVar8 = (void *)FUN_0040c740((int)pvVar1);
      if (pvVar8 == pvVar1) {
        param_1 = 0;
        uVar4 = FUN_004238d0(pvVar1,&param_1);
        if (uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_00423650(*(int *)(param_1 + 0x44));
        FUN_00427610();
        if (uVar4 != 0) {
          return uVar4;
        }
        iVar11 = DAT_004ca204 / (int)(uint)*(ushort *)(iVar5 + 0x16);
        iVar7 = *(int *)(iVar5 + 0x28);
        iVar10 = iVar7 + 1;
        *(int *)(iVar5 + 0x28) = iVar10;
        if (iVar10 == iVar11 + 1) {
          *(int *)(iVar5 + 0x28) = iVar7 + 2;
        }
      }
    }
    FUN_00408fa0((undefined1 *)(*(int *)(*(int *)(iVar5 + 0xc) + 0x40) + 0x1c));
    piVar2 = param_2;
    pvVar1 = *(void **)(iVar5 + 0x28);
    *param_3 = pvVar1;
    uVar4 = FUN_004238d0(pvVar1,param_2);
    if (uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_00423650(*(int *)(*piVar2 + 0x44));
    if (uVar4 != 0) {
      FUN_00427610();
    }
  }
  else {
    local_22 = false;
    if ((param_5 != '\0') && (param_4 <= local_10)) {
      uVar4 = FUN_00427530(&local_21,(undefined4 *)0x0);
      if (uVar4 != 0) {
        return uVar4;
      }
      local_22 = local_21 == 2;
      *param_3 = param_4;
    }
    uVar4 = FUN_00423650(*(int *)(iVar7 + 0x44));
    if (uVar4 != 0) {
      return uVar4;
    }
    FUN_00408fa0((undefined1 *)(*(int *)(iVar7 + 0x40) + 0x24));
    do {
      local_1c = iVar11;
      if (iVar11 == 0) {
        local_14 = (undefined4 *)FUN_00408f80();
      }
      else {
        local_14 = (undefined4 *)FUN_00408f80();
      }
      if (local_10 < local_14) {
        uVar4 = FUN_0041d790();
      }
      else {
        uVar4 = FUN_004238d0(local_14,&local_20);
        iVar11 = local_20;
      }
      if (uVar4 != 0) {
        local_20 = 0;
        break;
      }
      puVar3 = *(undefined4 **)(iVar11 + 0x40);
      local_8 = puVar3;
      local_18 = FUN_00408f80();
      if ((local_18 != 0) || (local_22)) {
        if ((*(ushort *)(iVar5 + 0x18) >> 2) - 2 < local_18) {
          uVar4 = FUN_0041d790();
          break;
        }
        if ((local_22) && (param_4 == local_14)) {
          *param_2 = iVar11;
          local_22 = false;
          uVar4 = FUN_00423650(*(int *)(iVar11 + 0x44));
          if (uVar4 != 0) break;
          if (local_18 == 0) {
            if (local_1c == 0) {
              *(undefined4 *)(*(int *)(local_c + 0x40) + 0x20) = **(undefined4 **)(iVar11 + 0x40);
              local_20 = 0;
              iVar11 = local_20;
            }
            else {
              local_20 = 0;
              **(undefined4 **)(local_1c + 0x40) = **(undefined4 **)(iVar11 + 0x40);
              iVar11 = 0;
            }
          }
          else {
            local_8 = (undefined4 *)FUN_00408f80();
            if (local_10 < local_8) {
              uVar4 = FUN_0041d790();
              break;
            }
            uVar4 = FUN_004238d0(local_8,&local_4);
            iVar7 = local_4;
            if (uVar4 != 0) break;
            uVar4 = FUN_00423650(*(int *)(local_4 + 0x44));
            iVar5 = local_20;
            if (uVar4 != 0) {
              FUN_00427610();
              break;
            }
            **(undefined4 **)(iVar7 + 0x40) = **(undefined4 **)(local_20 + 0x40);
            iVar11 = FUN_00408fa0((undefined1 *)(*(int *)(iVar7 + 0x40) + 4));
            puVar3 = (undefined4 *)(*(int *)(iVar5 + 0x40) + 0xc);
            puVar14 = (undefined4 *)(*(int *)(iVar7 + 0x40) + 8);
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar14 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar14 = puVar14 + 1;
            }
            FUN_00427610();
            if (local_1c == 0) {
              puVar9 = (undefined1 *)(*(int *)(local_c + 0x40) + 0x20);
            }
            else {
              uVar4 = FUN_00423650(*(int *)(local_1c + 0x44));
              if (uVar4 != 0) break;
              puVar9 = *(undefined1 **)(local_1c + 0x40);
            }
            FUN_00408fa0(puVar9);
            local_20 = 0;
            iVar11 = 0;
            iVar5 = param_1;
          }
        }
        else if (local_18 != 0) {
          uVar4 = FUN_00423650(*(int *)(iVar11 + 0x44));
          if (uVar4 != 0) break;
          uVar13 = 0;
          if (param_4 != (undefined4 *)0x0) {
            iVar7 = FUN_00408f80();
            iVar7 = iVar7 - (int)param_4;
            if (iVar7 < 0) {
              iVar7 = -iVar7;
            }
            uVar12 = 1;
            iVar11 = local_20;
            puVar3 = local_8;
            if (1 < local_18) {
              local_14 = local_8 + 3;
              do {
                iVar5 = FUN_00408f80();
                iVar5 = iVar5 - (int)param_4;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                if (iVar5 < iVar7) {
                  uVar13 = uVar12;
                  iVar7 = iVar5;
                }
                uVar12 = uVar12 + 1;
                local_14 = local_14 + 1;
                iVar11 = local_20;
                puVar3 = local_8;
              } while (uVar12 < local_18);
            }
          }
          local_8 = puVar3 + uVar13 + 2;
          puVar6 = (undefined4 *)FUN_00408f80();
          puVar14 = param_3;
          if (local_10 < puVar6) {
            uVar4 = FUN_0041d790();
            break;
          }
          if ((!local_22) || (iVar5 = param_1, puVar6 == param_4)) {
            *param_3 = puVar6;
            if (uVar13 < local_18 - 1) {
              *local_8 = puVar3[local_18 + 1];
            }
            FUN_00408fa0((undefined1 *)(puVar3 + 1));
            pvVar1 = (void *)*puVar14;
            FUN_0040c6d0();
            piVar2 = param_2;
            uVar4 = FUN_004238d0(pvVar1,param_2);
            if ((uVar4 == 0) && (uVar4 = FUN_00423650(*(int *)(*piVar2 + 0x44)), uVar4 != 0)) {
              FUN_00427610();
            }
            local_22 = false;
            iVar11 = local_20;
            iVar5 = param_1;
          }
        }
      }
      else {
        uVar4 = FUN_00423650(*(int *)(iVar11 + 0x44));
        if (uVar4 != 0) break;
        *param_3 = local_14;
        *(undefined4 *)(*(int *)(local_c + 0x40) + 0x20) = **(undefined4 **)(iVar11 + 0x40);
        *param_2 = iVar11;
        local_20 = 0;
        iVar11 = local_20;
      }
      FUN_00427610();
      local_1c = 0;
    } while (local_22);
  }
  FUN_00427610();
  FUN_00427610();
  if (uVar4 != 0) {
    *param_2 = 0;
    return uVar4;
  }
  iVar7 = thunk_FUN_0040a5f0();
  if (iVar7 < 2) {
    *extraout_ECX = 0;
    return 0;
  }
  FUN_00427610();
  uVar4 = FUN_0041d790();
  return uVar4;
}


/* END FUNCTION 0x00428700 */
