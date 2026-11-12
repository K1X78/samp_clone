/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014e50
 * Name: FUN_10014e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10014e50(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x120) = *param_2;
  *(undefined4 *)(param_1 + 0x124) = param_2[1];
  *(undefined4 *)(param_1 + 0x128) = param_2[2];
  *(undefined4 *)(param_1 + 300) = *param_3;
  *(undefined4 *)(param_1 + 0x130) = param_3[1];
  *(undefined4 *)(param_1 + 0x134) = param_3[2];
  FUN_1009eb50(*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x130),
               *(undefined4 *)(param_1 + 0x134));
  return;
}


/* END FUNCTION 0x10014e50 */
