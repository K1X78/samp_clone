/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008f50
 * Name: FUN_10008f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008f50(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112a9b;
  local_c = ExceptionList;
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x18);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_10002180();
    _free(pvVar1);
  }
  pvVar1 = operator_new(0x2000);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_10002150();
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x18) = uVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10008f50 */
