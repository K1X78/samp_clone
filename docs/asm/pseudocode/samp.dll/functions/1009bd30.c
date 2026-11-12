/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009bd30
 * Name: FUN_1009bd30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall
FUN_1009bd30(undefined4 *param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116538;
  local_c = ExceptionList;
  puVar3 = param_1;
  ExceptionList = &local_c;
  for (iVar2 = 0xf; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
  }
  *param_1 = &PTR_FUN_1011e318;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  local_4 = 0;
  local_14 = 0;
  local_10 = param_1;
  iVar2 = FUN_100a07b0(param_2);
  if (iVar2 == 0) {
    FUN_100a0780(param_2,2);
    FUN_100a07a0();
    iVar2 = FUN_100a07b0(param_2);
    while (iVar2 == 0) {
      Sleep(1);
      iVar2 = FUN_100a07b0(param_2);
    }
  }
  FUN_100b1f10(&DAT_1011e280,5,param_2,(double)param_3,(double)param_4,(double)(param_5 - 1.0),
               &local_14);
  FUN_100b1f10();
  param_1[0x11] = local_14;
  uVar1 = FUN_100b3770(local_14);
  param_1[0x12] = uVar1;
  param_1[0x10] = uVar1;
  FUN_100b1f10(&DAT_1011e2a8,param_1[0x11],0);
  FUN_100b1f10();
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x1009bd30 */
