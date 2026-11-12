/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b0afb
 * Name: __strlwr
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

char * __cdecl __strlwr(char *_String)

{
  char cVar1;
  _locale_t _Plocinfo;
  int iVar2;
  bool bVar3;
  _ptiddata p_Var4;
  pthreadlocinfo ptVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  BOOL unaff_EDI;
  undefined4 uStackY_5c;
  
  bVar3 = false;
  p_Var4 = __getptd();
  ptVar5 = (pthreadlocinfo)p_Var4->_tfpecode;
  if (ptVar5 != (pthreadlocinfo)PTR_DAT_004ec39c) {
    ptVar5 = ___updatetlocinfo();
  }
  _Plocinfo = (_locale_t)ptVar5->lc_category[0].wlocale;
  if (_Plocinfo == (_locale_t)0x0) {
    cVar1 = *_String;
    pcVar9 = _String;
    while (cVar1 != '\0') {
      cVar1 = *pcVar9;
      if (('@' < cVar1) && (cVar1 < '[')) {
        *pcVar9 = cVar1 + ' ';
      }
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    return _String;
  }
  uStackY_5c = 0x4b0b6f;
  iVar6 = ___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x100,(DWORD)_String,(LPCSTR)0xffffffff,0,(LPSTR)0x0
                             ,ptVar5->lc_codepage,1,unaff_EDI);
  if (iVar6 == 0) {
    return _String;
  }
  puVar7 = (undefined1 *)(iVar6 + 3U & 0xfffffffc);
  iVar2 = -(int)puVar7;
  puVar8 = &stack0xffffffc8 + iVar2;
  if (&stack0xffffffc8 == puVar7) {
    *(int *)(&stack0xffffffc4 + iVar2) = iVar6;
    *(undefined4 *)(&stack0xffffffc0 + iVar2) = 0x4b0bbc;
    puVar8 = _malloc(*(size_t *)(&stack0xffffffc4 + iVar2));
    bVar3 = true;
    if (puVar8 == (void *)0x0) goto LAB_004b0bf7;
  }
  *(undefined4 *)(&stack0xffffffc4 + iVar2) = 1;
  *(uint *)(&stack0xffffffc0 + iVar2) = ptVar5->lc_codepage;
  *(int *)(&stack0xffffffbc + iVar2) = iVar6;
  *(undefined1 **)(&stack0xffffffb8 + iVar2) = puVar8;
  *(undefined4 *)(&stack0xffffffb4 + iVar2) = 0xffffffff;
  *(char **)(&stack0xffffffb0 + iVar2) = _String;
  *(undefined4 *)(&stack0xffffffac + iVar2) = 0x100;
  *(wchar_t **)(&stack0xffffffa8 + iVar2) = ptVar5->lc_category[0].wlocale;
  *(undefined4 *)((int)&uStackY_5c + iVar2) = 0x4b0be5;
  iVar6 = ___crtLCMapStringA(*(_locale_t *)(&stack0xffffffa8 + iVar2),
                             *(LPCWSTR *)(&stack0xffffffac + iVar2),
                             *(DWORD *)(&stack0xffffffb0 + iVar2),
                             *(LPCSTR *)(&stack0xffffffb4 + iVar2),
                             *(int *)(&stack0xffffffb8 + iVar2),*(LPSTR *)(&stack0xffffffbc + iVar2)
                             ,*(int *)(&stack0xffffffc0 + iVar2),*(int *)(&stack0xffffffc4 + iVar2),
                             *(BOOL *)(&stack0xffffffc8 + iVar2));
  if (iVar6 != 0) {
    *(undefined1 **)(&stack0xffffffc4 + iVar2) = puVar8;
    *(char **)(&stack0xffffffc0 + iVar2) = _String;
    *(undefined4 *)(&stack0xffffffbc + iVar2) = 0x4b0bf5;
    FUN_004a68f0(*(uint **)(&stack0xffffffc0 + iVar2),*(uint **)(&stack0xffffffc4 + iVar2));
  }
LAB_004b0bf7:
  if (bVar3) {
    *(undefined1 **)(&stack0xffffffc4 + iVar2) = puVar8;
    *(undefined4 *)(&stack0xffffffc0 + iVar2) = 0x4b0c02;
    _free(*(void **)(&stack0xffffffc4 + iVar2));
  }
  return _String;
}


/* END FUNCTION 0x004b0afb */
