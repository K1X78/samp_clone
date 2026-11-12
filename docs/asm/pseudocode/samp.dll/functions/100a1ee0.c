/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1ee0
 * Name: FUN_100a1ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ee0(void)

{
  if (_DAT_00b7ce50 != 0) {
    if ((int)_DAT_00b7ce50 < 0) {
      FUN_100b1f10(&DAT_1011e740,0,
                   (_DAT_00b7ce50 ^ (int)_DAT_00b7ce50 >> 0x1f) - ((int)_DAT_00b7ce50 >> 0x1f));
      return;
    }
    FUN_100b1f10(&DAT_1011e740,0,-_DAT_00b7ce50);
  }
  return;
}


/* END FUNCTION 0x100a1ee0 */
