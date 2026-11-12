/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10004bd0
 * Name: FUN_10004bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10004bd0(ushort param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  undefined1 local_1c4 [4];
  undefined2 *local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  ushort local_1a4;
  undefined1 local_1a2;
  undefined4 local_1a1;
  undefined4 local_19d;
  undefined4 local_199;
  undefined4 local_195;
  undefined4 local_191;
  undefined4 local_18d;
  undefined4 local_189;
  undefined4 local_185;
  undefined4 local_181;
  undefined4 local_17d;
  undefined4 local_179;
  undefined4 local_175;
  undefined4 local_171;
  undefined4 local_16d;
  undefined4 local_169;
  float local_165;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101126cb;
  local_c = ExceptionList;
  local_1c0 = *(undefined2 **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if ((param_1 < 2000) && (uVar3 = (uint)param_1, *(int *)(iVar1 + 0x3074 + uVar3 * 4) != 0)) {
    iVar2 = *(int *)(iVar1 + 0x1134 + uVar3 * 4);
    ExceptionList = &local_c;
    FUN_1001f1f0();
    local_4 = 0;
    FUN_1009e950(&local_160);
    FUN_1009eb20(&local_1b0);
    FUN_1009ec70(&local_1bc);
    local_1a1 = local_160;
    local_199 = local_158;
    local_19d = local_15c;
    local_195 = local_150;
    local_18d = local_148;
    local_191 = local_14c;
    local_189 = local_130;
    local_181 = local_128;
    local_185 = local_12c;
    local_17d = local_1b0;
    local_175 = local_1a8;
    local_179 = local_1ac;
    local_171 = local_1bc;
    local_169 = local_1b4;
    local_1a4 = param_1;
    local_16d = local_1b8;
    local_1a2 = param_2;
    fVar4 = (float10)FUN_100b6de0();
    local_165 = (float)fVar4;
    local_1c4[0] = 0xd1;
    FUN_1001faa0(local_1c4,8,1);
    FUN_1001fb50(&local_1a4,0x43);
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,7,1);
    *(undefined2 *)(iVar1 + 0x8e34 + uVar3 * 2) = *local_1c0;
    *(undefined4 *)(iVar2 + 0x7f) = 1;
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10004bd0 */
