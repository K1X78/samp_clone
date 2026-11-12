/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427d60
 * Name: FUN_00427d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00427d60(void)

{
  int unaff_ESI;
  
  if ((*(char *)(unaff_ESI + 0x22) == '\0') && (*(int *)(unaff_ESI + 0xc) != 0)) {
    FUN_00427610();
    *(undefined4 *)(unaff_ESI + 0xc) = 0;
  }
  return;
}


/* END FUNCTION 0x00427d60 */
