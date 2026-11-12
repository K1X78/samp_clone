/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100034b0
 * Name: FUN_100034b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100034b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_54 [10];
  undefined4 uStack_2c;
  int iStack_28;
  undefined *puStack_24;
  undefined *local_20;
  short *local_1c;
  short *local_18;
  short local_8 [2];
  short local_4 [2];
  
  if (*(int *)(param_1 + 0x2de) != 0) {
    local_18 = (short *)&DAT_10156a58;
    local_1c = (short *)0x100034d0;
    FUN_1009e950();
    local_18 = (short *)&DAT_101569b8;
    local_1c = (short *)0x100034dc;
    FUN_1009e950();
    local_18 = (short *)&DAT_101569f8;
    local_1c = (short *)0x100034ec;
    FUN_1009eb20();
    local_18 = (short *)&DAT_10156aa4;
    local_1c = (short *)0x100034fc;
    FUN_1009ec70();
    local_18 = local_4;
    local_1c = local_8;
    local_20 = (undefined *)0x1000350d;
    FUN_100af1d0();
    local_18 = (short *)0x10003512;
    FUN_100a70f0();
    if (((*(int *)(param_1 + 0x2e2) != 0) && (local_8[0] == 0)) && (local_4[0] == 0)) {
      local_18 = (short *)0x1000353f;
      iVar1 = FUN_100ac830();
      if (iVar1 == 0) {
        local_18 = (short *)(param_1 + 0x2ea);
        local_1c = (short *)&DAT_10156a58;
        local_20 = &DAT_101569e8;
        puStack_24 = (undefined *)0x1000355d;
        FUN_100b4850();
        puVar2 = &DAT_101569b8;
        puVar3 = auStack_54;
        for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        FUN_1009fb40();
        local_18 = (short *)&DAT_10156a48;
        local_1c = (short *)0x10003581;
        FUN_1009eb20();
        local_20 = (undefined *)DAT_101569f8;
        _DAT_10156a48 = DAT_101569f8;
        local_1c = (short *)DAT_101569fc;
        _DAT_10156a4c = DAT_101569fc;
        local_18 = (short *)DAT_10156a50;
        puStack_24 = (undefined *)0x100035b0;
        FUN_1009eb50();
        local_18 = (short *)&DAT_101569a8;
        local_1c = (short *)0x100035bc;
        FUN_1009ec70();
        DAT_101569b0 = DAT_10156aac;
        local_20 = (undefined *)DAT_101569a8;
        local_1c = (short *)DAT_101569ac;
        local_18 = (short *)DAT_10156aac;
        puStack_24 = (undefined *)0x100035ec;
        FUN_1009eca0();
        return;
      }
    }
    local_18 = (short *)&DAT_10156a58;
    local_1c = (short *)&DAT_10156a08;
    local_20 = (undefined *)0x10003602;
    FUN_100b5280();
    local_20 = &DAT_101569e8;
    puStack_24 = &DAT_10156a08;
    iStack_28 = param_1 + 0x2ea;
    uStack_2c = 0x10003618;
    FUN_100b4850();
  }
  return;
}


/* END FUNCTION 0x100034b0 */
