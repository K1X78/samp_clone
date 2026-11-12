/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413a60
 * Name: FUN_00413a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00413a60(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = 0;
  if (0 < *(int *)(unaff_EDI + 100)) {
    iVar2 = 0;
    do {
      FUN_0040a000(*(int *)(*(int *)(unaff_EDI + 0x60) + 0x10 + iVar2));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(unaff_EDI + 100));
  }
  if ((*(char *)(unaff_EDI + 4) == '\0') ||
     (bVar1 = FUN_0040e2a0(*(undefined4 **)(unaff_EDI + 0x40)), CONCAT31(extraout_var,bVar1) != 0))
  {
    FUN_00407ab0();
  }
  FUN_004080d0(*(int *)(unaff_EDI + 0x60));
  *(undefined4 *)(unaff_EDI + 0x60) = 0;
  *(undefined4 *)(unaff_EDI + 100) = 0;
  *(undefined4 *)(unaff_EDI + 0x30) = 0;
  return;
}


/* END FUNCTION 0x00413a60 */
