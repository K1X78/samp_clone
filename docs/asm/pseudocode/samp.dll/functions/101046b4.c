/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101046b4
 * Name: ___crtLCMapStringA
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  size_t _Size;
  LPCSTR pCVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  LPSTR lpDestStr;
  undefined4 uStackY_74;
  uint local_4c;
  LPCSTR local_2c;
  undefined1 *local_24;
  undefined1 *local_20;
  
  if (DAT_102ad020 == 0) {
    uStackY_74 = 0x101046e1;
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_102ad020 = 2;
      }
    }
    else {
      DAT_102ad020 = 1;
    }
  }
  pcVar5 = (char *)_DwMapFlag;
  pCVar9 = _LpSrcStr;
  if (0 < (int)_LpSrcStr) {
    do {
      pCVar9 = pCVar9 + -1;
      if (*pcVar5 == '\0') goto LAB_1010471a;
      pcVar5 = pcVar5 + 1;
    } while (pCVar9 != (LPCSTR)0x0);
    pCVar9 = (LPCSTR)0xffffffff;
LAB_1010471a:
    _LpSrcStr = _LpSrcStr + (-1 - (int)pCVar9);
  }
  if ((DAT_102ad020 != 2) && (DAT_102ad020 != 0)) {
    if (DAT_102ad020 == 1) {
      iVar3 = 0;
      bVar2 = false;
      bVar1 = false;
      if (_CchDest == 0) {
        _CchDest = DAT_102ad0f8;
      }
      uStackY_74 = 0x1010477a;
      iVar6 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                  (int)_LpSrcStr,(LPWSTR)0x0,0);
      if (iVar6 != 0) {
        puVar7 = (undefined1 *)(iVar6 * 2 + 3U & 0xfffffffc);
        iVar8 = -(int)puVar7;
        local_20 = &stack0xffffffa8 + iVar8;
        if (&stack0xffffffa8 == puVar7) {
          *(int *)(&stack0xffffffa4 + iVar8) = iVar6 * 2;
          *(undefined4 *)(&stack0xffffffa0 + iVar8) = 0x101047d3;
          local_20 = _malloc(*(size_t *)(&stack0xffffffa4 + iVar8));
          if (local_20 == (void *)0x0) {
            return 0;
          }
          bVar2 = true;
        }
        *(int *)(&stack0xffffffa4 + iVar8) = iVar6;
        *(undefined1 **)(&stack0xffffffa0 + iVar8) = local_20;
        *(LPCSTR *)(&stack0xffffff9c + iVar8) = _LpSrcStr;
        *(DWORD *)(&stack0xffffff98 + iVar8) = _DwMapFlag;
        *(undefined4 *)(&stack0xffffff94 + iVar8) = 1;
        *(int *)(&stack0xffffff90 + iVar8) = _CchDest;
        puVar10 = (undefined1 *)((int)&uStackY_74 + iVar8);
        *(undefined4 *)((int)&uStackY_74 + iVar8) = 0x101047fb;
        iVar8 = MultiByteToWideChar(*(UINT *)(&stack0xffffff90 + iVar8),
                                    *(DWORD *)(&stack0xffffff94 + iVar8),
                                    *(LPCSTR *)(&stack0xffffff98 + iVar8),
                                    *(int *)(&stack0xffffff9c + iVar8),
                                    *(LPWSTR *)(&stack0xffffffa0 + iVar8),
                                    *(int *)(&stack0xffffffa4 + iVar8));
        puVar7 = puVar10;
        if (iVar8 != 0) {
          *(undefined4 *)(puVar10 + -4) = 0;
          *(undefined4 *)(puVar10 + -8) = 0;
          *(int *)(puVar10 + -0xc) = iVar6;
          *(undefined1 **)(puVar10 + -0x10) = local_20;
          *(LPCWSTR *)(puVar10 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar10 + -0x18) = _Plocinfo;
          puVar11 = puVar10 + -0x1c;
          *(undefined4 *)(puVar10 + -0x1c) = 0x10104815;
          iVar3 = LCMapStringW(*(LCID *)(puVar10 + -0x18),*(DWORD *)(puVar10 + -0x14),
                               *(LPCWSTR *)(puVar10 + -0x10),*(int *)(puVar10 + -0xc),
                               *(LPWSTR *)(puVar10 + -8),*(int *)(puVar10 + -4));
          puVar7 = puVar11;
          if (iVar3 != 0) {
            if (((uint)_LocaleName & 0x400) == 0) {
              puVar7 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
              *(undefined4 *)(puVar11 + -4) = 0x1010486a;
              iVar8 = -(int)puVar7;
              local_24 = puVar11 + iVar8;
              if (puVar11 == puVar7) {
                *(int *)(puVar11 + iVar8 + -4) = iVar3 * 2;
                *(undefined4 *)(puVar11 + iVar8 + -8) = 0x101048a1;
                local_24 = _malloc(*(size_t *)(puVar11 + iVar8 + -4));
                puVar7 = puVar11 + iVar8;
                if (local_24 == (undefined1 *)0x0) goto LAB_101048e9;
                bVar1 = true;
              }
              *(int *)(puVar11 + iVar8 + -4) = iVar3;
              *(undefined1 **)(puVar11 + iVar8 + -8) = local_24;
              *(int *)(puVar11 + iVar8 + -0xc) = iVar6;
              *(undefined1 **)(puVar11 + iVar8 + -0x10) = local_20;
              *(LPCWSTR *)(puVar11 + iVar8 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar11 + iVar8 + -0x18) = _Plocinfo;
              puVar13 = puVar11 + iVar8 + -0x1c;
              *(undefined4 *)(puVar11 + iVar8 + -0x1c) = 0x101048c4;
              iVar6 = LCMapStringW(*(LCID *)(puVar11 + iVar8 + -0x18),
                                   *(DWORD *)(puVar11 + iVar8 + -0x14),
                                   *(LPCWSTR *)(puVar11 + iVar8 + -0x10),
                                   *(int *)(puVar11 + iVar8 + -0xc),
                                   *(LPWSTR *)(puVar11 + iVar8 + -8),*(int *)(puVar11 + iVar8 + -4))
              ;
              puVar7 = puVar13;
              if (iVar6 != 0) {
                *(undefined4 *)(puVar13 + -4) = 0;
                *(undefined4 *)(puVar13 + -8) = 0;
                if (_LpDestStr == (LPSTR)0x0) {
                  *(undefined4 *)(puVar13 + -0xc) = 0;
                  *(undefined4 *)(puVar13 + -0x10) = 0;
                }
                else {
                  *(LPSTR *)(puVar13 + -0xc) = _LpDestStr;
                  *(int *)(puVar13 + -0x10) = _CchSrc;
                }
                *(int *)(puVar13 + -0x14) = iVar3;
                *(undefined1 **)(puVar13 + -0x18) = local_24;
                *(undefined4 *)(puVar13 + -0x1c) = 0;
                *(int *)(puVar13 + -0x20) = _CchDest;
                puVar7 = puVar13 + -0x24;
                *(undefined4 *)(puVar13 + -0x24) = 0x101048e7;
                iVar3 = WideCharToMultiByte(*(UINT *)(puVar13 + -0x20),*(DWORD *)(puVar13 + -0x1c),
                                            *(LPCWSTR *)(puVar13 + -0x18),*(int *)(puVar13 + -0x14),
                                            *(LPSTR *)(puVar13 + -0x10),*(int *)(puVar13 + -0xc),
                                            *(LPCSTR *)(puVar13 + -8),*(LPBOOL *)(puVar13 + -4));
              }
            }
            else if ((_LpDestStr != (LPSTR)0x0) && (iVar3 <= (int)_LpDestStr)) {
              *(LPSTR *)(puVar11 + -4) = _LpDestStr;
              *(int *)(puVar11 + -8) = _CchSrc;
              *(int *)(puVar11 + -0xc) = iVar6;
              *(undefined1 **)(puVar11 + -0x10) = local_20;
              *(LPCWSTR *)(puVar11 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar11 + -0x18) = _Plocinfo;
              puVar12 = puVar11 + -0x1c;
              *(undefined4 *)(puVar11 + -0x1c) = 0x10104850;
              LCMapStringW(*(LCID *)(puVar11 + -0x18),*(DWORD *)(puVar11 + -0x14),
                           *(LPCWSTR *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
                           *(LPWSTR *)(puVar11 + -8),*(int *)(puVar11 + -4));
              puVar7 = puVar12;
            }
          }
        }
LAB_101048e9:
        if (bVar1) {
          *(undefined1 **)(puVar7 + -4) = local_24;
          *(undefined4 *)(puVar7 + -8) = 0x101048f6;
          _free(*(void **)(puVar7 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar7 + -4) = local_20;
          *(undefined4 *)(puVar7 + -8) = 0x10104904;
          _free(*(void **)(puVar7 + -4));
          return iVar3;
        }
        return iVar3;
      }
    }
    return 0;
  }
  local_2c = (LPCSTR)0x0;
  lpDestStr = (LPSTR)0x0;
  bVar1 = false;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_102ad0e8;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_102ad0f8;
  }
  iVar3 = ___ansicp();
  if (iVar3 == -1) {
    return 0;
  }
  if (iVar3 == _CchDest) {
    uStackY_74 = 0x10104a55;
    local_4c = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    goto LAB_10104a57;
  }
  uStackY_74 = 0x10104961;
  local_2c = (LPCSTR)___convertcp();
  if (local_2c == (LPCSTR)0x0) {
    return 0;
  }
  uStackY_74 = 0x1010497d;
  _Size = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_2c,(int)_LpSrcStr,(LPSTR)0x0,0);
  if (_Size != 0) {
    lpDestStr = &stack0xffffffa8;
    _memset(&stack0xffffffa8,0,_Size);
    if (&stack0x00000000 == (undefined1 *)0x58) {
      lpDestStr = _malloc(_Size);
      if (lpDestStr != (LPSTR)0x0) {
        _memset(lpDestStr,0,_Size);
        bVar1 = true;
        goto LAB_101049e8;
      }
    }
    else {
LAB_101049e8:
      uStackY_74 = 0x101049fe;
      iVar3 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_2c,(int)_LpSrcStr,lpDestStr,
                           _Size);
      if (iVar3 != 0) {
        uStackY_74 = 0x10104a1f;
        iVar3 = ___convertcp();
        local_4c = (uint)(iVar3 != 0);
        goto LAB_10104a2f;
      }
    }
    local_4c = 0;
  }
LAB_10104a2f:
  if (bVar1) {
    _free(lpDestStr);
  }
LAB_10104a57:
  if (local_2c != (LPCSTR)0x0) {
    _free(local_2c);
    return local_4c;
  }
  return local_4c;
}


/* END FUNCTION 0x101046b4 */
