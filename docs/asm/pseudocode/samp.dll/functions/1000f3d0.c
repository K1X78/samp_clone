/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000f3d0
 * Name: FUN_1000f3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000f3d0(undefined4 *param_1)

{
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112ecb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_124,8,1);
  FUN_100a1280(local_124[0]);
  if ((char)local_124[0] == '\0') {
    *(undefined1 *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x1f) = 1;
    FUN_100a0920(*(int *)(DAT_102aca24 + 0x3d5) + 0x2c,*(int *)(DAT_102aca24 + 0x3d5) + 0x2d);
  }
  else {
    *(undefined1 *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x1f) = 0;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000f3d0 */
