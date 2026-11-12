/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100adf00
 * Name: FUN_100adf00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100adf00(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar2 - (int)(param_1 + 1)) < 9) {
    (*(code *)0x49bbe0)(param_1);
  }
  return;
}


/* END FUNCTION 0x100adf00 */
