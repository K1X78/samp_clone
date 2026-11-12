/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100060d0
 * Name: FUN_100060d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100060d0(int *param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  DWORD DVar4;
  int iVar5;
  byte bVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte local_130 [7];
  char local_129;
  uint local_128;
  uint local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011286b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_100ab870();
  local_129 = '\0';
  if (*param_1 == 0) {
    sVar2 = -1;
  }
  else {
    iVar5 = FUN_100aeb60();
    if (iVar5 == 0) {
      sVar2 = -1;
    }
    else if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) == 0) {
      sVar2 = -1;
    }
    else {
      sVar2 = FUN_100137c0(iVar5);
    }
  }
  if (*param_1 == 0) {
    sVar3 = -1;
  }
  else {
    iVar5 = FUN_100aeb60();
    if (iVar5 == 0) {
      sVar3 = -1;
    }
    else if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 4) == 0) {
      sVar3 = -1;
    }
    else {
      sVar3 = FUN_100018b0(iVar5);
    }
  }
  if ((sVar2 == *(short *)((int)param_1 + 0x189)) && (sVar3 == *(short *)((int)param_1 + 0x18b))) {
    if (cVar1 == *(char *)((int)param_1 + 0x18d)) {
      DVar4 = GetTickCount();
      if (DVar4 - *(int *)((int)param_1 + 0x185) < 100) {
        ExceptionList = local_c;
        return;
      }
      goto LAB_100061d0;
    }
  }
  else {
    *(short *)((int)param_1 + 0x189) = sVar2;
    *(short *)((int)param_1 + 0x18b) = sVar3;
    local_129 = '\x01';
LAB_100061d0:
    if (cVar1 == *(char *)((int)param_1 + 0x18d)) goto LAB_100061de;
  }
  *(char *)((int)param_1 + 0x18d) = cVar1;
LAB_100061de:
  FUN_1001f1f0();
  local_4 = 0;
  local_130[0] = 0xcc;
  FUN_1001faa0(local_130,8,1);
  local_128 = (uint)*(ushort *)((int)param_1 + 0x189);
  FUN_1001faa0(&local_128,0x10,1);
  local_128 = (uint)*(ushort *)((int)param_1 + 0x18b);
  FUN_1001faa0(&local_128,0x10,1);
  bVar6 = 0;
  local_128 = 0;
  pbVar8 = (byte *)((int)param_1 + 0x18e);
  puVar7 = (ushort *)((int)param_1 + 0x19b);
  do {
    iVar5 = *(int *)(*param_1 + 0x2a4) + local_128;
    if (((uint)*pbVar8 != *(uint *)(iVar5 + 0x5a0)) || (*(int *)puVar7 != *(int *)(iVar5 + 0x5ac)))
    {
      *pbVar8 = *(byte *)(iVar5 + 0x5a0);
      *(undefined4 *)puVar7 = *(undefined4 *)(*(int *)(*param_1 + 0x2a4) + 0x5ac + local_128);
      local_130[0] = bVar6;
      FUN_1001faa0(local_130,8,1);
      local_130[0] = *pbVar8;
      FUN_1001faa0(local_130,8,1);
      local_124 = (uint)*puVar7;
      FUN_1001faa0(&local_124,0x10,1);
      local_129 = '\x01';
    }
    local_128 = local_128 + 0x1c;
    bVar6 = bVar6 + 1;
    pbVar8 = pbVar8 + 1;
    puVar7 = puVar7 + 2;
  } while (bVar6 < 0xd);
  if (local_129 != '\0') {
    DVar4 = GetTickCount();
    *(DWORD *)((int)param_1 + 0x185) = DVar4;
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,6,0);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100060d0 */
