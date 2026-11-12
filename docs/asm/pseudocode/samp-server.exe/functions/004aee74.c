/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004aee74
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
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  UINT UVar8;
  LPCSTR lpSrcStr;
  int extraout_EAX;
  LPCSTR pCVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined4 uStackY_74;
  uint local_4c;
  LPCSTR local_2c;
  size_t local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c50a8;
  uStack_c = 0x4aee80;
  if (DAT_0051c68c == 0) {
    uStackY_74 = 0x4aeea1;
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_0051c68c = 2;
      }
    }
    else {
      DAT_0051c68c = 1;
    }
  }
  pcVar14 = (char *)_DwMapFlag;
  pCVar9 = _LpSrcStr;
  if (0 < (int)_LpSrcStr) {
    do {
      pCVar9 = pCVar9 + -1;
      if (*pcVar14 == '\0') goto LAB_004aeeda;
      pcVar14 = pcVar14 + 1;
    } while (pCVar9 != (LPCSTR)0x0);
    pCVar9 = (LPCSTR)0xffffffff;
LAB_004aeeda:
    _LpSrcStr = _LpSrcStr + (-1 - (int)pCVar9);
  }
  if ((DAT_0051c68c != 2) && (DAT_0051c68c != 0)) {
    if (DAT_0051c68c == 1) {
      iVar3 = 0;
      bVar2 = false;
      bVar1 = false;
      if (_CchDest == 0) {
        _CchDest = DAT_0051c658;
      }
      uStackY_74 = 0x4aef3a;
      iVar5 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                  (int)_LpSrcStr,(LPWSTR)0x0,0);
      if (iVar5 != 0) {
        puVar6 = (undefined1 *)(iVar5 * 2 + 3U & 0xfffffffc);
        iVar7 = -(int)puVar6;
        local_1c = &stack0xffffffa8 + iVar7;
        local_20 = &stack0xffffffa8 + iVar7;
        local_8 = (undefined *)0xffffffff;
        if (&stack0xffffffa8 == puVar6) {
          *(int *)(&stack0xffffffa4 + iVar7) = iVar5 * 2;
          *(undefined4 *)(&stack0xffffffa0 + iVar7) = 0x4aef93;
          local_20 = _malloc(*(size_t *)(&stack0xffffffa4 + iVar7));
          if (local_20 == (undefined1 *)0x0) {
            return 0;
          }
          bVar2 = true;
        }
        *(int *)(&stack0xffffffa4 + iVar7) = iVar5;
        *(undefined1 **)(&stack0xffffffa0 + iVar7) = local_20;
        *(LPCSTR *)(&stack0xffffff9c + iVar7) = _LpSrcStr;
        *(DWORD *)(&stack0xffffff98 + iVar7) = _DwMapFlag;
        *(undefined4 *)(&stack0xffffff94 + iVar7) = 1;
        *(int *)(&stack0xffffff90 + iVar7) = _CchDest;
        puVar10 = (undefined1 *)((int)&uStackY_74 + iVar7);
        *(undefined4 *)((int)&uStackY_74 + iVar7) = 0x4aefbb;
        iVar7 = MultiByteToWideChar(*(UINT *)(&stack0xffffff90 + iVar7),
                                    *(DWORD *)(&stack0xffffff94 + iVar7),
                                    *(LPCSTR *)(&stack0xffffff98 + iVar7),
                                    *(int *)(&stack0xffffff9c + iVar7),
                                    *(LPWSTR *)(&stack0xffffffa0 + iVar7),
                                    *(int *)(&stack0xffffffa4 + iVar7));
        puVar6 = puVar10;
        if (iVar7 != 0) {
          *(undefined4 *)(puVar10 + -4) = 0;
          *(undefined4 *)(puVar10 + -8) = 0;
          *(int *)(puVar10 + -0xc) = iVar5;
          *(undefined1 **)(puVar10 + -0x10) = local_20;
          *(LPCWSTR *)(puVar10 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar10 + -0x18) = _Plocinfo;
          puVar11 = puVar10 + -0x1c;
          *(undefined4 *)(puVar10 + -0x1c) = 0x4aefd5;
          iVar3 = LCMapStringW(*(LCID *)(puVar10 + -0x18),*(DWORD *)(puVar10 + -0x14),
                               *(LPCWSTR *)(puVar10 + -0x10),*(int *)(puVar10 + -0xc),
                               *(LPWSTR *)(puVar10 + -8),*(int *)(puVar10 + -4));
          puVar6 = puVar11;
          if (iVar3 != 0) {
            if (((uint)_LocaleName & 0x400) == 0) {
              puVar6 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
              *(undefined4 *)(puVar11 + -4) = 0x4af02a;
              iVar7 = -(int)puVar6;
              local_1c = puVar11 + iVar7;
              local_24 = puVar11 + iVar7;
              local_8 = (undefined *)0xffffffff;
              if (puVar11 == puVar6) {
                *(int *)(puVar11 + iVar7 + -4) = iVar3 * 2;
                *(undefined4 *)(puVar11 + iVar7 + -8) = 0x4af061;
                local_24 = _malloc(*(size_t *)(puVar11 + iVar7 + -4));
                puVar6 = puVar11 + iVar7;
                if (local_24 == (undefined1 *)0x0) goto LAB_004af0a9;
                bVar1 = true;
              }
              *(int *)(puVar11 + iVar7 + -4) = iVar3;
              *(undefined1 **)(puVar11 + iVar7 + -8) = local_24;
              *(int *)(puVar11 + iVar7 + -0xc) = iVar5;
              *(undefined1 **)(puVar11 + iVar7 + -0x10) = local_20;
              *(LPCWSTR *)(puVar11 + iVar7 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar11 + iVar7 + -0x18) = _Plocinfo;
              puVar13 = puVar11 + iVar7 + -0x1c;
              *(undefined4 *)(puVar11 + iVar7 + -0x1c) = 0x4af084;
              iVar5 = LCMapStringW(*(LCID *)(puVar11 + iVar7 + -0x18),
                                   *(DWORD *)(puVar11 + iVar7 + -0x14),
                                   *(LPCWSTR *)(puVar11 + iVar7 + -0x10),
                                   *(int *)(puVar11 + iVar7 + -0xc),
                                   *(LPWSTR *)(puVar11 + iVar7 + -8),*(int *)(puVar11 + iVar7 + -4))
              ;
              puVar6 = puVar13;
              if (iVar5 != 0) {
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
                puVar6 = puVar13 + -0x24;
                *(undefined4 *)(puVar13 + -0x24) = 0x4af0a7;
                iVar3 = WideCharToMultiByte(*(UINT *)(puVar13 + -0x20),*(DWORD *)(puVar13 + -0x1c),
                                            *(LPCWSTR *)(puVar13 + -0x18),*(int *)(puVar13 + -0x14),
                                            *(LPSTR *)(puVar13 + -0x10),*(int *)(puVar13 + -0xc),
                                            *(LPCSTR *)(puVar13 + -8),*(LPBOOL *)(puVar13 + -4));
              }
            }
            else if ((_LpDestStr != (LPSTR)0x0) && (iVar3 <= (int)_LpDestStr)) {
              *(LPSTR *)(puVar11 + -4) = _LpDestStr;
              *(int *)(puVar11 + -8) = _CchSrc;
              *(int *)(puVar11 + -0xc) = iVar5;
              *(undefined1 **)(puVar11 + -0x10) = local_20;
              *(LPCWSTR *)(puVar11 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar11 + -0x18) = _Plocinfo;
              puVar12 = puVar11 + -0x1c;
              *(undefined4 *)(puVar11 + -0x1c) = 0x4af010;
              LCMapStringW(*(LCID *)(puVar11 + -0x18),*(DWORD *)(puVar11 + -0x14),
                           *(LPCWSTR *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
                           *(LPWSTR *)(puVar11 + -8),*(int *)(puVar11 + -4));
              puVar6 = puVar12;
            }
          }
        }
LAB_004af0a9:
        if (bVar1) {
          *(undefined1 **)(puVar6 + -4) = local_24;
          *(undefined4 *)(puVar6 + -8) = 0x4af0b6;
          _free(*(void **)(puVar6 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar6 + -4) = local_20;
          *(undefined4 *)(puVar6 + -8) = 0x4af0c4;
          _free(*(void **)(puVar6 + -4));
          return iVar3;
        }
        return iVar3;
      }
    }
    return 0;
  }
  local_2c = (LPCSTR)0x0;
  pcVar14 = (char *)0x0;
  bVar1 = false;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_0051c648;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_0051c658;
  }
  UVar8 = ___ansicp((LCID)_Plocinfo);
  if (UVar8 == 0xffffffff) {
    return 0;
  }
  if (UVar8 == _CchDest) {
    uStackY_74 = 0x4af215;
    local_4c = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    goto LAB_004af217;
  }
  uStackY_74 = 0x4af121;
  ___convertcp(_CchDest,UVar8,(char *)_DwMapFlag,(size_t *)&_LpSrcStr,(LPSTR)0x0,0);
  if (lpSrcStr == (LPCSTR)0x0) {
    return 0;
  }
  uStackY_74 = 0x4af13d;
  local_28 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,(LPSTR)0x0,0);
  if (local_28 != 0) {
    local_8 = (undefined *)0x0;
    local_1c = &stack0xffffffa8;
    pcVar14 = &stack0xffffffa8;
    _memset(&stack0xffffffa8,0,local_28);
    local_8 = (undefined *)0xffffffff;
    if (&stack0x00000000 == (undefined1 *)0x58) {
      pcVar14 = _malloc(local_28);
      if (pcVar14 != (char *)0x0) {
        _memset(pcVar14,0,local_28);
        bVar1 = true;
        goto LAB_004af1a8;
      }
    }
    else {
LAB_004af1a8:
      uStackY_74 = 0x4af1be;
      local_28 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,pcVar14,
                              local_28);
      if (local_28 != 0) {
        uStackY_74 = 0x4af1df;
        ___convertcp(UVar8,_CchDest,pcVar14,&local_28,(LPSTR)_CchSrc,(int)_LpDestStr);
        local_4c = (uint)(extraout_EAX != 0);
        goto LAB_004af1ef;
      }
    }
    local_4c = 0;
  }
LAB_004af1ef:
  local_2c = lpSrcStr;
  if (bVar1) {
    _free(pcVar14);
  }
LAB_004af217:
  if (local_2c != (LPCSTR)0x0) {
    _free(local_2c);
    return local_4c;
  }
  return local_4c;
}


/* END FUNCTION 0x004aee74 */
