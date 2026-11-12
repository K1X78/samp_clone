/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e490
 * Name: FUN_0040e490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_0040e490(void)

{
  int in_EAX;
  
  if ((*(ushort *)(in_EAX + 2) & 0x2000) != 0) {
    return '\b';
  }
  return (-((*(ushort *)(in_EAX + 2) & 0x1000) != 0x1000) & 0x18U) + 0x18;
}


/* END FUNCTION 0x0040e490 */
