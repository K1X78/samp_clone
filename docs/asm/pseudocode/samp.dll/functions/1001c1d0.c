/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001c1d0
 * Name: FUN_1001c1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001c1d0(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort local_150;
  ushort local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10113bdb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300();
  local_c = 0;
  FUN_1001f470();
  FUN_1001f470();
  FUN_1001f470();
  FUN_1001f470();
  FUN_1001f470();
  FUN_1001f470();
  FUN_1001f470();
  FUN_1001f470();
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
  if (((local_150 < 0x835) && (*(int *)(iVar1 + 4 + (uint)local_150 * 4) != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x20d4 + (uint)local_150 * 4), iVar1 != 0)) {
    puVar2 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    if (local_14c == *puVar2) {
      iVar3 = **(int **)(puVar2 + 0xf);
    }
    else {
      if (((0x3ec < local_14c) || (*(int *)(puVar2 + (uint)local_14c * 2 + 0x13) == 0)) ||
         (iVar3 = *(int *)(*(int *)(puVar2 + (uint)local_14c * 2 + 0x13) + 8), iVar3 == 0))
      goto LAB_1001c35f;
      iVar3 = *(int *)(iVar3 + 4);
    }
    FUN_100b1f10(&DAT_10118288,*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar3 + 0x44),
                 (double)local_138,(double)local_140,(double)local_144,(double)local_148,
                 (double)local_134,(double)local_13c);
  }
LAB_1001c35f:
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1001c1d0 */
