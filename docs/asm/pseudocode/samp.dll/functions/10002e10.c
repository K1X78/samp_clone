/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002e10
 * Name: FUN_10002e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10002e10(int param_1,ushort param_2)

{
  if ((param_2 < 0x835) && (*(int *)(param_1 + 4 + (uint)param_2 * 4) != 0)) {
    return *(undefined4 *)(param_1 + 0x20d4 + (uint)param_2 * 4);
  }
  return 0;
}


/* END FUNCTION 0x10002e10 */
