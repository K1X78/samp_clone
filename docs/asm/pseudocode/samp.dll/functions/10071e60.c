/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071e60
 * Name: FUN_10071e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10071e60(int param_1)

{
  int Y;
  int X;
  tagRECT local_10;
  
  GetClientRect(_DAT_00c97c1c,&local_10);
  Y = (local_10.bottom - local_10.top) / 2;
  X = (local_10.right - local_10.left) / 2;
  *(int *)(param_1 + 0xa7) = X;
  *(int *)(param_1 + 0xab) = Y;
  SetCursorPos(X,Y);
  return;
}


/* END FUNCTION 0x10071e60 */
