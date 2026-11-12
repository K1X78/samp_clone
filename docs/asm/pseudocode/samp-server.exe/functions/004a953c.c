/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a953c
 * Name: _tolower
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _tolower(int _C)

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
  uVar3 = ___tolower_mt(this,(int)ptVar2,_C);
  return uVar3;
}


/* END FUNCTION 0x004a953c */
