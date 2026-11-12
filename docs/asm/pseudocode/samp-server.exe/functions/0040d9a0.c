/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d9a0
 * Name: FUN_0040d9a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0040d9a0(void)

{
  uint in_EAX;
  
  if (0xb < in_EAX) {
    return in_EAX - 0xc >> 1;
  }
  return (uint)(byte)(&DAT_004b3018)[in_EAX];
}


/* END FUNCTION 0x0040d9a0 */
