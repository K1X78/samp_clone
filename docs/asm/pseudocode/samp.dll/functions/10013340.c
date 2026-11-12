/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013340
 * Name: FUN_10013340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10013340(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101132db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_100132e0(param_2);
  if ((((iVar1 != -1) && (*(int *)(param_1 + 4 + iVar1 * 4) != 0)) &&
      (*(int *)(param_1 + 0x8004 + iVar1 * 4) == 0)) &&
     (*(char *)(iVar1 * 3 + 0xc004 + param_1) == '\0')) {
    FUN_1001f1f0();
    local_4 = 0;
    local_124 = iVar1;
    FUN_1001faa0(&local_124,0x20,1);
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_1011816c,local_120,1,9,0,0);
    *(undefined4 *)(param_1 + 0x8004 + iVar1 * 4) = 0xf;
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10013340 */
