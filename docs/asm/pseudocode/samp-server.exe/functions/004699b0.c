/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004699b0
 * Name: FUN_004699b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_004699b0(int param_1)

{
  if (*(int *)(param_1 + 0x4b4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2;
}


/* END FUNCTION 0x004699b0 */
