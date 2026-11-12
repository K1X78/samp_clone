/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415810
 * Name: FUN_00415810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_00415810(void)

{
  char cVar1;
  char unaff_BL;
  
  cVar1 = FUN_004157b0();
  if (cVar1 == '\0') {
    if (unaff_BL != '\0') goto LAB_00415830;
  }
  else {
    if (unaff_BL == '\0') {
LAB_00415830:
      return cVar1 + unaff_BL;
    }
    if (('b' < cVar1) || ('b' < unaff_BL)) {
      return 'c';
    }
  }
  return 'b';
}


/* END FUNCTION 0x00415810 */
