/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aeab0
 * Name: FUN_100aeab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_100aeab0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 10)) {
    return *(int *)(param_1 + 0x4c + param_2 * 4) == 1;
  }
  return false;
}


/* END FUNCTION 0x100aeab0 */
