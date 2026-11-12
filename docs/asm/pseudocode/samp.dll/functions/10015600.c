/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015600
 * Name: FUN_10015600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10015600(undefined2 *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 auStack_9c [12];
  undefined4 uStack_6c;
  float local_68;
  float local_64;
  float *local_60;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_10;
  float local_c;
  float local_8;
  
  uVar1 = *param_2;
  if (((uVar1 != 0) && (uVar1 != 0xffff)) &&
     (iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc), iVar2 != 0)) {
    if ((uVar1 < 2000) && (*(int *)(iVar2 + 0x3074 + (uint)uVar1 * 4) != 0)) {
      iVar3 = *(int *)(iVar2 + 0x1134 + (uint)uVar1 * 4);
    }
    else {
      iVar3 = 0;
    }
    *(undefined2 *)(iVar2 + 0x8e34 + (uint)uVar1 * 2) = *param_1;
    if (iVar3 != 0) {
      local_60 = (float *)0x10015674;
      iVar2 = FUN_100b6c20();
      if (iVar2 == 0) {
        local_60 = (float *)0x10015683;
        iVar2 = FUN_100b7830();
        if (iVar2 == 0) {
          local_60 = (float *)local_40;
          local_64 = 2.550747e-29;
          FUN_1009e950();
          local_30 = *(undefined4 *)((int)param_2 + 0xf);
          local_2c = *(undefined4 *)((int)param_2 + 0x13);
          local_28 = *(undefined4 *)((int)param_2 + 0x17);
          local_40[0] = *(undefined4 *)((int)param_2 + 3);
          local_40[1] = *(undefined4 *)((int)param_2 + 7);
          local_64 = *(float *)((int)param_2 + 0x1b);
          local_40[2] = *(undefined4 *)((int)param_2 + 0xb);
          local_60 = (float *)local_10;
          local_68 = 2.550764e-29;
          fVar6 = (float10)FUN_100b44b0();
          if (fVar6 < (float10)0.1 != (fVar6 == (float10)0.1)) {
            local_64 = *(float *)((int)param_2 + 0x1f);
            local_60 = (float *)local_c;
            local_68 = 2.550773e-29;
            fVar6 = (float10)FUN_100b44b0();
            if (fVar6 < (float10)0.1 != (fVar6 == (float10)0.1)) {
              local_64 = *(float *)((int)param_2 + 0x23);
              local_60 = (float *)local_8;
              local_68 = 2.550782e-29;
              fVar6 = (float10)FUN_100b44b0();
              if (fVar6 < (float10)0.1 != (fVar6 == (float10)0.1)) {
                return;
              }
            }
          }
          local_64 = *(float *)((int)param_2 + 0x1b);
          local_60 = (float *)local_10;
          local_68 = 2.5507922e-29;
          fVar6 = (float10)FUN_100b44b0();
          if (fVar6 <= (float10)6.0) {
            local_64 = *(float *)((int)param_2 + 0x1f);
            local_60 = (float *)local_c;
            local_68 = 2.5508024e-29;
            fVar6 = (float10)FUN_100b44b0();
            if (fVar6 <= (float10)6.0) {
              local_64 = *(float *)((int)param_2 + 0x23);
              local_60 = (float *)local_8;
              local_68 = 2.5508127e-29;
              fVar6 = (float10)FUN_100b44b0();
              if (fVar6 <= (float10)3.0) {
                puVar4 = local_40;
                puVar5 = auStack_9c;
                for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar5 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar5 = puVar5 + 1;
                }
                FUN_1009ea00();
                local_68 = *(float *)((int)param_2 + 0x27);
                local_64 = *(float *)((int)param_2 + 0x2b);
                local_60 = *(float **)((int)param_2 + 0x2f);
                uStack_6c = 0x100157bb;
                FUN_1009eb50();
                local_68 = *(float *)((int)param_2 + 0x33);
                local_64 = *(float *)((int)param_2 + 0x37);
                local_60 = *(float **)((int)param_2 + 0x3b);
                uStack_6c = 0x100157da;
                FUN_1009eca0();
                local_60 = &local_4c;
                local_4c = 0.0;
                local_48 = 0.0;
                local_44 = 0.0;
                local_64 = 2.550855e-29;
                FUN_1009eb20();
                local_64 = *(float *)((int)param_2 + 0x1b);
                local_60 = (float *)local_10;
                local_68 = 2.5508593e-29;
                fVar6 = (float10)FUN_100b44b0();
                if ((float10)0.05 < fVar6) {
                  local_4c = (*(float *)((int)param_2 + 0x1b) - local_10) * _DAT_1013c49c + local_4c
                  ;
                }
                local_64 = *(float *)((int)param_2 + 0x1f);
                local_60 = (float *)local_c;
                local_68 = 2.5508747e-29;
                fVar6 = (float10)FUN_100b44b0();
                if ((float10)0.05 < fVar6) {
                  local_48 = (*(float *)((int)param_2 + 0x1f) - local_c) * _DAT_1013c49c + local_48;
                }
                local_64 = *(float *)((int)param_2 + 0x23);
                local_60 = (float *)local_8;
                local_68 = 2.55089e-29;
                fVar6 = (float10)FUN_100b44b0();
                if ((float10)0.05 < fVar6) {
                  local_44 = (*(float *)((int)param_2 + 0x23) - local_8) * _DAT_1013c49c + local_44;
                }
                local_68 = local_4c;
                local_64 = local_48;
                local_60 = (float *)local_44;
                uStack_6c = 0x100158b7;
                FUN_1009eb50();
                *(undefined4 *)(iVar3 + 0x83) = 1;
                return;
              }
            }
          }
          local_8 = (float)*(undefined4 *)((int)param_2 + 0x23);
          local_10 = (float)*(undefined4 *)((int)param_2 + 0x1b);
          local_c = (float)*(undefined4 *)((int)param_2 + 0x1f);
          puVar4 = local_40;
          puVar5 = auStack_9c;
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          FUN_1009ea00();
          local_68 = *(float *)((int)param_2 + 0x27);
          local_64 = *(float *)((int)param_2 + 0x2b);
          local_60 = *(float **)((int)param_2 + 0x2f);
          uStack_6c = 0x1001591c;
          FUN_1009eb50();
          local_68 = *(float *)((int)param_2 + 0x33);
          local_64 = *(float *)((int)param_2 + 0x37);
          local_60 = *(float **)((int)param_2 + 0x3b);
          uStack_6c = 0x1001593b;
          FUN_1009eca0();
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x10015600 */
