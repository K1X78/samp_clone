/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004c4c0
 * Name: FUN_1004c4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1004c4c0(int param_1)

{
  uint uVar1;
  void *_Memory;
  int iVar2;
  void *_Memory_00;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10115781;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x23);
    if (*(uint *)(param_1 + 0x27) < uVar1) {
      iVar2 = *(int *)(param_1 + 0x2b) - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    if (*(uint *)(param_1 + 0x27) + iVar2 == 0) break;
    iVar2 = *(int *)(param_1 + 0x23) + 1;
    *(int *)(param_1 + 0x23) = iVar2;
    if (iVar2 == *(int *)(param_1 + 0x2b)) {
      *(undefined4 *)(param_1 + 0x23) = 0;
    }
    if (*(int *)(param_1 + 0x23) == 0) {
      _Memory_00 = *(void **)(*(int *)(param_1 + 0x1f) + -4 + *(int *)(param_1 + 0x2b) * 4);
    }
    else {
      _Memory_00 = *(void **)(*(int *)(param_1 + 0x1f) + -4 + *(int *)(param_1 + 0x23) * 4);
    }
    _Memory = *(void **)((int)_Memory_00 + 0x16);
    if (_Memory != (void *)0x0) {
      FUN_1001f390();
      _free(_Memory);
    }
    _free(_Memory_00);
  }
  local_4._0_1_ = 1;
  FUN_10049f30();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1004b1d0();
  local_4 = 0xffffffff;
  FUN_1004b150();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004c4c0 */
