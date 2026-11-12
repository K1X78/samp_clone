/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066e00
 * Name: FUN_10066e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10066e00(int param_1)

{
  if (*(int *)(param_1 + 0x11e) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x11e) + 0x8e) = 0x5a;
    FUN_10084e80();
    FUN_10084da0();
    return;
  }
  return;
}


/* END FUNCTION 0x10066e00 */
