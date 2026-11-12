/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027370
 * Name: FUN_10027370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __thiscall FUN_10027370(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = param_2;
  pcVar1 = *(char **)(param_1 + 0x10);
  cVar3 = *pcVar1;
  while (cVar3 == '\0') {
    cVar3 = FUN_10027310(iVar2,pcVar1,&param_2);
    if (cVar3 != '\0') {
      param_2 = param_2 + 1;
    }
    pcVar1 = *(char **)(pcVar1 + param_2 * 4 + 0x8d);
    cVar3 = *pcVar1;
  }
  return pcVar1;
}


/* END FUNCTION 0x10027370 */
