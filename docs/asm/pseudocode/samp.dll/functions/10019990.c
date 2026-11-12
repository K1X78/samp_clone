/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10019990
 * Name: FUN_10019990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10019990(undefined4 *param_1)

{
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011377b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(&local_128,0x10,1);
  FUN_1001f470(&local_12c,8,1);
  FUN_1001f470(local_124,8,1);
  if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc) != 0) {
    FUN_1001e5f0(local_128,local_12c,local_124[0]);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10019990 */
