/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482540
 * Name: FUN_00482540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00482540(int param_1)

{
  if (*(void **)(param_1 + 0x117) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x117));
    *(undefined4 *)(param_1 + 0x117) = 0;
  }
  return;
}


/* END FUNCTION 0x00482540 */
