/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10019c20
 * Name: FUN_10019c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10019c20(undefined4 *param_1)

{
  char local_141;
  undefined4 local_140;
  int local_13c;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [280];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101137db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_141 = '\x01';
  FUN_10008110(&local_141);
  FUN_1001f470(local_138,0x20,1);
  FUN_1001f470(local_134,0x20,1);
  FUN_1001f470(local_130,0x20,1);
  FUN_1001f470(local_12c,0x20,1);
  FUN_1001f470(local_128,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  FUN_1001f470(&local_13c,0x20,1);
  FUN_1001f470(&local_140,8,1);
  if (((byte)local_140 == 0) || (2 < (byte)local_140)) {
    local_140 = CONCAT31(local_140._1_3_,2);
  }
  if (0 < local_13c) {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e) + 0x318) = 1;
    if (local_141 == '\0') {
      FUN_1009d440(local_138,local_12c,local_13c,local_140);
    }
    else {
      FUN_1009d3d0(local_138,local_12c,local_13c,local_140);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10019c20 */
