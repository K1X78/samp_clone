/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f390
 * Name: FUN_1001f390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001f390(int param_1)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (0x800 < *(int *)(param_1 + 4))) {
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


/* END FUNCTION 0x1001f390 */
