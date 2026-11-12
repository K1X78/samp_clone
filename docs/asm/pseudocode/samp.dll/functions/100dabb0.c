/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dabb0
 * Name: FUN_100dabb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dabb0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = (*(code *)PTR__calloc_101554c8)(0x40,1);
  if (iVar1 != 0) {
    if (*(int *)(unaff_EDI + 0x20) != 0) {
      iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 0x20));
      *(int *)(iVar1 + 0x20) = iVar2;
      if (iVar2 == 0) goto LAB_100dac90;
    }
    if (*(int *)(unaff_EDI + 0x14) != 0) {
      iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 0x14));
      *(int *)(iVar1 + 0x14) = iVar2;
      if (iVar2 == 0) goto LAB_100dac90;
    }
    if (*(int *)(unaff_EDI + 0xc) != 0) {
      iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 0xc));
      *(int *)(iVar1 + 0xc) = iVar2;
      if (iVar2 == 0) goto LAB_100dac90;
    }
    if (*(int *)(unaff_EDI + 0x10) != 0) {
      iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 0x10));
      *(int *)(iVar1 + 0x10) = iVar2;
      if (iVar2 == 0) goto LAB_100dac90;
    }
    if (*(int *)(unaff_EDI + 4) != 0) {
      iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 4));
      *(int *)(iVar1 + 4) = iVar2;
      if (iVar2 == 0) goto LAB_100dac90;
    }
    if (*(int *)(unaff_EDI + 8) != 0) {
      iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 8));
      *(int *)(iVar1 + 8) = iVar2;
      if (iVar2 == 0) goto LAB_100dac90;
    }
    if (*(int *)(unaff_EDI + 0x2c) != 0) {
      iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 0x2c));
      *(int *)(iVar1 + 0x2c) = iVar2;
      if (iVar2 == 0) goto LAB_100dac90;
    }
    if (*(int *)(unaff_EDI + 0x28) != 0) {
      iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 0x28));
      *(int *)(iVar1 + 0x28) = iVar2;
      if (iVar2 == 0) {
LAB_100dac90:
        FUN_100d9c80();
        return 0;
      }
    }
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(unaff_EDI + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(unaff_EDI + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(unaff_EDI + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(unaff_EDI + 0x38);
  }
  return iVar1;
}


/* END FUNCTION 0x100dabb0 */
