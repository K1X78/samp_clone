/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008ad0
 * Name: FUN_10008ad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008ad0(int param_1)

{
  FUN_10067b60(DAT_102aca10,"Server closed the connection.");
  if (DAT_102aca1c != 0) {
    FUN_10065fe0(1);
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 8))(2000,0);
  return;
}


/* END FUNCTION 0x10008ad0 */
