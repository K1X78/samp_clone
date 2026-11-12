/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000e940
 * Name: FUN_1000e940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000e940(undefined4 *param_1)

{
  int iVar1;
  ushort local_140;
  undefined2 uStack_13e;
  undefined2 local_13c;
  undefined2 uStack_13a;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_122;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112d6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 4) != 0) {
    local_140 = 0;
    uStack_13e = 0;
    local_13c = 0;
    uStack_13a = 0;
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0;
    local_124 = 0;
    local_122 = 0;
    FUN_1001f960(&local_140,0x1f);
    iVar1 = FUN_100b39d0(CONCAT22(local_13c,uStack_13e));
    if (iVar1 != 0) {
      FUN_10001900(&local_140);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000e940 */
