/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fbfde
 * Name: __Strftime
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  size_t sVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar2 = ___updatetlocinfo();
  }
  sVar3 = __Strftime_mt(ptVar2,param_1,_Maxsize,param_3,param_4,param_5);
  return sVar3;
}


/* END FUNCTION 0x100fbfde */
