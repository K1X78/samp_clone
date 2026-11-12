/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013de0
 * Name: FUN_10013de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013de0(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


/* END FUNCTION 0x10013de0 */
