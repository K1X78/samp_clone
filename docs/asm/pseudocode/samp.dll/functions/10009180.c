/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009180
 * Name: FUN_10009180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10009180(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112afb;
  local_c = ExceptionList;
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 4);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_100018e0();
    _free(pvVar1);
  }
  pvVar1 = operator_new(0x4e24);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_100016c0();
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 4) = uVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 4) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10009180 */
