/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ef50
 * Name: FUN_1000ef50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000ef50(undefined4 *param_1)

{
  undefined4 local_138;
  undefined1 local_134 [296];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112e0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(&local_138,0x20,1);
  FUN_1001f960(local_134,0x14);
  if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x10) != 0) {
    FUN_10013170(local_134,local_138);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000ef50 */
