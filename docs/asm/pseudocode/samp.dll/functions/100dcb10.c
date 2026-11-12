/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dcb10
 * Name: FUN_100dcb10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100dcb10(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int *in_EAX;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  do {
    if (in_EAX == (int *)0x0) {
      return (char *)0x0;
    }
    pcVar5 = (char *)0x0;
    iVar4 = FUN_100de8c0(*in_EAX,param_1,(int)pcVar3 - (int)(param_1 + 1));
    if ((iVar4 != 0) &&
       (pcVar1 = (char *)(*in_EAX + ((int)pcVar3 - (int)(param_1 + 1))), *pcVar1 == ':')) {
      pcVar5 = pcVar1 + 1;
      cVar2 = *pcVar5;
      while (cVar2 == ' ') {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
      }
    }
    in_EAX = (int *)in_EAX[1];
  } while (pcVar5 == (char *)0x0);
  return pcVar5;
}


/* END FUNCTION 0x100dcb10 */
