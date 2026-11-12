/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006b610
 * Name: FUN_1006b610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006b610(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x1006b610 */
