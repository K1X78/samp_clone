/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ab810
 * Name: FUN_100ab810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_100ab810(void)

{
  int iVar1;
  
  iVar1 = FUN_100a70f0();
  if (*(short *)(iVar1 + 0x16) != 0) {
    return 1;
  }
  if (*(short *)(iVar1 + 0x14) != 0) {
    return 2;
  }
  return (*(short *)(iVar1 + 0x12) == 0) - 1U & 3;
}


/* END FUNCTION 0x100ab810 */
