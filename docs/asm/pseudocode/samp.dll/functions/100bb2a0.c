/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bb2a0
 * Name: FUN_100bb2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bb2a0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100bb2a0 */
