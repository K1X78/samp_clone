/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004682d0
 * Name: FUN_004682d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_004682d0(void *this,char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar4 = FUN_00468c80(*(char **)((int)this + 0x7213),param_1);
  uVar5 = 0;
  if (pcVar4 != (char *)0x0) {
    pcVar4 = pcVar4 + (int)(pcVar3 + (1 - (int)(param_1 + 1)));
    pcVar3 = _strchr(pcVar4,10);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = *(char **)((int)this + 0x7213);
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
    }
    uVar5 = (int)pcVar3 - (int)pcVar4;
    if ((int)uVar5 <= param_3) {
      pcVar3 = param_2;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      param_2[uVar5] = '\0';
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
  return uVar5 & 0xffffff00;
}


/* END FUNCTION 0x004682d0 */
