/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c55e0
 * Name: FUN_100c55e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c55e0(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\"') {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  cVar2 = param_1[1];
  if (cVar2 == '\0') {
    *param_2 = '\0';
    return;
  }
  do {
    if (cVar2 == '\"') break;
    *param_2 = cVar2;
    cVar2 = param_1[2];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  *param_2 = '\0';
  return;
}


/* END FUNCTION 0x100c55e0 */
