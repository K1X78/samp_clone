/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee790
 * Name: FUN_100ee790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100ee790(char *param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)*param_3;
  }
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    pcVar3 = _strchr(param_2,(int)cVar1);
    if (pcVar3 == (char *)0x0) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (*param_1 != '\0') {
    *param_3 = (int)(param_1 + 1);
    cVar1 = param_1[1];
    while ((cVar1 != '\0' &&
           (pcVar3 = _strchr(param_2,(int)*(char *)*param_3), pcVar3 == (char *)0x0))) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      cVar1 = *(char *)(iVar2 + 1);
    }
    if (*(char *)*param_3 != '\0') {
      *(char *)*param_3 = '\0';
      *param_3 = *param_3 + 1;
    }
    return param_1;
  }
  return (char *)0x0;
}


/* END FUNCTION 0x100ee790 */
