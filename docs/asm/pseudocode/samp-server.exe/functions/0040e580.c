/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e580
 * Name: FUN_0040e580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040e580(void)

{
  int *unaff_EBX;
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  if (unaff_EBX != (int *)0x0) {
    iVar1 = 0;
    piVar2 = (int *)unaff_EBX[3];
    if (0 < *unaff_EBX) {
      do {
        FUN_004158d0(unaff_EDI,*piVar2);
        FUN_00408130(unaff_EDI);
        FUN_00408130(unaff_EDI);
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 5;
      } while (iVar1 < *unaff_EBX);
    }
    FUN_00408130(unaff_EDI);
    FUN_00408130(unaff_EDI);
  }
  return;
}


/* END FUNCTION 0x0040e580 */
