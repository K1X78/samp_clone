/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004ede0
 * Name: thunk_FUN_100206d0
 * Status: ok
 * Single JMP forwarder to 0x100206d0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall thunk_FUN_100206d0(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    _free((void *)*param_1);
  }
  return;
}


/* END FUNCTION 0x1004ede0 */
