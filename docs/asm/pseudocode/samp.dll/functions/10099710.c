/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099710
 * Name: FUN_10099710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10099710(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_10086cf0(9,4);
  uVar1 = FUN_10087cd0();
  *param_1 = uVar1 & 0xffff;
  *param_2 = uVar1 >> 0x10;
  return;
}


/* END FUNCTION 0x10099710 */
