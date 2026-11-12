/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10107d36
 * Name: ___crtLCMapStringW
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */

int __cdecl
___crtLCMapStringW(LPCWSTR _LocaleName,DWORD _DWMapFlag,LPCWSTR _LpSrcStr,int _CchSrc,
                  LPWSTR _LpDestStr,int _CchDest)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  LPCWSTR pWVar5;
  UINT UVar6;
  undefined1 *puVar7;
  int iVar8;
  size_t sVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  UINT in_stack_0000001c;
  undefined4 uStackY_68;
  undefined1 *local_38;
  size_t local_28;
  undefined1 *local_20;
  
  if (DAT_102ad100 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_102ad100 = 2;
      }
    }
    else {
      DAT_102ad100 = 1;
    }
  }
  pWVar5 = _LpSrcStr;
  iVar3 = _CchSrc;
  if (0 < _CchSrc) {
    do {
      iVar3 = iVar3 + -1;
      if (*pWVar5 == L'\0') goto LAB_10107d9e;
      pWVar5 = pWVar5 + 1;
    } while (iVar3 != 0);
    iVar3 = -1;
LAB_10107d9e:
    _CchSrc = _CchSrc + (-1 - iVar3);
  }
  if (DAT_102ad100 == 1) {
    iVar3 = LCMapStringW((LCID)_LocaleName,_DWMapFlag,_LpSrcStr,_CchSrc,_LpDestStr,_CchDest);
    return iVar3;
  }
  if ((DAT_102ad100 == 2) || (DAT_102ad100 == 0)) {
    local_28 = 0;
    bVar2 = false;
    bVar1 = false;
    if (_LocaleName == (LPCWSTR)0x0) {
      _LocaleName = DAT_102ad0e8;
    }
    if (in_stack_0000001c == 0) {
      in_stack_0000001c = DAT_102ad0f8;
    }
    UVar6 = ___ansicp();
    if ((in_stack_0000001c != UVar6) && (UVar6 != 0xffffffff)) {
      in_stack_0000001c = UVar6;
    }
    uStackY_68 = 0x10107e22;
    iVar3 = WideCharToMultiByte(in_stack_0000001c,0,_LpSrcStr,_CchSrc,(LPSTR)0x0,0,(LPCSTR)0x0,
                                (LPBOOL)0x0);
    if (iVar3 != 0) {
      puVar7 = (undefined1 *)(iVar3 + 3U & 0xfffffffc);
      iVar8 = -(int)puVar7;
      local_20 = &stack0xffffffbc + iVar8;
      if (&stack0xffffffbc == puVar7) {
        *(int *)(&stack0xffffffb8 + iVar8) = iVar3;
        *(undefined4 *)(&stack0xffffffb4 + iVar8) = 0x10107e71;
        local_20 = _malloc(*(size_t *)(&stack0xffffffb8 + iVar8));
        if (local_20 == (void *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(undefined4 *)(&stack0xffffffb8 + iVar8) = 0;
      *(undefined4 *)(&stack0xffffffb4 + iVar8) = 0;
      *(int *)(&stack0xffffffb0 + iVar8) = iVar3;
      *(undefined1 **)(&stack0xffffffac + iVar8) = local_20;
      *(int *)(&stack0xffffffa8 + iVar8) = _CchSrc;
      *(LPCWSTR *)(&stack0xffffffa4 + iVar8) = _LpSrcStr;
      *(undefined4 *)(&stack0xffffffa0 + iVar8) = 0;
      *(UINT *)(&stack0xffffff9c + iVar8) = in_stack_0000001c;
      puVar10 = (undefined1 *)((int)&uStackY_68 + iVar8);
      *(undefined4 *)((int)&uStackY_68 + iVar8) = 0x10107e94;
      iVar8 = WideCharToMultiByte(*(UINT *)(&stack0xffffff9c + iVar8),
                                  *(DWORD *)(&stack0xffffffa0 + iVar8),
                                  *(LPCWSTR *)(&stack0xffffffa4 + iVar8),
                                  *(int *)(&stack0xffffffa8 + iVar8),
                                  *(LPSTR *)(&stack0xffffffac + iVar8),
                                  *(int *)(&stack0xffffffb0 + iVar8),
                                  *(LPCSTR *)(&stack0xffffffb4 + iVar8),
                                  *(LPBOOL *)(&stack0xffffffb8 + iVar8));
      puVar7 = puVar10;
      if (iVar8 != 0) {
        *(undefined4 *)(puVar10 + -4) = 0;
        *(undefined4 *)(puVar10 + -8) = 0;
        *(int *)(puVar10 + -0xc) = iVar3;
        *(undefined1 **)(puVar10 + -0x10) = local_20;
        *(DWORD *)(puVar10 + -0x14) = _DWMapFlag;
        *(LPCWSTR *)(puVar10 + -0x18) = _LocaleName;
        puVar11 = puVar10 + -0x1c;
        *(undefined4 *)(puVar10 + -0x1c) = 0x10107eb0;
        sVar9 = LCMapStringA(*(LCID *)(puVar10 + -0x18),*(DWORD *)(puVar10 + -0x14),
                             *(LPCSTR *)(puVar10 + -0x10),*(int *)(puVar10 + -0xc),
                             *(LPSTR *)(puVar10 + -8),*(int *)(puVar10 + -4));
        puVar7 = puVar11;
        if (sVar9 != 0) {
          puVar7 = (undefined1 *)(sVar9 + 3 & 0xfffffffc);
          *(undefined4 *)(puVar11 + -4) = 0x10107ecb;
          iVar8 = -(int)puVar7;
          local_38 = puVar11 + iVar8;
          if (puVar11 == puVar7) {
            uRamfffffff8 = 0x10107efa;
            sRamfffffffc = sVar9;
            local_38 = _malloc(sVar9);
            puVar7 = puVar11 + iVar8;
            if (local_38 == (undefined1 *)0x0) goto LAB_10107f69;
            bVar1 = true;
          }
          *(size_t *)(puVar11 + iVar8 + -4) = sVar9;
          *(undefined1 **)(puVar11 + iVar8 + -8) = local_38;
          *(int *)(puVar11 + iVar8 + -0xc) = iVar3;
          *(undefined1 **)(puVar11 + iVar8 + -0x10) = local_20;
          *(DWORD *)(puVar11 + iVar8 + -0x14) = _DWMapFlag;
          *(LPCWSTR *)(puVar11 + iVar8 + -0x18) = _LocaleName;
          puVar12 = puVar11 + iVar8 + -0x1c;
          *(undefined4 *)(puVar11 + iVar8 + -0x1c) = 0x10107f1c;
          iVar3 = LCMapStringA(*(LCID *)(puVar11 + iVar8 + -0x18),
                               *(DWORD *)(puVar11 + iVar8 + -0x14),
                               *(LPCSTR *)(puVar11 + iVar8 + -0x10),*(int *)(puVar11 + iVar8 + -0xc)
                               ,*(LPSTR *)(puVar11 + iVar8 + -8),*(int *)(puVar11 + iVar8 + -4));
          puVar7 = puVar12;
          if (iVar3 != 0) {
            if ((_DWMapFlag & 0x400) == 0) {
              if (_CchDest == 0) {
                *(undefined4 *)(puVar12 + -4) = 0;
                *(undefined4 *)(puVar12 + -8) = 0;
              }
              else {
                *(int *)(puVar12 + -4) = _CchDest;
                *(LPWSTR *)(puVar12 + -8) = _LpDestStr;
              }
              *(size_t *)(puVar12 + -0xc) = sVar9;
              *(undefined1 **)(puVar12 + -0x10) = local_38;
              *(undefined4 *)(puVar12 + -0x14) = 1;
              *(UINT *)(puVar12 + -0x18) = in_stack_0000001c;
              puVar13 = puVar12 + -0x1c;
              *(undefined4 *)(puVar12 + -0x1c) = 0x10107f61;
              local_28 = MultiByteToWideChar(*(UINT *)(puVar12 + -0x18),*(DWORD *)(puVar12 + -0x14),
                                             *(LPCSTR *)(puVar12 + -0x10),*(int *)(puVar12 + -0xc),
                                             *(LPWSTR *)(puVar12 + -8),*(int *)(puVar12 + -4));
              puVar7 = puVar13;
            }
            else {
              local_28 = sVar9;
              if (_CchDest != 0) {
                if (_CchDest < (int)sVar9) {
                  sVar9 = _CchDest;
                }
                *(size_t *)(puVar12 + -4) = sVar9;
                *(undefined1 **)(puVar12 + -8) = local_38;
                *(LPWSTR *)(puVar12 + -0xc) = _LpDestStr;
                *(undefined4 *)(puVar12 + -0x10) = 0x10107f40;
                _strncpy(*(char **)(puVar12 + -0xc),*(char **)(puVar12 + -8),
                         *(size_t *)(puVar12 + -4));
              }
            }
          }
        }
      }
LAB_10107f69:
      if (bVar1) {
        *(undefined1 **)(puVar7 + -4) = local_38;
        *(undefined4 *)(puVar7 + -8) = 0x10107f74;
        _free(*(void **)(puVar7 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar7 + -4) = local_20;
        *(undefined4 *)(puVar7 + -8) = 0x10107f82;
        _free(*(void **)(puVar7 + -4));
        return local_28;
      }
      return local_28;
    }
  }
  return 0;
}


/* END FUNCTION 0x10107d36 */
