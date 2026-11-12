/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cd6b0
 * Name: FUN_100cd6b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100cd6b0(void)

{
  if (DAT_102acae0 == 0) {
    thunk_FUN_100e2a00(&DAT_102acae8,0x50);
    _DAT_101554e4 = &DAT_102acae8;
    if ((PTR_DAT_10155510[8] & 0x10) == 0) {
      DAT_101554e0 = DAT_101554e0 & 0xffdfffff;
    }
    else {
      DAT_101554e0 = DAT_101554e0 | 0x200000;
    }
    _DAT_101554ec = FUN_100dfc20();
    DAT_102acae0 = 1;
  }
  return &DAT_101554d0;
}


/* END FUNCTION 0x100cd6b0 */
