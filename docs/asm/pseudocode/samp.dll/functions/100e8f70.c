/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8f70
 * Name: FUN_100e8f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e8f70(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_2 + 0x2f4) != 0) {
    return 1;
  }
  if ((((*(int *)(param_2 + 0x394) == 0) && ((int *)(param_2 + 0x398) != (int *)0x0)) &&
      (piVar1 = *(int **)(param_2 + 0x398), piVar1 != (int *)0x0)) && (*piVar1 == param_1)) {
    *(undefined4 *)(param_2 + 0x394) = 1;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100e8f70 */
