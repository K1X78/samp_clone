/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be570
 * Name: FUN_100be570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100be570(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) == -1) {
    FUN_100be540();
  }
  if ((*(char *)(in_EAX + 0x1c) == '\0') &&
     (*(int *)(in_EAX + 0x44) == *(int *)(in_EAX + 0xc) - *(int *)(in_EAX + 4))) {
    FUN_100be170();
  }
  if (*(int *)(in_EAX + 0x14) == *(int *)(in_EAX + 0x18)) {
    *(undefined4 *)(in_EAX + 0x14) = 0;
  }
  FUN_100be450();
  return;
}


/* END FUNCTION 0x100be570 */
