/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428180
 * Name: FUN_00428180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00428180(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[1];
  FUN_0040c700();
  if (((char)unaff_EDI[2] != '\0') && (1 < *(int *)(*unaff_EDI + 0x8c))) {
    FUN_0040c620((int)unaff_EDI);
    *(undefined1 *)(unaff_EDI + 2) = 1;
    return;
  }
  if ((char)unaff_EDI[2] != '\0') {
    FUN_0040c5c0((int)unaff_EDI);
    iVar2 = *(int *)(iVar1 + 0x24) + -1;
    *(int *)(iVar1 + 0x24) = iVar2;
    if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + 0x22) = 0;
    }
  }
  *(undefined1 *)(unaff_EDI + 2) = 0;
  FUN_00427d60();
  return;
}


/* END FUNCTION 0x00428180 */
