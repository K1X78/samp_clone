/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e770
 * Name: FUN_1003e770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_1003e770(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined2 param_8,undefined4 param_9,
            char param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_128 [4];
  int local_124;
  undefined4 local_120;
  undefined4 local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101150cb;
  local_c = ExceptionList;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    ExceptionList = &local_c;
    FUN_1001f1f0();
    local_4 = 0;
    if (param_10 != '\0') {
      local_128[0] = 0x28;
      FUN_1001faa0(local_128,8,1);
      local_124 = FUN_1002e2b0();
      FUN_1001faa0(&local_124,0x20,1);
    }
    local_128[0] = 0x14;
    FUN_1001faa0(local_128,8,1);
    FUN_1001fb50(param_1,1);
    local_124 = param_3;
    FUN_1001fbf0(&local_124,0x20,1);
    if (param_3 == 0) {
      local_124 = 0;
      FUN_1001fbf0(&local_124,0x20,1);
    }
    else {
      FUN_1001faa0(param_2,param_3,0);
    }
    uVar2 = FUN_1002e310();
    FUN_1003c410(local_114,local_120,param_4,param_5,param_6,param_7,param_8,0,0,uVar2);
    local_4 = 0xffffffff;
    FUN_1001f390();
    uVar1 = 1;
  }
  ExceptionList = local_c;
  return uVar1;
}


/* END FUNCTION 0x1003e770 */
