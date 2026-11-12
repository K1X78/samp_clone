/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10107fe6
 * Name: _iswctype
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2003 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_10155f04 + (uint)_C * 2) & _Type);
  }
  if (_C == 0xffff) {
    return 0;
  }
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar2 = ___updatetlocinfo();
  }
  iVar3 = ___iswctype_mt(ptVar2,__C,__Type);
  return iVar3;
}


/* END FUNCTION 0x10107fe6 */
