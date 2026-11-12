/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490260
 * Name: FUN_00490260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00490260(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  for (pcVar2 = pcVar2 + (-1 - (int)(param_1 + 1));
      (-1 < (int)pcVar2 && ((param_1[(int)pcVar2] == ' ' || (param_1[(int)pcVar2] == '\t'))));
      pcVar2 = pcVar2 + -1) {
    param_1[(int)pcVar2] = '\0';
  }
  return;
}


/* END FUNCTION 0x00490260 */
