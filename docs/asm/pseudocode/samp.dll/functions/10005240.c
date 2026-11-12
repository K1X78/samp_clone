/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005240
 * Name: FUN_10005240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10005240(ushort *param_1,ushort param_2)

{
  DWORD DVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  bool bVar5;
  undefined1 local_1ac [4];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  ushort local_198;
  undefined4 local_196;
  undefined4 local_192;
  undefined4 local_18e;
  undefined4 local_18a;
  undefined4 local_186;
  undefined4 local_182;
  undefined4 local_17e;
  undefined1 local_17a [12];
  undefined1 local_16e [14];
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011272b;
  local_c = ExceptionList;
  iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if (((param_2 < 2000) && (*(int *)(iVar2 + 0x3074 + (uint)param_2 * 4) != 0)) &&
     (*(int *)(iVar2 + 0x1134 + (uint)param_2 * 4) != 0)) {
    ExceptionList = &local_c;
    FUN_1009e950(local_160);
    FUN_100b4df0(local_160,&local_1a8);
    FUN_100b5040(&local_1a8);
    local_186 = local_1a4;
    local_18a = local_1a8;
    local_196 = local_130;
    local_182 = local_1a0;
    local_17e = local_19c;
    local_198 = param_2;
    local_192 = local_12c;
    local_18e = local_128;
    FUN_1009eb20(local_17a);
    FUN_1009ec70(local_16e);
    DVar1 = GetTickCount();
    if (DVar1 - *(int *)(param_1 + 0x94) < 0x1f5) {
      iVar2 = 0x1b;
      bVar5 = true;
      puVar3 = param_1 + 2;
      puVar4 = &local_198;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *puVar3 == *puVar4;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        ExceptionList = local_c;
        return;
      }
    }
    DVar1 = GetTickCount();
    *(DWORD *)(param_1 + 0x94) = DVar1;
    FUN_1001f1f0();
    local_4 = 0;
    local_1ac[0] = 0xd2;
    FUN_1001faa0(local_1ac,8,1);
    FUN_1001fb50(&local_198,0x36);
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,7,1);
    puVar3 = &local_198;
    for (iVar2 = 0xd; param_1 = param_1 + 2, iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)param_1 = *(undefined4 *)puVar3;
      puVar3 = puVar3 + 2;
    }
    *param_1 = *puVar3;
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10005240 */
