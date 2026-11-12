/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099fb0
 * Name: FUN_10099fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10099fb0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_10181c2c & 0xffffff0f;
  uVar1 = FUN_10099880();
  if ((uVar1 & 0x10) != 0) {
    uVar1 = uVar1 | 0x40;
  }
  DAT_10181c2c = uVar1 | uVar2;
  return 0;
}


/* END FUNCTION 0x10099fb0 */
