/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415880
 * Name: FUN_00415880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_00415880(void)

{
  char cVar1;
  char unaff_BL;
  
  cVar1 = FUN_00415840();
  if (cVar1 == 'a') {
    return unaff_BL == 'a';
  }
  if (cVar1 != 'b') {
    return 'b' < unaff_BL;
  }
  return true;
}


/* END FUNCTION 0x00415880 */
