/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10108fb5
 * Name: __mbsrchr
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  ushort uVar2;
  _ptiddata p_Var3;
  pthreadmbcinfo ptVar4;
  uchar *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar8 = (byte *)0x0;
  p_Var3 = __getptd();
  ptVar4 = p_Var3->_tpxcptinfoptrs;
  if (ptVar4 != DAT_102ad30c) {
    ptVar4 = ___updatetmbcinfo();
  }
  if (ptVar4->ismbcodepage == 0) {
    puVar5 = (uchar *)_strrchr((char *)_Str,_Ch);
    return puVar5;
  }
  do {
    bVar7 = *_Str;
    if ((ptVar4->mbctype[bVar7 + 5] & 4) == 0) {
      bVar9 = _Ch == bVar7;
LAB_10109010:
      pbVar6 = _Str;
      if (bVar9) {
        pbVar8 = _Str;
      }
    }
    else {
      pbVar6 = _Str + 1;
      bVar1 = *pbVar6;
      if (bVar1 == 0) {
        bVar9 = pbVar8 == (byte *)0x0;
        _Str = pbVar6;
        bVar7 = bVar1;
        goto LAB_10109010;
      }
      uVar2 = CONCAT11(bVar7,bVar1);
      bVar7 = bVar1;
      if (_Ch == uVar2) {
        pbVar8 = _Str;
      }
    }
    _Str = pbVar6 + 1;
    if (bVar7 == 0) {
      return pbVar8;
    }
  } while( true );
}


/* END FUNCTION 0x10108fb5 */
