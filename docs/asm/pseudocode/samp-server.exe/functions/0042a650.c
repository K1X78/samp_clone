/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042a650
 * Name: FUN_0042a650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042a650(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar2 = 0;
  if (0 < *(int *)(unaff_EDI + 4)) {
    iVar3 = 0;
    do {
      if ((*(int *)(*(int *)(unaff_EDI + 8) + 4 + iVar3) != 0) &&
         (iVar1 = FUN_0040d050(), iVar1 != 0)) {
        FUN_00428220(extraout_ECX);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(unaff_EDI + 4));
  }
  return;
}


/* END FUNCTION 0x0042a650 */
