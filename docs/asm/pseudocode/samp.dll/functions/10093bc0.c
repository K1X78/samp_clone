/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093bc0
 * Name: FUN_10093bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10093bc0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  HWND hWnd;
  int Y;
  int X;
  tagRECT *lpRect;
  tagPOINT local_18;
  tagRECT local_10;
  
  GetCursorPos(&local_18);
  iVar1 = *(int *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x90);
  *(LONG *)(param_1 + 0x8c) = local_18.x;
  *(LONG *)(param_1 + 0x90) = local_18.y;
  if (*(char *)(param_1 + 0x150) != '\0') {
    lpRect = &local_10;
    hWnd = GetDesktopWindow();
    GetWindowRect(hWnd,lpRect);
    Y = (local_10.bottom - local_10.top) / 2;
    X = (local_10.right - local_10.left) / 2;
    SetCursorPos(X,Y);
    *(int *)(param_1 + 0x8c) = X;
    *(int *)(param_1 + 0x90) = Y;
  }
  fVar3 = 1.0 / *(float *)(param_1 + 0xa7);
  *(float *)(param_1 + 0x9f) =
       (1.0 - fVar3) * *(float *)(param_1 + 0x9f) + (float)(local_18.x - iVar1) * fVar3;
  *(float *)(param_1 + 0xa3) =
       (1.0 - fVar3) * *(float *)(param_1 + 0xa3) + (float)(local_18.y - iVar2) * fVar3;
  *(float *)(param_1 + 0x114) = *(float *)(param_1 + 300) * *(float *)(param_1 + 0x9f);
  *(float *)(param_1 + 0x118) = *(float *)(param_1 + 300) * *(float *)(param_1 + 0xa3);
  return;
}


/* END FUNCTION 0x10093bc0 */
