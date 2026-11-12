/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10029960
 * Name: FUN_10029960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10029960(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  uint local_c;
  
  uVar2 = param_2[1];
  if (uVar2 == 0) {
    FUN_10027110(param_3);
    FUN_100297a0(param_4,param_5);
    return;
  }
  local_c = 0;
  cVar8 = (char)param_5;
  if (uVar2 != 0) {
    piVar5 = (int *)*param_2;
    piVar9 = (int *)(param_6 + 4);
    do {
      iVar6 = *piVar5;
      pcVar11 = *(char **)(*param_5 + iVar6 * 4);
      if ((*pcVar11 == '\0') && (iVar6 != -1)) {
        switch(piVar9[1]) {
        case 0:
          iVar10 = *(int *)(*(int *)(param_1 + 0x18) + 0x20 + iVar6 * 0x24);
          if (iVar10 == 0) {
            iVar6 = *(int *)(pcVar11 + 1) - *(int *)(*piVar9 + 1);
LAB_10029a4b:
            cVar8 = iVar6 == 0;
            break;
          }
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) {
            pbVar12 = *(byte **)(*piVar9 + 5);
            pbVar7 = *(byte **)(pcVar11 + 5);
            do {
              bVar1 = *pbVar7;
              bVar14 = bVar1 < *pbVar12;
              if (bVar1 != *pbVar12) {
LAB_10029a44:
                iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_10029a4b;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar14 = bVar1 < pbVar12[1];
              if (bVar1 != pbVar12[1]) goto LAB_10029a44;
              pbVar7 = pbVar7 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
            goto LAB_10029a4b;
          }
LAB_10029a9b:
          if (iVar10 != 1) break;
          if (*(int *)(pcVar11 + 1) != *(int *)(*piVar9 + 1)) {
            return;
          }
          iVar6 = *(int *)(*param_5 + iVar6 * 4);
          iVar10 = *(int *)(iVar6 + 1);
          bVar14 = true;
          pcVar11 = *(char **)(iVar6 + 5);
          pcVar13 = *(char **)(*piVar9 + 5);
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar14 = *pcVar11 == *pcVar13;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          } while (bVar14);
          if (!bVar14) {
            return;
          }
          cVar8 = '\x01';
          goto LAB_10029a56;
        case 1:
          iVar10 = *(int *)(*(int *)(param_1 + 0x18) + 0x20 + iVar6 * 0x24);
          if (iVar10 == 0) {
            cVar8 = *(int *)(pcVar11 + 1) != *(int *)(*piVar9 + 1);
          }
          else {
            iVar10 = iVar10 + -1;
            if (iVar10 != 0) goto LAB_10029a9b;
            pbVar12 = *(byte **)(*piVar9 + 5);
            pbVar7 = *(byte **)(pcVar11 + 5);
            do {
              bVar1 = *pbVar7;
              bVar14 = bVar1 < *pbVar12;
              if (bVar1 != *pbVar12) {
LAB_10029b00:
                cVar8 = 1 - bVar14 != (uint)(bVar14 != 0);
                goto switchD_100299f6_default;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar14 = bVar1 < pbVar12[1];
              if (bVar1 != pbVar12[1]) goto LAB_10029b00;
              pbVar7 = pbVar7 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar1 != 0);
            cVar8 = '\0';
          }
          break;
        case 2:
          iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x20 + iVar6 * 0x24);
          if (iVar6 == 0) {
            cVar8 = *(int *)(*piVar9 + 1) < *(int *)(pcVar11 + 1);
          }
          else if (iVar6 == 1) {
            pbVar12 = *(byte **)(*piVar9 + 5);
            pbVar7 = *(byte **)(pcVar11 + 5);
            do {
              bVar1 = *pbVar7;
              bVar14 = bVar1 < *pbVar12;
              if (bVar1 != *pbVar12) {
LAB_10029b6d:
                uVar3 = (uint)(bVar14 != 0);
                uVar4 = 1 - bVar14;
                cVar8 = uVar4 != uVar3 && -1 < (int)(uVar4 - uVar3);
                goto switchD_100299f6_default;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar14 = bVar1 < pbVar12[1];
              if (bVar1 != pbVar12[1]) goto LAB_10029b6d;
              pbVar7 = pbVar7 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar1 != 0);
            cVar8 = '\0';
          }
          break;
        case 3:
          iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x20 + iVar6 * 0x24);
          if (iVar6 == 0) {
            cVar8 = *(int *)(pcVar11 + 1) < *(int *)(*piVar9 + 1);
          }
          else if (iVar6 == 1) {
            pbVar12 = *(byte **)(*piVar9 + 5);
            pbVar7 = *(byte **)(pcVar11 + 5);
            do {
              bVar1 = *pbVar7;
              bVar14 = bVar1 < *pbVar12;
              if (bVar1 != *pbVar12) {
LAB_10029bdc:
                cVar8 = (int)((1 - (uint)bVar14) - (uint)(bVar14 != 0)) < 0;
                goto switchD_100299f6_default;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar14 = bVar1 < pbVar12[1];
              if (bVar1 != pbVar12[1]) goto LAB_10029bdc;
              pbVar7 = pbVar7 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar1 != 0);
            cVar8 = '\0';
          }
          break;
        case 4:
          goto switchD_100299f6_caseD_4;
        case 5:
          goto switchD_100299f6_caseD_5;
        }
switchD_100299f6_default:
        if (cVar8 == '\0') {
          return;
        }
      }
      else {
        if (piVar9[1] != 4) {
          return;
        }
switchD_100299f6_caseD_5:
        cVar8 = '\x01';
      }
LAB_10029a56:
      local_c = local_c + 1;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 3;
    } while (local_c < uVar2);
  }
  if (cVar8 != '\0') {
    FUN_10027110(param_3);
    FUN_100297a0(param_4,param_5);
  }
switchD_100299f6_caseD_4:
  return;
}


/* END FUNCTION 0x10029960 */
