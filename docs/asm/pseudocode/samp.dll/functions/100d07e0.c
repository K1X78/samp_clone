/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d07e0
 * Name: FUN_100d07e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d07e0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1c0) != 0) {
    (*(code *)PTR__free_101554bc)(*(int *)(unaff_ESI + 0x1c0));
    *(undefined4 *)(unaff_ESI + 0x1c0) = 0;
    *(undefined4 *)(unaff_ESI + 0x1c4) = 0;
    *(undefined4 *)(unaff_ESI + 0x1c8) = 0;
    *(undefined4 *)(unaff_ESI + 0x1cc) = 0;
  }
  if (*(int *)(unaff_ESI + 0x1d0) != 0) {
    (*(code *)PTR__free_101554bc)(*(int *)(unaff_ESI + 0x1d0));
    *(undefined4 *)(unaff_ESI + 0x1d0) = 0;
    *(undefined4 *)(unaff_ESI + 0x1d4) = 0;
    *(undefined4 *)(unaff_ESI + 0x1d8) = 0;
    *(undefined4 *)(unaff_ESI + 0x1dc) = 0;
  }
  return;
}


/* END FUNCTION 0x100d07e0 */
