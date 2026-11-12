/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bdf30
 * Name: FUN_100bdf30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100bdf30(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    VirtualFree(param_1,0,0x8000);
  }
  return;
}


/* END FUNCTION 0x100bdf30 */
