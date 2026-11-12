/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100235d0
 * Name: FUN_100235d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100235d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011417b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_10022770(param_2,param_3);
  if (cVar1 == '\0') {
    if ((short)param_4 == -1) {
      param_4 = 0;
    }
    FUN_100232a0(param_2,param_3,param_4);
    cVar1 = FUN_10022d90(param_2,param_3,param_5);
    if (cVar1 == '\0') {
      FUN_1001f1f0();
      local_4 = 0;
      local_130[0] = 0x3c;
      FUN_1001faa0(local_130,8,1);
      local_12c = *param_2;
      local_124._0_2_ = *(undefined2 *)(param_2 + 1);
      FUN_1001faa0(&local_12c,0x20,1);
      local_12c._0_2_ = (undefined2)local_124;
      local_12c._2_2_ = local_124._2_2_;
      FUN_1001faa0(&local_12c,0x10,1);
      local_130[0] = *(undefined1 *)((int)param_2 + 6);
      FUN_1001faa0(local_130,8,1);
      local_12c = *param_3;
      local_124 = CONCAT22(local_124._2_2_,*(undefined2 *)(param_3 + 1));
      FUN_1001faa0(&local_12c,0x20,1);
      local_12c = local_124;
      FUN_1001faa0(&local_12c,0x10,1);
      local_130[0] = *(undefined1 *)((int)param_3 + 6);
      FUN_1001faa0(local_130,8,1);
      local_128 = param_4;
      FUN_1001faa0(&local_128,0x10,1);
      cVar1 = FUN_10021610(param_3);
      if (cVar1 == '\0') {
        FUN_10021630(param_3,param_3);
      }
      cVar1 = FUN_10021610(param_2);
      if (cVar1 == '\0') {
        FUN_10021630(param_2,param_2);
      }
      FUN_10021fc0(local_120,param_1,param_5);
      local_4 = 0xffffffff;
      FUN_1001f390();
    }
    else {
      FUN_10021400(param_2,param_3,param_4,param_5);
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100235d0 */
