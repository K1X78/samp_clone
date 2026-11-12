/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000a420
 * Name: FUN_1000a420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000a420(int param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_172;
  char local_171;
  char local_170;
  byte local_16f [3];
  ushort local_16c [2];
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [2];
  undefined1 local_15e [12];
  undefined1 local_152 [4];
  undefined1 local_14e [4];
  undefined1 local_14a [4];
  undefined1 local_146 [4];
  char local_142;
  char local_141;
  byte local_140;
  undefined1 local_13f;
  undefined1 local_13e [4];
  undefined1 local_13a [4];
  undefined1 local_136 [4];
  undefined1 local_132 [12];
  undefined2 local_126;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112bfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  local_16f[1] = 0;
  local_171 = '\0';
  local_170 = '\0';
  if (*(int *)(param_1 + 0x3cd) == 5) {
    pcVar1 = *(char **)(param_2 + 0x10);
    puVar4 = &local_164;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_168 = 0;
    if (*pcVar1 == '(') {
      FUN_1001f470(local_16f + 1,8,1);
      FUN_1001f470(&local_168,0x20,1);
    }
    FUN_1001f470(local_16f + 1,8,1);
    FUN_1001f470(local_16c,0x10,1);
    FUN_10008110(&local_172);
    if (local_172 != '\0') {
      FUN_1001f470(&local_164,0x10,1);
    }
    FUN_10008110(&local_172);
    if (local_172 != '\0') {
      FUN_1001f470((int)&local_164 + 2,0x10,1);
    }
    FUN_1001f470(local_160,0x10,1);
    FUN_1001f960(local_15e,0xc);
    FUN_10009370(local_152,local_14e,local_14a,local_146);
    FUN_1001f470(local_16f + 2,8,1);
    bVar2 = local_16f[2] & 0xf;
    local_16f[2] = local_16f[2] >> 4;
    if (bVar2 == 0xf) {
      local_141 = 'd';
    }
    else if (bVar2 == 0) {
      local_141 = '\0';
    }
    else {
      local_141 = bVar2 * '\a';
    }
    if (local_16f[2] == 0xf) {
      local_142 = 'd';
    }
    else if (local_16f[2] == 0) {
      local_142 = '\0';
    }
    else {
      local_142 = local_16f[2] * '\a';
    }
    local_16f[0] = 0;
    FUN_1001f470(local_16f,8,1);
    local_140 = local_140 ^ (local_140 ^ local_16f[0]) & 0x3f;
    FUN_1001f470(&local_13f,8,1);
    FUN_1000a0a0(local_13e,local_13a,local_136);
    FUN_10008110(&local_171);
    if (local_171 == '\0') {
      local_126 = 0xffff;
    }
    else {
      FUN_1001f470(&local_126,0x10,1);
      FUN_1001f960(local_132,0xc);
    }
    FUN_10008110(&local_170);
    if (local_170 == '\0') {
      local_124[0] = 0;
    }
    else {
      FUN_1001f470(local_124,0x20,1);
    }
    if (((local_16c[0] < 0x3ed) &&
        (iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0x26 + (uint)local_16c[0] * 4),
        iVar3 != 0)) && (*(int *)(iVar3 + 8) != 0)) {
      FUN_10016da0(&local_164,local_168);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000a420 */
