/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f330
 * Name: FUN_0040f330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040f330(int param_1)

{
  if (*(int *)(param_1 + 0x1a8) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1a8) + 0x159) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x159) = 1;
  return;
}


/* END FUNCTION 0x0040f330 */
