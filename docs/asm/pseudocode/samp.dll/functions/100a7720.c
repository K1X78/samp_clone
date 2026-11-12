/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7720
 * Name: FUN_100a7720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a7720(int param_1)

{
  if (*(void **)(PTR_DAT_10152ae0 + param_1 * 4) != (void *)0x0) {
    _free(*(void **)(PTR_DAT_10152ae0 + param_1 * 4));
    *(undefined4 *)(PTR_DAT_10152ae0 + param_1 * 4) = 0;
  }
  return;
}


/* END FUNCTION 0x100a7720 */
