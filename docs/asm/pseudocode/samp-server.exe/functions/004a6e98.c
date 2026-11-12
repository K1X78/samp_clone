/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a6e98
 * Name: FUN_004a6e98
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004a6e98(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x20));
  }
  return;
}


/* END FUNCTION 0x004a6e98 */
