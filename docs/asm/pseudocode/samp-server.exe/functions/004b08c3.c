/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b08c3
 * Name: FUN_004b08c3
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004b08c3(void)

{
  int unaff_EBP;
  
  FUN_004b0c10();
  FUN_00469fc0((void *)(unaff_EBP + -0x28),"invalid string position");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0046a000((void *)(unaff_EBP + -0x50),unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_004c5364;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_004c78e4);
}


/* END FUNCTION 0x004b08c3 */
