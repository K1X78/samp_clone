/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034190
 * Name: thunk_FUN_1003a7e0
 * Status: ok
 * Single JMP forwarder to 0x1003a7e0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_1003a7e0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10038c00(param_2);
  if (iVar1 == -1) {
    FUN_10038b80(param_2);
    (**(code **)*param_2)(param_1);
  }
  return;
}


/* END FUNCTION 0x10034190 */
