/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c1580
 * Name: FUN_100c1580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c1580(uint *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (4 < param_3) {
    uVar2 = *(uint *)(param_2 + 1);
    if (uVar2 < 0x1000) {
      uVar2 = 0x1000;
    }
    param_1[3] = uVar2;
    bVar1 = *param_2;
    if (bVar1 < 0xe1) {
      uVar2 = bVar1 / 9;
      *param_1 = (uint)bVar1 % 9;
      param_1[2] = uVar2 / 5;
      param_1[1] = uVar2 % 5;
      return 0;
    }
  }
  return 4;
}


/* END FUNCTION 0x100c1580 */
