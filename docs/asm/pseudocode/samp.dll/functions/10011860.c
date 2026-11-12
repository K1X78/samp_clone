/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10011860
 * Name: FUN_10011860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10011860(undefined1 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined1 local_120 [252];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011320b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  local_128[0] = param_1;
  FUN_1001faa0(local_128,8,1);
  local_124 = param_2;
  FUN_1001faa0(&local_124,0x20,1);
  local_128[0] = param_3;
  FUN_1001faa0(local_128,8,1);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117f1c,local_120,1,9,0,0);
  uStack_1c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_24;
  return;
}


/* END FUNCTION 0x10011860 */
