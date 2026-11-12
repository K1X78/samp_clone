/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00430190
 * Name: FUN_00430190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * FUN_00430190(void)

{
  char *in_EAX;
  int *piVar1;
  char *unaff_ESI;
  
  if ((*(ushort *)(in_EAX + 2) & 0x100) != 0) {
    return *(int **)(in_EAX + 0x14);
  }
  if ((unaff_ESI != (char *)0x0) && ((*(ushort *)(unaff_ESI + 2) & 0x100) != 0)) {
    return *(int **)(unaff_ESI + 0x14);
  }
  piVar1 = FUN_004300f0(in_EAX);
  if (piVar1 == (int *)0x0) {
    piVar1 = FUN_004300f0(unaff_ESI);
  }
  return piVar1;
}


/* END FUNCTION 0x00430190 */
