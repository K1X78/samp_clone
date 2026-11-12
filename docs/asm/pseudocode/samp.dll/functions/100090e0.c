/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100090e0
 * Name: FUN_100090e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100090e0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112adb;
  local_c = ExceptionList;
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x1c);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_100015e0();
    _free(pvVar1);
  }
  pvVar1 = operator_new(0x10800);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_10001190();
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x1c) = uVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x1c) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100090e0 */
