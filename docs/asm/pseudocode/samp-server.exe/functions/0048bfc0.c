/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048bfc0
 * Name: FUN_0048bfc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048bfc0(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX | 0x100;
  do {
    FUN_0048bf20(uVar1 >> 7 & 1);
    uVar1 = uVar1 << 1;
  } while (uVar1 < 0x10000);
  return;
}


/* END FUNCTION 0x0048bfc0 */
