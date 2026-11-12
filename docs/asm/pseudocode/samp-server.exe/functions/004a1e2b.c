/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1e2b
 * Name: __endthreadex
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __endthreadex(DWORD param_1)

{
  _ptiddata p_Var1;
  
  if (PTR_FUN_004ec0b0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_004ec0b0)();
  }
  p_Var1 = __getptd();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  __freeptd(p_Var1);
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}


/* END FUNCTION 0x004a1e2b */
