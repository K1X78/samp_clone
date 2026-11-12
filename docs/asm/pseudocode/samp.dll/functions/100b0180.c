/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b0180
 * Name: FUN_100b0180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b0180(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 auStack_c0 [12];
  undefined4 uStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  float *pfStack_84;
  undefined4 local_74 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  piVar5 = (int *)(param_1 + 0x27c);
  local_5 = '\0';
  local_1c = 0;
  pfVar3 = (float *)(param_1 + 0x88);
  local_c = param_1;
  do {
    iVar2 = local_1c;
    if ((((-1 < local_1c) && (local_1c < 10)) && (piVar5[-0x8c] == 1)) &&
       ((*piVar5 != 0 && (*(int *)(*piVar5 + 0x40) != 0)))) {
      pfStack_84 = (float *)0x100b01e8;
      local_10 = piVar5;
      iVar1 = FUN_1009f210();
      if (iVar1 == 0) {
        pfStack_84 = (float *)0x0;
        puStack_88 = (undefined4 *)0x0;
        puStack_8c = (undefined4 *)0x0;
        uStack_90 = 0x100b0338;
        FUN_1009ee80();
      }
      else {
        if (local_5 == '\0') {
          local_18 = *(int *)(local_c + 0x2a4);
          if (local_18 != 0) {
            pfStack_84 = (float *)0x100b0211;
            (*(code *)0x532b20)();
          }
          local_5 = '\x01';
        }
        local_14 = *(int **)(*piVar5 + 0x40);
        local_18 = *local_14;
        pfStack_84 = (float *)0x100b022b;
        (**(code **)(local_18 + 0xc))();
        local_20 = pfVar3[-4];
        local_24 = *(int *)(local_c + 0x2a4);
        pfStack_84 = *(float **)(*(int *)(local_24 + 0x488 + (int)local_20 * 4) + 0x14);
        puStack_88 = local_74;
        puStack_8c = (undefined4 *)0x100b0263;
        local_28 = pfStack_84;
        FUN_100ae680();
        puStack_88 = local_74;
        puStack_8c = &local_34;
        uStack_90 = 0x100b0271;
        pfStack_84 = pfVar3 + -3;
        FUN_100b4850();
        local_3c = local_2c;
        local_44 = local_34;
        local_40 = local_30;
        if (*pfVar3 != 0.0) {
          pfStack_84 = (float *)*pfVar3;
          puStack_8c = local_74;
          puStack_88 = (undefined4 *)0x0;
          uStack_90 = 0x100b02a5;
          FUN_100b52d0();
        }
        if (pfVar3[1] != 0.0) {
          pfStack_84 = (float *)pfVar3[1];
          puStack_8c = local_74;
          puStack_88 = (undefined4 *)0x1;
          uStack_90 = 0x100b02c9;
          FUN_100b52d0();
        }
        if (pfVar3[2] != 0.0) {
          pfStack_84 = (float *)pfVar3[2];
          puStack_8c = local_74;
          puStack_88 = (undefined4 *)0x2;
          uStack_90 = 0x100b02ed;
          FUN_100b52d0();
        }
        pfStack_84 = pfVar3 + 3;
        puStack_88 = local_74;
        puStack_8c = (undefined4 *)0x100b02fd;
        FUN_100b5480();
        puVar4 = local_74;
        puVar6 = auStack_c0;
        for (iVar2 = 0x10; piVar5 = local_10, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_1009ea00();
        pfStack_84 = (float *)0x100b031d;
        FUN_1009eac0();
        pfStack_84 = (float *)0x100b0326;
        (**(code **)(local_18 + 8))();
        iVar2 = local_1c;
      }
    }
    local_1c = iVar2 + 1;
    piVar5 = piVar5 + 1;
    pfVar3 = pfVar3 + 0xd;
  } while (local_1c < 10);
  return;
}


/* END FUNCTION 0x100b0180 */
