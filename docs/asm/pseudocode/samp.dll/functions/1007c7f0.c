/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007c7f0
 * Name: FUN_1007c7f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_1007c7f0(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float local_18;
  int local_14;
  
  local_18 = 0.0;
  if (*param_1 == *param_2) {
    local_18 = 1000.0;
  }
  if (param_1[1] == param_2[1]) {
    local_18 = local_18 + 100.0;
  }
  if (param_1[1] == 1) {
    local_18 = local_18 + 0.1;
  }
  if (param_1[4] == param_2[0xc]) {
    local_18 = local_18 + 10.0;
  }
  if (param_1[2] == param_2[2]) {
    local_18 = local_18 + 1.0;
  }
  else {
    iVar4 = FUN_10082130(param_1[2]);
    iVar5 = FUN_10082130(param_2[2]);
    uVar2 = iVar4 - iVar5 >> 0x1f;
    fVar1 = 0.9 - (float)(int)((iVar4 - iVar5 ^ uVar2) - uVar2) * 0.2;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    local_18 = fVar1 + local_18;
  }
  if (param_1[4] == 0) {
    uVar2 = FUN_10082130(*(undefined4 *)(param_3 + 0xc));
    if (uVar2 < 8) {
      bVar6 = param_1[2] == 0x16;
    }
    else {
      bVar6 = param_1[2] == *(int *)(param_3 + 0xc);
    }
    if (bVar6) {
      local_18 = local_18 + 0.1;
    }
  }
  if (((param_2[3] & 0xc0U) != 0) && ((*(uint *)(param_1[0x15] + 0x24) & 0x10000) != 0)) {
    local_18 = local_18 + 1.0;
  }
  if ((*(uint *)(param_1[0x15] + 0x24) & 0x10000) != 0) {
    local_18 = local_18 + 0.1;
  }
  local_14 = *(int *)(param_1[0x14] + 0x554);
  bVar6 = false;
  if (0 < local_14) {
    piVar3 = *(int **)(param_1[0x14] + 0x550);
    do {
      if (((piVar3[3] == param_1[2]) && (*piVar3 == param_2[4])) && (piVar3[1] == param_2[5])) {
        bVar6 = true;
      }
      piVar3 = piVar3 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (bVar6) {
      local_18 = local_18 + 1.0;
    }
  }
  iVar4 = param_1[3];
  if (iVar4 == param_2[6]) {
    local_18 = local_18 + 1.0;
  }
  else {
    iVar5 = FUN_10082130(param_2[6]);
    iVar4 = FUN_10082130(iVar4);
    uVar2 = iVar4 - iVar5 >> 0x1f;
    fVar1 = 0.9 - (float)(int)((iVar4 - iVar5 ^ uVar2) - uVar2) * 0.2;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    local_18 = fVar1 + local_18;
  }
  if (param_1[3] == param_1[2]) {
    local_18 = local_18 + 0.1;
  }
  iVar4 = 0;
  if (0 < param_1[9]) {
    do {
      if ((*(int *)(param_1[8] + iVar4 * 4) == param_2[8]) &&
         ((uint)param_2[9] <= *(uint *)(param_1[0xb] + iVar4 * 4))) {
        local_18 = local_18 + 1.0;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[9]);
  }
  if ((0 < param_1[6]) && (iVar4 = FUN_1007ba20(param_2 + 0xe,0,param_1[6]), iVar4 != -1)) {
    local_18 = local_18 + 1.0;
  }
  iVar4 = *(int *)(param_1[0x14] + 0x554);
  bVar6 = false;
  if (0 < iVar4) {
    iVar5 = *(int *)(param_1[0x14] + 0x550);
    do {
      if ((*(int *)(iVar5 + 0xc) == param_1[2]) && (*(int *)(iVar5 + 8) == param_2[0x10])) {
        bVar6 = true;
      }
      iVar5 = iVar5 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (bVar6) {
      local_18 = local_18 + 1.0;
    }
  }
  if ((0 < param_1[0xf]) && (iVar4 = FUN_1007ba70(param_2 + 0x11,0,param_1[0xf]), iVar4 != -1)) {
    return (float10)local_18 + (float10)1.0;
  }
  return (float10)local_18;
}


/* END FUNCTION 0x1007c7f0 */
