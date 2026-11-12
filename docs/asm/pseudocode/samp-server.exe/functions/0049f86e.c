/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f86e
 * Name: _isspace
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _isspace(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_004ec39c) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < (int)ptVar2->lc_category[1].refcount) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,8);
    return uVar3;
  }
  return *(byte *)((int)ptVar2->lc_category[3].refcount + _C * 2) & 8;
}


/* END FUNCTION 0x0049f86e */
