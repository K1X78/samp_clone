/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414330
 * Name: FUN_00414330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00414330(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x24);
  if (iVar1 == 0) {
    if (*(byte *)(unaff_ESI + 0xe) < 2) {
      return 1;
    }
    if (((*(char *)(unaff_ESI + 0xf) == '\0') && (*(char *)(unaff_ESI + 4) != '\0')) &&
       (*(char *)(unaff_ESI + 5) == '\x01')) {
      return 0;
    }
    FUN_00413bd0((uint)*(byte *)(unaff_ESI + 0x13));
    iVar1 = FUN_0040b4b0(unaff_ESI);
  }
  return iVar1;
}


/* END FUNCTION 0x00414330 */
