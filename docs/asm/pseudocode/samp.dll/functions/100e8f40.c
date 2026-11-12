/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8f40
 * Name: FUN_100e8f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100e8f40(int param_1,int param_2)

{
  int *piVar1;
  
  if (((int *)(param_2 + 0x398) != (int *)0x0) &&
     (piVar1 = *(int **)(param_2 + 0x398), piVar1 != (int *)0x0)) {
    return *piVar1 == param_1;
  }
  return false;
}


/* END FUNCTION 0x100e8f40 */
