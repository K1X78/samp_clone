/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10021400
 * Name: FUN_10021400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10021400(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_124;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113f7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_10037d90(0x11);
  FUN_1001f280(*(undefined4 *)(iVar1 + 0x10),0x11,0);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 8) << 3;
  local_4 = 0;
  FUN_1001f7c0(0);
  local_130[0] = 0x2c;
  FUN_1001faa0(local_130,8,1);
  local_12c = *param_1;
  local_124._0_2_ = *(undefined2 *)(param_1 + 1);
  FUN_1001faa0(&local_12c,0x20,1);
  local_12c._0_2_ = (undefined2)local_124;
  local_12c._2_2_ = local_124._2_2_;
  FUN_1001faa0(&local_12c,0x10,1);
  local_130[0] = *(undefined1 *)((int)param_1 + 6);
  FUN_1001faa0(local_130,8,1);
  local_12c = *param_2;
  local_124 = CONCAT22(local_124._2_2_,*(undefined2 *)(param_2 + 1));
  FUN_1001faa0(&local_12c,0x20,1);
  local_12c = local_124;
  FUN_1001faa0(&local_12c,0x10,1);
  local_130[0] = *(undefined1 *)((int)param_2 + 6);
  FUN_1001faa0(local_130,8,1);
  local_12c = param_3;
  FUN_1001faa0(&local_12c,0x10,1);
  (**(code **)(*param_4 + 0xf0))(iVar1,0);
  pvStack_c = (void *)0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_14;
  return;
}


/* END FUNCTION 0x10021400 */
