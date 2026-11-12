/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408380
 * Name: FUN_00408380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_00408380(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  return (int)pcVar3 - (int)param_1 & 0x3fffffff;
}


/* END FUNCTION 0x00408380 */
