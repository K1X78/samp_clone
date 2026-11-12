/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10083da0
 * Name: FUN_10083da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * FUN_10083da0(void)

{
  if ((DAT_1017f688 & 1) == 0) {
    DAT_1017f688 = DAT_1017f688 | 1;
    FUN_100832d0();
    _atexit((_func_4879 *)&LAB_10116b90);
  }
  return &DAT_1017f628;
}


/* END FUNCTION 0x10083da0 */
