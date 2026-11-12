/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c220
 * Name: FUN_0040c220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_0040c220(void)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  
  if (in_EAX == 0) {
    if (*(char *)(unaff_ESI + 0x1c) == '\0') {
      return false;
    }
    *(undefined1 *)(unaff_ESI + 0x1c) = 0;
    iVar1 = FUN_0040bcd0();
    if (iVar1 != 0) {
      *(undefined1 *)(unaff_ESI + 0x1c) = 1;
    }
  }
  else if (0 < in_EAX) {
    FUN_0040bd00();
    *(undefined1 *)(unaff_ESI + 0x1c) = 1;
    return true;
  }
  return *(char *)(unaff_ESI + 0x1c) == '\0';
}


/* END FUNCTION 0x0040c220 */
