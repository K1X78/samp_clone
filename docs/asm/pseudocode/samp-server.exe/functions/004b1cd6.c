/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b1cd6
 * Name: Unwind_004b1cd6
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void Unwind_004b1cd6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x730) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x730) = *(uint *)(unaff_EBP + -0x730) & 0xfffffffe;
    FUN_00490740(unaff_EBP + -0x724);
    return;
  }
  return;
}


/* END FUNCTION 0x004b1cd6 */
