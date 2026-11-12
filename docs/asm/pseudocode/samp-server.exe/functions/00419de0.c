/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419de0
 * Name: FUN_00419de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00419de0(void)

{
  int *in_EAX;
  
  if (*in_EAX == 0) {
    FUN_00418ab0(0x15,(undefined **)"API called with finalized prepared statement");
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00419de0 */
