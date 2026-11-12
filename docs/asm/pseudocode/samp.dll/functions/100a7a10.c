/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7a10
 * Name: FUN_100a7a10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a7a10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_4c [6];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if ((*(short *)(param_1 + 0xc0) != -1) && (*(char *)(param_1 + 0xda) == '\0')) {
    local_10 = &DAT_101e0450;
    local_14 = 0x100a7a3c;
    FUN_1009e950();
    DAT_101e0450 = *(undefined4 *)(param_1 + 0x11b);
    DAT_101e0454 = *(undefined4 *)(param_1 + 0x11f);
    _DAT_101e0458 = *(undefined4 *)(param_1 + 0x123);
    _DAT_101e0460 = *(undefined4 *)(param_1 + 299);
    _DAT_101e0464 = *(undefined4 *)(param_1 + 0x12f);
    _DAT_101e0468 = *(undefined4 *)(param_1 + 0x133);
    _DAT_101e0470 = *(undefined4 *)(param_1 + 0x13b);
    _DAT_101e0474 = *(undefined4 *)(param_1 + 0x13f);
    _DAT_101e0478 = *(undefined4 *)(param_1 + 0x143);
    local_10 = *(undefined4 **)(param_1 + 0xce);
    local_14 = 0;
    local_18 = &DAT_101e0450;
    uStack_1c = 0x100a7aac;
    FUN_100b52d0();
    uStack_1c = *(undefined4 *)(param_1 + 0xd2);
    uStack_20 = 1;
    puStack_24 = &DAT_101e0450;
    uStack_28 = 0x100a7abf;
    FUN_100b52d0();
    uStack_28 = *(undefined4 *)(param_1 + 0xd6);
    uStack_2c = 2;
    puStack_30 = &DAT_101e0450;
    uStack_34 = 0x100a7ad2;
    FUN_100b52d0();
    puVar2 = &DAT_101e0450;
    puVar3 = auStack_4c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1009ea00();
    local_18 = (undefined4 *)DAT_101e049c;
    local_14 = DAT_101e04a0;
    local_10 = (undefined4 *)DAT_101e04a4;
    uStack_1c = 0x100a7b10;
    FUN_1009eca0();
    local_18 = (undefined4 *)DAT_101e049c;
    local_14 = DAT_101e04a0;
    local_10 = (undefined4 *)DAT_101e04a4;
    uStack_1c = 0x100a7b34;
    FUN_1009eb50();
  }
  return;
}


/* END FUNCTION 0x100a7a10 */
