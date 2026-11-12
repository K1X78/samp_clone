/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062410
 * Name: FUN_10062410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10062410(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  pcVar1 = param_1;
  if (pcVar2[-1] == ' ') {
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    pcVar2[-1] = '\0';
    pcVar1 = param_1;
  }
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (pcVar2 != param_1) {
    while ((*pcVar2 != '/' && (*pcVar2 != '\\'))) {
      pcVar2 = pcVar2 + -1;
      if (pcVar2 == param_1) {
        return param_1;
      }
    }
    param_1 = pcVar2 + 1;
  }
  return param_1;
}


/* END FUNCTION 0x10062410 */
