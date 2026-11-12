/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000e910
 * Name: FUN_1000e910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_1000e910(int param_1,ushort param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      bVar1 = bVar1 ^ *(byte *)(uVar2 + param_1) & 0xcc;
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
  return bVar1;
}


/* END FUNCTION 0x1000e910 */
