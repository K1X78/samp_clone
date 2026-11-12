/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100121c0
 * Name: FUN_100121c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100121c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  byte local_235;
  ushort local_234 [142];
  undefined4 local_118 [65];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_101132bb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_c = 0;
  if (*(int *)(DAT_102aca24 + 0x3cd) == 5) {
    puVar4 = local_118;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    FUN_1001f470(local_234,0x10,1);
    FUN_1001f470(&local_235,8,1);
    FUN_1001f960(local_118,local_235);
    *(undefined1 *)((int)local_118 + (uint)local_235) = 0;
    puVar3 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    if (local_234[0] == *puVar3) {
      if (*(uint *)(puVar3 + 0xd) < 0x10) {
        puVar3 = puVar3 + 3;
      }
      else {
        puVar3 = *(ushort **)(puVar3 + 3);
      }
      puVar4 = local_118;
      uVar1 = FUN_10003e20(puVar4);
      FUN_10067a90(puVar3,uVar1,puVar4);
    }
    else if (((local_234[0] < 0x3ed) && (*(int *)(puVar3 + (uint)local_234[0] * 2 + 0x13) != 0)) &&
            (*(int *)(*(int *)(puVar3 + (uint)local_234[0] * 2 + 0x13) + 8) != 0)) {
      FUN_10017120(local_118);
    }
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x100121c0 */
