/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10083750
 * Name: FUN_10083750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10083750(int param_1)

{
  void *_Memory;
  void **ppvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101162fc;
  local_c = ExceptionList;
  iVar2 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(param_1 + 0x560)) {
    do {
      _Memory = *(void **)(*(int *)(param_1 + 0x55c) + iVar2 * 4);
      if (_Memory != (void *)0x0) {
        FUN_10083440();
        _free(_Memory);
      }
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(param_1 + 0x560));
  }
  ExceptionList = ppvVar1;
  thunk_FUN_100827b0(0);
  thunk_FUN_100827b0(0);
  thunk_FUN_10082720(0);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10083750 */
