/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10092fc0
 * Name: FUN_10092fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 * __fastcall FUN_10092fc0(undefined1 *param_1)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[1] = 1;
  BVar1 = QueryPerformanceFrequency(&local_8);
  *(LONG *)(param_1 + 6) = local_8.s.HighPart;
  *param_1 = BVar1 != 0;
  *(DWORD *)(param_1 + 2) = local_8.s.LowPart;
  return param_1;
}


/* END FUNCTION 0x10092fc0 */
