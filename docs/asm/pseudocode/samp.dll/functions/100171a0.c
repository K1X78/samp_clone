/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100171a0
 * Name: FUN_100171a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100171a0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_20c;
  int local_208;
  char local_204 [516];
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_20c = (int)pcVar2 - (int)(param_1 + 1);
  iVar8 = 0;
  pcVar2 = local_204;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  local_208 = 1;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar6 = param_2;
  if (0x200 < (uint)((int)pcVar2 - (int)(param_1 + 1))) {
    return -1;
  }
  for (; param_2 < local_20c; local_20c = local_20c - iVar3) {
    cVar1 = param_1[iVar8 + param_2];
    iVar3 = param_2;
    while ((cVar1 != ' ' && (iVar3 != 0))) {
      iVar3 = iVar3 + -1;
      cVar1 = param_1[iVar8 + iVar3];
    }
    if (param_3 < (iVar6 - iVar8) - iVar3) {
      pcVar2 = param_1 + iVar6;
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4[(int)(local_204 + -(int)pcVar2)] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_1[iVar6 + 1] = '\0';
      *pcVar2 = '\n';
      pcVar2 = local_204;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar2 - (int)local_204;
      pcVar2 = param_1 + -1;
      do {
        pcVar4 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar4 != '\0');
      pcVar4 = local_204;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar2 = pcVar2 + 1;
      }
      iVar8 = iVar6 + 1;
      iVar3 = param_2;
    }
    else {
      iVar8 = iVar8 + iVar3;
      param_1[iVar8] = '\n';
    }
    local_208 = local_208 + 1;
    iVar6 = iVar8 + param_2;
  }
  return local_208;
}


/* END FUNCTION 0x100171a0 */
