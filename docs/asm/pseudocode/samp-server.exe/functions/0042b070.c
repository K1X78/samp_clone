/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042b070
 * Name: FUN_0042b070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0042b070(void)

{
  int iVar1;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  if ((*(char *)(unaff_ESI + 0x43) == '\x01') && (*(char *)(unaff_ESI + 0x41) != '\0')) {
    return 0;
  }
  iVar1 = FUN_0042ae50();
  if (iVar1 == 0) {
    if (*(char *)(unaff_ESI + 0x43) == '\0') {
      *unaff_EDI = 1;
      return 0;
    }
    *unaff_EDI = 0;
    iVar1 = FUN_0042afd0();
    *(bool *)(unaff_ESI + 0x41) = iVar1 == 0;
  }
  return iVar1;
}


/* END FUNCTION 0x0042b070 */
