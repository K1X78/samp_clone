/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100faef7
 * Name: operator_
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall operator_(int param_1,int param_2)

{
  if (param_1 != param_2) {
    _exception();
    exception(param_2);
  }
  return param_1;
}


/* END FUNCTION 0x100faef7 */
