/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006f200
 * Name: FUN_1006f200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_1006f200(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_1;
  while (cVar2 == '\t') {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  iVar3 = 0;
  cVar2 = *param_1;
  while ((((cVar2 != '\0' && (iVar3 < param_3)) && (cVar2 != '\n')) && (cVar2 != '\t'))) {
    *(char *)(iVar3 + param_2) = cVar2;
    pcVar1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(iVar3 + param_2) = 0;
  if ((*param_1 == '\0') || (*param_1 == '\n')) {
    param_1 = (char *)0x0;
  }
  return param_1;
}


/* END FUNCTION 0x1006f200 */
