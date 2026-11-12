/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010809d
 * Name: _wctomb
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  undefined2 in_stack_0000000a;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar2 = ___updatetlocinfo();
  }
  iVar3 = ___wctomb_mt(ptVar2,_MbCh,__WCh);
  return iVar3;
}


/* END FUNCTION 0x1010809d */
