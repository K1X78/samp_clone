/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100010b0
 * Name: FUN_100010b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100010b0(int param_1,ushort param_2)

{
  if (0x3eb < param_2) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0xfd6 + (uint)param_2 * 4);
}


/* END FUNCTION 0x100010b0 */
