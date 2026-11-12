/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001c390
 * Name: FUN_1001c390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001c390(undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  byte local_19d;
  uint local_19c;
  int local_198;
  uint local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180 [308];
  undefined1 local_4c [4];
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113bfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  if (DAT_102aca24 != 0) {
    iVar1 = **(int **)(DAT_102aca24 + 0x3de);
    local_190 = 0;
    FUN_1001f470(&local_194,8,1);
    FUN_1001f470(&local_198,0x20,1);
    FUN_1001f960(local_180,0x20);
    FUN_1001f470(&local_184,0x20,1);
    FUN_1001f470(&local_188,0x20,1);
    FUN_1001f470(&local_18c,0x20,1);
    if (local_198 != 0) {
      FUN_1001f470(&local_190,0x20,1);
    }
    FUN_1001f470(local_4c,0x20,1);
    puVar3 = local_48;
    iVar4 = 0xc;
    do {
      FUN_1001f470(puVar3,0x20,1);
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (((byte)local_194 < 0x81) && (*(int *)(iVar1 + 0x200 + (local_194 & 0xff) * 4) != 0)) {
      FUN_10007c60(local_194);
    }
    iVar1 = FUN_10007b90(local_194,local_180,local_184,local_188,(char)local_198 + '\x01',local_18c,
                         local_190,local_4c);
    if (iVar1 != 0) {
      FUN_1001f960(local_180,0x20);
      FUN_100a7230(0,local_180);
      FUN_1001f470(&local_19d,8,1);
      bVar2 = 0;
      local_19c = local_19c & 0xffffff00;
      if (local_19d != 0) {
        do {
          FUN_1001f960(local_180,0x20);
          FUN_100a7200(0,local_19c,local_180);
          bVar2 = bVar2 + 1;
          local_19c = CONCAT31(local_19c._1_3_,bVar2);
        } while (bVar2 < local_19d);
      }
      if (local_198 != 0) {
        FUN_1001f960(local_180,0x20);
        FUN_100a7230(1,local_180);
        FUN_1001f470(&local_19d,8,1);
        bVar2 = 0;
        local_19c = local_19c & 0xffffff00;
        if (local_19d != 0) {
          do {
            FUN_1001f960(local_180,0x20);
            FUN_100a7200(1,local_19c,local_180);
            bVar2 = bVar2 + 1;
            local_19c = CONCAT31(local_19c._1_3_,bVar2);
          } while (bVar2 < local_19d);
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001c390 */
