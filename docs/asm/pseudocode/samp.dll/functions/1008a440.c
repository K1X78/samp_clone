/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008a440
 * Name: FUN_1008a440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1008a440(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x150))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x14c) + param_2 * 4);
  }
  return 0;
}


/* END FUNCTION 0x1008a440 */
