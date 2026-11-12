/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004af506
 * Name: _mbtowc
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_004ec39c) {
    ptVar2 = ___updatetlocinfo();
  }
  iVar3 = ___mbtowc_mt((int)ptVar2,_DstCh,(byte *)_SrcCh,_SrcSizeInBytes);
  return iVar3;
}


/* END FUNCTION 0x004af506 */
