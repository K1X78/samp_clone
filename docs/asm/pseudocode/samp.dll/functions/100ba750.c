/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ba750
 * Name: FUN_100ba750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ba750(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101167db;
  local_c = ExceptionList;
  pvVar1 = *(void **)(param_1 + 0x1c);
  local_4 = 0;
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_100ba750();
    _free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    FUN_100ba750();
    _free(pvVar1);
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100ba750 */
