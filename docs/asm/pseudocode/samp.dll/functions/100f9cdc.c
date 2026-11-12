/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9cdc
 * Name: __endthread
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __endthread(void)

{
  _ptiddata _Ptd;
  
  if (PTR_FUN_10155598 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10155598)();
  }
  _Ptd = __getptd();
  if (_Ptd == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  if ((HANDLE)_Ptd->_thandle != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)_Ptd->_thandle);
  }
  __freeptd(_Ptd);
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}


/* END FUNCTION 0x100f9cdc */
