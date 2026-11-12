/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033ce0
 * Name: FUN_10033ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10033ce0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_1001f3b0();
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_1001fb50(param_1,pcVar2 + (1 - (int)(param_1 + 1)));
    return;
  }
  FUN_1001f3b0();
  return;
}


/* END FUNCTION 0x10033ce0 */
