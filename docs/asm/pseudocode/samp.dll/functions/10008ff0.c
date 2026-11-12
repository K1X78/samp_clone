/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008ff0
 * Name: FUN_10008ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008ff0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_10013310();
    _free(pvVar1);
  }
  pvVar1 = operator_new(0x23004);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_10008190();
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x10) = uVar2;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x10) = 0;
  return;
}


/* END FUNCTION 0x10008ff0 */
