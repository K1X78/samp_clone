/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ccc0
 * Name: FUN_0040ccc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_0040ccc0(void)

{
  char cVar1;
  int in_EAX;
  
  FUN_0040c2c0();
  if (*(char *)(*(int *)(in_EAX + 4) + 0x14) == '\0') {
    FUN_0040c340();
    return '\0';
  }
  cVar1 = *(char *)(*(int *)(in_EAX + 4) + 0x15);
  FUN_0040c340();
  return (cVar1 != '\0') + '\x01';
}


/* END FUNCTION 0x0040ccc0 */
