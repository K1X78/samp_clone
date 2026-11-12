/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10080ab0
 * Name: FUN_10080ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

LRESULT FUN_10080ab0(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  HWND hWnd;
  HMENU hMenu;
  int *piVar6;
  LRESULT LVar7;
  byte bVar8;
  int iVar9;
  float10 fVar10;
  LPRECT lpRect;
  undefined8 uVar11;
  int local_1c;
  uint uStack_18;
  uint uStack_14;
  tagRECT tStack_10;
  
  if ((param_2 == 0x100) || (param_2 == 0x104)) {
    uVar1 = 1;
LAB_10080aeb:
    FUN_1007cbc0();
    iVar3 = FUN_1007b300();
    *(undefined1 *)(iVar3 + (param_3 & 0xff)) = uVar1;
    FUN_1007cbc0();
    pcVar4 = (code *)FUN_1007ac40();
    if (pcVar4 != (code *)0x0) {
      FUN_1007cbc0();
      FUN_1007b180();
      (*pcVar4)(param_3,uVar1,param_4 >> 0x1d & 0xffffff01);
    }
  }
  else if ((param_2 == 0x101) || (param_2 == 0x105)) {
    uVar1 = 0;
    goto LAB_10080aeb;
  }
  if ((((((param_2 == 0x201) || (param_2 == 0x202)) || (param_2 == 0x203)) ||
       (((param_2 == 0x207 || (param_2 == 0x208)) ||
        ((param_2 == 0x209 || ((param_2 == 0x204 || (param_2 == 0x205)))))))) || (param_2 == 0x206))
     || (param_2 == 0x20a)) {
LAB_10080bb2:
    iVar3 = (int)(short)(param_4 >> 0x10);
    iVar9 = (int)(short)param_4;
    if (param_2 == 0x20a) {
      tStack_10.top = iVar3;
      tStack_10.left = (int)(short)param_4;
      ScreenToClient(param_1,(LPPOINT)&tStack_10);
      iVar3 = tStack_10.top;
      iVar9 = tStack_10.left;
    }
    local_1c = 0;
    if (param_2 == 0x20a) {
      local_1c = (int)(short)(param_3 >> 0x10);
    }
    bVar8 = (byte)((ushort)param_3 >> 1);
    uStack_14 = CONCAT31(uStack_14._1_3_,(char)param_3) & 0xffffff01;
    tStack_10._0_8_ = CONCAT71(tStack_10._1_7_,bVar8) & 0xffffffffffffff01;
    uStack_18 = CONCAT31(uStack_18._1_3_,(char)((ushort)param_3 >> 4)) & 0xffffff01;
    FUN_1007cbc0();
    puVar5 = (undefined1 *)FUN_1007b340();
    *puVar5 = (undefined1)uStack_14;
    puVar5[1] = (undefined1)uStack_18;
    puVar5[2] = bVar8 & 1;
    puVar5[3] = 0;
    puVar5[4] = 0;
    FUN_1007cbc0();
    pcVar4 = (code *)FUN_1007acc0();
    if (pcVar4 != (code *)0x0) {
      FUN_1007cbc0();
      FUN_1007b200();
      (*pcVar4)(uStack_14,tStack_10.left,uStack_18,0,0,local_1c,iVar9,iVar3);
    }
  }
  else {
    FUN_1007cbc0();
    cVar2 = FUN_10079f40();
    if ((cVar2 != '\0') && (param_2 == 0x200)) goto LAB_10080bb2;
  }
  if (0x104 < param_2) {
    if (0x212 < param_2) {
      if (param_2 == 0x218) {
        if (param_3 == 0) {
          return 1;
        }
        if (param_3 == 7) {
          FUN_10095e30();
          FUN_10093010();
          uVar11 = 0;
          FUN_1007cbc0(0);
          FUN_10078df0(uVar11);
          return 1;
        }
      }
      else if (param_2 == 0x231) {
        FUN_1007cfe0(1);
        FUN_1007cbc0();
        FUN_1007a000();
      }
      else if (param_2 == 0x232) {
        FUN_1007cfe0(0);
        FUN_10080210();
        FUN_100802d0();
        FUN_1007cbc0();
        FUN_1007a000();
      }
      goto switchD_10080cad_caseD_3;
    }
    if (param_2 != 0x212) {
      if (param_2 < 0x201) {
        if (param_2 == 0x200) {
          cVar2 = FUN_1007d4a0();
          if (((cVar2 == '\0') && (cVar2 = FUN_1007b4c0(), cVar2 == '\0')) &&
             (piVar6 = (int *)FUN_1007b4a0(), piVar6 != (int *)0x0)) {
            GetCursorPos((LPPOINT)&tStack_10);
            (**(code **)(*piVar6 + 0x2c))(piVar6,tStack_10.left,tStack_10.top);
          }
        }
        else if (param_2 == 0x112) {
          if (param_3 < 0xf031) {
            if ((param_3 != 0xf030) && ((param_3 != 0xf000 && (param_3 != 0xf010))))
            goto switchD_10080cad_caseD_3;
          }
          else if ((param_3 != 0xf100) && (param_3 != 0xf170)) goto switchD_10080cad_caseD_3;
          cVar2 = FUN_1007b4c0();
          if (cVar2 == '\0') {
            return 0;
          }
        }
        else if (param_2 == 0x120) {
          return 0x10000;
        }
      }
      else if (param_2 == 0x211) {
        FUN_1007cfe0(1);
      }
      goto switchD_10080cad_caseD_3;
    }
    goto LAB_10081281;
  }
  if (param_2 == 0x104) {
    FUN_1007cbc0();
    cVar2 = FUN_100792c0();
    if (((cVar2 != '\0') && (param_3 == 0xd)) && ((param_4 & 0x20000000) != 0)) {
      FUN_1007cfe0(1,1);
      FUN_10080440();
      FUN_1007cfe0(0,0);
      return 0;
    }
    goto switchD_10080cad_caseD_3;
  }
  switch(param_2) {
  case 2:
    PostQuitMessage(0);
    break;
  case 5:
    if (param_3 == 1) {
      FUN_1007cbc0();
      cVar2 = FUN_100793c0();
      if ((cVar2 != '\0') && (cVar2 = FUN_1007b4c0(), cVar2 == '\0')) {
        ClipCursor((RECT *)0x0);
      }
      FUN_1007cfe0(1);
      FUN_1007cbc0();
      FUN_10078a60();
      FUN_1007cbc0();
      FUN_10078ae0();
    }
    else {
      lpRect = &tStack_10;
      hWnd = (HWND)FUN_1007bed0();
      GetClientRect(hWnd,lpRect);
      if ((tStack_10.top != 0) || (tStack_10.bottom != 0)) {
        if (param_3 == 2) {
          FUN_1007cbc0();
          cVar2 = FUN_10078aa0();
          if (cVar2 != '\0') {
            FUN_1007cfe0(0);
          }
          FUN_1007cbc0();
          FUN_10078a60();
        }
        else {
          if (param_3 != 0) break;
          FUN_1007cbc0();
          cVar2 = FUN_10078b20();
          if (cVar2 == '\0') {
            FUN_1007cbc0();
            cVar2 = FUN_10078aa0();
            if (cVar2 == '\0') {
              FUN_1007cbc0();
              cVar2 = FUN_1007a040();
              if (cVar2 == '\0') {
                FUN_10080210();
                FUN_100802d0();
              }
            }
            else {
              FUN_1007cfe0(0);
              FUN_1007cbc0();
              FUN_10078a60();
              FUN_10080210();
              FUN_100802d0();
            }
            break;
          }
        }
        FUN_1007cbc0();
        FUN_10078ae0();
        FUN_10080210();
        FUN_100802d0();
      }
    }
    break;
  case 0xf:
    piVar6 = (int *)FUN_1007b4a0();
    if ((piVar6 != (int *)0x0) && (cVar2 = FUN_1007d4a0(), cVar2 != '\0')) {
      FUN_1007cbc0();
      cVar2 = FUN_10079b80();
      if (cVar2 != '\0') {
        FUN_1007cbc0();
        cVar2 = FUN_10079c00();
        if (cVar2 != '\0') {
          fVar10 = (float10)FUN_1007d450();
          tStack_10._0_8_ = (BADTYPE)fVar10;
          fVar10 = (float10)FUN_1007d460();
          FUN_1007cbc0();
          pcVar4 = (code *)FUN_1007abc0();
          if (pcVar4 != (code *)0x0) {
            FUN_1007cbc0();
            FUN_1007b100();
            (*pcVar4)(piVar6,tStack_10._0_8_,(float)fVar10);
          }
          iVar3 = (**(code **)(*piVar6 + 0x44))(piVar6,0,0,0);
          if (iVar3 == -0x7789f798) {
            FUN_1007cbc0();
            FUN_10079e80();
          }
          else if (iVar3 == -0x7789f7d9) {
            FUN_1007cbc0();
            FUN_10079e80();
          }
        }
      }
    }
    break;
  case 0x10:
    hMenu = GetMenu(param_1);
    if (hMenu != (HMENU)0x0) {
      DestroyMenu(hMenu);
    }
    DestroyWindow(param_1);
    UnregisterClassA("Direct3DWindowClass",(HINSTANCE)0x0);
    FUN_1007cbc0();
    FUN_10078520();
    FUN_1007cbc0();
    FUN_100785a0();
    FUN_1007cbc0();
    FUN_10078620();
    return 0;
  case 0x1c:
    if (param_3 == 1) {
      FUN_1007cbc0();
      cVar2 = FUN_10079c80();
      if (cVar2 == '\0') {
        FUN_1007cbc0();
        FUN_10079c40();
        cVar2 = FUN_1007b4c0();
        if (cVar2 == '\0') {
          FUN_1007cbc0();
          cVar2 = FUN_10079440();
          if (cVar2 != '\0') {
            FUN_1007d6b0();
          }
        }
        FUN_1007cbc0();
        cVar2 = FUN_10078ba0();
        if (cVar2 != '\0') {
          FUN_1007cfe0(0);
          FUN_1007cbc0();
          FUN_10078b60();
        }
        cVar2 = FUN_1007b4c0();
        if (cVar2 == '\0') {
          FUN_1007cbc0();
          FUN_10079080();
          FUN_1007b480();
        }
        else {
          FUN_1007cbc0();
          FUN_10079100();
          FUN_1007b480();
        }
      }
    }
    else if (param_3 == 0) {
      FUN_1007cbc0();
      cVar2 = FUN_10079c80();
      if (cVar2 != '\0') {
        FUN_1007cbc0();
        FUN_10079c40();
        cVar2 = FUN_1007b4c0();
        if (cVar2 == '\0') {
          ClipCursor((RECT *)0x0);
          FUN_1007cfe0(1);
          FUN_1007cbc0();
          FUN_10078b60();
        }
        FUN_1007b480();
      }
    }
    break;
  case 0x24:
    *(undefined4 *)(param_4 + 0x18) = 200;
    *(undefined4 *)(param_4 + 0x1c) = 200;
    break;
  case 0x84:
    cVar2 = FUN_1007b4c0();
    if (cVar2 == '\0') {
      return 1;
    }
    break;
  case 0x100:
    FUN_1007cbc0();
    cVar2 = FUN_100792c0();
    if (cVar2 == '\0') break;
    switch(param_3) {
    case 0x1b:
      SendMessageA(param_1,0x10,0,0);
    case 0x13:
      cVar2 = FUN_1007d4c0();
      if (cVar2 == '\0') {
        FUN_1007cfe0(1);
      }
      else {
LAB_10081281:
        FUN_1007cfe0(0);
      }
      break;
    case 0x72:
      FUN_1007cfe0(1);
      FUN_10080600();
      FUN_1007cfe0(0);
      break;
    case 0x77:
      FUN_1007cbc0();
      FUN_100795c0();
      FUN_1007cbc0();
      FUN_10079580();
      piVar6 = (int *)FUN_1007b4a0();
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xe4))();
      }
    }
  }
switchD_10080cad_caseD_3:
  FUN_1007cbc0();
  iVar3 = FUN_10078760();
  if ((iVar3 == 0) && (((param_2 == 0x104 || (param_2 == 0x105)) && (param_3 == 0x79)))) {
    return 0;
  }
  LVar7 = DefWindowProcW(param_1,param_2,param_3,param_4);
  return LVar7;
}


/* END FUNCTION 0x10080ab0 */
