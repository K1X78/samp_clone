/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0bb0
 * Name: FUN_100d0bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d0bb0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    for (piVar1 = (int *)*param_2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (*piVar1 == param_1) {
        FUN_100e89e0(param_2,piVar1,0);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100d0bb0 */
