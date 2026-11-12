/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015330
 * Name: FUN_10015330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10015330(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_100b4d50(param_2,param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0x138) = *param_3;
  *(undefined4 *)(param_1 + 0x13c) = param_3[1];
  *(undefined4 *)(param_1 + 0x140) = param_3[2];
  *(undefined4 *)(param_1 + 0x144) = *param_4;
  *(undefined4 *)(param_1 + 0x148) = param_4[1];
  *(undefined4 *)(param_1 + 0x14c) = param_4[2];
  FUN_1009eb50(*param_4,param_4[1],param_4[2]);
  return;
}


/* END FUNCTION 0x10015330 */
