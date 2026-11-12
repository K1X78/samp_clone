/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015950
 * Name: FUN_10015950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10015950(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 auStack_9c [11];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  ushort *local_64;
  float *local_60;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  uVar1 = *param_2;
  if ((uVar1 != 0) && (uVar1 != 0xffff)) {
    iVar3 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
    if ((uVar1 < 2000) && (*(int *)(iVar3 + 0x3074 + (uint)uVar1 * 4) != 0)) {
      iVar3 = *(int *)(iVar3 + 0x1134 + (uint)uVar1 * 4);
    }
    else {
      iVar3 = 0;
    }
    if ((*(int *)(param_1 + 8) != 0) && (iVar3 != 0)) {
      local_60 = (float *)0x100159b9;
      iVar2 = FUN_100b78b0();
      if (iVar2 == 0) {
        local_60 = (float *)0x100159c4;
        iVar2 = FUN_100b7910();
        if (iVar2 == 0) {
          return;
        }
      }
      local_60 = (float *)0x100159d3;
      iVar2 = FUN_100b77d0();
      if (iVar2 != iVar3) {
        local_64 = (ushort *)0x100159df;
        local_60 = (float *)iVar3;
        FUN_100b77c0();
        local_60 = (float *)0x100159e6;
        FUN_100b7750();
      }
      local_60 = (float *)local_40;
      local_64 = (ushort *)0x100159f2;
      FUN_1009e950();
      local_60 = (float *)local_40;
      local_64 = param_2 + 7;
      local_68 = 2.5510098e-29;
      FUN_100b65c0();
      uStack_6c = *(undefined4 *)(param_2 + 1);
      local_68 = local_10;
      uStack_70 = 0x10015a0e;
      fVar6 = (float10)FUN_100b44b0();
      if (fVar6 < (float10)0.5 != (fVar6 == (float10)0.5)) {
        local_64 = *(ushort **)(param_2 + 3);
        local_60 = (float *)local_c;
        local_68 = 2.551023e-29;
        fVar6 = (float10)FUN_100b44b0();
        if (fVar6 < (float10)0.5 != (fVar6 == (float10)0.5)) {
          local_64 = *(ushort **)(param_2 + 5);
          local_60 = (float *)local_8;
          local_68 = 2.551032e-29;
          fVar6 = (float10)FUN_100b44b0();
          if (fVar6 < (float10)0.5 != (fVar6 == (float10)0.5)) {
            return;
          }
        }
      }
      local_64 = *(ushort **)(param_2 + 1);
      local_60 = (float *)local_10;
      local_68 = 2.5510423e-29;
      fVar6 = (float10)FUN_100b44b0();
      if (fVar6 <= (float10)6.0) {
        local_64 = *(ushort **)(param_2 + 3);
        local_60 = (float *)local_c;
        local_68 = 2.5510525e-29;
        fVar6 = (float10)FUN_100b44b0();
        if (fVar6 <= (float10)6.0) {
          local_64 = *(ushort **)(param_2 + 5);
          local_60 = (float *)local_8;
          local_68 = 2.5510627e-29;
          fVar6 = (float10)FUN_100b44b0();
          if (fVar6 <= (float10)3.0) {
            puVar4 = local_40;
            puVar5 = auStack_9c;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            FUN_1009ea00();
            local_68 = *(float *)(param_2 + 0x15);
            local_64 = *(ushort **)(param_2 + 0x17);
            local_60 = *(float **)(param_2 + 0x19);
            uStack_6c = 0x10015afa;
            FUN_1009eca0();
            local_60 = &local_4c;
            local_4c = 0.0;
            local_48 = 0.0;
            local_44 = 0.0;
            local_64 = (ushort *)0x10015b1e;
            FUN_1009eb20();
            local_64 = *(ushort **)(param_2 + 1);
            local_60 = (float *)local_10;
            local_68 = 2.5511e-29;
            fVar6 = (float10)FUN_100b44b0();
            if ((float10)0.05 < fVar6) {
              local_4c = (*(float *)(param_2 + 1) - local_10) * 0.025 + local_4c;
            }
            local_64 = *(ushort **)(param_2 + 3);
            local_60 = (float *)local_c;
            local_68 = 2.5511154e-29;
            fVar6 = (float10)FUN_100b44b0();
            if ((float10)0.05 < fVar6) {
              local_48 = (*(float *)(param_2 + 3) - local_c) * 0.025 + local_48;
            }
            local_64 = *(ushort **)(param_2 + 5);
            local_60 = (float *)local_8;
            local_68 = 2.5511307e-29;
            fVar6 = (float10)FUN_100b44b0();
            if ((float10)0.05 < fVar6) {
              local_44 = (*(float *)(param_2 + 5) - local_8) * 0.025 + local_44;
            }
            local_68 = local_4c;
            local_64 = (ushort *)local_48;
            local_60 = (float *)local_44;
            uStack_6c = 0x10015bd7;
            FUN_1009eb50();
            return;
          }
        }
      }
      local_10 = (float)*(undefined4 *)(param_2 + 1);
      local_c = (float)*(undefined4 *)(param_2 + 3);
      local_8 = (float)*(undefined4 *)(param_2 + 5);
      puVar4 = local_40;
      puVar5 = auStack_9c;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_1009ea00();
      local_68 = *(float *)(param_2 + 0xf);
      local_64 = *(ushort **)(param_2 + 0x11);
      local_60 = *(float **)(param_2 + 0x13);
      uStack_6c = 0x10015c32;
      FUN_1009eb50();
      local_68 = *(float *)(param_2 + 0x15);
      local_64 = *(ushort **)(param_2 + 0x17);
      local_60 = *(float **)(param_2 + 0x19);
      uStack_6c = 0x10015c51;
      FUN_1009eca0();
    }
  }
  return;
}


/* END FUNCTION 0x10015950 */
