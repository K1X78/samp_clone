/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ab690
 * Name: FUN_100ab690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_100ab690(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116678;
  local_c = ExceptionList;
  puVar4 = param_1;
  ExceptionList = &local_c;
  for (iVar2 = 0xf; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
  }
  local_4 = 0;
  *param_1 = &PTR_FUN_1011f24c;
  param_1[0x11] = 1;
  uVar1 = FUN_100b3860();
  param_1[0xa9] = uVar1;
  uVar1 = FUN_100b3860();
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0xac) = 0;
  FUN_100b3f20(0,param_1[0xa9]);
  FUN_100b1f10(&DAT_1011f0d0,param_1[0x11],1);
  FUN_100b1f10(&DAT_1011ef90,param_1[0x11],0);
  param_1[0xaa] = 1;
  param_1[0xab] = 1;
  *(undefined4 *)((int)param_1 + 0x2cd) = 0;
  *(undefined4 *)((int)param_1 + 0x2b9) = 0;
  *(undefined4 *)((int)param_1 + 0x2f2) = 0;
  *(undefined4 *)((int)param_1 + 0x2d2) = 0;
  *(undefined4 *)((int)param_1 + 0x2de) = 0;
  *(undefined4 *)((int)param_1 + 0x2e2) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((int)param_1 + 0x2e6) = 0;
  *(undefined4 *)((int)param_1 + 0x2c1) = 0;
  *(undefined4 *)((int)param_1 + 0x2c5) = 0;
  *(undefined4 *)((int)param_1 + 0x2c9) = 0;
  *(undefined1 *)((int)param_1 + 0x2f6) = 0;
  *(undefined1 *)((int)param_1 + 0x2f7) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  puVar4 = param_1 + 0x1d;
  puVar3 = param_1 + 0x9f;
  local_10 = 10;
  do {
    puVar3[-0x8c] = 0;
    *puVar3 = 0;
    puVar5 = puVar4;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 0xd;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  *(undefined4 *)((int)param_1 + 0x2f9) = 0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x100ab690 */
