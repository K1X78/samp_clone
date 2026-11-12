/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007bac0
 * Name: FUN_1007bac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1007bac0(int *param_1,int param_2,undefined4 *param_3)

{
  if ((-1 < param_2) && (param_2 < param_1[1])) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *param_3;
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x1007bac0 */
