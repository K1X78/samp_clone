/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004114f0
 * Name: FUN_004114f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004114f0(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x1d0);
  while (iVar1 != 0) {
    *(undefined4 *)(unaff_ESI + 0x1d0) = *(undefined4 *)(*(int *)(unaff_ESI + 0x1d0) + 0x10);
    FUN_00408130(unaff_ESI);
    iVar1 = *(int *)(unaff_ESI + 0x1d0);
  }
  *(undefined4 *)(unaff_ESI + 0x1d4) = 0;
  *(undefined4 *)(unaff_ESI + 0x1d8) = 0;
  *(undefined1 *)(unaff_ESI + 0x1dc) = 0;
  return;
}


/* END FUNCTION 0x004114f0 */
