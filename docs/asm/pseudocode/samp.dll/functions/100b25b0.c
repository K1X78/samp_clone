/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b25b0
 * Name: FUN_100b25b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b25b0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 4))(param_1);
  pvVar2 = operator_new(0x10);
  if (pvVar2 != (void *)0x0) {
    uVar1 = FUN_100b2590(uVar1);
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x100b25b0 */
