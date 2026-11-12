/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100449a0
 * Name: FUN_100449a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100449a0(int param_1,int param_2)

{
  if ((0 < param_2) && (*(int *)(*(int *)(param_1 + 0xc9 + param_2 * 4) + 1) < 0x20)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100449a0 */
