/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100439c0
 * Name: FUN_100439c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100439c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011538b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10053260();
  local_4 = 0;
  FUN_100511b0();
  FUN_10052e00(param_1,param_2);
  FUN_10052fb0();
  puVar1 = (undefined4 *)FUN_10053250();
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  param_3[2] = puVar1[2];
  param_3[3] = puVar1[3];
  param_3[4] = puVar1[4];
  local_4 = 0xffffffff;
  FUN_10053270();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100439c0 */
