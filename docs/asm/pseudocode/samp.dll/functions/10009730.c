/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009730
 * Name: FUN_10009730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10009730(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_169;
  ushort local_168 [2];
  undefined4 local_164;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112b1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  local_169 = 0;
  if (*(int *)(param_1 + 0x3cd) == 5) {
    puVar2 = &local_164;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 2) = 0;
    FUN_1001f470(&local_169,8,1);
    FUN_1001f470(local_168,0x10,1);
    FUN_1001f960(&local_164,0x43);
    if (((local_168[0] < 0x3ed) &&
        (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0x26 + (uint)local_168[0] * 4),
        iVar1 != 0)) && (*(int *)(iVar1 + 8) != 0)) {
      FUN_10015600(&local_164);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10009730 */
