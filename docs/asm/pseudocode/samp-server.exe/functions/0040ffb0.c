/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ffb0
 * Name: FUN_0040ffb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_0040ffb0(void)

{
  int in_EAX;
  
  if (in_EAX == 0x71) {
    return "UNION ALL";
  }
  if (in_EAX != 0x72) {
    if (in_EAX != 0x73) {
      return "UNION";
    }
    return "INTERSECT";
  }
  return "EXCEPT";
}


/* END FUNCTION 0x0040ffb0 */
