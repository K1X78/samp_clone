/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fa3af
 * Name: __strnicmp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  int iVar4;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar2 = ___updatetlocinfo();
  }
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else if (ptVar2->lc_category[0].wlocale == (wchar_t *)0x0) {
    iVar3 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
  }
  else {
    do {
      iVar3 = ___tolower_mt(ptVar2,*_Str1);
      _Str1 = _Str1 + 1;
      iVar4 = ___tolower_mt(ptVar2,*_Str2);
      _Str2 = _Str2 + 1;
      _MaxCount = _MaxCount - 1;
      if ((_MaxCount == 0) || (iVar3 == 0)) break;
    } while (iVar3 == iVar4);
    iVar3 = iVar3 - iVar4;
  }
  return iVar3;
}


/* END FUNCTION 0x100fa3af */
