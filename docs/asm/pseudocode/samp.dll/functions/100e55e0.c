/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e55e0
 * Name: FUN_100e55e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e55e0(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_2 + 1);
  iVar5 = FUN_100de8c0(param_1,param_2,iVar4);
  if (iVar5 != 0) {
    bVar2 = *(byte *)(iVar4 + param_1);
    pcVar3 = (char *)(iVar4 + param_1);
    while ((bVar2 != 0 && (iVar4 = _isspace((uint)bVar2), iVar4 != 0))) {
      bVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    }
    pcVar6 = _strchr(pcVar3,0xd);
    if ((pcVar6 == (char *)0x0) && (pcVar6 = _strchr(pcVar3,10), pcVar6 == (char *)0x0)) {
      pcVar6 = _strchr(pcVar3,0);
    }
    uVar7 = (int)pcVar6 - (int)pcVar3;
    pcVar6 = param_3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    while( true ) {
      if (uVar7 < (uint)((int)pcVar6 - (int)(param_3 + 1))) {
        return 0;
      }
      iVar4 = FUN_100de8c0(pcVar3,param_3,(int)pcVar6 - (int)(param_3 + 1));
      if (iVar4 != 0) break;
      uVar7 = uVar7 - 1;
      pcVar3 = pcVar3 + 1;
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100e55e0 */
