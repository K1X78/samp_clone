/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c7a0
 * Name: FUN_1008c7a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1008c7a0(int param_1)

{
  void *pvVar1;
  void **ppvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101163d6;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      if (pvVar1 != (void *)0x0) {
        _free(pvVar1);
      }
      iVar3 = iVar3 + 1;
      ppvVar2 = ExceptionList;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  ExceptionList = ppvVar2;
  thunk_FUN_100865c0(0);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 8) + iVar3 * 4);
      if (pvVar1 != (void *)0x0) {
        _free(pvVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  thunk_FUN_10086530(0);
  FUN_1009b1d0();
  FUN_10085d10();
  thunk_FUN_100865c0(0);
  thunk_FUN_10086530(0);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1008c7a0 */
