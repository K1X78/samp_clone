/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000a6f0
 * Name: FUN_1000a6f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000a6f0(int param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_174;
  byte local_173 [3];
  ushort local_170 [2];
  ushort local_16c [2];
  undefined4 local_168;
  uint local_164;
  undefined4 local_160;
  undefined1 local_15c [2];
  undefined1 local_15a [2];
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  undefined1 local_148 [12];
  undefined1 local_13c [4];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  float local_130;
  char local_12c;
  char local_12b;
  byte local_12a;
  undefined1 local_129;
  undefined1 local_128;
  undefined1 local_127 [2];
  undefined1 local_125 [281];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  local_173[1] = 0;
  if (*(int *)(param_1 + 0x3cd) == 5) {
    pcVar1 = *(char **)(param_2 + 0x10);
    puVar4 = &local_160;
    for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    local_168 = 0;
    if (*pcVar1 == '(') {
      FUN_1001f470(local_173 + 1,8,1);
      FUN_1001f470(&local_168,0x20,1);
    }
    FUN_1001f470(local_173 + 1,8,1);
    FUN_1001f470(local_16c,0x10,1);
    FUN_1001f470(&local_160,0x10,1);
    FUN_1001f470((int)&local_160 + 2,0x10,1);
    FUN_1001f470(local_15c,0x10,1);
    FUN_1001f470(local_15a,0x10,1);
    FUN_10009370(local_158,local_154,local_150,local_14c);
    FUN_1001f960(local_148,0xc);
    FUN_1000a0a0(local_13c,local_138,local_134);
    FUN_1001f470(local_170,0x10,1);
    local_164 = (uint)local_170[0];
    local_130 = (float)local_164;
    FUN_1001f470(local_173 + 2,8,1);
    bVar2 = local_173[2] & 0xf;
    local_173[2] = local_173[2] >> 4;
    if (bVar2 == 0xf) {
      local_12b = 'd';
    }
    else if (bVar2 == 0) {
      local_12b = '\0';
    }
    else {
      local_12b = bVar2 * '\a';
    }
    if (local_173[2] == 0xf) {
      local_12c = 'd';
    }
    else if (local_173[2] == 0) {
      local_12c = '\0';
    }
    else {
      local_12c = local_173[2] * '\a';
    }
    local_173[0] = 0;
    FUN_1001f470(local_173,8,1);
    local_12a = local_12a ^ (local_12a ^ local_173[0]) & 0x3f;
    FUN_10008110(&local_174);
    if (local_174 != '\0') {
      local_129 = 1;
    }
    FUN_10008110(&local_174);
    if (local_174 != '\0') {
      local_128 = 1;
    }
    FUN_10008110(&local_174);
    if (local_174 != '\0') {
      FUN_1001f470(local_125,0x20,1);
    }
    FUN_10008110(&local_174);
    if (local_174 != '\0') {
      FUN_1001f470(local_127,0x10,1);
    }
    if (((local_16c[0] < 0x3ed) &&
        (iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0x26 + (uint)local_16c[0] * 4),
        iVar3 != 0)) && (*(int *)(iVar3 + 8) != 0)) {
      FUN_10016e70(&local_160,local_168);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000a6f0 */
