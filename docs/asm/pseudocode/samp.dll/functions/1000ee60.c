/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ee60
 * Name: FUN_1000ee60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000ee60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint local_238;
  undefined4 local_234 [71];
  undefined4 local_118 [65];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10112deb;
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
  if (local_238 < 0x100) {
    FUN_1001f960(local_118,local_238);
    *(undefined1 *)((int)local_118 + local_238) = 0;
    FUN_10067be0(local_234[0],local_118);
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1000ee60 */
