/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f9e0
 * Name: FUN_0040f9e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040f9e0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int unaff_EBX;
  int iVar4;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EBX + 4) != *(int *)(unaff_EDI + 4)) ||
     (*(char *)(unaff_EBX + 0x18) != *(char *)(unaff_EDI + 0x18))) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(unaff_EDI + 4)) {
    iVar1 = *(int *)(unaff_EDI + 8);
    iVar2 = *(int *)(unaff_EBX + 8);
    do {
      if (((*(int *)(iVar1 + iVar4 * 4) != *(int *)((iVar2 - iVar1) + iVar1 + iVar4 * 4)) ||
          (*(char *)(iVar4 + *(int *)(unaff_EDI + 0x28)) !=
           *(char *)(iVar4 + *(int *)(unaff_EBX + 0x28)))) ||
         (bVar3 = FUN_0040f9c0(*(byte **)(*(int *)(unaff_EDI + 0x2c) + iVar4 * 4),
                               *(byte **)(*(int *)(unaff_EBX + 0x2c) + iVar4 * 4)),
         CONCAT31(extraout_var,bVar3) == 0)) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_EDI + 4));
  }
  return 1;
}


/* END FUNCTION 0x0040f9e0 */
