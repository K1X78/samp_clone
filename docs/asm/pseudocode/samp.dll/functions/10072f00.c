/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10072f00
 * Name: FUN_10072f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10072f00(int param_1)

{
  if (*(int *)(param_1 + 0x78) == 1) {
    FUN_10072cb0();
    return;
  }
  if (*(int *)(param_1 + 0x78) == 2) {
    FUN_10071cb0();
    return;
  }
  return;
}


/* END FUNCTION 0x10072f00 */
