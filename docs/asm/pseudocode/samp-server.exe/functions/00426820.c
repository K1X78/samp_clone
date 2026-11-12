/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426820
 * Name: FUN_00426820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00426820(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  uint local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  int *local_4;
  
  piVar7 = (int *)param_2[6];
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  local_14 = *param_1;
  local_4 = piVar7;
  if (*(int *)(local_14 + 0x50) < *piVar7) {
    FUN_00418b00((undefined **)"too many terms in ORDER BY clause");
    return 1;
  }
  iVar3 = 0;
  if (0 < *piVar7) {
    iVar5 = 0;
    do {
      *(undefined1 *)(piVar7[3] + 0xd + iVar5) = 0;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x14;
    } while (iVar3 < *piVar7);
  }
  param_2[8] = 0;
  iVar3 = 1;
  if (param_2[7] == 0) goto LAB_004268c0;
  do {
    *(undefined4 **)(param_2[7] + 0x20) = param_2;
    param_2 = (undefined4 *)param_2[7];
  } while (param_2[7] != 0);
  do {
    piVar8 = (int *)*param_2;
    piVar9 = (int *)piVar7[3];
    local_8 = 0;
    local_10 = 0;
    local_c = piVar8;
    if (0 < *piVar7) {
      do {
        local_18 = 0xffffffff;
        if (*(char *)((int)piVar9 + 0xd) == '\0') {
          pcVar6 = (char *)*piVar9;
          iVar3 = FUN_0040e6e0(pcVar6,&local_18);
          if (iVar3 == 0) {
            local_18 = FUN_0040e340(piVar8);
            bVar10 = false;
            if (local_18 == 0) {
              pcVar4 = (char *)FUN_00420310(local_14,(undefined4 *)pcVar6,0);
              if (*(char *)(local_14 + 0x1e) == '\0') {
                local_18 = FUN_00426770(param_1,pcVar4);
              }
              FUN_004158d0(local_14,(int)pcVar4);
              piVar8 = local_c;
              goto LAB_0042699b;
            }
          }
          else {
            if (((int)local_18 < 1) || (*piVar8 < (int)local_18)) {
              FUN_00419e90();
              return 1;
            }
LAB_0042699b:
            bVar10 = local_18 == 0;
          }
          iVar3 = local_14;
          if (bVar10 || (int)local_18 < 0) {
            local_8 = 1;
          }
          else {
            uVar2 = *(undefined4 *)(pcVar6 + 0x14);
            uVar1 = *(ushort *)(pcVar6 + 2);
            FUN_004158d0(local_14,(int)pcVar6);
            iVar3 = FUN_0041a000((void *)0x0,iVar3,0x81);
            *piVar9 = iVar3;
            if (iVar3 == 0) {
              return 1;
            }
            *(undefined4 *)(iVar3 + 0x14) = uVar2;
            *(ushort *)(iVar3 + 2) = *(ushort *)(iVar3 + 2) | uVar1 & 0x100 | 0x400;
            *(uint *)(iVar3 + 4) = local_18;
            *(undefined2 *)((int)piVar9 + 0xe) = (undefined2)local_18;
            *(undefined1 *)((int)piVar9 + 0xd) = 1;
            piVar7 = local_4;
            piVar8 = local_c;
          }
        }
        local_10 = local_10 + 1;
        piVar9 = piVar9 + 5;
      } while (local_10 < *piVar7);
    }
    param_2 = (undefined4 *)param_2[8];
    iVar3 = local_8;
    if (param_2 == (undefined4 *)0x0) break;
LAB_004268c0:
  } while (iVar3 != 0);
  iVar3 = 0;
  if (0 < *piVar7) {
    pcVar6 = (char *)(piVar7[3] + 0xd);
    do {
      iVar3 = iVar3 + 1;
      if (*pcVar6 == '\0') {
        FUN_00418b00((undefined **)"%r ORDER BY term does not match any column in the result set");
        return 1;
      }
      pcVar6 = pcVar6 + 0x14;
    } while (iVar3 < *piVar7);
  }
  return 0;
}


/* END FUNCTION 0x00426820 */
