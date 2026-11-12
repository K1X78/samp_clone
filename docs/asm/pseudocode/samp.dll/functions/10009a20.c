/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009a20
 * Name: FUN_10009a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10009a20(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_13d;
  ushort local_13c [2];
  undefined1 local_138 [300];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112b7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  local_13d = 0;
  if (*(int *)(param_1 + 0x3cd) == 5) {
    FUN_1001f470(&local_13d,8,1);
    FUN_1001f470(local_13c,0x10,1);
    FUN_1001f960(local_138,0x18);
    if (((local_13c[0] < 0x3ed) &&
        (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0x26 + (uint)local_13c[0] * 4),
        iVar1 != 0)) && (*(int *)(iVar1 + 8) != 0)) {
      FUN_10016f60(local_138);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10009a20 */
