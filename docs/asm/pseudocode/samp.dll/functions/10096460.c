/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10096460
 * Name: FUN_10096460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10096460(int param_1)

{
  HWND hWnd;
  tagRECT *lpRect;
  tagRECT local_10;
  
  FUN_100932c0();
  *(undefined4 *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  *(undefined4 *)(param_1 + 0x111) = 0;
  *(undefined4 *)(param_1 + 0x115) = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  lpRect = &local_10;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  hWnd = GetForegroundWindow();
  GetClientRect(hWnd,lpRect);
  *(LONG *)(param_1 + 200) = local_10.right;
  *(LONG *)(param_1 + 0xcc) = local_10.bottom;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f666666;
  *(float *)(param_1 + 0xd0) = (float)local_10.right * 0.5;
  *(float *)(param_1 + 0xd4) = (float)local_10.bottom * 0.5;
  return param_1;
}


/* END FUNCTION 0x10096460 */
