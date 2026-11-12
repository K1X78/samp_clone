/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010cc79
 * Name: FUN_1010cc79
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1010cc79(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x20));
  }
  return;
}


/* END FUNCTION 0x1010cc79 */
