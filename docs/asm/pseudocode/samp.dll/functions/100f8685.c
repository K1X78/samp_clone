/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f8685
 * Name: _CreateFrameInfo
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * _CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_curexception;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  return param_1;
}


/* END FUNCTION 0x100f8685 */
