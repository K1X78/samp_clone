/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010848e
 * Name: __set_bexp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __set_bexp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26(param_2 << 4 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}


/* END FUNCTION 0x1010848e */
