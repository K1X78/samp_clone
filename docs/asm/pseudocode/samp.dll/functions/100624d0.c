/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100624d0
 * Name: FUN_100624d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100624d0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  cVar2 = *param_1;
  pcVar4 = param_1;
  while (cVar2 != '\0') {
    iVar3 = _tolower((int)*pcVar4);
    *pcVar4 = (char)iVar3;
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  return param_1;
}


/* END FUNCTION 0x100624d0 */
