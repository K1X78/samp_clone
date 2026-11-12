/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5c40
 * Name: FUN_100b5c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100b5c40(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_808 [2052];
  
  pcVar2 = local_808;
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar2 - (int)(param_1 + 1)) < 400) {
      pcVar2 = _strstr(param_1,"~k~");
      if (pcVar2 != (char *)0x0) {
        pcVar2 = param_1;
        do {
          cVar1 = *pcVar2;
          pcVar2[(int)(local_808 + -(int)param_1)] = cVar1;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        (*(code *)0x69e160)(local_808);
        pcVar2 = local_808;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if ((int)pcVar2 - (int)(local_808 + 1) <= param_2) {
          pcVar2 = local_808;
          iVar3 = (int)param_1 - (int)pcVar2;
          do {
            cVar1 = *pcVar2;
            pcVar2[iVar3] = cVar1;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          pcVar2 = local_808;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          return (int)pcVar2 - (int)(local_808 + 1);
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100b5c40 */
