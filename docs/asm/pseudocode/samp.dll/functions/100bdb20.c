/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bdb20
 * Name: FUN_100bdb20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bdb20(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x23) == 0) {
    *(undefined4 *)(param_1 + 0x23) = param_2;
    param_2 = 0;
    FUN_100bc1d0(&param_2,2);
    *(undefined2 *)(param_1 + 0x27) = (undefined2)param_2;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100bdb20 */
