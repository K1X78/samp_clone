/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ff3ff
 * Name: FUN_100ff3ff
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ff3ff(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < (int)p_Var1->_purecall) {
    p_Var1 = __getptd();
    p_Var1->_purecall = (void *)((int)p_Var1->_purecall + -1);
  }
  return;
}


/* END FUNCTION 0x100ff3ff */
