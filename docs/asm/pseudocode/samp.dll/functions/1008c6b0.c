/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c6b0
 * Name: FUN_1008c6b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1008c6b0(int param_1)

{
  void *_Memory;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101163a8;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_1008c050();
  thunk_FUN_1007bb40(0);
  thunk_FUN_1007bb40(0);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x16e)) {
    do {
      _Memory = *(void **)(*(int *)(param_1 + 0x16a) + iVar1 * 4);
      if (_Memory != (void *)0x0) {
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x16e));
  }
  thunk_FUN_100864a0(0);
  thunk_FUN_100864a0(0);
  thunk_FUN_10086410(0);
  thunk_FUN_1007bb40(0);
  thunk_FUN_1007bb40(0);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1008c6b0 */
