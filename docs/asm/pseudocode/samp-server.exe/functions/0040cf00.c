/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040cf00
 * Name: FUN_0040cf00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040cf00(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(in_EAX + 0x43) == '\x01') {
    iVar1 = FUN_0040ce80(1);
  }
  return iVar1;
}


/* END FUNCTION 0x0040cf00 */
