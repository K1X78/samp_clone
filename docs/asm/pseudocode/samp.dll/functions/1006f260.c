/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006f260
 * Name: FUN_1006f260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1006f260(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar2 = *param_1;
  while (((cVar2 != '\0' && (iVar3 < param_3)) && (cVar2 != '\n'))) {
    *(char *)(iVar3 + param_2) = cVar2;
    pcVar1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(iVar3 + param_2) = 0;
  return -(uint)(*param_1 != '\0') & (uint)param_1;
}


/* END FUNCTION 0x1006f260 */
