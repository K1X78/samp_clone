/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042b040
 * Name: FUN_0042b040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042b040(void)

{
  int iVar1;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar1 = FUN_0042ae50();
  if (iVar1 == 0) {
    if (*(char *)(unaff_ESI + 0x43) != '\0') {
      *unaff_EDI = 0;
      FUN_0042af70();
      return;
    }
    *unaff_EDI = 1;
  }
  return;
}


/* END FUNCTION 0x0042b040 */
