/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fac02
 * Name: __endthreadex
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __endthreadex(DWORD param_1)

{
  _ptiddata _Ptd;
  
  if (PTR_FUN_10155598 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10155598)();
  }
  _Ptd = __getptd();
  if (_Ptd == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  __freeptd(_Ptd);
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}


/* END FUNCTION 0x100fac02 */
