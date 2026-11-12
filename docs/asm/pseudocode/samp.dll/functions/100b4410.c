/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4410
 * Name: FUN_100b4410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100b4410(int param_1)

{
  if (param_1 != 0) {
    _DAT_102a9a44 = (int)*(short *)(param_1 + 0x22);
    if ((((_DAT_102a9a44 == 0x21a) || (_DAT_102a9a44 == 0x23a)) || (_DAT_102a9a44 == 0x219)) ||
       ((_DAT_102a9a44 == 0x239 || (_DAT_102a9a44 == 0x1c1)))) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b4410 */
