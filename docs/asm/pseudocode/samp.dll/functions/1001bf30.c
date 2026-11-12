/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001bf30
 * Name: FUN_1001bf30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001bf30(undefined4 *param_1)

{
  char local_125;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113b7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f470(&local_125,8,1);
  if (local_125 == '\x02') {
    local_125 = '\x0f';
  }
  else if (local_125 == '\x03') {
    local_125 = '\x0e';
  }
  else {
    local_125 = '\x04';
  }
  *(char *)(*(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e) + 0x312) = local_125;
  FUN_10004140(local_124[0]);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001bf30 */
