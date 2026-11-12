/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100237d0
 * Name: FUN_100237d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1
FUN_100237d0(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,undefined2 param_6,undefined4 param_7)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011419b;
  local_c = ExceptionList;
  local_12c = param_4;
  local_138 = param_5;
  local_130 = param_3;
  local_134 = param_6;
  ExceptionList = &local_c;
  cVar1 = FUN_10022770(&local_130,&local_138);
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_10023320(&local_130,&local_138);
    FUN_1001f1f0();
    local_4 = 0;
    local_140[0] = param_2;
    FUN_1001faa0(local_140,8,1);
    local_124._0_2_ = param_4;
    local_13c = param_3;
    FUN_1001faa0(&local_13c,0x20,1);
    local_13c._0_2_ = (undefined2)local_124;
    local_13c._2_2_ = local_124._2_2_;
    FUN_1001faa0(&local_13c,0x10,1);
    local_13c = param_5;
    local_124 = CONCAT22(local_124._2_2_,param_6);
    FUN_1001faa0(&local_13c,0x20,1);
    local_13c = local_124;
    FUN_1001faa0(&local_13c,0x10,1);
    cVar1 = FUN_10021610(&param_3);
    if (cVar1 == '\0') {
      FUN_10021630(&param_3,&param_3);
    }
    cVar1 = FUN_10021610(&param_5);
    if (cVar1 == '\0') {
      FUN_10021630(&param_5,&param_5);
    }
    FUN_10021fc0(local_120,param_1,param_7);
    local_4 = 0xffffffff;
    FUN_1001f390();
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}


/* END FUNCTION 0x100237d0 */
