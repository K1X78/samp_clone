/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100205b0
 * Name: thunk_FUN_10033230
 * Status: ok
 * Single JMP forwarder to 0x10033230; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall thunk_FUN_10033230(uint *param_1,uint *param_2)

{
  if ((*param_2 <= *param_1) &&
     ((*param_1 != *param_2 || ((ushort)param_2[1] <= (ushort)param_1[1])))) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100205b0 */
