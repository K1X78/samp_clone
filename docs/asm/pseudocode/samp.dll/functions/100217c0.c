/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100217c0
 * Name: FUN_100217c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100217c0(int *param_1,uint param_2)

{
  if (param_2 < (uint)param_1[1]) {
    _memmove((void *)(*param_1 + param_2),(void *)((int)(*param_1 + param_2) + 1),
             (param_1[1] - param_2) - 1);
    param_1[1] = param_1[1] + -1;
  }
  return;
}


/* END FUNCTION 0x100217c0 */
