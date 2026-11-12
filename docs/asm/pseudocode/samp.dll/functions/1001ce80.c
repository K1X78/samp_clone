/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001ce80
 * Name: FUN_1001ce80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001ce80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_24d;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  uint local_23c [71];
  undefined4 local_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10113d5b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar2 = local_120;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  local_c = 0;
  local_24d = 0;
  local_248 = 0;
  local_244 = 0;
  local_240 = 0;
  local_24c = 0;
  local_23c[0] = local_23c[0] & 0xffffff00;
  FUN_1001f470(&local_24d,8,1);
  FUN_1001f960(local_120,local_24d);
  FUN_1001f470(&local_248,0x20,1);
  FUN_1001f470(&local_244,0x20,1);
  FUN_1001f470(&local_240,0x20,1);
  FUN_1001f470(&local_24c,0x20,1);
  FUN_1001f470(local_23c,8,1);
  if (DAT_102aca1c != 0) {
    FUN_100663e0(local_120,local_248,local_244,local_240,local_24c,local_23c[0]);
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1001ce80 */
