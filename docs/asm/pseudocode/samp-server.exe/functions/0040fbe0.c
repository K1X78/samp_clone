/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fbe0
 * Name: FUN_0040fbe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_0040fbe0(void)

{
  undefined1 in_AL;
  
  switch(in_AL) {
  case 6:
    return "RESTRICT";
  case 7:
    return "SET NULL";
  case 8:
    return "SET DEFAULT";
  case 9:
    return "CASCADE";
  default:
    return "NO ACTION";
  }
}


/* END FUNCTION 0x0040fbe0 */
