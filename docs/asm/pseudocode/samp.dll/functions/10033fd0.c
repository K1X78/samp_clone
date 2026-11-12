/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033fd0
 * Name: thunk_FUN_100380b0
 * Status: ok
 * Single JMP forwarder to 0x100380b0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void thunk_FUN_100380b0(char *param_1,int param_2)

{
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != 0)) {
    FUN_10051170((int)*param_1,param_2,0);
  }
  return;
}


/* END FUNCTION 0x10033fd0 */
