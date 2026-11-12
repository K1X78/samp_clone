/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496c90
 * Name: FUN_00496c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_00496c90(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = _strchr(param_1,0x28);
  pcVar2 = _strchr(param_1,0x29);
  if ((pcVar1 != (char *)0x0) && (pcVar2 != (char *)0x0)) {
    _strncpy(param_1,pcVar1 + 1,(size_t)(pcVar2 + (-1 - (int)pcVar1)));
    param_1[(int)(pcVar2 + (-1 - (int)pcVar1))] = '\0';
    return param_1;
  }
  return (char *)0x0;
}


/* END FUNCTION 0x00496c90 */
