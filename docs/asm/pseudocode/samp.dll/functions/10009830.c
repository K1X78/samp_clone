/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009830
 * Name: FUN_10009830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10009830(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_14d;
  uint local_14c;
  undefined1 local_148 [316];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112b3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  if (*(int *)(param_1 + 0x3cd) == 5) {
    local_14d = 0;
    local_14c = 0;
    FUN_1001f470(&local_14d,8,1);
    FUN_1001f470(&local_14c,0x10,1);
    FUN_1001f960(local_148,0x28);
    iVar1 = *(int *)(*(int *)(param_1 + 0x3de) + 8);
    if (((((ushort)local_14c < 0x3ec) &&
         (iVar2 = (local_14c & 0xffff) * 4, *(int *)(iVar2 + 0xfd6 + iVar1) != 0)) &&
        (iVar1 = *(int *)(iVar2 + 0x26 + iVar1), iVar1 != 0)) && (*(int *)(iVar1 + 8) != 0)) {
      FUN_10016010(local_148);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10009830 */
