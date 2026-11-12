/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10072ff0
 * Name: FUN_10072ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10072ff0(int param_1,int param_2)

{
  int iVar1;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    if (param_2 == 0x201) {
      if (((*(char *)(param_1 + 0xa3) == '\0') && (iVar1 = *(int *)(param_1 + 0x113), iVar1 != -1))
         && ((iVar1 == 0 || ((iVar1 == 1 || (iVar1 == 2)))))) {
        *(undefined1 *)(param_1 + 0xa3) = 1;
        GetCursorPos((LPPOINT)(param_1 + 0xa7));
        GetCursorPos((LPPOINT)(param_1 + 0xaf));
        ScreenToClient(_DAT_00c97c1c,(LPPOINT)(param_1 + 0xaf));
        SetCapture(_DAT_00c97c1c);
        (*DAT_1016c368)(0);
        ClipCursor((RECT *)0x0);
        iVar1 = FUN_10002e10(*(undefined2 *)(param_1 + 0x88));
        if (iVar1 != 0) {
          FUN_1009e950(param_1 + 0xc3);
        }
        return 1;
      }
    }
    else if (param_2 == 0x202) {
      if (*(char *)(param_1 + 0xa3) != '\0') {
        *(undefined1 *)(param_1 + 0xa3) = 0;
        ReleaseCapture();
        (*DAT_1016c368)(1);
        iVar1 = *(int *)(param_1 + 0x113);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 8);
          iStack_8 = *(int *)(param_1 + 0xc);
        }
        else if (iVar1 == 1) {
          iVar1 = *(int *)(param_1 + 0x18);
          iStack_8 = *(int *)(param_1 + 0x1c);
        }
        else if (iVar1 == 2) {
          iVar1 = *(int *)(param_1 + 0x28);
          iStack_8 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar1 = *(int *)(param_1 + 0xaf);
          iStack_8 = *(int *)(param_1 + 0xb3);
        }
        ClientToScreen(_DAT_00c97c1c,(LPPOINT)&stack0xfffffff4);
        SetCursorPos(iVar1,iStack_8);
        FUN_10071b40();
        return 1;
      }
      iVar1 = *(int *)(param_1 + 0x113);
      if (iVar1 == 3) {
        FUN_10071c90(0);
        return 1;
      }
      if (iVar1 == 4) {
        FUN_10071c90(1);
        return 1;
      }
      if (iVar1 == 5) {
        FUN_10071c90(2);
        return 1;
      }
      if (iVar1 == 10) {
        FUN_10072660(1);
        return 1;
      }
    }
    else if ((param_2 == 0x200) && (*(char *)(param_1 + 0xa3) != '\0')) {
      FUN_10072f20();
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10072ff0 */
