/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9e58
 * Name: terminate
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->ptlocinfo != (pthreadlocinfo)0x0) {
    p_Var1 = __getptd();
    (*(code *)p_Var1->ptlocinfo)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


/* END FUNCTION 0x004a9e58 */
