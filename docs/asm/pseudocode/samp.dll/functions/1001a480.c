/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001a480
 * Name: FUN_1001a480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001a480(undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte local_342;
  byte local_341;
  undefined1 local_340;
  undefined1 local_33f;
  undefined1 local_33e;
  undefined1 local_33d;
  ushort local_33c [2];
  undefined4 local_338;
  undefined4 local_334 [71];
  undefined4 local_218 [64];
  undefined4 local_118 [65];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1011391b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar4 = local_218;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_118;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_c = 0;
  FUN_1001f470(local_33c,0x10,1);
  FUN_1001f470(&local_342,8,1);
  FUN_1001f960(local_218,local_342);
  FUN_1001f470(&local_341,8,1);
  FUN_1001f960(local_118,local_341);
  FUN_1001f470(local_334,0x20,1);
  FUN_10008110(&local_340);
  FUN_10008110(&local_33f);
  FUN_10008110(&local_33d);
  FUN_10008110(&local_33e);
  FUN_1001f470(&local_338,0x20,1);
  *(undefined1 *)((int)local_218 + (uint)local_342) = 0;
  *(undefined1 *)((int)local_118 + (uint)local_341) = 0;
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if (puVar1 != (ushort *)0x0) {
    if (local_33c[0] == *puVar1) {
      iVar3 = **(int **)(puVar1 + 0xf);
    }
    else {
      if ((((0x3eb < local_33c[0]) || (*(int *)(puVar1 + (uint)local_33c[0] * 2 + 0x7eb) == 0)) ||
          (*(int *)(puVar1 + (uint)local_33c[0] * 2 + 0x13) == 0)) ||
         (iVar2 = *(int *)(*(int *)(puVar1 + (uint)local_33c[0] * 2 + 0x13) + 8), iVar2 == 0))
      goto LAB_1001a65c;
      iVar3 = *(int *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 0x1cd) = 1;
    }
    if (iVar3 != 0) {
      FUN_100ace50(local_118,local_218,local_334[0],local_340,local_33f,local_33d,local_33e,
                   local_338);
    }
  }
LAB_1001a65c:
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1001a480 */
