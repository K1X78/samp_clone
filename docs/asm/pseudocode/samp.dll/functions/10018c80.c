/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10018c80
 * Name: FUN_10018c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10018c80(undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int local_12c;
  int local_128;
  uint local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101135db;
  local_c = ExceptionList;
  local_128 = 0;
  local_12c = 0;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_4 = 0;
  if (puVar1 == (ushort *)0x0) {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return;
  }
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(&local_12c,0x20,1);
  iVar3 = local_128;
  if ((20000 < local_12c) &&
     ((iVar2 = FUN_100b39d0(local_12c), iVar2 != 0 ||
      ((DAT_102aca28 != 0 && (iVar2 = FUN_1000ce30(local_12c), iVar2 != 0)))))) {
    iVar3 = local_12c;
  }
  iVar2 = FUN_100b39d0(iVar3);
  if (iVar2 != 0) {
    if (((ushort)local_124[0] == *puVar1) ||
       (((((ushort)local_124[0] < 0x3ec &&
          (*(int *)(puVar1 + (local_124[0] & 0xffff) * 2 + 0x7eb) != 0)) &&
         (iVar2 = FUN_100010f0(local_124[0]), *(int *)(iVar2 + 4) != 0)) &&
        ((*(char *)(iVar2 + 0x1a) != '\0' &&
         (iVar2 = FUN_100010f0(local_124[0]), *(int *)(iVar2 + 4) != 0)))))) {
      FUN_100afb50(iVar3);
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return;
  }
  if (DAT_102aca10 != 0) {
    FUN_10067ae0(DAT_102aca10,"Warning: SetPlayerSkin %d isn\'t a valid ped model.",iVar3);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10018c80 */
