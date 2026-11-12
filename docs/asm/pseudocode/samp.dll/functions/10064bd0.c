/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064bd0
 * Name: FUN_10064bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10064bd0(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    _free(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* END FUNCTION 0x10064bd0 */
