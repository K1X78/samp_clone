/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004913a0
 * Name: FUN_004913a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004913a0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x2d);
  while (cVar1 == '\0') {
    FUN_004913a0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_00490990((int)param_1);
    _free(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}


/* END FUNCTION 0x004913a0 */
