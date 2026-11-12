/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007c550
 * Name: FUN_1007c550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1007c550(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((((((*param_3 == 1) && (*param_1 != *param_2)) ||
        ((param_3[1] == 1 && (param_1[1] != param_2[1])))) ||
       ((param_3[2] == 1 && (param_1[4] != param_2[0xc])))) ||
      ((param_3[3] == 1 && (param_1[2] != param_2[2])))) ||
     (((param_3[4] == 1 && ((*(byte *)(param_2 + 3) & 0x40) != 0)) &&
      ((*(uint *)(param_1[0x15] + 0x24) & 0x10000) == 0)))) {
    return 0;
  }
  if (param_3[5] == 1) {
    iVar4 = *(int *)(param_1[0x14] + 0x554);
    iVar6 = 0;
    if (0 < iVar4) {
      piVar3 = *(int **)(param_1[0x14] + 0x550);
      do {
        if (((piVar3[3] == param_1[2]) && (*piVar3 == param_2[4])) && (piVar3[1] == param_2[5]))
        goto LAB_1007c628;
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar6 < iVar4);
    }
  }
  else {
LAB_1007c628:
    if ((param_3[6] != 1) || (param_1[3] == param_2[6])) {
      if (param_3[8] == 1) {
        iVar4 = 0;
        if (0 < param_1[9]) {
          do {
            if ((*(int *)(param_1[8] + iVar4 * 4) == param_2[8]) &&
               ((uint)param_2[9] <= *(uint *)(param_1[0xb] + iVar4 * 4))) goto LAB_1007c679;
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_1[9]);
        }
        return 0;
      }
LAB_1007c679:
      if (param_3[10] == 1) {
        if (((param_3[0xb] == 1) && (param_2[0xe] != 0)) &&
           (cVar2 = FUN_1007c4c0(param_2 + 0xe), cVar2 == '\0')) {
          return 0;
        }
        if (param_2[0xe] != 0) {
          bVar1 = false;
          iVar4 = FUN_10082230(param_2[0xe]);
          if (param_1[6] < 1) {
            return 0;
          }
          iVar6 = 0;
          do {
            iVar5 = FUN_10082230(*(undefined4 *)(param_1[5] + iVar6 * 4));
            if (iVar5 == iVar4) {
              bVar1 = true;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < param_1[6]);
          if (!bVar1) {
            return 0;
          }
        }
      }
      if ((param_3[0xb] == 1) && (param_2[0xe] != 0)) {
        bVar1 = false;
        iVar4 = FUN_10082290(param_2[0xe]);
        iVar6 = 0;
        if (param_1[6] < 1) {
          return 0;
        }
        do {
          iVar5 = FUN_10082290(*(undefined4 *)(param_1[5] + iVar6 * 4));
          if (iVar5 == iVar4) {
            bVar1 = true;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_1[6]);
        if (!bVar1) {
          return 0;
        }
      }
      if (param_3[0xd] == 1) {
        iVar4 = *(int *)(param_1[0x14] + 0x554);
        iVar6 = 0;
        if (0 < iVar4) {
          iVar5 = *(int *)(param_1[0x14] + 0x550);
          do {
            if ((*(int *)(iVar5 + 0xc) == param_1[2]) && (*(int *)(iVar5 + 8) == param_2[0x10]))
            goto LAB_1007c7b6;
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x10;
          } while (iVar6 < iVar4);
        }
        return 0;
      }
LAB_1007c7b6:
      if ((param_3[0xe] != 1) ||
         ((0 < param_1[0xf] && (iVar4 = FUN_1007ba70(param_2 + 0x11,0,param_1[0xf]), iVar4 != -1))))
      {
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x1007c550 */
