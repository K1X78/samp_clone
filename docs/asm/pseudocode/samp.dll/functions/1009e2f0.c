/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e2f0
 * Name: FUN_1009e2f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_1009e2f0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = _strchr(param_1,0x28);
  pcVar2 = _strchr(param_1,0x29);
  if ((pcVar1 != (char *)0x0) && (pcVar2 != (char *)0x0)) {
    _strncpy(param_1,pcVar1 + 1,((int)pcVar2 - (int)pcVar1) - 1);
    param_1[(int)pcVar2 - (int)pcVar1] = '\0';
    return param_1;
  }
  return (char *)0x0;
}


/* END FUNCTION 0x1009e2f0 */
