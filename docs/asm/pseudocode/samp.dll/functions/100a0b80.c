/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0b80
 * Name: FUN_100a0b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a0b80(int param_1)

{
  if (*(int *)(param_1 + 0x31) != 0) {
    FUN_100b1f10(&DAT_1011e77c,*(int *)(param_1 + 0x31));
    *(undefined4 *)(param_1 + 0x31) = 0;
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  return;
}


/* END FUNCTION 0x100a0b80 */
