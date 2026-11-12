/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027540
 * Name: FUN_10027540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10027540(int param_1,int param_2)

{
  if ((param_2 < *(int *)(param_1 + 1)) &&
     (*(int *)(*(int *)(param_1 + 0x91 + param_2 * 4) + 1) < 0x10)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10027540 */
