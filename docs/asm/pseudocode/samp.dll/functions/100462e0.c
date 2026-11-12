/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100462e0
 * Name: FUN_100462e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_100462e0(int param_1,int param_2,int param_3,undefined2 param_4,undefined2 *param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar1 = param_3;
  if ((0 < param_2) && (iVar4 = *(int *)(param_3 + 0xc9 + param_2 * 4), 0x10 < *(int *)(iVar4 + 1)))
  {
    pcVar7 = *(char **)(param_3 + 0xcd + param_2 * 4);
    FUN_10044e50(pcVar7);
    if (*pcVar7 == '\0') {
      *(undefined4 *)(pcVar7 + 0xcd) = *(undefined4 *)(iVar4 + 0xcd + *(int *)(iVar4 + 1) * 4);
      *(undefined2 *)(pcVar7 + 5) = *(undefined2 *)(param_3 + 3 + param_2 * 2);
    }
    else {
      *(undefined2 *)(pcVar7 + 5) = *(undefined2 *)(iVar4 + 3 + *(int *)(iVar4 + 1) * 2);
      *(undefined4 *)(pcVar7 + 0x45) = *(undefined4 *)(iVar4 + 0x41 + *(int *)(iVar4 + 1) * 4);
    }
    *(undefined2 *)(param_3 + 3 + param_2 * 2) =
         *(undefined2 *)(iVar4 + 3 + *(int *)(iVar4 + 1) * 2);
    uVar2 = *(int *)(iVar4 + 1) - 1;
    *(uint *)(iVar4 + 1) = uVar2;
    return uVar2 & 0xffffff00;
  }
  if (param_2 < *(int *)(param_3 + 1)) {
    iVar4 = *(int *)(param_3 + 0xd1 + param_2 * 4);
    if (0x10 < *(int *)(iVar4 + 1)) {
      pcVar7 = *(char **)(param_3 + 0xcd + param_2 * 4);
      if (*pcVar7 == '\0') {
        if (*(int *)(param_5 + 2) == 0) {
          *(undefined4 *)(param_5 + 2) = 3;
          *param_5 = *(undefined2 *)(pcVar7 + 5);
        }
        *(undefined2 *)(pcVar7 + *(int *)(pcVar7 + 1) * 2 + 5) = param_4;
        *(undefined4 *)(pcVar7 + *(int *)(pcVar7 + 1) * 4 + 0xd1) = *(undefined4 *)(iVar4 + 0xcd);
        uVar6 = *(undefined2 *)(iVar4 + 5);
      }
      else {
        *(undefined2 *)(pcVar7 + *(int *)(pcVar7 + 1) * 2 + 5) = *(undefined2 *)(iVar4 + 5);
        *(undefined4 *)(pcVar7 + *(int *)(pcVar7 + 1) * 4 + 0x45) = *(undefined4 *)(iVar4 + 0x45);
        uVar6 = *(undefined2 *)(iVar4 + 7);
      }
      *(undefined2 *)(param_3 + 5 + param_2 * 2) = uVar6;
      *(int *)(pcVar7 + 1) = *(int *)(pcVar7 + 1) + 1;
      uVar2 = FUN_10044dd0(iVar4);
      return uVar2 & 0xffffff00;
    }
    if (*(int *)(param_3 + 1) <= param_2) goto LAB_1004640d;
    pcVar7 = *(char **)(param_3 + 0xcd + param_2 * 4);
    pcVar8 = *(char **)(param_3 + 0xd1 + param_2 * 4);
  }
  else {
LAB_1004640d:
    pcVar7 = *(char **)(param_3 + 0xc9 + param_2 * 4);
    pcVar8 = *(char **)(param_3 + 0xcd + param_2 * 4);
  }
  if (*pcVar7 == '\0') {
    *(undefined2 *)(pcVar7 + *(int *)(pcVar7 + 1) * 2 + 5) = param_4;
    *(undefined4 *)(pcVar7 + *(int *)(pcVar7 + 1) * 4 + 0xd1) = *(undefined4 *)(pcVar8 + 0xcd);
    iVar4 = *(int *)(pcVar7 + 1) + 1;
    *(int *)(pcVar7 + 1) = iVar4;
    iVar5 = 0;
    if (0 < *(int *)(pcVar8 + 1)) {
      _param_4 = pcVar8 + 0xd1;
      pcVar3 = pcVar8 + 5;
      do {
        *(undefined2 *)(pcVar7 + iVar4 * 2 + 5) = *(undefined2 *)pcVar3;
        *(undefined4 *)(pcVar7 + *(int *)(pcVar7 + 1) * 4 + 0xd1) = *(undefined4 *)_param_4;
        iVar4 = *(int *)(pcVar7 + 1) + 1;
        _param_4 = _param_4 + 4;
        *(int *)(pcVar7 + 1) = iVar4;
        iVar5 = iVar5 + 1;
        pcVar3 = pcVar3 + 2;
      } while (iVar5 < *(int *)(pcVar8 + 1));
    }
  }
  else {
    param_3 = 0;
    if (0 < *(int *)(pcVar8 + 1)) {
      _param_4 = pcVar8 + 0x45;
      pcVar3 = pcVar8 + 5;
      do {
        *(undefined2 *)(pcVar7 + *(int *)(pcVar7 + 1) * 2 + 5) = *(undefined2 *)pcVar3;
        *(undefined4 *)(pcVar7 + *(int *)(pcVar7 + 1) * 4 + 0x45) = *(undefined4 *)_param_4;
        *(int *)(pcVar7 + 1) = *(int *)(pcVar7 + 1) + 1;
        _param_4 = _param_4 + 4;
        param_3 = param_3 + 1;
        pcVar3 = pcVar3 + 2;
      } while (param_3 < *(int *)(pcVar8 + 1));
    }
  }
  iVar4 = param_2;
  if (*(int *)(iVar1 + 1) <= param_2) {
    if (param_2 < 1) goto LAB_10046517;
    iVar4 = param_2 + -1;
  }
  FUN_100445d0(iVar4,iVar1);
LAB_10046517:
  if ((param_2 == 0) && (*pcVar7 != '\0')) {
    *(undefined4 *)(param_5 + 2) = 3;
    *param_5 = *(undefined2 *)(pcVar7 + 5);
  }
  if (pcVar8 == *(char **)(param_1 + 0x14)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(pcVar8 + 0xc5);
  }
  if (*pcVar8 != '\0') {
    if (*(int *)(pcVar8 + 0xc9) != 0) {
      *(undefined4 *)(*(int *)(pcVar8 + 0xc9) + 0xc5) = *(undefined4 *)(pcVar8 + 0xc5);
    }
    if (*(int *)(pcVar8 + 0xc5) != 0) {
      *(undefined4 *)(*(int *)(pcVar8 + 0xc5) + 0xc9) = *(undefined4 *)(pcVar8 + 0xc9);
    }
  }
  FUN_10045be0(pcVar8);
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  pcVar8[2] = '\0';
  pcVar8[3] = '\0';
  return (uint)(*(int *)(iVar1 + 1) < 0x10);
}


/* END FUNCTION 0x100462e0 */
