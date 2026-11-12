/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c1c0
 * Name: FUN_0040c1c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040c1c0(void)

{
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x1d) != '\0') {
    FUN_0040bd50();
    *(undefined1 *)(unaff_ESI + 0x1d) = 0;
  }
  return 0;
}


/* END FUNCTION 0x0040c1c0 */
