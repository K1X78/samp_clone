/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417ba0
 * Name: FUN_00417ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00417ba0(void)

{
  uint in_EAX;
  uint uVar1;
  
  if (0x1c < (int)in_EAX) {
    uVar1 = in_EAX / 0x1d;
    in_EAX = in_EAX % 0x1d;
    do {
      FUN_00412af0("                             ",0x1d);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (0 < (int)in_EAX) {
    FUN_00412af0("                             ",in_EAX);
  }
  return;
}


/* END FUNCTION 0x00417ba0 */
