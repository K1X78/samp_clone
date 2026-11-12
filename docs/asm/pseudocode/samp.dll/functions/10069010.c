/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069010
 * Name: FUN_10069010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10069010(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = (char *)(param_1 + 0x196d);
  iVar3 = 9;
  pcVar4 = pcVar2;
  do {
    do {
      cVar1 = *pcVar2;
      pcVar2[0x81] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar4 + -0x81;
    iVar3 = iVar3 + -1;
    pcVar4 = pcVar2;
  } while (iVar3 != 0);
  iVar3 = param_1 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[iVar3 + 0x1565] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 0x1af4) < 10) {
    *(int *)(param_1 + 0x1af4) = *(int *)(param_1 + 0x1af4) + 1;
  }
  return;
}


/* END FUNCTION 0x10069010 */
