/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007f770
 * Name: FUN_1007f770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1007f770(int *param_1,int param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *_Memory;
  code *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  LONG LVar10;
  HWND pHVar11;
  int iVar12;
  HMENU pHVar13;
  WINDOWPLACEMENT *lpwndpl;
  uint uVar14;
  WINDOWPLACEMENT *pWVar15;
  BOOL BVar16;
  DWORD DVar17;
  undefined4 *puVar18;
  int unaff_EBX;
  int iVar19;
  int unaff_EBP;
  int unaff_ESI;
  int iVar20;
  int unaff_EDI;
  undefined4 *puVar21;
  undefined4 unaff_retaddr;
  HWND hWndInsertAfter;
  int iVar22;
  LPRECT ptVar23;
  undefined4 uVar24;
  undefined1 *puVar25;
  tagRECT *ptVar26;
  UINT uFlags;
  int iVar27;
  int iVar28;
  char cStack_1fa;
  void *pvStack_1f8;
  tagRECT tStack_1f0;
  undefined1 auStack_1e0 [20];
  uint uStack_1cc;
  LONG LStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 auStack_198 [5];
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  tagRECT tStack_150;
  undefined1 auStack_140 [16];
  undefined1 local_130 [304];
  
  FUN_1007cbc0();
  piVar5 = (int *)FUN_10078460();
  tStack_1f0.right = (LONG)piVar5;
  iVar6 = FUN_1007d360();
  if (iVar6 == 0) {
    return 1;
  }
  _Memory = operator_new(0x48);
  if (_Memory == (int *)0x0) {
    return -0x7ff8fff2;
  }
  piVar8 = _Memory;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = *param_1;
    param_1 = param_1 + 1;
    piVar8 = piVar8 + 1;
  }
  FUN_1007cbc0();
  pcVar7 = (code *)FUN_1007a8c0();
  if (pcVar7 != (code *)0x0) {
    piVar8 = (int *)FUN_1007d360();
    (**(code **)(*piVar8 + 0x38))(piVar8,*_Memory,_Memory[1],local_130);
    FUN_1007cbc0();
    uVar9 = FUN_1007ae00();
    cVar4 = (*pcVar7)(_Memory,auStack_140,uVar9);
    if (cVar4 == '\0') {
      if (piVar5 == (int *)0x0) {
        FUN_1007bf40(0x80040902);
      }
      _free(_Memory);
      return -0x7fffbffc;
    }
    FUN_1007cbc0();
    iVar6 = FUN_100782e0();
    if (iVar6 == 0) {
      _free(_Memory);
      return 1;
    }
  }
  piVar8 = _Memory;
  FUN_1007cbc0(_Memory);
  FUN_10078420(piVar8);
  FUN_1007cfe0(1,1);
  uVar9 = 1;
  FUN_1007cbc0(1);
  FUN_10078be0(uVar9);
  DAT_10140bf4 = (byte)((uint)_Memory[3] >> 2) & 1;
  if ((param_2 == 0) && (piVar5 == (int *)0x0)) {
    FUN_1007cec0(_Memory);
  }
  uVar3 = (ushort)tStack_1f0.top;
  tStack_1f0.top._0_3_ = (uint3)(ushort)tStack_1f0.top;
  if ((_Memory[4] == 0) && (_Memory[5] == 0)) {
    tStack_1f0.top._0_3_ = CONCAT12(1,uVar3);
  }
  if (_Memory[0xc] == 0) {
    if ((piVar5 == (int *)0x0) || (piVar5[0xc] != 0)) {
      FUN_1007cbc0();
      lpwndpl = (WINDOWPLACEMENT *)FUN_100789a0();
      pWVar15 = lpwndpl;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        pWVar15->length = 0;
        pWVar15 = (WINDOWPLACEMENT *)&pWVar15->flags;
      }
      lpwndpl->length = 0x2c;
      pHVar11 = (HWND)FUN_1007d3c0();
      GetWindowPlacement(pHVar11,lpwndpl);
      iVar6 = -0x10;
      pHVar11 = (HWND)FUN_1007d3c0();
      uVar14 = GetWindowLongA(pHVar11,iVar6);
      uVar14 = uVar14 & 0xdeffffff;
      FUN_1007cbc0(uVar14);
      FUN_100789e0(uVar14);
      if (piVar5 != (int *)0x0) {
        iVar6 = piVar5[4];
        FUN_1007cbc0(iVar6);
        FUN_100788a0(iVar6);
        iVar6 = piVar5[5];
        FUN_1007cbc0(iVar6);
        FUN_10078920(iVar6);
      }
    }
    iVar6 = 0;
    pHVar11 = (HWND)FUN_1007d3b0();
    ShowWindow(pHVar11,iVar6);
    LVar10 = -0x7ff80000;
    iVar6 = -0x10;
    pHVar11 = (HWND)FUN_1007d3b0();
    SetWindowLongW(pHVar11,iVar6,LVar10);
    iVar6 = FUN_1007d3c0();
    iVar12 = FUN_1007d3b0();
    if (iVar12 == iVar6) {
      pHVar11 = (HWND)FUN_1007d3b0();
      pHVar13 = GetMenu(pHVar11);
      FUN_1007cbc0(pHVar13);
      FUN_10078720(pHVar13);
      pHVar13 = (HMENU)0x0;
      pHVar11 = (HWND)FUN_1007d3b0();
      SetMenu(pHVar11,pHVar13);
    }
    puVar18 = (undefined4 *)(auStack_1e0 + 0x10);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar18 = 0;
      puVar18 = puVar18 + 1;
    }
    pWVar15 = (WINDOWPLACEMENT *)(auStack_1e0 + 0x10);
    auStack_1e0._16_4_ = 0x2c;
    pHVar11 = (HWND)FUN_1007d3b0();
    GetWindowPlacement(pHVar11,pWVar15);
    pWVar15 = (WINDOWPLACEMENT *)(auStack_1e0 + 0x10);
    uStack_1cc = uStack_1cc & 0xfffffffd;
    LStack_1c8 = 9;
    pHVar11 = (HWND)FUN_1007d3b0();
    SetWindowPlacement(pHVar11,pWVar15);
  }
  else {
    if ((piVar5 != (int *)0x0) && (piVar5[0xc] == 0)) {
      iVar6 = piVar5[4];
      FUN_1007cbc0(iVar6);
      FUN_100787a0(iVar6);
      iVar6 = piVar5[5];
      FUN_1007cbc0(iVar6);
      FUN_10078820(iVar6);
      FUN_1007cbc0();
      LVar10 = FUN_10078a20();
      iVar6 = -0x10;
      pHVar11 = (HWND)FUN_1007d3c0();
      SetWindowLongW(pHVar11,iVar6,LVar10);
    }
    iVar6 = FUN_1007d3c0();
    iVar12 = FUN_1007d3b0();
    if (iVar12 != iVar6) {
      iVar6 = 0;
      pHVar11 = (HWND)FUN_1007d3b0();
      ShowWindow(pHVar11,iVar6);
    }
    iVar6 = FUN_1007d3c0();
    iVar12 = FUN_1007d3b0();
    if (iVar12 == iVar6) {
      FUN_1007cbc0();
      iVar6 = FUN_10078760();
      if (iVar6 != 0) {
        FUN_1007cbc0();
        pHVar13 = (HMENU)FUN_10078760();
        pHVar11 = (HWND)FUN_1007d3c0();
        SetMenu(pHVar11,pHVar13);
      }
    }
  }
  if (param_3 == '\0') {
    if (param_2 != 0) {
      iVar6 = FUN_1007b4a0();
      if (param_2 != iVar6) goto LAB_1007fbc9;
    }
    if (piVar5 == (int *)0x0) goto LAB_1007fbd7;
    if (((*piVar5 != *_Memory) || (piVar5[1] != _Memory[1])) || (piVar5[3] != _Memory[3]))
    goto LAB_1007fbc9;
    iVar6 = FUN_1007e8e0();
    if (iVar6 < 0) {
      if (iVar6 != -0x7789f798) {
        if ((iVar6 != -0x7ffbf6f8) && (iVar6 != -0x7ffbf6fd)) {
          piVar8 = piVar5;
          FUN_1007cbc0(piVar5);
          FUN_10078420(piVar8);
          iVar6 = FUN_1007f770(_Memory,param_2,1,param_4);
          if (iVar6 < 0) {
            _free(piVar5);
            FUN_1007cb00(0);
            return -0x7ffbf6fb;
          }
          _free(piVar5);
          return 0;
        }
        _free(piVar5);
        FUN_1007bf40(iVar6);
        FUN_1007cb00(0);
        return iVar6;
      }
      uVar9 = 1;
      FUN_1007cbc0(1);
      FUN_10079e80(uVar9);
    }
  }
  else {
LAB_1007fbc9:
    if (piVar5 != (int *)0x0) {
      FUN_1007c350(0);
    }
LAB_1007fbd7:
    iVar6 = FUN_1007f530(param_2);
    if (iVar6 < 0) {
      if (piVar5 != (int *)0x0) {
        _free(piVar5);
      }
      FUN_1007c350(1);
      FUN_1007bf40(iVar6);
      FUN_1007cfe0(0,0);
      uVar9 = 0;
      FUN_1007cbc0(0);
      FUN_10078be0(uVar9);
      return iVar6;
    }
  }
  if (_Memory[0xc] == 0) {
    FUN_1007cbc0();
    uVar9 = FUN_10079080();
  }
  else {
    FUN_1007cbc0();
    uVar9 = FUN_10079100();
  }
  FUN_1007b480(uVar9);
  piVar8 = (int *)FUN_1007d360();
  uVar9 = (**(code **)(*piVar8 + 0x3c))(piVar8,*_Memory);
  FUN_1007cbc0(uVar9);
  FUN_100786a0(uVar9);
  FUN_1007ed80();
  FUN_1007cbc0();
  uVar9 = FUN_100784e0();
  piVar8 = (int *)FUN_1007b4a0();
  (**(code **)(*piVar8 + 0x1c))(piVar8,uVar9);
  if (((piVar5 != (int *)0x0) && (piVar5[0xc] == 0)) && (_Memory[0xc] != 0)) {
    FUN_1007cbc0();
    pWVar15 = (WINDOWPLACEMENT *)FUN_100789a0();
    pHVar11 = (HWND)FUN_1007d3c0();
    SetWindowPlacement(pHVar11,pWVar15);
  }
  bVar2 = false;
  if ((_Memory[0xc] == 0) || (cStack_1fa != '\0')) goto LAB_10080196;
  pHVar11 = (HWND)FUN_1007d3c0();
  BVar16 = IsIconic(pHVar11);
  if (BVar16 == 0) {
    ptVar23 = (LPRECT)&stack0xfffffdf4;
    pHVar11 = (HWND)FUN_1007d3c0();
    GetClientRect(pHVar11,ptVar23);
    iVar6 = unaff_EBP - unaff_EDI;
    iVar12 = unaff_EBX - unaff_ESI;
  }
  else {
    puVar18 = (undefined4 *)auStack_1e0;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar18 = 0;
      puVar18 = puVar18 + 1;
    }
    pWVar15 = (WINDOWPLACEMENT *)auStack_1e0;
    auStack_1e0._0_4_ = 0x2c;
    pHVar11 = (HWND)FUN_1007d3c0();
    GetWindowPlacement(pHVar11,pWVar15);
    if (((auStack_1e0[4] & 2) == 0) || (auStack_1e0._8_4_ != 2)) {
      unaff_ESI = 0;
      unaff_EBP = 0;
      unaff_EDI = 0;
      unaff_EBX = 0;
      FUN_1007cbc0();
      iVar6 = FUN_10078760();
      uVar14 = (uint)(iVar6 != 0);
      FUN_1007cbc0();
      DVar17 = FUN_10078a20();
      AdjustWindowRect((LPRECT)&stack0xfffffdf4,DVar17,uVar14);
      iVar6 = (iStack_1bc - iStack_1c4) + unaff_EDI;
      iVar12 = (iStack_1b8 - iStack_1c0) + unaff_ESI;
    }
    else {
      iVar6 = 9;
      pHVar11 = (HWND)FUN_1007d3c0();
      ShowWindow(pHVar11,iVar6);
      ptVar23 = (LPRECT)&stack0xfffffdf4;
      pHVar11 = (HWND)FUN_1007d3c0();
      GetClientRect(pHVar11,ptVar23);
      iVar22 = 6;
      iVar6 = unaff_EBP - unaff_EDI;
      iVar12 = unaff_EBX - unaff_ESI;
      pHVar11 = (HWND)FUN_1007d3c0();
      ShowWindow(pHVar11,iVar22);
    }
  }
  if ((iVar6 != _Memory[4]) || (iVar12 != _Memory[5])) {
    bVar2 = true;
  }
  if ((char)unaff_retaddr == '\0') {
LAB_1007feb1:
    if (!bVar2) goto LAB_10080196;
  }
  else {
    pHVar11 = (HWND)FUN_1007d3c0();
    BVar16 = IsIconic(pHVar11);
    if (BVar16 != 0) goto LAB_1007feb1;
    auStack_198[0] = 0x28;
    piVar5 = (int *)FUN_1007d360();
    iVar6 = (**(code **)(*piVar5 + 0x3c))(piVar5,*_Memory);
    FUN_10077f90(iVar6,auStack_198);
    uVar24 = 1;
    uVar9 = FUN_1007bed0(1);
    iVar12 = FUN_10077f00(uVar9,uVar24);
    ptVar23 = (LPRECT)&stack0xfffffdf4;
    pHVar11 = (HWND)FUN_1007d3c0();
    GetWindowRect(pHVar11,ptVar23);
    if ((((iStack_184 <= unaff_EDI) && (unaff_EBP <= iStack_17c)) && (iStack_180 <= unaff_ESI)) &&
       (unaff_EBX <= iStack_178)) goto LAB_1007feb1;
    if (iVar12 == iVar6) {
      pHVar11 = (HWND)FUN_1007d3c0();
      BVar16 = IsZoomed(pHVar11);
      if (BVar16 != 0) goto LAB_1007feb1;
    }
  }
  pHVar11 = (HWND)FUN_1007d3c0();
  BVar16 = IsIconic(pHVar11);
  if (BVar16 != 0) {
    iVar6 = 9;
    pHVar11 = (HWND)FUN_1007d3c0();
    ShowWindow(pHVar11,iVar6);
  }
  pHVar11 = (HWND)FUN_1007d3c0();
  BVar16 = IsZoomed(pHVar11);
  if (BVar16 != 0) {
    iVar6 = 9;
    pHVar11 = (HWND)FUN_1007d3c0();
    ShowWindow(pHVar11,iVar6);
  }
  if ((char)unaff_retaddr == '\0') {
    iVar12 = _Memory[4];
    iVar22 = _Memory[5];
    iVar28 = 0;
    iVar27 = 0;
    FUN_1007cbc0();
    iVar6 = FUN_10078760();
    uVar14 = (uint)(iVar6 != 0);
    iVar6 = -0x10;
    pHVar11 = (HWND)FUN_1007d3c0();
    DVar17 = GetWindowLongA(pHVar11,iVar6);
    AdjustWindowRect((LPRECT)&stack0xfffffdf4,DVar17,uVar14);
    uFlags = 6;
    iVar12 = iVar12 - iVar27;
    iVar22 = iVar22 - iVar28;
    iVar27 = 0;
    iVar6 = 0;
  }
  else {
    auStack_198[0] = 0x28;
    piVar5 = (int *)FUN_1007d360();
    puVar18 = auStack_198;
    uVar9 = (**(code **)(*piVar5 + 0x3c))(piVar5,*_Memory,puVar18);
    FUN_10077f90(uVar9,puVar18);
    puVar25 = auStack_1e0;
    uVar24 = 1;
    auStack_1e0._0_4_ = 0x28;
    uVar9 = FUN_1007bed0(1,puVar25);
    uVar9 = FUN_10077f00(uVar9,uVar24);
    FUN_10077f90(uVar9,puVar25);
    iVar28 = _Memory[4];
    iVar20 = iStack_17c - iStack_184;
    iVar19 = iStack_178 - iStack_180;
    iVar1 = _Memory[5];
    ptVar26 = &tStack_150;
    pHVar11 = (HWND)FUN_1007d3c0();
    GetWindowRect(pHVar11,ptVar26);
    iVar6 = 0;
    iVar27 = 0;
    FUN_1007cbc0();
    iVar12 = FUN_10078760();
    uVar14 = (uint)(iVar12 != 0);
    iVar12 = -0x10;
    pHVar11 = (HWND)FUN_1007d3c0();
    DVar17 = GetWindowLongA(pHVar11,iVar12);
    AdjustWindowRect((LPRECT)&stack0xfffffdf4,DVar17,uVar14);
    iVar12 = iVar28 - iVar6;
    iVar22 = iVar1 - iVar27;
    if (iVar20 < iVar12) {
      iVar12 = iVar20;
    }
    if (iVar19 < iVar22) {
      iVar22 = iVar19;
    }
    if (((iVar6 < iStack_184) || (iVar27 < iStack_180)) ||
       ((iStack_17c < iVar28 || (iStack_178 < iVar1)))) {
      iVar6 = (iVar20 - iVar12) / 2 + iStack_184;
      iVar27 = iStack_180 + (iVar19 - iVar22) / 2;
    }
    uFlags = 4;
  }
  hWndInsertAfter = (HWND)0x0;
  pHVar11 = (HWND)FUN_1007d3c0();
  SetWindowPos(pHVar11,hWndInsertAfter,iVar6,iVar27,iVar12,iVar22,uFlags);
  ptVar26 = &tStack_1f0;
  pHVar11 = (HWND)FUN_1007d3c0();
  GetClientRect(pHVar11,ptVar26);
  if ((tStack_1f0.right - tStack_1f0.left != _Memory[4]) ||
     (tStack_1f0.bottom - tStack_1f0.top != _Memory[5])) {
    puVar18 = (undefined4 *)FUN_1007d630(auStack_198);
    puVar21 = (undefined4 *)auStack_1e0;
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar21 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar21 = puVar21 + 1;
    }
    auStack_1e0._16_4_ = 0;
    uStack_1cc = 0;
    iVar6 = FUN_1007f770(auStack_1e0,0,0,unaff_retaddr);
    if (iVar6 < 0) {
      if (pvStack_1f8 != (void *)0x0) {
        _free(pvStack_1f8);
      }
      FUN_1007c350(1);
      FUN_1007cfe0(0,0);
      uVar9 = 0;
      FUN_1007cbc0(0);
      FUN_10078be0(uVar9);
      return iVar6;
    }
  }
LAB_10080196:
  pHVar11 = (HWND)FUN_1007bed0();
  BVar16 = IsWindowVisible(pHVar11);
  if (BVar16 == 0) {
    iVar6 = 5;
    pHVar11 = (HWND)FUN_1007bed0();
    ShowWindow(pHVar11,iVar6);
  }
  FUN_1007cbc0();
  cVar4 = FUN_10079440();
  if (cVar4 != '\0') {
    FUN_1007d6b0();
  }
  if (pvStack_1f8 != (void *)0x0) {
    _free(pvStack_1f8);
  }
  uVar9 = 0;
  FUN_1007cbc0(0);
  FUN_10078be0(uVar9);
  FUN_1007cfe0(0,0);
  uVar9 = 1;
  FUN_1007cbc0(1);
  FUN_10079840(uVar9);
  return 0;
}


/* END FUNCTION 0x1007f770 */
