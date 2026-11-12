/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1e00
 * Name: FUN_100b1e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b1e00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (code *)((-(uint)(DAT_102ac9b8 != 1) & 0x50) + 0x74be70);
  _DAT_00c97b20 = 0;
  uVar3 = 0x41b300;
  uVar1 = (*pcVar2)(param_1,param_2,0x41b2f0,0x41b300,pcVar2,0);
  _DAT_00c97b20 = 1;
  return CONCAT44(uVar3,uVar1);
}


/* END FUNCTION 0x100b1e00 */
