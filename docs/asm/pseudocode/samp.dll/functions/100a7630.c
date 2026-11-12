/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7630
 * Name: FUN_100a7630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a7630(int param_1)

{
  if (DAT_101e0444 != 0) {
    return *(undefined4 *)(PTR_DAT_10152ae0 + param_1 * 4);
  }
  if ((-1 < param_1) && (param_1 < 0x4e21)) {
    return *(undefined4 *)(&DAT_00a9b0c8 + param_1 * 4);
  }
  return 0;
}


/* END FUNCTION 0x100a7630 */
