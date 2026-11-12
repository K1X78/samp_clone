/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bb2c0
 * Name: FUN_100bb2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bb2c0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100bb2c0 */
