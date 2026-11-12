/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040cab0
 * Name: FUN_0040cab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040cab0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = FUN_00407e10();
  FUN_00407e50(iVar2);
  iVar3 = *(int *)(unaff_ESI + 0x3c) + -1;
  *(int *)(unaff_ESI + 0x3c) = iVar3;
  if (iVar3 < 1) {
    iVar3 = DAT_004ed558;
    if (DAT_004ed558 == unaff_ESI) {
      DAT_004ed558 = *(int *)(unaff_ESI + 0x40);
    }
    else {
      do {
        iVar1 = iVar3;
        if (iVar1 == 0) goto LAB_0040cb05;
        iVar3 = *(int *)(iVar1 + 0x40);
      } while (*(int *)(iVar1 + 0x40) != unaff_ESI);
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(unaff_ESI + 0x40);
    }
LAB_0040cb05:
    FUN_00407e30(*(int *)(unaff_ESI + 0x34));
    uVar4 = 1;
  }
  FUN_00407e90(iVar2);
  return uVar4;
}


/* END FUNCTION 0x0040cab0 */
