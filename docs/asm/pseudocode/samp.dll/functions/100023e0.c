/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100023e0
 * Name: FUN_100023e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100023e0(int param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = FUN_10017380(*(undefined4 *)(param_1 + 0x1a),param_2);
  uVar6 = 0;
  if (iVar4 != 0) {
    pcVar3 = pcVar3 + ((iVar4 + 1) - (int)(param_2 + 1));
    pcVar5 = _strchr(pcVar3,10);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = *(char **)(param_1 + 0x1a);
      do {
        pcVar5 = pcVar2;
        pcVar2 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
    }
    uVar6 = (int)pcVar5 - (int)pcVar3;
    if ((int)uVar6 <= param_4) {
      pcVar5 = param_3;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar5 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      }
      param_3[uVar6] = '\0';
      return CONCAT31((int3)(uVar6 >> 8),1);
    }
  }
  return uVar6 & 0xffffff00;
}


/* END FUNCTION 0x100023e0 */
