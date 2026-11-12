/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b1d0
 * Name: FUN_1009b1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009b1d0(void)

{
  if (DAT_10180618 != (HMODULE)0x0) {
    PTR_FUN_10140bfc = FUN_100841e0;
    PTR_FUN_10140c00 = FUN_100841f0;
    PTR_FUN_10140c04 = FUN_10084200;
    PTR_FUN_10140c08 = FUN_10084210;
    PTR_FUN_10140c0c = FUN_10084220;
    PTR_FUN_10140c10 = FUN_10084230;
    PTR_FUN_10140c14 = FUN_10084240;
    FreeLibrary(DAT_10180618);
    DAT_10180618 = (HMODULE)0x0;
  }
  return;
}


/* END FUNCTION 0x1009b1d0 */
