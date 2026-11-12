/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00425d20
 * Name: FUN_00425d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_00425d20(uint param_1,undefined4 *param_2,char *param_3,int param_4,uint param_5,int param_6)

{
  uint in_EAX;
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  int local_24;
  char *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  local_4 = in_EAX >> 1 & 1;
  local_c = ~in_EAX & 1;
  local_24 = 0;
  local_10 = 0;
  local_14 = 0;
  local_20 = (char *)0x0;
  uVar6 = 0;
  local_8 = FUN_0040a100();
  local_18 = 0x400;
  iVar1 = FUN_0040e2b0();
  pcVar3 = param_3;
  if (iVar1 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 4);
  }
  local_1c = iVar1 + 7U & 0xfffffff8;
  *param_2 = 0;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    iVar1 = *(int *)(param_1 + 8) + 1;
    local_20 = (char *)FUN_004125b0(iVar1 * 2);
    if (local_20 == (char *)0x0) {
      return 7;
    }
    bVar9 = true;
    iVar4 = 9;
    pcVar8 = ":memory:";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar3 == *pcVar8;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    *local_20 = '\0';
    if (bVar9) {
      local_14 = 1;
    }
    else {
      local_24 = FUN_00407c60(param_1,param_3,iVar1);
    }
    uVar6 = FUN_00408380(local_20);
    if ((local_24 != 0) ||
       ((*(int *)(param_1 + 8) < (int)(uVar6 + 8) && (local_24 = FUN_0041d7f0(), local_24 != 0)))) {
      FUN_004080d0((int)local_20);
      return local_24;
    }
  }
  uVar7 = local_8 + 7;
  puVar2 = FUN_00412900();
  if (puVar2 == (uint *)0x0) {
    FUN_004080d0((int)local_20);
    return 7;
  }
  puVar2[0x29] = (uint)(puVar2 + 0x2e);
  uVar7 = (int)(puVar2 + 0x2e) + (uVar7 & 0xfffffff8);
  puVar2[0xe] = uVar7;
  uVar7 = uVar7 + (*(int *)(param_1 + 4) + 7U & 0xfffffff8);
  puVar2[0x10] = uVar7;
  uVar7 = uVar7 + local_1c;
  puVar2[0xf] = uVar7;
  pcVar3 = (char *)(uVar7 + local_1c);
  puVar2[0x23] = (uint)pcVar3;
  if (local_20 != (char *)0x0) {
    puVar2[0x24] = (uint)(pcVar3 + uVar6 + 1);
    pcVar8 = local_20;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar3 = pcVar3 + 1;
    }
    pcVar3 = local_20;
    pcVar8 = (char *)puVar2[0x24];
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    builtin_strncpy((char *)(puVar2[0x24] + uVar6),"-jou",4);
    builtin_strncpy((char *)(puVar2[0x24] + 4 + uVar6),"rnal",4);
    if (*(char *)puVar2[0x23] == '\0') {
      *(undefined1 *)puVar2[0x24] = 0;
    }
    else {
      pcVar3 = (char *)(puVar2[0x24] + 9 + uVar6);
      puVar2[0x2c] = (uint)pcVar3;
      pcVar8 = local_20;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar3 = pcVar3 + 1;
      }
      *(undefined4 *)(uVar6 + puVar2[0x2c]) = 0x6c61772d;
    }
    FUN_004080d0((int)local_20);
  }
  *puVar2 = param_1;
  puVar2[0x20] = param_5;
  if (((param_3 == (char *)0x0) || (*param_3 == '\0')) || (local_14 != 0)) {
    param_1 = param_5 & 1;
    local_10 = 1;
    *(undefined1 *)((int)puVar2 + 0xe) = 4;
  }
  else {
    param_3 = (char *)0x0;
    local_24 = FUN_00407c20(param_1,&param_3,puVar2[0x23],puVar2[0xe]);
    param_1 = (uint)param_3 & 1;
    if (local_24 != 0) goto LAB_0042602f;
    if (param_1 == 0) {
      FUN_0040b5a0();
      if (0x400 < puVar2[0x1e]) {
        if (puVar2[0x1e] < 0x2001) {
          local_18 = (uint)(ushort)puVar2[0x1e];
        }
        else {
          local_18 = 0x2000;
        }
      }
    }
  }
  if ((local_24 == 0) &&
     (local_24 = FUN_00413f50((undefined2 *)&local_18,-1), iVar1 = local_14, local_24 == 0)) {
    uVar7 = param_4 + 7U & 0xfffffff8;
    uVar6 = (local_14 != 0) - 1 & 0x425c20;
    FUN_0040a110(uVar6,(undefined4 *)puVar2[0x29],local_18 & 0xffff,uVar7,(uint)(local_14 == 0),
                 uVar6,puVar2);
    *(undefined1 *)((int)puVar2 + 6) = (undefined1)local_c;
    if ((local_4 == 0) || (param_1 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)((int)puVar2 + 7) = uVar5;
    *(char *)((int)puVar2 + 0xb) = (char)local_10;
    *(char *)(puVar2 + 1) = (char)local_10;
    *(char *)((int)puVar2 + 0x12) = (char)local_10;
    *(char *)(puVar2 + 2) = (char)local_10;
    *(short *)(puVar2 + 0x1f) = (short)uVar7;
    uVar5 = (undefined1)iVar1;
    *(undefined1 *)((int)puVar2 + 0x16) = uVar5;
    puVar2[0x22] = 0x3fffffff;
    *(undefined1 *)((int)puVar2 + 0xd) = uVar5;
    *(undefined1 *)(puVar2 + 3) = (undefined1)param_1;
    *(bool *)((int)puVar2 + 9) = (char)local_10 == '\0';
    *(undefined1 *)((int)puVar2 + 10) = 2;
    puVar2[0x16] = 0xffffffff;
    puVar2[0x17] = 0xffffffff;
    FUN_0040b5a0();
    if (local_c == 0) {
      *(undefined1 *)((int)puVar2 + 5) = 2;
    }
    else if (iVar1 != 0) {
      *(undefined1 *)((int)puVar2 + 5) = 4;
    }
    puVar2[0x27] = param_6;
    *param_2 = puVar2;
    return 0;
  }
LAB_0042602f:
  FUN_00407ab0();
  FUN_004080d0((int)puVar2);
  return local_24;
}


/* END FUNCTION 0x00425d20 */
