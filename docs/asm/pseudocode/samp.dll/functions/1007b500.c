/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007b500
 * Name: FUN_1007b500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1007b500(int *param_1,HICON param_2)

{
  uint uVar1;
  int *cLines;
  BOOL BVar2;
  int iVar3;
  int *cLines_00;
  HGDIOBJ h;
  uint uVar4;
  byte bVar5;
  uint *puVar6;
  uint unaff_EBX;
  void *lpvBits;
  undefined4 unaff_EBP;
  uint *puVar7;
  int *unaff_ESI;
  uint uVar8;
  uint unaff_EDI;
  int iVar9;
  tagBITMAPINFO *ptVar10;
  uint uVar11;
  bool bVar12;
  char cVar13;
  uint local_a8;
  int *local_a4;
  uint local_a0;
  HDC local_9c;
  uint *puStack_98;
  void *local_94;
  HDC local_90;
  HDC local_8c;
  ICONINFO local_80;
  void *pvStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  uint *puStack_58;
  undefined1 auStack_4c [8];
  tagBITMAPINFO tStack_44;
  undefined1 local_18 [4];
  uint local_14;
  int *local_10;
  char cStack_4;
  
  cVar13 = (char)((uint)unaff_EBP >> 0x18);
  local_80.fIcon = 0;
  local_80.xHotspot = 0;
  lpvBits = (void *)0x0;
  local_80.yHotspot = 0;
  local_80.hbmMask = (HBITMAP)0x0;
  iVar9 = -0x7fffbffb;
  local_a4 = (int *)0x0;
  local_90 = (HDC)0x0;
  local_9c = (HDC)0x0;
  local_8c = (HDC)0x0;
  local_94 = (void *)0x0;
  local_80.hbmColor = (HBITMAP)0x0;
  BVar2 = GetIconInfo(param_2,&local_80);
  if ((BVar2 != 0) &&
     (iVar3 = GetObjectA(local_80.hbmMask,0x18,local_18), cLines = local_10, iVar3 != 0)) {
    bVar12 = local_80.hbmColor == (HBITMAP)0x0;
    local_a0 = local_14;
    cLines_00 = local_10;
    if (bVar12) {
      cLines_00 = (int *)((uint)local_10 >> 1);
    }
    iVar9 = (**(code **)(*param_1 + 0x90))(param_1,local_14,cLines_00,0x15,3,&local_a4,0);
    if (-1 < iVar9) {
      lpvBits = operator_new((int)cLines * local_14 * 4);
      ptVar10 = &tStack_44;
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        (ptVar10->bmiHeader).biSize = 0;
        ptVar10 = (tagBITMAPINFO *)&(ptVar10->bmiHeader).biWidth;
      }
      tStack_44.bmiHeader.biSize = 0x28;
      tStack_44.bmiHeader.biWidth = local_14;
      tStack_44.bmiHeader.biHeight = (LONG)cLines;
      tStack_44.bmiHeader.biPlanes = 1;
      tStack_44.bmiHeader.biBitCount = 0x20;
      tStack_44.bmiHeader.biCompression = 0;
      pvStack_6c = lpvBits;
      local_8c = GetDC((HWND)0x0);
      local_9c = CreateCompatibleDC(local_8c);
      if (local_9c == (HDC)0x0) {
        iVar9 = -0x7fffbffb;
      }
      else {
        h = SelectObject(local_9c,local_80.hbmMask);
        GetDIBits(local_9c,local_80.hbmMask,0,(UINT)cLines,lpvBits,&tStack_44,0);
        SelectObject(local_9c,h);
        uVar1 = local_a0;
        if (!bVar12) {
          local_94 = operator_new((int)cLines_00 * local_a0 * 4);
          local_90 = CreateCompatibleDC(local_8c);
          if (local_90 == (HDC)0x0) {
            iVar9 = -0x7fffbffb;
            goto LAB_1007b877;
          }
          SelectObject(local_90,local_80.hbmColor);
          GetDIBits(local_90,local_80.hbmColor,0,(UINT)cLines_00,local_94,&tStack_44,0);
        }
        (**(code **)(*local_a4 + 0x34))(local_a4,auStack_4c,0,0);
        local_a8 = 0;
        if (cLines_00 != (int *)0x0) {
          puStack_98 = puStack_58;
          iStack_64 = -uVar1;
          iStack_68 = uVar1 * -4;
          local_94 = (void *)(((int)cLines + -1) * uVar1);
          local_80.yHotspot = ((int)cLines_00 * 4 + -4) * uVar1 + (int)lpvBits;
          uVar4 = uVar1;
          do {
            uVar11 = 0;
            if (uVar4 != 0) {
              iStack_60 = (int)local_a4 - (int)lpvBits;
              bVar5 = 0xf;
              puVar6 = (uint *)local_80.yHotspot;
              puVar7 = puStack_98;
              do {
                if (cVar13 == '\0') {
                  uVar4 = *(uint *)(iStack_60 + (int)puVar6);
                  uVar8 = *puVar6;
                }
                else {
                  uVar4 = *puVar6;
                  uVar8 = *(uint *)((int)lpvBits + ((int)local_94 + uVar11) * 4);
                }
                if (uVar8 == 0) {
                  *puVar7 = uVar4 | 0xff000000;
                }
                else {
                  *puVar7 = 0;
                }
                if (((cStack_4 != '\0') && (uVar11 < 0xc)) && (local_a8 < 5)) {
                  local_80.hbmMask = (HBITMAP)0xa2a0ccc0;
                  pvStack_6c = (void *)CONCAT22(pvStack_6c._2_2_,0xccc0);
                  local_80.hbmColor = (HBITMAP)0xa2a0a4a0;
                  lpvBits = (void *)local_80.xHotspot;
                  if ((1 << (bVar5 & 0x1f) &
                      (uint)*(ushort *)((int)&local_80.hbmMask + local_a8 * 2)) != 0) {
                    *puVar7 = *puVar7 | 0xff808080;
                  }
                }
                uVar11 = uVar11 + 1;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
                bVar5 = bVar5 - 1;
                uVar4 = unaff_EBX;
              } while (uVar11 < unaff_EBX);
            }
            local_a8 = local_a8 + 1;
            puStack_98 = puStack_98 + uVar4;
            local_94 = (void *)((int)local_94 + iStack_64);
            local_80.yHotspot = local_80.yHotspot + -uVar1 * 4;
          } while (local_a8 < unaff_EDI);
        }
        (**(code **)(*unaff_ESI + 0x38))(unaff_ESI);
        iVar9 = (**(code **)(*local_10 + 0x28))(local_10,local_90,local_8c,unaff_EDI);
        if (-1 < iVar9) {
          iVar9 = 0;
        }
      }
    }
  }
LAB_1007b877:
  if (local_80.hbmMask != (HBITMAP)0x0) {
    DeleteObject(local_80.hbmMask);
  }
  if (local_80.hbmColor != (HBITMAP)0x0) {
    DeleteObject(local_80.hbmColor);
  }
  if (local_8c != (HDC)0x0) {
    ReleaseDC((HWND)0x0,local_8c);
  }
  if (local_90 != (HDC)0x0) {
    DeleteDC(local_90);
  }
  if (local_9c != (HDC)0x0) {
    DeleteDC(local_9c);
  }
  if (local_94 != (void *)0x0) {
    _free(local_94);
  }
  if (lpvBits != (void *)0x0) {
    _free(lpvBits);
  }
  if (local_a4 != (int *)0x0) {
    (**(code **)(*local_a4 + 8))(local_a4);
  }
  return iVar9;
}


/* END FUNCTION 0x1007b500 */
