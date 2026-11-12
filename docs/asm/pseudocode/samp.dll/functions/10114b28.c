/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10114b28
 * Name: Unwind_10114b28
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void Unwind_10114b28(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0xdde;
  }
  FUN_10033b00();
  return;
}


/* END FUNCTION 0x10114b28 */
