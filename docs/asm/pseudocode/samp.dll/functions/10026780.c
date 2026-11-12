/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026780
 * Name: FUN_10026780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10026780(int *param_1)

{
  int *piVar1;
  void *_Memory;
  int iVar2;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101143d8;
  local_c = ExceptionList;
  if (*param_1 != 0) {
    ExceptionList = &local_c;
    FUN_10026360();
    local_4 = 0;
    FUN_100263b0(param_1);
    while( true ) {
      if (local_14 < local_18) {
        iVar2 = local_10 - local_18;
      }
      else {
        iVar2 = -local_18;
      }
      if (local_14 + iVar2 == 0) break;
      local_18 = local_18 + 1;
      if (local_18 == local_10) {
        _Memory = *(void **)(local_1c + -4 + local_10 * 4);
        local_18 = 0;
      }
      else if (local_18 == 0) {
        _Memory = *(void **)(local_1c + -4 + local_10 * 4);
      }
      else {
        _Memory = *(void **)(local_1c + -4 + local_18 * 4);
      }
      if (*(int *)((int)_Memory + 5) != 0) {
        FUN_100263b0((int)_Memory + 5);
      }
      if (*(int *)((int)_Memory + 9) != 0) {
        FUN_100263b0((int)_Memory + 9);
      }
      _free(_Memory);
    }
    piVar1 = param_1 + 1;
    iVar2 = 0x100;
    do {
      _free((void *)*piVar1);
      piVar1 = (int *)((int)piVar1 + 6);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *param_1 = 0;
    local_4 = 0xffffffff;
    FUN_10026390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10026780 */
