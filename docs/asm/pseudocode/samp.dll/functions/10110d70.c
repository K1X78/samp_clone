/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110d70
 * Name: FUN_10110d70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 * FUN_10110d70(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  if (param_3 == (undefined1 *)0x0) {
    param_3 = param_1;
  }
  *param_1 = 0xe9;
  *(int *)(param_1 + 1) = param_2 - (int)(param_3 + 5);
  return param_1 + 5;
}


/* END FUNCTION 0x10110d70 */
