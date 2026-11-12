/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100136c0
 * Name: FUN_100136c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100136c0(int param_1)

{
  uint uVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10118188;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  _DAT_10156b84 = _DAT_10156b84 + 1;
  uVar1 = 0;
  ExceptionList = &local_14;
  while ((ushort)uVar1 < 0x3ec) {
    if (*(int *)(param_1 + 0xfd6 + (uVar1 & 0xffff) * 4) == 1) {
      local_8 = 0;
      FUN_100010f0(uVar1);
      FUN_10016310();
      uVar1 = uVar1 + 1;
    }
    else {
      uVar1 = uVar1 + 1;
    }
  }
  local_8 = 1;
  if (*(int *)(param_1 + 0x1e) != 0) {
    FUN_100072d0();
  }
  ExceptionList = local_14;
  return 1;
}


/* END FUNCTION 0x100136c0 */
