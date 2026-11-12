/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044d9b0
 * Name: FUN_0044d9b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0044d9b0(int param_1)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (0x800 < *(int *)(param_1 + 4))) {
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


/* END FUNCTION 0x0044d9b0 */
