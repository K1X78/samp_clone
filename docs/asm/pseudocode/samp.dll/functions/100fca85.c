/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fca85
 * Name: _towlower
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


wint_t __cdecl _towlower(wint_t _C)

{
  wint_t wVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  undefined2 in_stack_00000006;
  
  p_Var2 = __getptd();
  ptVar3 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (ptVar3 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar3 = ___updatetlocinfo();
  }
  if (_C == 0xffff) {
    return 0xffff;
  }
  if (ptVar3->lc_category[0].wlocale != (wchar_t *)0x0) {
    wVar1 = ___towlower_mt(ptVar3,__C);
    return wVar1;
  }
  if ((0x40 < _C) && (_C < 0x5b)) {
    return _C + 0x20;
  }
  return _C;
}


/* END FUNCTION 0x100fca85 */
