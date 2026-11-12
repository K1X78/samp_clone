/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fdef2
 * Name: _isupper
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _isupper(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar2 = ___updatetlocinfo();
  }
  if (1 < (int)ptVar2->lc_category[1].refcount) {
    iVar3 = ___isctype_mt(ptVar2,_C,1);
    return iVar3;
  }
  return *(byte *)((int)ptVar2->lc_category[3].refcount + _C * 2) & 1;
}


/* END FUNCTION 0x100fdef2 */
