/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00431d50
 * Name: FUN_00431d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_00431d50(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  
  if (((undefined4 *)param_2[7] != (undefined4 *)0x0) &&
     (piVar1 = FUN_00431d50(param_1,(undefined4 *)param_2[7],param_3), piVar1 != (int *)0x0)) {
    return piVar1;
  }
  piVar1 = (int *)0x0;
  if (param_3 < *(int *)*param_2) {
    piVar1 = FUN_004300f0(*(char **)(((int *)*param_2)[3] + param_3 * 0x14));
  }
  return piVar1;
}


/* END FUNCTION 0x00431d50 */
