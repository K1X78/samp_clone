/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10019130
 * Name: FUN_10019130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10019130(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte local_125;
  ushort local_124 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011365b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f470(&local_125,8,1);
  iVar1 = FUN_1001e680(local_124[0]);
  iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if (local_124[0] < 2000) {
    if (*(int *)(iVar2 + 0x3074 + (uint)local_124[0] * 4) != 0) {
      iVar2 = *(int *)(iVar2 + 0x1134 + (uint)local_124[0] * 4);
      goto LAB_100191ed;
    }
  }
  iVar2 = 0;
LAB_100191ed:
  if ((iVar1 != 0) && (iVar2 != 0)) {
    uVar3 = (uint)local_125;
    FUN_10001010(iVar1,uVar3);
    FUN_100abeb0(iVar1,uVar3);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10019130 */
