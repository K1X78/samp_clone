/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084930
 * Name: FUN_10084930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10084930(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  HWND hWnd;
  
  if ((char)param_1[0xf] == '\0') {
    return 0;
  }
  if ((char)param_1[1] == '\0') {
    return 0;
  }
  if (param_2 != 0x201) {
    if (param_2 == 0x202) {
      if (*(char *)((int)param_1 + 0x151) == '\0') {
        return 0;
      }
      *(undefined1 *)((int)param_1 + 0x151) = 0;
      ReleaseCapture();
      if (*(char *)(param_1[6] + 1) == '\0') {
        FUN_10084880();
      }
      iVar1 = (**(code **)(*param_1 + 0x34))(param_3,param_4);
      if (iVar1 != 0) {
        FUN_10084460(0x101,1,param_1);
      }
      return 1;
    }
    if (param_2 != 0x203) {
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x34))(param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined1 *)((int)param_1 + 0x151) = 1;
  hWnd = (HWND)FUN_1007bed0();
  SetCapture(hWnd);
  FUN_10084460(0x102,1,param_1);
  if (*(char *)((int)param_1 + 6) == '\0') {
    FUN_100844b0(param_1);
  }
  return 1;
}


/* END FUNCTION 0x10084930 */
