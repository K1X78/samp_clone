/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dfca0
 * Name: FUN_100dfca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * FUN_100dfca0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pvVar3 = _calloc(1,(size_t)(pcVar2 + (1 - (int)(param_1 + 1))));
    if (pvVar3 != (void *)0x0) {
      iVar4 = (int)pvVar3 - (int)param_1;
      do {
        cVar1 = *param_1;
        param_1[iVar4] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      return pvVar3;
    }
  }
  return (void *)0x0;
}


/* END FUNCTION 0x100dfca0 */
