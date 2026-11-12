/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001a2c0
 * Name: FUN_1001a2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001a2c0(undefined4 *param_1)

{
  undefined1 local_139;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101138db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(&local_134,8,1);
  FUN_1001f470(&local_130,0x20,1);
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(&local_138,8,1);
  FUN_1001f470(local_124,0x20,1);
  FUN_1001f470(&local_139,8,1);
  FUN_10009ff0(local_134,local_130,local_12c,local_128,local_138,local_124[0],local_139);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001a2c0 */
