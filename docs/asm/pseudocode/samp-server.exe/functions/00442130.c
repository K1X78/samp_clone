/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442130
 * Name: FUN_00442130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_00442130(void)

{
  uint uVar1;
  int *unaff_EDI;
  
  uVar1 = 0;
  if (*(char *)(*unaff_EDI + 0x7c) == '\0') {
    uVar1 = FUN_00442070(unaff_EDI + 2);
    if (uVar1 != 0) {
      unaff_EDI[1] = uVar1;
      unaff_EDI[0x10] = unaff_EDI[0x10] + 1;
    }
  }
  return uVar1;
}


/* END FUNCTION 0x00442130 */
