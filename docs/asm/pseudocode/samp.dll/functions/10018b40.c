/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10018b40
 * Name: FUN_10018b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10018b40(undefined4 *param_1)

{
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [280];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101135bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_140 = 0;
  local_13c = 0;
  local_134 = 0;
  local_138 = 0;
  FUN_1001f470(local_130,0x10,1);
  FUN_1001f470(&local_140,0x20,1);
  FUN_1001f470(&local_13c,0x20,1);
  FUN_1001f470(&local_134,0x20,1);
  FUN_1001f470(&local_138,0x20,1);
  FUN_1001f470(local_12c,0x20,1);
  FUN_1001f470(local_128,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  FUN_100a15b0(local_138,local_12c,local_140,local_13c,local_134);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10018b40 */
