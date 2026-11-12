/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416c30
 * Name: FUN_00416c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00416c30(void)

{
  int in_EAX;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    FUN_00416bd0(*(int *)(unaff_EDI + 0x1c));
    FUN_00408130(in_EAX);
    FUN_00408130(in_EAX);
    FUN_004158d0(in_EAX,*(int *)(unaff_EDI + 0xc));
    FUN_0040f150();
    FUN_00408130(in_EAX);
  }
  return;
}


/* END FUNCTION 0x00416c30 */
