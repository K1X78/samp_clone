/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010e8d7
 * Name: ___crtGetStringTypeW
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

BOOL ___crtGetStringTypeW
               (DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,int param_6)

{
  short *psVar1;
  bool bVar2;
  bool bVar3;
  BOOL BVar4;
  DWORD DVar5;
  UINT UVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uStackY_68;
  BOOL local_38;
  undefined1 *local_28;
  undefined1 *local_24;
  WORD local_20 [2];
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10132fb8;
  uStack_c = 0x1010e8e3;
  if (DAT_102ad280 == 0) {
    BVar4 = GetStringTypeW(1,L"",1,local_20);
    if (BVar4 == 0) {
      DVar5 = GetLastError();
      if (DVar5 == 0x78) {
        DAT_102ad280 = 2;
      }
    }
    else {
      DAT_102ad280 = 1;
    }
  }
  if (DAT_102ad280 == 1) {
    BVar4 = GetStringTypeW(param_1,param_2,param_3,param_4);
    return BVar4;
  }
  if ((DAT_102ad280 == 2) || (DAT_102ad280 == 0)) {
    bVar3 = false;
    bVar2 = false;
    if (param_6 == 0) {
      param_6 = DAT_102ad0e8;
    }
    if (param_5 == 0) {
      param_5 = DAT_102ad0f8;
    }
    UVar6 = ___ansicp();
    if ((param_5 != UVar6) && (UVar6 != 0xffffffff)) {
      param_5 = UVar6;
    }
    uStackY_68 = 0x1010e995;
    iVar7 = WideCharToMultiByte(param_5,0,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar7 != 0) {
      local_8 = (undefined *)0x0;
      puVar8 = (undefined1 *)(iVar7 + 3U & 0xfffffffc);
      iVar9 = -(int)puVar8;
      local_28 = &stack0xffffffbc + iVar9;
      local_1c = &stack0xffffffbc + iVar9;
      *(int *)(&stack0xffffffb8 + iVar9) = iVar7;
      *(undefined4 *)(&stack0xffffffb4 + iVar9) = 0;
      *(undefined1 **)(&stack0xffffffb0 + iVar9) = &stack0xffffffbc + iVar9;
      *(undefined4 *)(&stack0xffffffac + iVar9) = 0x1010e9c5;
      _memset(*(void **)(&stack0xffffffb0 + iVar9),*(int *)(&stack0xffffffb4 + iVar9),
              *(size_t *)(&stack0xffffffb8 + iVar9));
      local_8 = (undefined *)0xffffffff;
      if (&stack0xffffffbc == puVar8) {
        *(int *)(&stack0xffffffb8 + iVar9) = iVar7;
        *(undefined4 *)(&stack0xffffffb4 + iVar9) = 1;
        *(undefined4 *)(&stack0xffffffb0 + iVar9) = 0x1010e9f6;
        local_28 = _calloc(*(size_t *)(&stack0xffffffb4 + iVar9),
                           *(size_t *)(&stack0xffffffb8 + iVar9));
        if (local_28 == (void *)0x0) {
          return 0;
        }
        bVar3 = true;
      }
      *(undefined4 *)(&stack0xffffffb8 + iVar9) = 0;
      *(undefined4 *)(&stack0xffffffb4 + iVar9) = 0;
      *(int *)(&stack0xffffffb0 + iVar9) = iVar7;
      *(undefined1 **)(&stack0xffffffac + iVar9) = local_28;
      *(int *)(&stack0xffffffa8 + iVar9) = param_3;
      *(LPCWSTR *)(&stack0xffffffa4 + iVar9) = param_2;
      *(undefined4 *)(&stack0xffffffa0 + iVar9) = 0;
      *(UINT *)(&stack0xffffff9c + iVar9) = param_5;
      puVar11 = (undefined1 *)((int)&uStackY_68 + iVar9);
      *(undefined4 *)((int)&uStackY_68 + iVar9) = 0x1010ea18;
      iVar9 = WideCharToMultiByte(*(UINT *)(&stack0xffffff9c + iVar9),
                                  *(DWORD *)(&stack0xffffffa0 + iVar9),
                                  *(LPCWSTR *)(&stack0xffffffa4 + iVar9),
                                  *(int *)(&stack0xffffffa8 + iVar9),
                                  *(LPSTR *)(&stack0xffffffac + iVar9),
                                  *(int *)(&stack0xffffffb0 + iVar9),
                                  *(LPCSTR *)(&stack0xffffffb4 + iVar9),
                                  *(LPBOOL *)(&stack0xffffffb8 + iVar9));
      puVar8 = puVar11;
      if (iVar9 != 0) {
        puVar10 = (undefined1 *)(iVar7 * 2 + 5U & 0xfffffffc);
        *(undefined4 *)(puVar11 + -4) = 0x1010ea32;
        iVar9 = -(int)puVar10;
        local_24 = puVar11 + iVar9;
        puVar8 = puVar11 + iVar9;
        local_1c = puVar11 + iVar9;
        local_8 = (undefined *)0xffffffff;
        if (puVar11 == puVar10) {
          *(int *)(puVar11 + iVar9 + -4) = iVar7 * 2 + 2;
          *(undefined4 *)(puVar11 + iVar9 + -8) = 0x1010ea6b;
          local_24 = _malloc(*(size_t *)(puVar11 + iVar9 + -4));
          if (local_24 == (undefined1 *)0x0) goto LAB_1010eae2;
          bVar2 = true;
        }
        if (param_6 == 0) {
          param_6 = DAT_102ad0e8;
        }
        psVar1 = (short *)(local_24 + param_3 * 2);
        *psVar1 = -1;
        psVar1[-1] = -1;
        *(undefined1 **)(puVar11 + iVar9 + -4) = local_24;
        *(int *)(puVar11 + iVar9 + -8) = iVar7;
        *(undefined1 **)(puVar11 + iVar9 + -0xc) = local_28;
        *(DWORD *)(puVar11 + iVar9 + -0x10) = param_1;
        *(int *)(puVar11 + iVar9 + -0x14) = param_6;
        puVar8 = puVar11 + iVar9 + -0x18;
        *(undefined4 *)(puVar11 + iVar9 + -0x18) = 0x1010eaaa;
        local_38 = GetStringTypeA(*(LCID *)(puVar11 + iVar9 + -0x14),
                                  *(DWORD *)(puVar11 + iVar9 + -0x10),
                                  *(LPCSTR *)(puVar11 + iVar9 + -0xc),*(int *)(puVar11 + iVar9 + -8)
                                  ,*(LPWORD *)(puVar11 + iVar9 + -4));
        if ((psVar1[-1] == -1) || (*psVar1 != -1)) {
          local_38 = 0;
        }
        else {
          *(int *)(puVar8 + -4) = param_3 * 2;
          *(undefined1 **)(puVar8 + -8) = local_24;
          *(LPWORD *)(puVar8 + -0xc) = param_4;
          *(undefined4 *)(puVar8 + -0x10) = 0x1010eac8;
          _memmove(*(void **)(puVar8 + -0xc),*(void **)(puVar8 + -8),*(size_t *)(puVar8 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar8 + -4) = local_24;
          *(undefined4 *)(puVar8 + -8) = 0x1010eadf;
          _free(*(void **)(puVar8 + -4));
        }
      }
LAB_1010eae2:
      if (bVar3) {
        *(undefined1 **)(puVar8 + -4) = local_28;
        *(undefined4 *)(puVar8 + -8) = 0x1010eaef;
        _free(*(void **)(puVar8 + -4));
        return local_38;
      }
      return local_38;
    }
  }
  return 0;
}


/* END FUNCTION 0x1010e8d7 */
