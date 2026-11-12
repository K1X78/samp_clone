/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aeb60
 * Name: FUN_100aeb60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100aeb60(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (piVar1[6] != 0)) {
    return piVar1[0x1e7];
  }
  return 0;
}


/* END FUNCTION 0x100aeb60 */
