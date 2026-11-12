/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034470
 * Name: thunk_FUN_10038740
 * Status: ok
 * Single JMP forwarder to 0x10038740; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall thunk_FUN_10038740(int param_1)

{
  if (((*(double *)(param_1 + 0xc1e) <= 0.0) && (*(short *)(param_1 + 0xc26) == 0)) &&
     (*(short *)(param_1 + 0xc28) == 0)) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x10034470 */
