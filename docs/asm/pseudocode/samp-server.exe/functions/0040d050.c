/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d050
 * Name: FUN_0040d050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040d050(void)

{
  int in_EAX;
  
  if ((in_EAX != 0) && (*(char *)(in_EAX + 8) == '\x02')) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0040d050 */
