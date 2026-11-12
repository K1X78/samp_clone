/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004583f0
 * Name: FUN_004583f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004583f0(void *this,int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_1b8 [16];
  uint local_178 [8];
  uint local_158 [8];
  undefined1 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_83;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  uint local_6f [8];
  int local_4c [8];
  uint local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b0fab;
  local_c = ExceptionList;
  local_134 = 0;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_124 = 0;
  local_f4 = 0;
  local_120 = 0;
  local_f0 = 0;
  local_11c = 0;
  local_ec = 0;
  local_118 = 0;
  local_e8 = 0;
  local_c4 = 0;
  local_94 = 0;
  local_c0 = 0;
  local_90 = 0;
  local_8c = 0;
  local_bc = 0;
  local_b8 = 0;
  local_88 = 0;
  local_138 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0xcb0) != 4) {
    return;
  }
  local_1b8[0] = *(int *)(param_2 + 0x15);
  piVar7 = (int *)(param_2 + 0x19);
  piVar9 = local_4c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  if ((*(char *)((int)this + 0xd95) == '\x01') && (*(char *)((int)this + 0xd94) == '\0')) {
    if (local_1b8[0] == *(int *)((int)this + 0xd70)) {
      iVar6 = 8;
      bVar11 = true;
      piVar7 = local_4c;
      piVar9 = (int *)((int)this + 0xd74);
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar11 = *piVar7 == *piVar9;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      } while (bVar11);
      if (bVar11) goto LAB_0045858e;
    }
    uVar13 = 0x45;
    ExceptionList = &local_c;
    puVar3 = (undefined2 *)FUN_0044fd50(1);
    **(undefined1 **)(puVar3 + 8) = 0x23;
    *(undefined4 *)(puVar3 + 6) = 8;
    uVar2 = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar2;
    uVar1 = *(undefined2 *)(param_1 + 5);
    puVar3[3] = uVar1;
    uVar4 = FUN_004538a0(this,uVar2,CONCAT22(uVar13,uVar1),'\x01');
    *puVar3 = (short)uVar4;
    puVar5 = (undefined4 *)FUN_00450e00((int)this + 0xdd0);
    *puVar5 = puVar3;
    FUN_00450e40((int)this + 0xdd0);
    *(undefined4 *)(param_1 + 0xcb0) = 2;
  }
  else {
LAB_0045858e:
    iVar6 = 0;
    ExceptionList = &local_c;
    do {
      uVar4 = FUN_0045af90();
      *(uint *)((int)&local_1ec + iVar6) = uVar4;
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x14);
    local_1c4 = 0;
    local_1c0 = 0;
    local_1bc = 0;
    local_1d0 = local_1e4;
    local_1d4 = local_1e8;
    local_134 = 0;
    local_1c8 = local_1dc;
    local_130 = 0;
    local_c4 = 0;
    local_12c = 0;
    local_1d8 = local_1ec;
    local_c0 = 0;
    local_128 = 0;
    local_bc = 0;
    local_1cc = local_1e0;
    local_124 = 0;
    local_b8 = 0;
    local_138 = 0;
    local_120 = 0;
    local_1b8[1] = 0;
    local_f4 = 0;
    local_11c = 0;
    local_1b8[2] = 0;
    local_f0 = 0;
    local_118 = 0;
    local_ec = 0;
    local_1b8[3] = 0;
    local_94 = 0;
    local_e8 = 0;
    local_1b8[4] = 0;
    local_90 = 0;
    local_8c = 0;
    local_1b8[5] = 0;
    local_1b8[6] = 0;
    local_88 = 0;
    local_1b8[7] = 0;
    piVar7 = local_4c;
    piVar9 = local_1b8 + 8;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    }
    FUN_00457200((uint *)(local_1b8 + 8),local_178);
    FUN_00453ef0((uint *)(local_1b8 + 8),local_158);
    FUN_00457f90(local_1b8,&local_1d8,local_2c);
    iVar6 = 0;
    do {
      *(byte *)(iVar6 + 0x89c + param_1) =
           *(byte *)(param_2 + 1 + iVar6) ^ *(byte *)((int)&local_1ec + iVar6);
      *(byte *)(iVar6 + 0x89d + param_1) =
           *(byte *)(param_2 + 2 + iVar6) ^ *(byte *)((int)&local_1ec + iVar6 + 1);
      *(byte *)(iVar6 + 0x89e + param_1) =
           *(byte *)(param_2 + 3 + iVar6) ^ *(byte *)((int)&local_1ec + iVar6 + 2);
      *(byte *)(iVar6 + 0x89f + param_1) =
           *(byte *)(param_2 + 4 + iVar6) ^ *(byte *)((int)&local_1ec + iVar6 + 3);
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x10);
    *(undefined1 *)(param_1 + 0x8ac) = 1;
    local_83 = *(undefined4 *)(param_2 + 1);
    local_7f = *(undefined4 *)(param_2 + 5);
    local_7b = *(undefined4 *)(param_2 + 9);
    local_77 = *(undefined4 *)(param_2 + 0xd);
    local_73 = *(undefined4 *)(param_2 + 0x11);
    local_84 = 0x10;
    puVar8 = local_2c;
    puVar10 = local_6f;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar12 = FUN_0044e910();
    FUN_00453ac0(this,(int)&local_84,0x1a8,0,6,0,*(undefined4 *)(param_1 + 1),
                 *(undefined2 *)(param_1 + 5),'\0','\0',(int)uVar12,0);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004583f0 */
