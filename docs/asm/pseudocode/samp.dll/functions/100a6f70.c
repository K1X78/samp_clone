/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a6f70
 * Name: FUN_100a6f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100a6f70(uint param_1)

{
  if (param_1 == 0x3ec) {
    return 0x89a4c440;
  }
  if (param_1 == 0x3ed) {
    return 0xaa0000ff;
  }
  if (param_1 == 0x3ee) {
    return 0xe2c063ff;
  }
  if (param_1 < 4000) {
    param_1 = (&DAT_1018f6c0)[param_1];
  }
  return param_1;
}


/* END FUNCTION 0x100a6f70 */
