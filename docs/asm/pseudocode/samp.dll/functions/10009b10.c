/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009b10
 * Name: FUN_10009b10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10009b10(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_15d;
  ushort local_15c [2];
  undefined1 local_158 [332];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112b9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  if (*(int *)(param_1 + 0x3cd) == 5) {
    local_15d = 0;
    FUN_1001f470(&local_15d,8,1);
    FUN_1001f470(local_15c,0x10,1);
    FUN_1001f960(local_158,0x36);
    if (((local_15c[0] < 0x3ed) &&
        (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0x26 + (uint)local_15c[0] * 4),
        iVar1 != 0)) && (*(int *)(iVar1 + 8) != 0)) {
      FUN_10015950(local_158);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10009b10 */
