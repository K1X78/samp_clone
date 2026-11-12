/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e29f0
 * Name: thunk_FUN_100cd480
 * Status: ok
 * Single JMP forwarder to 0x100cd480; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void thunk_FUN_100cd480(void)

{
  if (DAT_102acad8 != (HMODULE)0x0) {
    FreeLibrary(DAT_102acad8);
    DAT_102acad8 = (HMODULE)0x0;
    DAT_102acadc = 0;
  }
  return;
}


/* END FUNCTION 0x100e29f0 */
