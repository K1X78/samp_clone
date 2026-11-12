/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fc60
 * Name: FUN_0040fc60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040fc60(void)

{
  int in_EAX;
  int unaff_ESI;
  
  FUN_0040e580();
  FUN_0040f240(*(short **)(unaff_ESI + 8));
  FUN_004158d0(in_EAX,*(int *)(unaff_ESI + 0xc));
  FUN_0040e580();
  FUN_004158d0(in_EAX,*(int *)(unaff_ESI + 0x14));
  FUN_0040e580();
  FUN_0040fce0(in_EAX,*(int *)(unaff_ESI + 0x1c));
  FUN_004158d0(in_EAX,*(int *)(unaff_ESI + 0x28));
  FUN_004158d0(in_EAX,*(int *)(unaff_ESI + 0x2c));
  return;
}


/* END FUNCTION 0x0040fc60 */
