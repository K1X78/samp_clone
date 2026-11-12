/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100436c0
 * Name: FUN_100436c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100436c0(void)

{
  uint uVar1;
  
  DAT_1013c7ec = DAT_1013c7ec + -1;
  if (DAT_1013c7ec < 0) {
    uVar1 = FUN_100435a0();
    return uVar1;
  }
  uVar1 = *DAT_101578b4;
  DAT_101578b4 = DAT_101578b4 + 1;
  uVar1 = uVar1 ^ uVar1 >> 0xb;
  uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
  uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
  return uVar1 >> 0x12 ^ uVar1;
}


/* END FUNCTION 0x100436c0 */
