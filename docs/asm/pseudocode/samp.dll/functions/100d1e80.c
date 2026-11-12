/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d1e80
 * Name: FUN_100d1e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d1e80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  char *unaff_EDI;
  
  if (((*(byte *)(*(int *)(unaff_ESI + 800) + 0x44) & 0x20) == 0) ||
     (*(int *)(unaff_ESI + 0x2a0) != 0)) {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_1);
    *(int *)(unaff_ESI + 0x170) = iVar1;
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR___strdup_101554c4)(param_2);
      *(undefined4 *)(unaff_ESI + 0x174) = uVar2;
      goto LAB_100d1efb;
    }
  }
  else {
    iVar1 = (*(code *)PTR___strdup_101554c4)("anonymous");
    *(int *)(unaff_ESI + 0x170) = iVar1;
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR___strdup_101554c4)("ftp@example.com");
      *(undefined4 *)(unaff_ESI + 0x174) = uVar2;
      goto LAB_100d1efb;
    }
  }
  *(undefined4 *)(unaff_ESI + 0x174) = 0;
LAB_100d1efb:
  if ((*(int *)(unaff_ESI + 0x170) != 0) && (*(int *)(unaff_ESI + 0x174) != 0)) {
    if (*unaff_EDI != '\0') {
      iVar1 = (*(code *)PTR___strdup_101554c4)();
      *(int *)(unaff_ESI + 0x178) = iVar1;
      if (iVar1 == 0) {
        return 0x1b;
      }
    }
    return 0;
  }
  return 0x1b;
}


/* END FUNCTION 0x100d1e80 */
