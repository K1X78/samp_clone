/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b0241
 * Name: ___crtCompareStringA
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Type propagation algorithm not settling */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  bool bVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  DWORD DVar5;
  BOOL BVar6;
  BYTE *pBVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  UINT UVar14;
  void *_Memory;
  void *extraout_EAX;
  UINT UVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  size_t unaff_EDI;
  void *_Memory_00;
  undefined4 uStackY_7c;
  int local_44;
  void *local_3c;
  _cpinfo local_34;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c5330;
  uStack_c = 0x4b024d;
  local_20 = DAT_004ec7b4;
  _Memory_00 = (void *)0x0;
  if (DAT_0051c6cc == 0) {
    uStackY_7c = 0x4b0273;
    iVar4 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar4 == 0) {
      DVar5 = GetLastError();
      if (DVar5 == 0x78) {
        DAT_0051c6cc = 2;
      }
    }
    else {
      DAT_0051c6cc = 1;
    }
  }
  if (0 < (int)_LpString1) {
    _LpString1 = (LPCSTR)_strncnt(_LpString1,unaff_EDI);
  }
  if (0 < (int)_LpString2) {
    _LpString2 = (LPCSTR)_strncnt(_LpString2,unaff_EDI);
  }
  if ((DAT_0051c6cc == 2) || (DAT_0051c6cc == 0)) {
    local_3c = (void *)0x0;
    if (_Plocinfo == (_locale_t)0x0) {
      _Plocinfo = DAT_0051c648;
    }
    UVar15 = _CchCount2;
    if (_CchCount2 == 0) {
      UVar15 = DAT_0051c658;
    }
    UVar14 = ___ansicp((LCID)_Plocinfo);
    if (UVar14 != 0xffffffff) {
      pvVar3 = (void *)_CchCount1;
      if (UVar14 == UVar15) {
LAB_004b0584:
        _CchCount1 = (int)pvVar3;
        uStackY_7c = 0x4b059c;
        iVar4 = CompareStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(PCNZCH)_DwCmpFlags,
                               (int)_LpString1,(PCNZCH)_CchCount1,(int)_LpString2);
        if (_Memory_00 != (void *)0x0) {
          _free(_Memory_00);
          _free(local_3c);
          return iVar4;
        }
        return iVar4;
      }
      uStackY_7c = 0x4b054d;
      ___convertcp(UVar15,UVar14,(char *)_DwCmpFlags,(size_t *)&_LpString1,(LPSTR)0x0,0);
      if (_Memory != (void *)0x0) {
        uStackY_7c = 0x4b0568;
        ___convertcp(UVar15,UVar14,(char *)_CchCount1,(size_t *)&_LpString2,(LPSTR)0x0,0);
        _Memory_00 = _Memory;
        _DwCmpFlags = (DWORD)_Memory;
        pvVar3 = extraout_EAX;
        local_3c = extraout_EAX;
        if (extraout_EAX != (void *)0x0) goto LAB_004b0584;
        _free(_Memory);
      }
    }
  }
  else if (DAT_0051c6cc == 1) {
    bVar2 = false;
    bVar1 = false;
    local_44 = 0;
    if (_CchCount2 == 0) {
      _CchCount2 = DAT_0051c658;
    }
    if ((_LpString1 == (LPCSTR)0x0) || (_LpString2 == (LPCSTR)0x0)) {
      if (_LpString1 == _LpString2) {
        return 2;
      }
      if (1 < (int)_LpString2) {
        return 1;
      }
      if (1 < (int)_LpString1) {
        return 3;
      }
      BVar6 = GetCPInfo(_CchCount2,&local_34);
      if (BVar6 == 0) {
        return 0;
      }
      if (0 < (int)_LpString1) {
        if (local_34.MaxCharSize < 2) {
          return 3;
        }
        pBVar7 = local_34.LeadByte;
        while( true ) {
          if (local_34.LeadByte[0] == 0) {
            return 3;
          }
          if (pBVar7[1] == 0) break;
          if ((*pBVar7 <= *(byte *)_DwCmpFlags) && (*(byte *)_DwCmpFlags <= pBVar7[1])) {
            return 2;
          }
          pBVar7 = pBVar7 + 2;
          local_34.LeadByte[0] = *pBVar7;
        }
        return 3;
      }
      if (0 < (int)_LpString2) {
        if (local_34.MaxCharSize < 2) {
          return 1;
        }
        pBVar7 = local_34.LeadByte;
        if (local_34.LeadByte[0] != 0) {
          while( true ) {
            if (pBVar7[1] == 0) {
              return 1;
            }
            if ((*pBVar7 <= *(byte *)_CchCount1) && (*(byte *)_CchCount1 <= pBVar7[1])) break;
            pBVar7 = pBVar7 + 2;
            if (*pBVar7 == 0) {
              return 1;
            }
          }
          return 2;
        }
        return 1;
      }
    }
    uStackY_7c = 0x4b03bd;
    iVar4 = MultiByteToWideChar(_CchCount2,9,(LPCSTR)_DwCmpFlags,(int)_LpString1,(LPWSTR)0x0,0);
    if (iVar4 != 0) {
      puVar8 = (undefined1 *)(iVar4 * 2 + 3U & 0xfffffffc);
      iVar10 = -(int)puVar8;
      puVar9 = &stack0xffffffa0 + iVar10;
      local_1c = &stack0xffffffa0 + iVar10;
      local_8 = (undefined *)0xffffffff;
      if (&stack0xffffffa0 == puVar8) {
        *(int *)(&stack0xffffff9c + iVar10) = iVar4 * 2;
        *(undefined4 *)(&stack0xffffff98 + iVar10) = 0x4b0415;
        puVar9 = _malloc(*(size_t *)(&stack0xffffff9c + iVar10));
        if (puVar9 == (undefined1 *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(&stack0xffffff9c + iVar10) = iVar4;
      *(undefined1 **)(&stack0xffffff98 + iVar10) = puVar9;
      *(LPCSTR *)(&stack0xffffff94 + iVar10) = _LpString1;
      *(DWORD *)(&stack0xffffff90 + iVar10) = _DwCmpFlags;
      *(undefined4 *)(&stack0xffffff8c + iVar10) = 1;
      *(int *)(&stack0xffffff88 + iVar10) = _CchCount2;
      puVar16 = (undefined1 *)((int)&uStackY_7c + iVar10);
      *(undefined4 *)((int)&uStackY_7c + iVar10) = 0x4b0436;
      iVar10 = MultiByteToWideChar(*(UINT *)(&stack0xffffff88 + iVar10),
                                   *(DWORD *)(&stack0xffffff8c + iVar10),
                                   *(LPCSTR *)(&stack0xffffff90 + iVar10),
                                   *(int *)(&stack0xffffff94 + iVar10),
                                   *(LPWSTR *)(&stack0xffffff98 + iVar10),
                                   *(int *)(&stack0xffffff9c + iVar10));
      puVar8 = puVar16;
      if (iVar10 != 0) {
        *(undefined4 *)(puVar16 + -4) = 0;
        *(undefined4 *)(puVar16 + -8) = 0;
        *(LPCSTR *)(puVar16 + -0xc) = _LpString2;
        *(int *)(puVar16 + -0x10) = _CchCount1;
        *(undefined4 *)(puVar16 + -0x14) = 9;
        *(int *)(puVar16 + -0x18) = _CchCount2;
        puVar17 = puVar16 + -0x1c;
        *(undefined4 *)(puVar16 + -0x1c) = 0x4b0453;
        iVar10 = MultiByteToWideChar(*(UINT *)(puVar16 + -0x18),*(DWORD *)(puVar16 + -0x14),
                                     *(LPCSTR *)(puVar16 + -0x10),*(int *)(puVar16 + -0xc),
                                     *(LPWSTR *)(puVar16 + -8),*(int *)(puVar16 + -4));
        puVar8 = puVar17;
        if (iVar10 != 0) {
          puVar11 = (undefined1 *)(iVar10 * 2 + 3U & 0xfffffffc);
          *(undefined4 *)(puVar17 + -4) = 0x4b0475;
          iVar13 = -(int)puVar11;
          puVar12 = puVar17 + iVar13;
          puVar8 = puVar17 + iVar13;
          local_1c = puVar17 + iVar13;
          local_8 = (undefined *)0xffffffff;
          if (puVar17 == puVar11) {
            sRamfffffffc = iVar10 * 2;
            uRamfffffff8 = 0x4b04a8;
            puVar12 = _malloc(sRamfffffffc);
            if (puVar12 == (undefined1 *)0x0) goto LAB_004b04ef;
            bVar1 = true;
          }
          *(int *)(puVar17 + iVar13 + -4) = iVar10;
          *(undefined1 **)(puVar17 + iVar13 + -8) = puVar12;
          *(LPCSTR *)(puVar17 + iVar13 + -0xc) = _LpString2;
          *(int *)(puVar17 + iVar13 + -0x10) = _CchCount1;
          *(undefined4 *)(puVar17 + iVar13 + -0x14) = 1;
          *(int *)(puVar17 + iVar13 + -0x18) = _CchCount2;
          puVar18 = puVar17 + iVar13 + -0x1c;
          *(undefined4 *)(puVar17 + iVar13 + -0x1c) = 0x4b04c9;
          iVar13 = MultiByteToWideChar(*(UINT *)(puVar17 + iVar13 + -0x18),
                                       *(DWORD *)(puVar17 + iVar13 + -0x14),
                                       *(LPCSTR *)(puVar17 + iVar13 + -0x10),
                                       *(int *)(puVar17 + iVar13 + -0xc),
                                       *(LPWSTR *)(puVar17 + iVar13 + -8),
                                       *(int *)(puVar17 + iVar13 + -4));
          puVar8 = puVar18;
          if (iVar13 != 0) {
            *(int *)(puVar18 + -4) = iVar10;
            *(undefined1 **)(puVar18 + -8) = puVar12;
            *(int *)(puVar18 + -0xc) = iVar4;
            *(undefined1 **)(puVar18 + -0x10) = puVar9;
            *(LPCWSTR *)(puVar18 + -0x14) = _LocaleName;
            *(_locale_t *)(puVar18 + -0x18) = _Plocinfo;
            puVar8 = puVar18 + -0x1c;
            *(undefined4 *)(puVar18 + -0x1c) = 0x4b04df;
            local_44 = CompareStringW(*(LCID *)(puVar18 + -0x18),*(DWORD *)(puVar18 + -0x14),
                                      *(PCNZWCH *)(puVar18 + -0x10),*(int *)(puVar18 + -0xc),
                                      *(PCNZWCH *)(puVar18 + -8),*(int *)(puVar18 + -4));
          }
          if (bVar1) {
            *(undefined1 **)(puVar8 + -4) = puVar12;
            *(undefined4 *)(puVar8 + -8) = 0x4b04ee;
            _free(*(void **)(puVar8 + -4));
          }
        }
      }
LAB_004b04ef:
      if (bVar2) {
        *(undefined1 **)(puVar8 + -4) = puVar9;
        *(undefined4 *)(puVar8 + -8) = 0x4b04fd;
        _free(*(void **)(puVar8 + -4));
        return local_44;
      }
      return local_44;
    }
  }
  return 0;
}


/* END FUNCTION 0x004b0241 */
