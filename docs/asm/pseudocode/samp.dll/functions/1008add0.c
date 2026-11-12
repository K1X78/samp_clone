/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008add0
 * Name: FUN_1008add0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008add0(void)

{
  BYTE *lpMultiByteStr;
  uint uVar1;
  DWORD *pDVar2;
  int iVar3;
  HANDLE pvVar4;
  undefined1 *puVar5;
  ulong CodePage;
  BOOL BVar6;
  short *psVar7;
  undefined2 *puVar8;
  uint unaff_EBX;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int unaff_ESI;
  undefined4 *puVar11;
  LPWSTR unaff_EDI;
  bool bVar12;
  bool bVar13;
  DWORD DVar14;
  LPWSTR lpWideCharStr;
  SIZE_T dwBytes;
  undefined1 *puStack_168;
  DWORD *pDStack_164;
  undefined1 *puStack_15c;
  DWORD *pDVar15;
  int iStack_148;
  uint local_144;
  WCHAR aWStack_140 [2];
  undefined1 auStack_13c [4];
  undefined4 uStack_138;
  DWORD *pDStack_134;
  _OSVERSIONINFOW _Stack_130;
  
  puVar10 = (undefined1 *)0x0;
  uVar1 = FUN_10085500();
  if (uVar1 == 0) {
    DAT_1017f696 = 0;
    return;
  }
  local_144 = uVar1;
  pDVar2 = (DWORD *)(*(code *)PTR_FUN_10140c34)();
  if (pDVar2 == (DWORD *)0x0) {
    DAT_1017f696 = 0;
    return;
  }
  bVar13 = false;
  pDVar15 = (DWORD *)0x0;
  uStack_138 = 0;
  _Stack_130.dwOSVersionInfoSize = 0;
  pDStack_134 = pDVar2;
  if (PTR_FUN_10140c68 != (undefined *)0x0) {
    pDStack_164 = &_Stack_130.dwMajorVersion;
    puStack_168 = auStack_13c;
    iVar3 = (*(code *)PTR_FUN_10140c68)(pDVar2,0,0,&stack0xfffffeb0);
    puVar10 = (undefined1 *)0x0;
    if (iVar3 != 0) {
      dwBytes = iVar3 * 2;
      DVar14 = 0;
      pvVar4 = GetProcessHeap();
      pDVar15 = HeapAlloc(pvVar4,DVar14,dwBytes);
      pDStack_164 = pDVar15;
      if (pDVar15 == (DWORD *)0x0) {
        (*(code *)PTR_FUN_10140c38)(_DAT_00c97c1c,pDVar2);
        return;
      }
      puVar10 = (undefined1 *)
                (*(code *)PTR_FUN_10140c68)
                          (pDVar2,iVar3,pDVar15,&puStack_168,&stack0xfffffeac,&local_144);
    }
    DAT_101803ba = unaff_ESI == 0;
    bVar13 = true;
    goto LAB_1008af5f;
  }
  puStack_168 = (undefined1 *)0x1008aed4;
  pDStack_164 = pDVar2;
  iStack_148 = (*(code *)PTR_FUN_10140c18)();
  if (0x4040404 < uVar1) {
    if (uVar1 < 0x5020405) {
      if (uVar1 != 0x5020404) {
        if (uVar1 == 0x5000404) {
          iVar3 = (*(code *)PTR_FUN_10140c20)(*(undefined4 *)(iStack_148 + 0x124));
          if ((*(int *)(iVar3 + 0xc) != 0) &&
             (iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 0x20), iVar3 != 0)) {
            puVar10 = *(undefined1 **)(iVar3 + 0x50);
            puStack_168 = *(undefined1 **)(iVar3 + 0x54);
            pDStack_164 = (DWORD *)(iVar3 + 0x40);
            bVar13 = false;
          }
          goto LAB_1008af5f;
        }
        if (uVar1 != 0x5010404) goto LAB_1008af5f;
      }
    }
    else if (uVar1 != 0x5030804) goto LAB_1008af5f;
    iVar3 = (*(code *)PTR_FUN_10140c20)(*(undefined4 *)(iStack_148 + 0x124));
    if ((*(int *)(iVar3 + 4) != 0) && (iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x18), iVar3 != 0)) {
      puVar10 = *(undefined1 **)(iVar3 + 0x60);
      puStack_168 = *(undefined1 **)(iVar3 + 100);
      pDStack_164 = (DWORD *)(iVar3 + 0x40);
      bVar13 = true;
    }
    goto LAB_1008af5f;
  }
  if (uVar1 != 0x4040404) {
    if (uVar1 < 0x4020805) {
      if (uVar1 == 0x4020804) {
        _Stack_130.dwOSVersionInfoSize = 0x114;
        GetVersionExW(&_Stack_130);
        bVar12 = _Stack_130.dwPlatformId == 2;
        iVar3 = (*(code *)PTR_FUN_10140c20)(*(undefined4 *)(iStack_148 + 0x124));
        iVar3 = *(int *)(iVar3 + 0x20);
        uVar1 = unaff_EBX;
        if (iVar3 != 0) {
          puVar10 = *(undefined1 **)((bVar12 + 5) * 0x10 + iVar3);
          puStack_168 = *(undefined1 **)((bVar12 + 1) * 0x10 + 0x44 + iVar3);
          pDStack_164 = (DWORD *)(iVar3 + 0x40);
          bVar13 = _Stack_130.dwPlatformId == 2;
        }
        goto LAB_1008af5f;
      }
      if (uVar1 == 0x4010804) {
        uVar1 = FUN_10085500(1);
        iVar3 = (*(code *)PTR_FUN_10140c20)(*(undefined4 *)(iStack_148 + 0x124));
        iVar3 = *(int *)(iVar3 + (8 - (uint)(uVar1 < 2)) * 4);
        uVar1 = unaff_EBX;
        if (iVar3 != 0) {
          puVar10 = *(undefined1 **)(iVar3 + 0x9c);
          puStack_168 = *(undefined1 **)(iVar3 + 0xa0);
          if (puVar10 <= *(undefined1 **)(iVar3 + 0xa0)) {
            puStack_168 = puVar10;
          }
          pDStack_164 = (DWORD *)(iVar3 + 0x38);
          bVar13 = true;
        }
        goto LAB_1008af5f;
      }
      if (uVar1 != 0x4020404) goto LAB_1008af5f;
    }
    else if (uVar1 != 0x4030404) goto LAB_1008af5f;
  }
  iVar3 = (*(code *)PTR_FUN_10140c20)(*(undefined4 *)(iStack_148 + 0x124));
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 != 0) {
    puVar10 = *(undefined1 **)(iVar3 + 0x9c);
    puStack_168 = *(undefined1 **)(iVar3 + 0xa0);
    pDStack_164 = (DWORD *)(iVar3 + 0x38);
    bVar13 = true;
  }
LAB_1008af5f:
  puVar5 = (undefined1 *)0x0;
  DAT_10180640._0_2_ = 0;
  DAT_10180840 = 0;
  DAT_10180a40 = 0;
  DAT_10180c40 = 0;
  DAT_10181a5f = (undefined1 *)0xffffffff;
  DAT_10181a5b = puVar10;
  if (bVar13) {
    if (puVar10 != (undefined1 *)0x0) {
      puVar8 = (undefined2 *)((int)&DAT_10180640 + 2);
      do {
        if ((puStack_168 <= puVar5) && (DAT_10181a5f == (undefined1 *)0xffffffff)) {
          DAT_10181a5f = puVar5;
        }
        puVar8[-1] = *(undefined2 *)((int)pDStack_164 + (int)puVar5 * 2);
        *puVar8 = 0;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 0x100;
      } while (puVar5 < puVar10);
    }
    *(undefined2 *)(&DAT_10180640 + (int)puVar5 * 0x80) = 0;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    puStack_15c = (undefined1 *)0x0;
    if (puVar10 != (undefined1 *)0x0) {
      unaff_EDI = (LPWSTR)&DAT_10180640;
      do {
        CodePage = 0;
        if ((puStack_168 <= puVar9) && (DAT_10181a5f == (undefined1 *)0xffffffff)) {
          DAT_10181a5f = puStack_15c;
        }
        iVar3 = GetLocaleInfoW((uint)DAT_10180600,0x1004,aWStack_140,8);
        if (iVar3 != 0) {
          CodePage = _wcstoul(aWStack_140,(wchar_t **)0x0,0);
        }
        lpMultiByteStr = puVar9 + (int)pDStack_164;
        iVar3 = 1;
        lpWideCharStr = unaff_EDI;
        BVar6 = IsDBCSLeadByteEx(CodePage,*lpMultiByteStr);
        MultiByteToWideChar(CodePage,0,(LPCSTR)lpMultiByteStr,(BVar6 != 0) + 1,lpWideCharStr,iVar3);
        BVar6 = IsDBCSLeadByteEx(CodePage,*lpMultiByteStr);
        if (BVar6 != 0) {
          puVar9 = puVar9 + 1;
        }
        puVar9 = puVar9 + 1;
        puVar5 = puStack_15c + 1;
        unaff_EDI = unaff_EDI + 0x100;
        uVar1 = unaff_EBX;
        puStack_15c = puVar5;
      } while (puVar9 < puVar10);
    }
    *(undefined2 *)(&DAT_10180640 + (int)puVar5 * 0x80) = 0;
    DAT_10181a5b = puVar5;
  }
  puVar10 = (undefined1 *)0x0;
  if (PTR_FUN_10140c68 == (undefined *)0x0) {
    (*(code *)PTR_FUN_10140c24)(*(undefined4 *)(iStack_148 + 0x124));
    (*(code *)PTR_FUN_10140c1c)(pDVar15);
    FUN_1008ac70(uVar1);
  }
  (*(code *)PTR_FUN_10140c38)(_DAT_00c97c1c,0);
  if (unaff_EDI != (LPWSTR)0x0) {
    DVar14 = 0;
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,DVar14,unaff_EDI);
  }
  DAT_1017f696 = DAT_10181a5b != (undefined1 *)0x0;
  if (DAT_101803ba != '\0') {
    _DAT_10181a67 = -1;
    DAT_101803c0 = 0;
    if (DAT_10181a5b != (undefined1 *)0x0) {
      puVar11 = &DAT_10180640;
      do {
        if (DAT_10181a5f == puVar10) {
          _DAT_10181a67 = lstrlenW(&DAT_101803c0);
        }
        iVar3 = 0x20;
        psVar7 = &DAT_101803c0;
        do {
          if (*psVar7 == 0) {
            if (iVar3 != 0) {
              FUN_10083fa0(&DAT_101803c0 + (0x20 - iVar3),0x20 - (0x20 - iVar3),puVar11);
            }
            break;
          }
          psVar7 = psVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 0x80;
      } while (puVar10 < DAT_10181a5b);
    }
  }
  DAT_10181a63 = 10;
  return;
}


/* END FUNCTION 0x1008add0 */
