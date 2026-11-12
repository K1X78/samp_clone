/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034390
 * Name: thunk_FUN_100386a0
 * Status: ok
 * Single JMP forwarder to 0x100386a0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_100386a0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc1a) == param_2) {
    *(undefined4 *)(param_1 + 0xc1a) = 0;
  }
  return;
}


/* END FUNCTION 0x10034390 */
