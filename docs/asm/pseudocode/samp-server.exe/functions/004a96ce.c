/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a96ce
 * Name: FUN_004a96ce
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004a96ce(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < (int)p_Var1->_purecall) {
    p_Var1 = __getptd();
    p_Var1->_purecall = (void *)((int)p_Var1->_purecall + -1);
  }
  return;
}


/* END FUNCTION 0x004a96ce */
