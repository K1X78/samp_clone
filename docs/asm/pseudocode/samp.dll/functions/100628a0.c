/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100628a0
 * Name: FUN_100628a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100628a0(uint param_1,byte *param_2,int param_3)

{
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1 = param_1 >> 8 ^ *(uint *)(&DAT_10140378 + ((*param_2 ^ param_1) & 0xff) * 4);
    param_2 = param_2 + 1;
  }
  return ~param_1;
}


/* END FUNCTION 0x100628a0 */
