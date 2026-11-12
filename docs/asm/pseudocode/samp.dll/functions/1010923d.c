/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010923d
 * Name: __mbctolower
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl __mbctolower(uint _Ch)

{
  _ptiddata p_Var1;
  pthreadmbcinfo ptVar2;
  int iVar3;
  BOOL unaff_EBX;
  undefined2 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined2 uStack_6;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->_tpxcptinfoptrs;
  if (ptVar2 != DAT_102ad30c) {
    ptVar2 = ___updatetmbcinfo();
  }
  if (_Ch < 0x100) {
    if ((ptVar2->mbctype[_Ch + 5] & 0x10) != 0) {
      _Ch = (uint)(char)ptVar2->mbcasemap[_Ch + 4];
    }
  }
  else {
    _local_8 = CONCAT11((char)_Ch,(char)(_Ch >> 8));
    if (((ptVar2->mbctype[(_Ch >> 8 & 0xff) + 5] & 4) != 0) &&
       (iVar3 = ___crtLCMapStringA(*(_locale_t *)ptVar2->mbulinfo,(LPCWSTR)0x100,(DWORD)&local_8,
                                   (LPCSTR)0x2,(int)&local_c,(LPSTR)0x2,ptVar2->mbcodepage,1,
                                   unaff_EBX), iVar3 != 0)) {
      _Ch = (uint)CONCAT11((undefined1)local_c,local_c._1_1_);
    }
  }
  return _Ch;
}


/* END FUNCTION 0x1010923d */
