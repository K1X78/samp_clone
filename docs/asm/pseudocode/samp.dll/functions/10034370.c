/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034370
 * Name: thunk_FUN_1003a870
 * Status: ok
 * Single JMP forwarder to 0x1003a870; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void thunk_FUN_1003a870(undefined4 param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_100392e0(&param_1,0);
    return;
  }
  FUN_10039220(&param_1);
  return;
}


/* END FUNCTION 0x10034370 */
