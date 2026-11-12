/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5c00
 * Name: FUN_100b5c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b5c00(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*param_1 != '\0') {
    pcVar4 = param_1 + 8;
    do {
      iVar2 = FUN_100b59c0(param_1);
      if (iVar2 == -1) {
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
      }
      else {
        pcVar3 = pcVar4;
        do {
          cVar1 = *pcVar3;
          pcVar3[(int)param_1 - (int)pcVar4] = cVar1;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
      }
    } while (*param_1 != '\0');
  }
  *param_1 = '\0';
  return;
}


/* END FUNCTION 0x100b5c00 */
