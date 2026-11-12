/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001ecf0
 * Name: FUN_1001ecf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001ecf0(undefined4 param_1)

{
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113edb;
  local_c = ExceptionList;
  if (*(short *)(*(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e) + 0xfe) ==
      (short)param_1) {
    ExceptionList = &local_c;
    FUN_1001f1f0();
    local_4 = 0;
    local_124 = param_1;
    FUN_1001faa0(&local_124,0x10,1);
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_1011851c,local_120,1,10,0,0);
    *(undefined2 *)(*(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e) + 0xfe) = 0xffff;
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001ecf0 */
