/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d0c0
 * Name: FUN_1006d0c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006d0c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1);
  }
  if (param_1[1] == 0) {
    (**(code **)(*(int *)*param_1 + 0xec))((int *)*param_1,1,param_1 + 1);
  }
  return;
}


/* END FUNCTION 0x1006d0c0 */
