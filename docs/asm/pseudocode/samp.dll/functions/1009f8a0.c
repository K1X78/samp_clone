/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f8a0
 * Name: FUN_1009f8a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_1009f8a0(int param_1)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x18);
}


/* END FUNCTION 0x1009f8a0 */
