/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482730
 * Name: FUN_00482730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00482730(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  while (cVar1 == '\0') {
    FUN_00482730((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    _free(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}


/* END FUNCTION 0x00482730 */
