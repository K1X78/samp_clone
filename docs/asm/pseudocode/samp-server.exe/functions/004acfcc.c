/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004acfcc
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
  if (_Memory != DAT_0051c6d4) {
    if ((_Memory != (pthreadmbcinfo)0x0) &&
       (_Memory->refcount = _Memory->refcount + -1, _Memory->refcount == 0)) {
      _free(_Memory);
    }
    p_Var1->_tpxcptinfoptrs = DAT_0051c6d4;
    _Memory = DAT_0051c6d4;
    DAT_0051c6d4->refcount = DAT_0051c6d4->refcount + 1;
  }
  FUN_004ad032();
  return _Memory;
}


/* END FUNCTION 0x004acfcc */
