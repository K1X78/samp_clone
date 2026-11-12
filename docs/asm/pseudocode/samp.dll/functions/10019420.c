/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10019420
 * Name: FUN_10019420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10019420(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_23c;
  undefined4 local_238;
  undefined4 local_234 [71];
  undefined4 local_118 [65];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_101136bb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar2 = local_118;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  FUN_1001f470(local_234,0x20,1);
  FUN_1001f470(&local_238,0x20,1);
  FUN_1001f470(&local_23c,0x20,1);
  if ((0 < local_23c) && (local_23c < 0xc9)) {
    FUN_1001f960(local_118,local_23c);
    *(undefined1 *)((int)local_118 + local_23c) = 0;
    FUN_100a0b20(local_118,local_238,local_234[0]);
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x10019420 */
