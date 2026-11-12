/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10018a00
 * Name: FUN_10018a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10018a00(undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char local_15d;
  ushort local_15c [2];
  undefined4 local_158;
  undefined4 local_154 [82];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011359b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar3 = local_154;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_4 = 0;
  FUN_1001f470(local_15c,0x10,1);
  FUN_1001f470(&local_158,0x20,1);
  FUN_10008110(&local_15d);
  if (local_15d != '\0') {
    FUN_1001f960(local_154,0x34);
  }
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if (puVar1 != (ushort *)0x0) {
    if (local_15c[0] == *puVar1) {
      iVar2 = **(int **)(puVar1 + 0xf);
    }
    else {
      if ((0x3eb < local_15c[0]) || (*(int *)(puVar1 + (uint)local_15c[0] * 2 + 0x7eb) == 0))
      goto LAB_10018b10;
      if (*(int *)(puVar1 + (uint)local_15c[0] * 2 + 0x13) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(puVar1 + (uint)local_15c[0] * 2 + 0x13) + 8);
      }
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (iVar2 != 0) {
      if (local_15d == '\0') {
        FUN_100aea50(local_158);
      }
      else {
        FUN_100b0710(local_158,local_154);
      }
    }
  }
LAB_10018b10:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10018a00 */
