/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10115908
 * Name: Unwind_10115908
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void Unwind_10115908(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FUN_10020550();
    return;
  }
  return;
}


/* END FUNCTION 0x10115908 */
