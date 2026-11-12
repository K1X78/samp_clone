/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410790
 * Name: FUN_00410790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00410790(void)

{
  int in_EAX;
  
  if (in_EAX == 0x48) {
    return 1;
  }
  if (in_EAX == 0x49) {
    return 0x80;
  }
  return 2 << ((char)in_EAX + 0xb4U & 0x1f);
}


/* END FUNCTION 0x00410790 */
