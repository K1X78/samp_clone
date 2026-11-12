/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010933e
 * Name: __mbspbrk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uchar * __cdecl __mbspbrk(uchar *_Str,uchar *_Control)

{
  _ptiddata p_Var1;
  pthreadmbcinfo ptVar2;
  uchar *puVar3;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->_tpxcptinfoptrs;
  if (ptVar2 != DAT_102ad30c) {
    ptVar2 = ___updatetmbcinfo();
  }
  puVar3 = (uchar *)___mbspbrk_mt(ptVar2,_Str,_Control);
  return puVar3;
}


/* END FUNCTION 0x1010933e */
