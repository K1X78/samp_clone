/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2e80
 * Name: FUN_100d2e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d2e80(void)

{
  int iVar1;
  int unaff_ESI;
  undefined8 uVar2;
  
  uVar2 = FUN_100d8500();
  iVar1 = FUN_100d8520(uVar2,*(undefined4 *)(*(int *)(unaff_ESI + 0x838) + 0x20),
                       *(undefined4 *)(*(int *)(unaff_ESI + 0x838) + 0x24));
  if (999 < iVar1) {
    FUN_100ebd80();
    *(undefined8 *)(*(int *)(unaff_ESI + 0x838) + 0x20) = uVar2;
  }
  return;
}


/* END FUNCTION 0x100d2e80 */
