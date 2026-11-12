/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ad70
 * Name: FUN_0048ad70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048ad70(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) == -1) {
    FUN_0048ad40();
  }
  if ((*(char *)(in_EAX + 0x1c) == '\0') &&
     (*(int *)(in_EAX + 0x44) == *(int *)(in_EAX + 0xc) - *(int *)(in_EAX + 4))) {
    FUN_0048a970();
  }
  if (*(int *)(in_EAX + 0x14) == *(int *)(in_EAX + 0x18)) {
    *(undefined4 *)(in_EAX + 0x14) = 0;
  }
  FUN_0048ac50();
  return;
}


/* END FUNCTION 0x0048ad70 */
