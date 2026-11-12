/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10010150
 * Name: FUN_10010150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10010150(undefined4 *param_1)

{
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011304b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(&local_13c,8,1);
  FUN_1001f470(&local_148,0x20,1);
  FUN_1001f470(&local_144,0x20,1);
  FUN_1001f470(&local_140,0x20,1);
  local_138 = local_148;
  local_134 = local_144;
  local_130 = local_140;
  FUN_1001f470(&local_148,0x20,1);
  FUN_1001f470(&local_144,0x20,1);
  FUN_1001f470(&local_140,0x20,1);
  local_12c = local_148;
  local_128 = local_144;
  local_124 = local_140;
  FUN_1001f470(&local_148,0x20,1);
  FUN_100a1f20(local_13c,&local_138,&local_12c,local_148);
  *(undefined4 *)(DAT_102aca3c + 0x29) = 1;
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10010150 */
