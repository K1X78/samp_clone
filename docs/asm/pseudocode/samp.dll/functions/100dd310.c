/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd310
 * Name: FUN_100dd310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dd310(int param_1)

{
  if (*(FILE **)(param_1 + 0x24) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* END FUNCTION 0x100dd310 */
