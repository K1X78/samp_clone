/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a7e0
 * Name: FUN_1003a7e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1003a7e0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10038c00(param_2);
  if (iVar1 == -1) {
    FUN_10038b80(param_2);
    (**(code **)*param_2)(param_1);
  }
  return;
}


/* END FUNCTION 0x1003a7e0 */
