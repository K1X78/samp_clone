/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae2a0
 * Name: FUN_100ae2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100ae2a0(void)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_100b4030(DAT_1018f4f0,DAT_1018f4f4);
  sVar1 = FUN_1009ca50(uVar2);
  uVar3 = FUN_100f9324();
  return (uVar3 & 0xff | 0xffff8000) << 0x10 | (int)sVar1;
}


/* END FUNCTION 0x100ae2a0 */
