/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001a980
 * Name: FUN_1001a980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001a980(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  ushort local_128 [2];
  ushort local_124 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101139bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc) == 0) {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return;
  }
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f470(local_128,0x10,1);
  iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if ((local_124[0] < 2000) && (*(int *)(iVar2 + 0x3074 + (uint)local_124[0] * 4) != 0)) {
    iVar1 = *(int *)(iVar2 + 0x1134 + (uint)local_124[0] * 4);
  }
  else {
    iVar1 = 0;
  }
  if ((local_128[0] < 2000) && (*(int *)(iVar2 + 0x3074 + (uint)local_128[0] * 4) != 0)) {
    iVar2 = *(int *)(iVar2 + 0x1134 + (uint)local_128[0] * 4);
  }
  else {
    iVar2 = 0;
  }
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FUN_100b77c0(iVar1);
    FUN_100b7750();
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001a980 */
