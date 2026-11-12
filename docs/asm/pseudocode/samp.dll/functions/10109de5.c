/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10109de5
 * Name: ___updatetmbcinfo
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  pthreadmbcinfo _Memory;
  
  __lock(0xd);
  p_Var1 = __getptd();
  _Memory = p_Var1->_tpxcptinfoptrs;
  if (_Memory != DAT_102ad30c) {
    if ((_Memory != (pthreadmbcinfo)0x0) &&
       (_Memory->refcount = _Memory->refcount + -1, _Memory->refcount == 0)) {
      _free(_Memory);
    }
    p_Var1->_tpxcptinfoptrs = DAT_102ad30c;
    _Memory = DAT_102ad30c;
    DAT_102ad30c->refcount = DAT_102ad30c->refcount + 1;
  }
  FUN_10109e4b();
  return _Memory;
}


/* END FUNCTION 0x10109de5 */
