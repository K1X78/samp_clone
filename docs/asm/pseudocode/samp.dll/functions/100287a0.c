/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100287a0
 * Name: FUN_100287a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100287a0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((0 < param_2) && (iVar3 = *(int *)(param_3 + 0x89 + param_2 * 4), 8 < *(int *)(iVar3 + 1))) {
    pcVar5 = *(char **)(param_3 + 0x8d + param_2 * 4);
    FUN_10027960(pcVar5);
    if (*pcVar5 == '\0') {
      *(undefined4 *)(pcVar5 + 0x8d) = *(undefined4 *)(iVar3 + 0x8d + *(int *)(iVar3 + 1) * 4);
      *(undefined4 *)(pcVar5 + 5) = *(undefined4 *)(param_3 + 1 + param_2 * 4);
    }
    else {
      *(undefined4 *)(pcVar5 + 5) = *(undefined4 *)(iVar3 + 1 + *(int *)(iVar3 + 1) * 4);
      *(undefined4 *)(pcVar5 + 0x45) = *(undefined4 *)(iVar3 + 0x41 + *(int *)(iVar3 + 1) * 4);
    }
    *(undefined4 *)(param_3 + 1 + param_2 * 4) =
         *(undefined4 *)(iVar3 + 1 + *(int *)(iVar3 + 1) * 4);
    uVar1 = *(int *)(iVar3 + 1) - 1;
    *(uint *)(iVar3 + 1) = uVar1;
    return uVar1 & 0xffffff00;
  }
  if (param_2 < *(int *)(param_3 + 1)) {
    iVar3 = *(int *)(param_3 + 0x91 + param_2 * 4);
    if (8 < *(int *)(iVar3 + 1)) {
      pcVar5 = *(char **)(param_3 + 0x8d + param_2 * 4);
      if (*pcVar5 == '\0') {
        if (param_5[2] == 0) {
          param_5[2] = 3;
          *param_5 = *(undefined4 *)(pcVar5 + 5);
        }
        *(int *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 5) = param_4;
        *(undefined4 *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 0x91) = *(undefined4 *)(iVar3 + 0x8d);
        uVar4 = *(undefined4 *)(iVar3 + 5);
      }
      else {
        *(undefined4 *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 5) = *(undefined4 *)(iVar3 + 5);
        *(undefined4 *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 0x45) = *(undefined4 *)(iVar3 + 0x45);
        uVar4 = *(undefined4 *)(iVar3 + 9);
      }
      *(undefined4 *)(param_3 + 5 + param_2 * 4) = uVar4;
      *(int *)(pcVar5 + 1) = *(int *)(pcVar5 + 1) + 1;
      uVar1 = FUN_100278e0(iVar3);
      return uVar1 & 0xffffff00;
    }
    if (*(int *)(param_3 + 1) <= param_2) goto LAB_100288be;
    pcVar5 = *(char **)(param_3 + 0x8d + param_2 * 4);
    pcVar6 = *(char **)(param_3 + 0x91 + param_2 * 4);
  }
  else {
LAB_100288be:
    pcVar5 = *(char **)(param_3 + 0x89 + param_2 * 4);
    pcVar6 = *(char **)(param_3 + 0x8d + param_2 * 4);
  }
  if (*pcVar5 == '\0') {
    *(int *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 5) = param_4;
    *(undefined4 *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 0x91) = *(undefined4 *)(pcVar6 + 0x8d);
    iVar3 = *(int *)(pcVar5 + 1) + 1;
    *(int *)(pcVar5 + 1) = iVar3;
    param_4 = 0;
    if (0 < *(int *)(pcVar6 + 1)) {
      pcVar2 = pcVar6 + 0x91;
      do {
        *(undefined4 *)(pcVar5 + iVar3 * 4 + 5) = *(undefined4 *)(pcVar2 + -0x8c);
        *(undefined4 *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 0x91) = *(undefined4 *)pcVar2;
        iVar3 = *(int *)(pcVar5 + 1) + 1;
        param_4 = param_4 + 1;
        *(int *)(pcVar5 + 1) = iVar3;
        pcVar2 = pcVar2 + 4;
      } while (param_4 < *(int *)(pcVar6 + 1));
    }
  }
  else {
    param_4 = 0;
    if (0 < *(int *)(pcVar6 + 1)) {
      pcVar2 = pcVar6 + 0x45;
      do {
        *(undefined4 *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 5) = *(undefined4 *)(pcVar2 + -0x40);
        *(undefined4 *)(pcVar5 + *(int *)(pcVar5 + 1) * 4 + 0x45) = *(undefined4 *)pcVar2;
        *(int *)(pcVar5 + 1) = *(int *)(pcVar5 + 1) + 1;
        param_4 = param_4 + 1;
        pcVar2 = pcVar2 + 4;
      } while (param_4 < *(int *)(pcVar6 + 1));
    }
  }
  iVar3 = param_2;
  if (*(int *)(param_3 + 1) <= param_2) {
    if (param_2 < 1) goto LAB_1002899d;
    iVar3 = param_2 + -1;
  }
  FUN_10027290(iVar3,param_3);
LAB_1002899d:
  if ((param_2 == 0) && (*pcVar5 != '\0')) {
    param_5[2] = 3;
    *param_5 = *(undefined4 *)(pcVar5 + 5);
  }
  if (pcVar6 == *(char **)(param_1 + 0x14)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(pcVar6 + 0x85);
  }
  if (*pcVar6 != '\0') {
    if (*(int *)(pcVar6 + 0x89) != 0) {
      *(undefined4 *)(*(int *)(pcVar6 + 0x89) + 0x85) = *(undefined4 *)(pcVar6 + 0x85);
    }
    if (*(int *)(pcVar6 + 0x85) != 0) {
      *(undefined4 *)(*(int *)(pcVar6 + 0x85) + 0x89) = *(undefined4 *)(pcVar6 + 0x89);
    }
  }
  FUN_10028310(pcVar6);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  return (uint)(*(int *)(param_3 + 1) < 8);
}


/* END FUNCTION 0x100287a0 */
