/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045610
 * Name: FUN_10045610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10045610(int *param_1,byte param_2)

{
  if ((uint)param_1[1] <= (uint)param_2) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + (uint)param_2 * 4);
}


/* END FUNCTION 0x10045610 */
