/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10051170
 * Name: FUN_10051170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10051170(int param_1,byte param_2,undefined4 param_3,byte param_4)

{
  byte *pbVar1;
  
  pbVar1 = operator_new(6);
  *pbVar1 = param_2;
  *(undefined4 *)(pbVar1 + 1) = param_3;
  pbVar1[5] = param_4;
  *(byte **)(param_1 + (uint)param_2 * 4) = pbVar1;
  return;
}


/* END FUNCTION 0x10051170 */
