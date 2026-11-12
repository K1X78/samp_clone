/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040b10
 * Name: FUN_10040b10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10040b10(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined2 uVar10;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  int local_198 [8];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138;
  undefined4 local_137;
  undefined4 local_133;
  undefined4 local_12f;
  undefined4 local_12b;
  undefined4 local_127;
  undefined4 local_123;
  undefined4 local_11f;
  undefined4 local_11b;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_c7;
  undefined4 local_c3;
  undefined4 local_bf;
  undefined4 local_bb;
  undefined4 local_97;
  undefined4 local_93;
  undefined4 local_8f;
  undefined4 local_8b;
  undefined1 local_84;
  undefined4 local_83;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  undefined4 local_6f [8];
  int local_4c [8];
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1011525b;
  local_c = ExceptionList;
  local_137 = 0;
  local_133 = 0;
  local_12f = 0;
  local_12b = 0;
  local_127 = 0;
  local_f7 = 0;
  local_123 = 0;
  local_f3 = 0;
  local_11f = 0;
  local_ef = 0;
  local_11b = 0;
  local_eb = 0;
  local_c7 = 0;
  local_97 = 0;
  local_c3 = 0;
  local_93 = 0;
  local_8f = 0;
  local_bf = 0;
  local_bb = 0;
  local_8b = 0;
  local_138 = 0;
  local_4 = 0;
  if (*(int *)(param_2 + 0xc62) != 4) {
    return;
  }
  local_1b8 = *(int *)(param_3 + 0x15);
  piVar6 = (int *)(param_3 + 0x19);
  piVar7 = local_4c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  if ((*(char *)(param_1 + 0xd80) == '\x01') && (*(char *)(param_1 + 0xd7f) == '\0')) {
    if (local_1b8 == *(int *)(param_1 + 0xd5b)) {
      iVar5 = 8;
      bVar9 = true;
      piVar6 = local_4c;
      piVar7 = (int *)(param_1 + 0xd5f);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar9 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar9);
      if (bVar9) goto LAB_10040cae;
    }
    uVar10 = 0x1004;
    ExceptionList = &local_c;
    puVar2 = (undefined2 *)FUN_10037d90(1);
    **(undefined1 **)(puVar2 + 8) = 0x23;
    *(undefined4 *)(puVar2 + 6) = 8;
    uVar4 = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(puVar2 + 1) = uVar4;
    uVar1 = *(undefined2 *)(param_2 + 5);
    puVar2[3] = uVar1;
    uVar1 = FUN_1003c1f0(uVar4,CONCAT22(uVar10,uVar1),1);
    *puVar2 = uVar1;
    puVar3 = (undefined4 *)FUN_100390c0();
    *puVar3 = puVar2;
    FUN_10039100();
    *(undefined4 *)(param_2 + 0xc62) = 2;
  }
  else {
LAB_10040cae:
    iVar5 = 0;
    ExceptionList = &local_c;
    do {
      uVar4 = FUN_100436c0();
      *(undefined4 *)((int)&local_1ec + iVar5) = uVar4;
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x14);
    local_1c4 = 0;
    local_1c0 = 0;
    local_1bc = 0;
    local_1d0 = local_1e4;
    local_1d4 = local_1e8;
    local_137 = 0;
    local_1c8 = local_1dc;
    local_133 = 0;
    local_c7 = 0;
    local_12f = 0;
    local_1d8 = local_1ec;
    local_c3 = 0;
    local_12b = 0;
    local_bf = 0;
    local_1cc = local_1e0;
    local_127 = 0;
    local_bb = 0;
    local_138 = 0;
    local_123 = 0;
    local_1b4 = 0;
    local_f7 = 0;
    local_11f = 0;
    local_1b0 = 0;
    local_f3 = 0;
    local_11b = 0;
    local_ef = 0;
    local_1ac = 0;
    local_97 = 0;
    local_eb = 0;
    local_1a8 = 0;
    local_93 = 0;
    local_8f = 0;
    local_1a4 = 0;
    local_1a0 = 0;
    local_8b = 0;
    local_19c = 0;
    piVar6 = local_4c;
    piVar7 = local_198;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    FUN_1003f8b0(local_198,local_178);
    uVar1 = 0x1004;
    FUN_1003c860(local_198,local_158);
    FUN_100406b0(&local_1d8,local_2c);
    iVar5 = 0;
    do {
      *(byte *)(iVar5 + 0x851 + param_2) =
           *(byte *)(param_3 + 1 + iVar5) ^ *(byte *)((int)&local_1ec + iVar5);
      *(byte *)(iVar5 + 0x852 + param_2) =
           *(byte *)(param_3 + 2 + iVar5) ^ *(byte *)((int)&local_1ec + iVar5 + 1);
      *(byte *)(iVar5 + 0x853 + param_2) =
           *(byte *)(param_3 + 3 + iVar5) ^ *(byte *)((int)&local_1ec + iVar5 + 2);
      *(byte *)(iVar5 + 0x854 + param_2) =
           *(byte *)(param_3 + 4 + iVar5) ^ *(byte *)((int)&local_1ec + iVar5 + 3);
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x10);
    *(undefined1 *)(param_2 + 0x861) = 1;
    local_83 = *(undefined4 *)(param_3 + 1);
    local_7f = *(undefined4 *)(param_3 + 5);
    local_7b = *(undefined4 *)(param_3 + 9);
    local_77 = *(undefined4 *)(param_3 + 0xd);
    local_73 = *(undefined4 *)(param_3 + 0x11);
    local_84 = 0x10;
    puVar3 = local_2c;
    puVar8 = local_6f;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar4 = FUN_1002e2b0();
    FUN_1003c410(&local_84,0x1a8,0,6,0,*(undefined4 *)(param_2 + 1),
                 CONCAT22(uVar1,*(undefined2 *)(param_2 + 5)),0,0,uVar4,0);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10040b10 */
