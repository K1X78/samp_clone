/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066e90
 * Name: FUN_10066e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10066e90(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (('\0' < *param_1) && (*param_1 < ' ')) {
      *param_1 = ' ';
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


/* END FUNCTION 0x10066e90 */
