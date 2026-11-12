/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001bd60
 * Name: FUN_1001bd60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001bd60(undefined4 *param_1)

{
  int iVar1;
  byte local_149;
  ushort local_148 [2];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113b3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_4 = 0;
  local_149 = 0;
  local_124 = 0;
  FUN_1001f470(local_148,0x10,1);
  FUN_1001f470(&local_149,8,1);
  if (local_149 < 0x21) {
    FUN_1001f960(&local_144,local_149);
    iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
    if (((iVar1 != 0) && (local_148[0] < 2000)) &&
       (*(int *)(iVar1 + 0x3074 + (uint)local_148[0] * 4) != 0)) {
      FUN_100b7c80(&local_144);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001bd60 */
