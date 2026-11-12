/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001ca30
 * Name: FUN_1001ca30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001ca30(undefined4 *param_1)

{
  int iVar1;
  uint local_448;
  ushort local_444 [140];
  undefined1 local_32c [800];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113cbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_448 = 0;
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x20);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_1001f470(local_444,0x10,1);
    FUN_1001f470(&local_448,0x10,1);
    if ((ushort)local_448 < 0x321) {
      FUN_1001f960(local_32c,local_448 & 0xffff);
      local_32c[local_448 & 0xffff] = 0;
      if (((local_444[0] < 0x900) && (*(int *)(iVar1 + (uint)local_444[0] * 4) != 0)) &&
         (*(int *)(iVar1 + 0x2400 + (uint)local_444[0] * 4) != 0)) {
        FUN_100b2b60(local_32c);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001ca30 */
