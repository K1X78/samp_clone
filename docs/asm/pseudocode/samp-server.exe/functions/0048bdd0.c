/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048bdd0
 * Name: FUN_0048bdd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048bdd0(void)

{
  uint uVar1;
  int unaff_ESI;
  uint uVar2;
  
  if (*(int *)(unaff_ESI + 0x30) == 0) {
    uVar2 = *(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x20);
    uVar1 = (*(code *)**(undefined4 **)(unaff_ESI + 0x24))
                      (*(undefined4 **)(unaff_ESI + 0x24),*(int *)(unaff_ESI + 0x20),uVar2);
    if (uVar2 != uVar1) {
      *(undefined4 *)(unaff_ESI + 0x30) = 9;
    }
    *(uint *)(unaff_ESI + 0x2c) =
         *(int *)(unaff_ESI + 0x2c) + (uint)CARRY4(*(uint *)(unaff_ESI + 0x28),uVar2);
    *(uint *)(unaff_ESI + 0x28) = *(uint *)(unaff_ESI + 0x28) + uVar2;
    *(undefined4 *)(unaff_ESI + 0x18) = *(undefined4 *)(unaff_ESI + 0x20);
  }
  return;
}


/* END FUNCTION 0x0048bdd0 */
