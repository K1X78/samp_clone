/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c21d0
 * Name: FUN_100c21d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c21d0(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX | 0x100;
  do {
    FUN_100c2130(uVar1 >> 7 & 1);
    uVar1 = uVar1 << 1;
  } while (uVar1 < 0x10000);
  return;
}


/* END FUNCTION 0x100c21d0 */
