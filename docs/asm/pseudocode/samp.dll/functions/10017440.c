/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10017440
 * Name: FUN_10017440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10017440(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    cVar2 = *param_1;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    *param_1 = cVar2;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


/* END FUNCTION 0x10017440 */
