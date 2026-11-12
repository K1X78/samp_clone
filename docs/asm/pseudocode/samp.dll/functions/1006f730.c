/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006f730
 * Name: FUN_1006f730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1006f730(int param_1,char *param_2,int *param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_1b8;
  char *local_1b4;
  int local_1ac;
  int local_1a8 [4];
  char local_198 [136];
  char local_110 [268];
  
  FUN_1008c270();
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4d) = 0;
  local_1b8 = 0;
  local_1ac = 0;
  local_1a8[3] = 0;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_1a8[2] = 0;
  pcVar3 = local_110;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  local_1b4 = param_2;
  if (param_4 == '\0') {
    FUN_1006f260(param_2,local_110,0x100);
  }
  else {
    local_1b4 = (char *)FUN_1006f260(param_2,local_110,0x100);
  }
  pcVar3 = local_110;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == local_110 + 1) {
    return 0xffffffff;
  }
  pcVar4 = local_110;
  pcVar3 = (char *)(param_1 + 0x89);
  do {
    if (3 < local_1b8) break;
    pcVar7 = local_198;
    for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar4 = (char *)FUN_1006f200(pcVar4,local_198,0x80);
    pcVar7 = pcVar3;
    for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    if (param_4 != '\0') {
      _strncpy(pcVar3,local_198,0x80);
      iVar5 = FUN_1006f120(local_198);
      if (local_1a8[local_1b8] < iVar5) {
        local_1a8[local_1b8] = iVar5;
      }
    }
    local_1b8 = local_1b8 + 1;
    pcVar3 = pcVar3 + 0x81;
  } while (pcVar4 != (char *)0x0);
  *(int *)(param_1 + 0x85) = local_1b8;
  *(int *)(*(int *)(param_1 + 0x20) + 0x4d) = local_1b8 + -1;
  local_1b8 = 0;
  while ((local_1b4 != (char *)0x0 && (*local_1b4 != '\0'))) {
    pcVar3 = local_110;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    local_1b4 = (char *)FUN_1006f260(local_1b4,local_110,0x100);
    pcVar3 = local_110;
    bVar2 = false;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != local_110 + 1) {
      iVar5 = 0;
      pcVar3 = local_110;
      do {
        if (*(int *)(param_1 + 0x85) < iVar5) break;
        pcVar4 = local_198;
        for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        *pcVar4 = '\0';
        pcVar3 = (char *)FUN_1006f200(pcVar3,local_198,0x80);
        iVar6 = FUN_1006f120(local_198);
        if (local_1a8[iVar5] < iVar6) {
          local_1a8[iVar5] = iVar6;
        }
        if (iVar5 == 0) {
          FUN_1008a270(local_198,local_1b8,0xffffffff);
          bVar2 = true;
          iVar6 = FUN_1006f1e0();
          local_1ac = local_1ac + iVar6;
        }
        else {
          FUN_10088880(local_1b8,iVar5 + -1,local_198);
        }
        iVar5 = iVar5 + 1;
      } while (pcVar3 != (char *)0x0);
      if (bVar2) {
        local_1b8 = local_1b8 + 1;
      }
    }
    if (local_1b4 == (char *)0x0) break;
    if (*local_1b4 == '\n') {
      local_1b4 = local_1b4 + 1;
    }
  }
  *(int *)(*(int *)(param_1 + 0x20) + 0x51) = local_1a8[0] + 0x14;
  *(int *)(param_1 + 0x28d) = local_1a8[0] + 0x14;
  *(int *)(*(int *)(param_1 + 0x20) + 0x55) = local_1a8[1] + 0x14;
  *(int *)(param_1 + 0x291) = local_1a8[1] + 0x14;
  *(int *)(*(int *)(param_1 + 0x20) + 0x59) = local_1a8[2] + 0x14;
  *(int *)(param_1 + 0x295) = local_1a8[2] + 0x14;
  if (param_3 != (int *)0x0) {
    *param_3 = local_1a8[2] + local_1a8[1] + local_1a8[0] + 0x50 + local_1a8[3];
    param_3[1] = local_1ac;
  }
  return 1;
}


/* END FUNCTION 0x1006f730 */
