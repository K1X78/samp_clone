/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10001120
 * Name: FUN_10001120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10001120(int param_1,ushort param_2)

{
  if ((param_2 < 2000) && (*(int *)(param_1 + 0x3074 + (uint)param_2 * 4) != 0)) {
    return *(undefined4 *)(param_1 + 0x1134 + (uint)param_2 * 4);
  }
  return 0;
}


/* END FUNCTION 0x10001120 */
