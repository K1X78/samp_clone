/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087f20
 * Name: FUN_10087f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10087f20(int param_1,undefined4 param_2,int param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  HWND hWnd;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(char *)(param_1 + 0x3c) == '\0') || (*(char *)(param_1 + 4) == '\0')) {
    return 0;
  }
  switch(param_2) {
  case 0x200:
    if (*(char *)(param_1 + 0x65) != '\0') {
      uVar4 = 1;
      uVar3 = FUN_10084d10(*(int *)(param_1 + 0x5d) + *(int *)(param_1 + 8) + param_3);
      FUN_10084d60(uVar3,uVar4);
      return 1;
    }
    break;
  case 0x201:
  case 0x203:
    pt.y = param_4;
    pt.x = param_3;
    BVar1 = PtInRect((RECT *)(param_1 + 0x66),pt);
    if (BVar1 != 0) {
      *(undefined1 *)(param_1 + 0x65) = 1;
      hWnd = (HWND)FUN_1007bed0();
      SetCapture(hWnd);
      *(int *)(param_1 + 0x59) = param_3;
      *(int *)(param_1 + 0x5d) = *(int *)(param_1 + 0x61) - param_3;
      if (*(char *)(param_1 + 6) != '\0') {
        return 1;
      }
      FUN_100844b0(param_1);
      return 1;
    }
    pt_00.y = param_4;
    pt_00.x = param_3;
    BVar1 = PtInRect((RECT *)(param_1 + 0x3d),pt_00);
    if (BVar1 != 0) {
      *(int *)(param_1 + 0x59) = param_3;
      *(undefined4 *)(param_1 + 0x5d) = 0;
      *(undefined1 *)(param_1 + 0x65) = 1;
      if (*(char *)(param_1 + 6) == '\0') {
        FUN_100844b0(param_1);
      }
      iVar2 = *(int *)(param_1 + 0x61) + *(int *)(param_1 + 8);
      if (iVar2 < param_3) {
        FUN_10084d60(*(int *)(param_1 + 0x4d) + 1,1);
        return 1;
      }
      if (param_3 < iVar2) {
        FUN_10084d60(*(int *)(param_1 + 0x4d) + -1,1);
        return 1;
      }
    }
    break;
  case 0x202:
    if (*(char *)(param_1 + 0x65) != '\0') {
      *(undefined1 *)(param_1 + 0x65) = 0;
      ReleaseCapture();
      FUN_10084460(0x501,1,param_1);
      FUN_10084d60(0,0);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10087f20 */
