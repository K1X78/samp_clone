/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027bb0
 * Name: FUN_10027bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10027bb0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  int *local_c;
  int *local_8;
  uint local_4;
  
  local_4 = 0;
  if (DAT_10156b94 != 0) {
    local_c = (int *)*DAT_10156b9c;
    local_8 = (int *)(DAT_10156ba0 + 4);
    do {
      iVar6 = *local_c;
      if (iVar6 != -1) {
        pcVar2 = *(char **)(*(int *)*param_1 + iVar6 * 4);
        if ((*pcVar2 == '\x01') && (**(char **)(*(int *)*param_2 + iVar6 * 4) == '\0')) {
          return 1;
        }
        if ((*pcVar2 == '\0') && (**(char **)(*(int *)*param_2 + iVar6 * 4) == '\x01')) {
          return 0xffffffff;
        }
        iVar3 = *(int *)(*DAT_10156b98 + 0x20 + iVar6 * 0x24);
        iVar6 = *(int *)(*(int *)*param_2 + iVar6 * 4);
        if (*local_8 == 0) {
          if (iVar3 == 0) {
            if (*(int *)(iVar6 + 1) < *(int *)(pcVar2 + 1)) {
              return 1;
            }
            if (*(int *)(pcVar2 + 1) < *(int *)(iVar6 + 1)) {
              return 0xffffffff;
            }
          }
          else {
            pbVar9 = *(byte **)(iVar6 + 5);
            pbVar7 = *(byte **)(pcVar2 + 5);
            pbVar5 = pbVar7;
            pbVar8 = pbVar9;
            do {
              bVar1 = *pbVar5;
              bVar10 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_10027ca5:
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_10027caa;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar10 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_10027ca5;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_10027caa:
            if (0 < iVar6) {
              return 1;
            }
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_10027cd6:
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_10027cdb;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_10027cd6;
              pbVar7 = pbVar7 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_10027cdb:
            if (iVar6 < 0) {
              return 0xffffffff;
            }
          }
        }
        else {
          if (iVar3 == 0) {
            iVar3 = *(int *)(pcVar2 + 1);
            iVar4 = *(int *)(iVar6 + 1);
            bVar11 = SBORROW4(iVar3,iVar4);
            iVar6 = iVar3 - iVar4;
            bVar10 = iVar3 == iVar4;
            if (iVar3 < iVar4) {
              return 1;
            }
          }
          else {
            pbVar9 = *(byte **)(iVar6 + 5);
            pbVar7 = *(byte **)(pcVar2 + 5);
            pbVar5 = pbVar7;
            pbVar8 = pbVar9;
            do {
              bVar1 = *pbVar5;
              bVar10 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_10027d34:
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_10027d39;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar10 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_10027d34;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_10027d39:
            if (iVar6 < 0) {
              return 1;
            }
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_10027d65:
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_10027d6a;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_10027d65;
              pbVar7 = pbVar7 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_10027d6a:
            bVar11 = false;
            bVar10 = iVar6 == 0;
          }
          if (!bVar10 && bVar11 == iVar6 < 0) {
            return 0xffffffff;
          }
        }
      }
      local_4 = local_4 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 2;
    } while (local_4 < DAT_10156b94);
  }
  return 0;
}


/* END FUNCTION 0x10027bb0 */
