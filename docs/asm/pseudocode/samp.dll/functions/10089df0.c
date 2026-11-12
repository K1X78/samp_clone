/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10089df0
 * Name: FUN_10089df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10089df0(int *param_1,undefined4 param_2,undefined4 param_3,LONG param_4,undefined4 param_5,
            undefined4 param_6)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  char cVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  LONG unaff_EBP;
  int unaff_EDI;
  bool bVar5;
  
  if (((char)param_1[0xf] == '\0') || ((char)param_1[1] == '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(*(int *)((int)param_1 + 0x15e) + 0x18))
                    (param_2,param_3,param_4,param_5,param_6);
  if (cVar1 != '\0') {
    return 1;
  }
  switch(unaff_EDI) {
  case 0x200:
    if (((char)param_1[0x85] != '\0') &&
       (pt_01.y = param_4, pt_01.x = unaff_EBP,
       BVar3 = PtInRect((RECT *)((int)param_1 + 0x235),pt_01), BVar3 != 0)) {
      iVar2 = 0;
      if (*(int *)((int)param_1 + 0x259) < 1) {
        return 1;
      }
      do {
        iVar4 = *(int *)(*(int *)((int)param_1 + 0x255) + iVar2 * 4);
        if ((*(char *)(iVar4 + 0x114) != '\0') &&
           (pt_02.y = param_4, pt_02.x = unaff_EBP, BVar3 = PtInRect((RECT *)(iVar4 + 0x104),pt_02),
           BVar3 != 0)) {
          *(int *)((int)param_1 + 0x156) = iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)param_1 + 0x259));
      return 1;
    }
    break;
  case 0x201:
  case 0x203:
    iVar2 = (**(code **)(*param_1 + 0x34))(unaff_EBP,param_4);
    if (iVar2 != 0) {
      *(undefined1 *)((int)param_1 + 0x151) = 1;
      hWnd = (HWND)FUN_1007bed0();
      SetCapture(hWnd);
      if ((*(char *)((int)param_1 + 6) == '\0') &&
         (FUN_100844b0(param_1), *(char *)((int)param_1 + 6) == '\0')) {
        return 1;
      }
      bVar5 = (char)param_1[0x85] == '\0';
      *(bool *)(param_1 + 0x85) = bVar5;
      if (bVar5) {
        return 1;
      }
LAB_10089f2f:
      if (*(char *)(param_1[6] + 1) != '\0') {
        return 1;
      }
      FUN_10084880();
      return 1;
    }
    if ((char)param_1[0x85] != '\0') {
      pt.y = param_4;
      pt.x = unaff_EBP;
      BVar3 = PtInRect((RECT *)((int)param_1 + 0x235),pt);
      if (BVar3 != 0) {
        iVar2 = param_1[0x7b];
        if (*(int *)((int)param_1 + 0x259) <= iVar2) {
          return 1;
        }
        while ((iVar4 = *(int *)(*(int *)((int)param_1 + 0x255) + iVar2 * 4),
               *(char *)(iVar4 + 0x114) == '\0' ||
               (pt_00.y = param_4, pt_00.x = unaff_EBP,
               BVar3 = PtInRect((RECT *)(iVar4 + 0x104),pt_00), BVar3 == 0))) {
          iVar2 = iVar2 + 1;
          if (*(int *)((int)param_1 + 0x259) <= iVar2) {
            return 1;
          }
        }
        *(int *)((int)param_1 + 0x152) = iVar2;
        *(int *)((int)param_1 + 0x156) = iVar2;
        FUN_10084460(0x201,1,param_1);
        *(undefined1 *)(param_1 + 0x85) = 0;
        goto LAB_10089f2f;
      }
      if ((char)param_1[0x85] != '\0') {
        *(undefined4 *)((int)param_1 + 0x156) = *(undefined4 *)((int)param_1 + 0x152);
        FUN_10084460(0x201,1,param_1);
        *(undefined1 *)(param_1 + 0x85) = 0;
      }
    }
    *(undefined1 *)((int)param_1 + 0x151) = 0;
    if (*(char *)(param_1[6] + 1) == '\0') {
      FUN_10084880();
    }
    break;
  case 0x202:
    if ((*(char *)((int)param_1 + 0x151) != '\0') &&
       (iVar2 = (**(code **)(*param_1 + 0x34))(unaff_EBP,param_4), iVar2 != 0)) {
      *(undefined1 *)((int)param_1 + 0x151) = 0;
      ReleaseCapture();
      return 1;
    }
    break;
  case 0x20a:
    iVar2 = (int)(short)((uint)param_5 >> 0x10) / 0x78;
    if ((char)param_1[0x85] != '\0') {
      SystemParametersInfoA(0x68,0,&stack0xfffffff0,0);
      FUN_10088230(-(unaff_EDI * iVar2));
      return 1;
    }
    iVar4 = *(int *)((int)param_1 + 0x156);
    if (iVar2 < 1) {
      iVar4 = iVar4 + 1;
      if (*(int *)((int)param_1 + 0x259) <= iVar4) {
        return 1;
      }
    }
    else {
      if (iVar4 < 1) {
        return 1;
      }
      iVar4 = iVar4 + -1;
    }
    *(int *)((int)param_1 + 0x152) = iVar4;
    *(int *)((int)param_1 + 0x156) = iVar4;
    FUN_10084460(0x201,1,param_1);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10089df0 */
