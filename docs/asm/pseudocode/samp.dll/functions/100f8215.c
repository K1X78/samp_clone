/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f8215
 * Name: FUN_100f8215
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100f8215(void)

{
  int unaff_EBP;
  
  FUN_100ff2c0();
  FUN_10058160("invalid string position");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100580a0(unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_1012cf20;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_1013927c);
}


/* END FUNCTION 0x100f8215 */
