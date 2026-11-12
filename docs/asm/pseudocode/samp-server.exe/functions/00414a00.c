/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414a00
 * Name: FUN_00414a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00414a00(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x50) == 0) {
    puVar1 = FUN_00413690();
    *(undefined4 **)(unaff_ESI + 0x50) = puVar1;
  }
  return;
}


/* END FUNCTION 0x00414a00 */
