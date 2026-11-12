/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099260
 * Name: FUN_10099260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10099260(void)

{
  if ((DAT_10181c18 & 1) == 0) {
    DAT_10181c18 = DAT_10181c18 | 1;
    _DAT_10181bf4 = 0;
    _DAT_10181bf8 = 0;
    _DAT_10181bfc = 0;
    _DAT_10181c00 = 0;
    _DAT_10181c04 = 0;
    _DAT_10181c08 = 0;
    _DAT_10181c0c = 0;
    _DAT_10181c10 = 0;
    _DAT_10181c14 = 0;
    _atexit((_func_4879 *)&LAB_10116bd0);
  }
  return &DAT_10181bf4;
}


/* END FUNCTION 0x10099260 */
