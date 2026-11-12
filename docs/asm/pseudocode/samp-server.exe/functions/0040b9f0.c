/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b9f0
 * Name: FUN_0040b9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040b9f0(void)

{
  int in_EAX;
  
  if ((*(char *)(in_EAX + 0xf) == '\0') &&
     (((**(int **)(in_EAX + 0x3c) == 0 || (*(int *)(in_EAX + 0x4c) < 0)) ||
      ((*(int *)(in_EAX + 0x4c) < 1 && (*(int *)(in_EAX + 0x48) == 0)))))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0040b9f0 */
