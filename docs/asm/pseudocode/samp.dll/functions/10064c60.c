/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064c60
 * Name: FUN_10064c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10064c60(int param_1)

{
  if (*(FILE **)(param_1 + 4) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x10064c60 */
