/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10019f40
 * Name: FUN_10019f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10019f40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011383b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 5,0x20,1);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 9,0x20,1);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0xd,0x20,1);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x11,0x20,1);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10019f40 */
