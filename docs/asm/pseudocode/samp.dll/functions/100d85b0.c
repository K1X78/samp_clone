/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d85b0
 * Name: FUN_100d85b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d85b0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((param_2 + 0x1c) * 0x10 + param_1);
  if (((*piVar1 != 0) && (piVar1[1] != 0)) && ((uint)piVar1[3] < (uint)piVar1[2])) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100d85b0 */
