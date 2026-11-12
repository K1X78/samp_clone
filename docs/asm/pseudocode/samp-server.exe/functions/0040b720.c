/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b720
 * Name: FUN_0040b720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040b720(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 8) == '\0') {
    iVar1 = FUN_00407b30();
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_00407b40();
  return;
}


/* END FUNCTION 0x0040b720 */
