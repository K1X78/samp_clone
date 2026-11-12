/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004080d0
 * Name: FUN_004080d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004080d0(int param_1)

{
  if (param_1 != 0) {
    if (DAT_004ca128 != 0) {
      FUN_00407e50(DAT_004ed530);
      FUN_004080a0();
      FUN_004073a0(0);
      (*DAT_004ca144)(param_1);
      FUN_00407e90(DAT_004ed530);
      return;
    }
    (*DAT_004ca144)(param_1);
  }
  return;
}


/* END FUNCTION 0x004080d0 */
