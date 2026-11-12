/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a2220
 * Name: FUN_100a2220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2220(void)

{
  DAT_1018f504 = _DAT_00859520;
  DAT_1018f508 = _DAT_00859524;
  _DAT_1018f50c = (float)_DAT_00c17044;
  _DAT_1018f510 = (float)_DAT_00c17048;
  if ((DAT_10151a6e != '\0') && (1.6 <= _DAT_1018f50c / _DAT_1018f510)) {
    _DAT_00859524 = 0x3b1e98dd;
    _DAT_00859520 = 0.00222 / (_DAT_1018f50c / _DAT_1018f510);
  }
  return;
}


/* END FUNCTION 0x100a2220 */
