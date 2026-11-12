/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001d830
 * Name: FUN_1001d830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001d830(undefined4 *param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort *local_130;
  uint local_12c;
  uint local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113e7b;
  local_c = ExceptionList;
  puVar4 = (ushort *)0x0;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_4 = 0;
  FUN_1001f470(&local_128,0x10,1);
  FUN_1001f470(&local_12c,0x10,1);
  FUN_1001f470(local_124,8,1);
  if ((short)local_12c == -1) {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return;
  }
  uVar5 = (ushort)local_128;
  if (uVar5 != 0xffff) {
    if (*puVar1 == uVar5) {
      if (*(uint *)(puVar1 + 0xd) < 0x10) {
        local_130 = puVar1 + 3;
        uVar2 = FUN_10003e20();
      }
      else {
        local_130 = *(ushort **)(puVar1 + 3);
        uVar2 = FUN_10003e20();
      }
      goto LAB_1001d973;
    }
    if ((uVar5 < 0x3ec) && (*(int *)(puVar1 + (local_128 & 0xffff) * 2 + 0x7eb) != 0)) {
      local_130 = (ushort *)FUN_100170d0(local_128);
      FUN_100010f0(local_128);
      uVar2 = FUN_10015e30();
      goto LAB_1001d973;
    }
  }
  local_130 = (ushort *)0x0;
  uVar2 = 0;
LAB_1001d973:
  if (*puVar1 == (ushort)local_12c) {
    if (*(uint *)(puVar1 + 0xd) < 0x10) {
      puVar4 = puVar1 + 3;
      uVar3 = FUN_10003e20();
    }
    else {
      puVar4 = *(ushort **)(puVar1 + 3);
      uVar3 = FUN_10003e20();
    }
  }
  else if (((ushort)local_12c < 0x3ec) && (*(int *)(puVar1 + (local_12c & 0xffff) * 2 + 0x7eb) != 0)
          ) {
    puVar4 = (ushort *)FUN_100170d0(local_12c);
    if (*(int *)(puVar1 + (local_12c & 0xffff) * 2 + 0x13) == 0) {
      uVar3 = FUN_10015e30();
    }
    else {
      uVar3 = FUN_10015e30();
    }
  }
  else {
    uVar3 = 0;
  }
  if (DAT_102aca18 != 0) {
    thunk_FUN_1006a010(local_130,puVar4,uVar2,uVar3,local_124[0]);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001d830 */
