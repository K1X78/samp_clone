/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000cfc0
 * Name: FUN_1000cfc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000cfc0(int *param_1,uint param_2)

{
  if ((uint)param_1[1] <= param_2) {
    return 0;
  }
  *(undefined4 *)(*param_1 + param_2 * 4) = 0;
  FUN_1000c6a0();
  return 1;
}


/* END FUNCTION 0x1000cfc0 */
