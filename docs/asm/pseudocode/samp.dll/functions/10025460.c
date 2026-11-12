/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10025460
 * Name: FUN_10025460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10025460(int param_1,uint param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint local_a28;
  uint local_a24;
  uint local_a20 [643];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1011430b;
  pvStack_14 = ExceptionList;
  uVar2 = 0;
  puVar4 = local_a20;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar5 = 0;
  if (param_2 != 0) {
    do {
      pbVar1 = (byte *)(uVar2 + param_1);
      uVar2 = uVar2 + 1;
      local_a20[*pbVar1] = local_a20[*pbVar1] + 1;
    } while (uVar2 < param_2);
  }
  ExceptionList = &pvStack_14;
  FUN_10026220();
  local_c = 0;
  FUN_10026a80(local_a20);
  local_a28 = param_2;
  FUN_1001fbf0(&local_a28,0x20,1);
  do {
    local_a28 = local_a20[uVar5];
    FUN_1001fbf0(&local_a28,0x20,1);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x100);
  FUN_1001f420();
  local_a24 = *param_3;
  local_a28 = 0;
  FUN_1001faa0(&local_a28,0x20,1);
  local_a28 = *param_3;
  FUN_100268c0(param_1,param_2,param_3);
  uVar2 = *param_3;
  FUN_1001f7c0(local_a24);
  local_a24 = uVar2 - local_a28;
  FUN_1001faa0(&local_a24,0x20,1);
  FUN_1001f7c0(uVar2);
  local_c = 0xffffffff;
  FUN_10026a60();
  ExceptionList = pvStack_14;
  return;
}


/* END FUNCTION 0x10025460 */
