/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c1fe0
 * Name: FUN_100c1fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c1fe0(void)

{
  uint uVar1;
  int unaff_ESI;
  uint uVar2;
  
  if (*(int *)(unaff_ESI + 0x2d) == 0) {
    uVar2 = *(int *)(unaff_ESI + 0x15) - *(int *)(unaff_ESI + 0x1d);
    uVar1 = (*(code *)**(undefined4 **)(unaff_ESI + 0x21))
                      (*(undefined4 **)(unaff_ESI + 0x21),*(int *)(unaff_ESI + 0x1d),uVar2);
    if (uVar2 != uVar1) {
      *(undefined4 *)(unaff_ESI + 0x2d) = 9;
    }
    *(uint *)(unaff_ESI + 0x29) =
         *(int *)(unaff_ESI + 0x29) + (uint)CARRY4(*(uint *)(unaff_ESI + 0x25),uVar2);
    *(uint *)(unaff_ESI + 0x25) = *(uint *)(unaff_ESI + 0x25) + uVar2;
    *(undefined4 *)(unaff_ESI + 0x15) = *(undefined4 *)(unaff_ESI + 0x1d);
  }
  return;
}


/* END FUNCTION 0x100c1fe0 */
