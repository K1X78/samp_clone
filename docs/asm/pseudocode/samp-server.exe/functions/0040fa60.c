/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fa60
 * Name: FUN_0040fa60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040fa60(void)

{
  int unaff_ESI;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x80)) {
    do {
      FUN_00407cb0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0x80));
  }
  FUN_00408130(unaff_ESI);
  return;
}


/* END FUNCTION 0x0040fa60 */
