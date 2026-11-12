/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043ac0
 * Name: FUN_10043ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10043ac0(ushort param_1,ushort param_2)

{
  if (param_2 < 0x8000) {
    if ((ushort)(param_2 + 0x8000) <= param_1) {
      return 1;
    }
  }
  else if ((int)(uint)param_1 < (int)(param_2 - 0x7ffe)) {
    return 0;
  }
  if (param_1 < param_2) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10043ac0 */
