/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10095e30
 * Name: FUN_10095e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10095e30(void)

{
  if ((_DAT_10181bf0 & 1) == 0) {
    _DAT_10181bf0 = _DAT_10181bf0 | 1;
    FUN_10092fc0();
  }
  return &DAT_10181bcc;
}


/* END FUNCTION 0x10095e30 */
