/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008c00
 * Name: FUN_10008c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008c00(int param_1)

{
  DWORD DVar1;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101129fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DVar1 = GetTickCount();
  if (3000 < DVar1 - _DAT_10156b38) {
    _DAT_10156b38 = GetTickCount();
    FUN_1001f1f0();
    local_4 = 0;
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 100))(&DAT_10117b98,local_120,1,8,0,0);
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10008c00 */
