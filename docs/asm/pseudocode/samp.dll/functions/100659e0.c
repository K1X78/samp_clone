/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100659e0
 * Name: FUN_100659e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_100659e0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_1 + 1) {
      pcVar2 = param_1;
      if (*param_1 == '\"') {
        do {
          pcVar3 = pcVar2;
          pcVar2 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        if (pcVar3[-1] == '\"') {
          return '\x02';
        }
      }
      pcVar2 = _strchr(param_1,0x2e);
      return (-(pcVar2 != (char *)0x0) & 2U) + 1;
    }
  }
  return '\0';
}


/* END FUNCTION 0x100659e0 */
