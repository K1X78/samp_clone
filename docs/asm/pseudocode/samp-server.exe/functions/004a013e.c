/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a013e
 * Name: FUN_004a013e
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004a013e(void)

{
  int unaff_EBP;
  FILE *unaff_ESI;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    __unlock_file(unaff_ESI);
  }
  FUN_004a39ba(2);
  return;
}


/* END FUNCTION 0x004a013e */
