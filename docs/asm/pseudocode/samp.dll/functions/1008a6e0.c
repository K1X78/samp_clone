/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008a6e0
 * Name: FUN_1008a6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_1008a6e0(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,undefined4 param_6)

{
  undefined1 uVar1;
  POINT pt;
  char cVar2;
  BOOL BVar3;
  HWND hWnd;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LONG unaff_EBP;
  int unaff_EDI;
  
  if ((*(char *)(param_1 + 0x3c) == '\0') || (*(char *)(param_1 + 4) == '\0')) {
    return 0;
  }
  if ((param_2 == 0x201) && (*(char *)(param_1 + 6) == '\0')) {
    FUN_100844b0();
  }
  cVar2 = (**(code **)(*(int *)(param_1 + 0x5d) + 0x18))(param_2,param_3,param_4,param_5,param_6);
  if (cVar2 != '\0') {
    return 1;
  }
  switch(unaff_EDI) {
  case 0x200:
    if (*(char *)(param_1 + 0x14b) == '\0') {
      return 0;
    }
    if (*(int *)(param_1 + 0x13b) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = (param_4 - *(int *)(param_1 + 0x113)) / *(int *)(param_1 + 0x13b) +
              *(int *)(param_1 + 0xeb);
    }
    iVar5 = *(int *)(param_1 + 0xeb);
    if (iVar6 < iVar5) {
LAB_1008aabc:
      FUN_10088230(0xffffffff);
      iVar6 = *(int *)(param_1 + 0xeb);
    }
    else if ((*(int *)(param_1 + 0x150) <= iVar6) || (*(int *)(param_1 + 0xef) + iVar5 <= iVar6)) {
      if (iVar5 <= iVar6) {
        if (iVar6 < *(int *)(param_1 + 0xef) + iVar5) {
          return 0;
        }
        FUN_10088230(1);
        iVar6 = *(int *)(param_1 + 0xef) + *(int *)(param_1 + 0xeb);
        if (*(int *)(param_1 + 0x150) < iVar6) {
          iVar6 = *(int *)(param_1 + 0x150);
        }
        *(int *)(param_1 + 0x143) = iVar6 + -1;
        break;
      }
      goto LAB_1008aabc;
    }
    *(int *)(param_1 + 0x143) = iVar6;
    break;
  case 0x201:
  case 0x203:
    if (*(int *)(param_1 + 0x150) < 1) {
      return 0;
    }
    pt.y = param_4;
    pt.x = unaff_EBP;
    BVar3 = PtInRect((RECT *)(param_1 + 0x11f),pt);
    if (BVar3 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x13b) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = (param_4 - *(int *)(param_1 + 0x113)) / *(int *)(param_1 + 0x13b) +
              *(int *)(param_1 + 0xeb);
    }
    if (iVar6 < *(int *)(param_1 + 0xeb)) {
      return 1;
    }
    if (*(int *)(param_1 + 0x150) <= iVar6) {
      return 1;
    }
    if (*(int *)(param_1 + 0xef) + *(int *)(param_1 + 0xeb) <= iVar6) {
      return 1;
    }
    hWnd = (HWND)FUN_1007bed0();
    SetCapture(hWnd);
    if (unaff_EDI == 0x203) {
      FUN_10084460(0x701,1,param_1);
      return 1;
    }
    *(int *)(param_1 + 0x143) = iVar6;
    if ((param_5 & 4) == 0) {
      *(int *)(param_1 + 0x147) = iVar6;
    }
    if ((*(byte *)(param_1 + 0x13f) & 1) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x14c) + iVar6 * 4);
      param_5 = param_5 & 0xc;
      if (param_5 == 8) {
        *(bool *)(iVar5 + 0x298) = *(char *)(iVar5 + 0x298) == '\0';
        FUN_10084460(0x702,1,param_1);
        return 1;
      }
      if (param_5 == 4) {
        iVar5 = *(int *)(param_1 + 0x147);
        iVar4 = iVar5;
        if ((iVar6 <= iVar5) && (iVar4 = iVar6, iVar6 < iVar5)) {
          iVar6 = iVar5;
        }
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            iVar7 = iVar5 * 4;
            iVar5 = iVar5 + 1;
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + iVar7) + 0x298) = 0;
          } while (iVar5 < iVar4);
        }
        iVar5 = iVar6 + 1;
        if (iVar5 < *(int *)(param_1 + 0x150)) {
          do {
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + iVar5 * 4) + 0x298) = 0;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x150));
        }
        if (iVar4 <= iVar6) {
          do {
            iVar5 = iVar4 * 4;
            iVar4 = iVar4 + 1;
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + iVar5) + 0x298) = 1;
          } while (iVar4 <= iVar6);
          FUN_10084460(0x702,1,param_1);
          return 1;
        }
      }
      else {
        if (param_5 == 0xc) {
          iVar4 = *(int *)(param_1 + 0x147);
          iVar7 = iVar4;
          if ((iVar6 <= iVar4) && (iVar7 = iVar6, iVar6 < iVar4)) {
            iVar6 = iVar4;
          }
          uVar1 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + iVar4 * 4) + 0x298);
          while (iVar7 = iVar7 + 1, iVar7 < iVar6) {
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + iVar7 * 4) + 0x298) = uVar1;
          }
          *(undefined1 *)(iVar5 + 0x298) = 1;
          *(undefined4 *)(param_1 + 0x143) = *(undefined4 *)(param_1 + 0x147);
          FUN_10084460(0x702,1,param_1);
          return 1;
        }
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0x150)) {
          do {
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + iVar6 * 4) + 0x298) = 0;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x150));
        }
        *(undefined1 *)(iVar5 + 0x298) = 1;
      }
    }
    FUN_10084460(0x702,1,param_1);
    return 1;
  case 0x202:
    ReleaseCapture();
    iVar6 = *(int *)(param_1 + 0x143);
    *(undefined1 *)(param_1 + 0x14b) = 0;
    if (*(int *)(param_1 + 0x150) <= iVar6) {
      return 0;
    }
    if (iVar6 == -1) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x147);
    iVar4 = iVar5;
    if ((iVar5 <= iVar6) && (iVar4 = iVar6, iVar5 < iVar6)) {
      iVar6 = iVar5;
    }
    while (iVar6 = iVar6 + 1, iVar6 < iVar4) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + iVar6 * 4) + 0x298) =
           *(undefined1 *)
            (*(int *)(*(int *)(param_1 + 0x14c) + *(int *)(param_1 + 0x147) * 4) + 0x298);
    }
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + *(int *)(param_1 + 0x143) * 4) + 0x298) =
         *(undefined1 *)
          (*(int *)(*(int *)(param_1 + 0x14c) + *(int *)(param_1 + 0x147) * 4) + 0x298);
    if (*(int *)(param_1 + 0x147) == *(int *)(param_1 + 0x143)) {
      return 0;
    }
    break;
  default:
    goto switchD_1008a75b_caseD_204;
  case 0x20a:
    SystemParametersInfoA(0x68,0,&stack0xfffffff0,0);
    iVar6 = (int)(short)(param_5 >> 0x10);
    iVar6 = (int)((ulonglong)((longlong)iVar6 * 0x77777777) >> 0x20) - iVar6;
    FUN_10088230(((iVar6 >> 6) - (iVar6 >> 0x1f)) * unaff_EDI);
    return 1;
  }
  FUN_10084460(0x702,1,param_1);
switchD_1008a75b_caseD_204:
  return 0;
}


/* END FUNCTION 0x1008a6e0 */
