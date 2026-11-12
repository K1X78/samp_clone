/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007bd20
 * Name: FUN_1007bd20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1007bd20(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(*param_1 + param_3);
  *param_1 = (int)pcVar3;
  if (*pcVar3 != ':') {
    *param_2 = '\0';
    return (uint)pcVar3 & 0xffffff00;
  }
  pcVar3 = pcVar3 + 1;
  *param_1 = (int)pcVar3;
  iVar4 = 0x100;
  pcVar2 = param_2;
  do {
    if (*pcVar3 == '\0') {
      if (iVar4 != 0) goto LAB_1007bd5a;
      break;
    }
    *pcVar2 = *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pcVar2 = pcVar2 + -1;
LAB_1007bd5a:
  *pcVar2 = '\0';
  cVar1 = *param_2;
  for (pcVar3 = param_2; (cVar1 != '\0' && (' ' < *pcVar3)); pcVar3 = pcVar3 + 1) {
    cVar1 = pcVar3[1];
  }
  *pcVar3 = '\0';
  pcVar3 = param_2 + 1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  *param_1 = *param_1 + ((int)param_2 - (int)pcVar3);
  return CONCAT31((int3)((uint)((int)param_2 - (int)pcVar3) >> 8),1);
}


/* END FUNCTION 0x1007bd20 */
