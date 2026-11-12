/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100068d0
 * Name: FUN_100068d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100068d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_124;
  undefined1 local_120 [252];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101128eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  FUN_1001f9d0();
  local_124 = param_1;
  FUN_1001faa0(&local_124,0x10,1);
  local_124 = param_2;
  FUN_1001faa0(&local_124,0x20,1);
  local_124 = param_3;
  FUN_1001faa0(&local_124,0x20,1);
  local_124 = param_4;
  FUN_1001faa0(&local_124,0x20,1);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117974,local_120,1,9,0,0);
  uStack_1c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_24;
  return;
}


/* END FUNCTION 0x100068d0 */
