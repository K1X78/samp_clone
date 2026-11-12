/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041c720
 * Name: FUN_0041c720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0041c720(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_00419780();
    *(int *)(unaff_EDI + 0xc) = iVar1;
    if (iVar1 != 0) {
      FUN_00414e30();
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0041c720 */
