/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085d10
 * Name: FUN_10085d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10085d10(void)

{
  if (DAT_10180604 != (HMODULE)0x0) {
    PTR_FUN_10140c18 = FUN_10084250;
    PTR_FUN_10140c1c = FUN_10084260;
    PTR_FUN_10140c20 = FUN_10084270;
    PTR_FUN_10140c24 = FUN_10084280;
    PTR_FUN_10140c28 = FUN_10084290;
    PTR_FUN_10140c2c = FUN_100842a0;
    PTR_FUN_10140c30 = FUN_100842b0;
    PTR_FUN_10140c34 = FUN_100842c0;
    PTR_FUN_10140c38 = FUN_100842d0;
    PTR_FUN_10140c3c = FUN_100842e0;
    PTR_FUN_10140c40 = FUN_100842f0;
    PTR_DAT_10140c44 = &DAT_10084300;
    PTR_FUN_10140c48 = FUN_10084310;
    PTR_LAB_10140c4c = &LAB_10084320;
    PTR_FUN_10140c50 = FUN_10084330;
    PTR_LAB_10140c54 = &LAB_10084340;
    PTR_FUN_10140c58 = FUN_10084350;
    PTR_LAB_10140c5c = &LAB_10084360;
    PTR_LAB_10140c60 = &LAB_10084370;
    PTR_FUN_10140c64 = FUN_10084380;
    FreeLibrary(DAT_10180604);
    DAT_10180604 = (HMODULE)0x0;
  }
  if (DAT_1017f6b4 != (HMODULE)0x0) {
    PTR_FUN_10140c68 = FUN_10084390;
    PTR_FUN_10140c6c = FUN_100843a0;
    FreeLibrary(DAT_1017f6b4);
    DAT_1017f6b4 = (HMODULE)0x0;
  }
  if (DAT_1017f6a4 != (HMODULE)0x0) {
    PTR_FUN_10140c70 = FUN_100843b0;
    PTR_FUN_10140c74 = FUN_100843c0;
    PTR_FUN_10140c78 = FUN_100843d0;
    FreeLibrary(DAT_1017f6a4);
    DAT_1017f6a4 = (HMODULE)0x0;
  }
  return;
}


/* END FUNCTION 0x10085d10 */
