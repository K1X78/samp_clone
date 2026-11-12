/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000f850
 * Name: FUN_1000f850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000f850(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte local_249;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  uint local_23c [71];
  undefined4 local_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10112f4b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_c = 0;
  if ((DAT_102aca24 != 0) && (iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8), iVar1 != 0)) {
    puVar3 = local_120;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = 0;
    FUN_1001f470(local_23c,0x10,1);
    FUN_1001f470(&local_244,0x20,1);
    FUN_1001f470(&local_248,0x20,1);
    FUN_1001f470(&local_240,0x20,1);
    FUN_1001f470(&local_249,8,1);
    if (local_249 < 0x91) {
      FUN_1001f960(local_120,local_249);
      *(undefined1 *)((int)local_120 + (uint)local_249) = 0;
      if (((ushort)local_23c[0] < 0x3ec) &&
         (*(int *)(iVar1 + 0xfd6 + (local_23c[0] & 0xffff) * 4) != 0)) {
        FUN_10066890(local_23c[0],local_120,local_244,local_248,local_240);
      }
    }
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1000f850 */
