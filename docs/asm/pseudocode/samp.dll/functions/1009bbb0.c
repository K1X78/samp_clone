/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009bbb0
 * Name: FUN_1009bbb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1009bbb0(undefined4 *param_1,int param_2)

{
  FUN_1009ba60();
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  if (0 < param_2) {
    FUN_1009b240(param_2);
  }
  return param_1;
}


/* END FUNCTION 0x1009bbb0 */
