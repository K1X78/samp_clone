/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ae73
 * Name: Catch_1000ae73
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * Catch_1000ae73(void)

{
  void *pvVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pvVar1 = operator_new(*(int *)(unaff_EBP + 8) + 1);
  *(void **)(unaff_EBP + 8) = pvVar1;
  return &DAT_1000ae93;
}


/* END FUNCTION 0x1000ae73 */
