/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004233b0
 * Name: FUN_004233b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_004233b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x18) = *(undefined4 *)(unaff_EDI + 0x1c);
  iVar2 = FUN_00414880(FUN_00423340,unaff_EDI);
  iVar3 = FUN_0040a5d0(extraout_ECX,*(int **)(unaff_EDI + 0xa4));
  while ((iVar3 != 0 && (iVar2 == 0))) {
    piVar1 = (int *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 8);
    iVar2 = FUN_00423340(unaff_EDI,*piVar1);
  }
  return iVar2;
}


/* END FUNCTION 0x004233b0 */
