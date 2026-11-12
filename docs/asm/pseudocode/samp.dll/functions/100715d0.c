/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100715d0
 * Name: FUN_100715d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100715d0(int param_1,int param_2)

{
  if (((-1 < param_2) && (param_2 < 10)) && (*(int *)(param_1 + 0x4c + param_2 * 4) != 0)) {
    return param_2 * 0x34 + 0x74 + param_1;
  }
  return 0;
}


/* END FUNCTION 0x100715d0 */
