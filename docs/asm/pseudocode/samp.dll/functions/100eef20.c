/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eef20
 * Name: FUN_100eef20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100eef20(undefined4 param_1,int *param_2)

{
  tm *ptVar1;
  int iVar2;
  
  ptVar1 = _gmtime((time_t *)&param_1);
  if (ptVar1 != (tm *)0x0) {
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = ptVar1->tm_sec;
      ptVar1 = (tm *)&ptVar1->tm_min;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  return 0x2b;
}


/* END FUNCTION 0x100eef20 */
