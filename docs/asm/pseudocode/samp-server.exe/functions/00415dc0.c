/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415dc0
 * Name: FUN_00415dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00415dc0(void)

{
  char *in_EAX;
  int iVar1;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar1 = FUN_00437710(unaff_EDI,in_EAX,unaff_ESI);
  if ((iVar1 != unaff_ESI) && (unaff_EDI[3] != 0)) {
    FUN_00414e70(iVar1,0xf);
  }
  return;
}


/* END FUNCTION 0x00415dc0 */
