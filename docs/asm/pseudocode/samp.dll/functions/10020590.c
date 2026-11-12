/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020590
 * Name: thunk_FUN_100331d0
 * Status: ok
 * Single JMP forwarder to 0x100331d0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall thunk_FUN_100331d0(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x10020590 */
