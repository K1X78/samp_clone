/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470c00
 * Name: FUN_00470c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470c00(undefined4 param_1,int param_2)

{
  void *this;
  int iVar1;
  byte local_154;
  int local_153;
  int local_14f;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined4 local_136;
  undefined4 local_132;
  undefined4 local_12e;
  undefined4 local_12a;
  undefined4 local_126;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  if (*(int *)((int)DAT_004fc438 + 8) == 0) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (this = *(void **)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 +
                       (uint)*(ushort *)(param_2 + 4) * 4), this != (void *)0x0)) {
    iVar1 = *(int *)(param_2 + 0xc);
    ExceptionList = &local_c;
    if (((DAT_004fc444 == (void *)0x0) || (ExceptionList = &local_c, iVar1 < 0x4e21)) ||
       (ExceptionList = &local_c, local_153 = FUN_00497120(DAT_004fc444,iVar1), local_14f = iVar1,
       local_153 == -1)) {
      local_14f = 0;
      local_153 = iVar1;
    }
    local_14a = *(undefined4 *)(param_2 + 0x10);
    local_146 = *(undefined4 *)(param_2 + 0x14);
    local_154 = *(byte *)(param_2 + 8);
    local_13e = *(undefined4 *)(param_2 + 0x1c);
    local_13a = *(undefined4 *)(param_2 + 0x20);
    local_142 = *(undefined4 *)(param_2 + 0x18);
    local_136 = *(undefined4 *)(param_2 + 0x28);
    local_12a = *(undefined4 *)(param_2 + 0x2c);
    local_12e = *(undefined4 *)(param_2 + 0x24);
    local_126 = *(undefined4 *)(param_2 + 0x34);
    local_132 = *(undefined4 *)(param_2 + 0x30);
    FUN_004839f0(this,(undefined4 *)&local_154);
    *(undefined4 *)((int)this + 0x2cf5) = 1;
    FUN_0044d8a0(local_120);
    local_4 = 0;
    FUN_0044dff0(local_120,&local_154,0x32);
    FUN_00493c10(DAT_004fc438,&DAT_004be4ec,local_120,*(ushort *)(param_2 + 4),2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00470c00 */
