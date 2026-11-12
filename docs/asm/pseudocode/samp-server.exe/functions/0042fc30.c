/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042fc30
 * Name: FUN_0042fc30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042fc30(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)(in_EAX + 0x44) == -0x420df25d) || (*(int *)(in_EAX + 0x44) == 0x519c2973)) {
    uVar1 = FUN_0042fb50();
  }
  FUN_00415250();
  return uVar1;
}


/* END FUNCTION 0x0042fc30 */
