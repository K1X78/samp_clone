/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013580
 * Name: FUN_10013580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10013580(int param_1,int param_2)

{
  if (((-1 < param_2) && (param_2 < 10)) && (*(int *)(param_1 + 0x4c + param_2 * 4) != 0)) {
    return *(undefined4 *)(param_1 + 0x27c + param_2 * 4);
  }
  return 0;
}


/* END FUNCTION 0x10013580 */
