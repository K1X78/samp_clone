/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469af3
 * Name: Catch_00469af3
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * Catch_00469af3(void)

{
  void *pvVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pvVar1 = operator_new(*(int *)(unaff_EBP + 8) + 1);
  *(void **)(unaff_EBP + 8) = pvVar1;
  return &DAT_00469b13;
}


/* END FUNCTION 0x00469af3 */
