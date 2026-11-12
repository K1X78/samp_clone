/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008e10
 * Name: FUN_10008e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008e10(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112a5b;
  local_c = ExceptionList;
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x20);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_1001e390();
    _free(pvVar1);
  }
  pvVar1 = operator_new(0x4800);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_1001e260();
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x20) = uVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x20) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10008e10 */
