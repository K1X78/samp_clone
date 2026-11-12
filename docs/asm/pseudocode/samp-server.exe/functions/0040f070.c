/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f070
 * Name: FUN_0040f070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0040f070(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (cVar2 == '\"') {
      iVar3 = iVar3 + 1;
    }
    pcVar1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return iVar3 + 2;
}


/* END FUNCTION 0x0040f070 */
