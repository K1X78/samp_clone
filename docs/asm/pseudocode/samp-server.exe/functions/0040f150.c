/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f150
 * Name: FUN_0040f150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040f150(void)

{
  int unaff_EBX;
  int unaff_ESI;
  int iVar1;
  
  if (unaff_ESI != 0) {
    if (0 < *(int *)(unaff_ESI + 4)) {
      iVar1 = 0;
      do {
        FUN_00408130(unaff_EBX);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_ESI + 4));
    }
    FUN_00408130(unaff_EBX);
    FUN_00408130(unaff_EBX);
  }
  return;
}


/* END FUNCTION 0x0040f150 */
