/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027a10
 * Name: thunk_FUN_10026ed0
 * Status: ok
 * Single JMP forwarder to 0x10026ed0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall thunk_FUN_10026ed0(char *param_1)

{
  if (*param_1 == '\0') {
    _free(*(void **)(param_1 + 5));
  }
  *param_1 = '\x01';
  return;
}


/* END FUNCTION 0x10027a10 */
