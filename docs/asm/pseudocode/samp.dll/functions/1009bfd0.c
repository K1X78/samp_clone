/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009bfd0
 * Name: FUN_1009bfd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009bfd0(int param_1)

{
  DAT_10181e5c = *(int *)(param_1 + 0x48);
  if (DAT_10181e5c != 0) {
    FUN_1009bfb0();
    return;
  }
  return;
}


/* END FUNCTION 0x1009bfd0 */
