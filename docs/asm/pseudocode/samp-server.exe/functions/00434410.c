/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434410
 * Name: FUN_00434410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00434410(void)

{
  uint uVar1;
  int *unaff_EDI;
  
  if (unaff_EDI != (int *)0x0) {
    uVar1 = FUN_004340c0(unaff_EDI[0x16]);
    unaff_EDI[0x16] = uVar1;
    FUN_00407e90(*(int *)(*unaff_EDI + 0x44));
  }
  return;
}


/* END FUNCTION 0x00434410 */
