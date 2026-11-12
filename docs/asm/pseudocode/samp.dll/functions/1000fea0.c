/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000fea0
 * Name: FUN_1000fea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000fea0(undefined4 *param_1)

{
  bool bVar1;
  char local_155;
  undefined1 local_154 [328];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112feb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_155 = '\0';
  local_4 = 0;
  FUN_1001f470(&local_155,8,1);
  FUN_1001f960(local_154,0x32);
  bVar1 = local_155 != '\0';
  if (bVar1) {
    FUN_10003af0(local_154);
  }
  FUN_10003fb0(bVar1);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000fea0 */
