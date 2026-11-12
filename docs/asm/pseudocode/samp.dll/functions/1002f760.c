/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002f760
 * Name: FUN_1002f760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002f760(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined2 uVar11;
  undefined4 uVar10;
  uint local_48;
  uint local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10114878;
  pvStack_14 = ExceptionList;
  local_48 = 0;
  ExceptionList = &pvStack_14;
  FUN_10027170();
  local_c = 0;
  local_3c = 0;
  iVar2 = thunk_FUN_1002f110();
  if (iVar2 != 0) {
    do {
      piVar3 = (int *)FUN_1002f560(local_3c);
      iVar2 = *piVar3;
      if (*(char *)(iVar2 + 0x65) != '\0') {
        if (local_48 == 0) {
          local_48 = FUN_1002e2b0();
        }
        if (*(uint *)(iVar2 + 0x98) < local_48) {
          uVar4 = FUN_100436c0();
          *(uint *)(iVar2 + 0x98) = uVar4 % 1000 + 1000 + local_48;
          FUN_10026f90();
          for (iVar5 = FUN_10027060(); iVar6 = local_20, iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x85))
          {
            local_40 = 0;
            if (*(int *)(iVar5 + 1) != 0) {
              puVar8 = (undefined4 *)(iVar5 + 5);
              do {
                if (75000 < local_48 -
                            *(int *)(*(int *)(*(int *)puVar8[0x10] + *(int *)(iVar2 + 0x90) * 4) + 1
                                    )) {
                  FUN_100271b0(*puVar8);
                }
                local_40 = local_40 + 1;
                puVar8 = puVar8 + 1;
              } while (local_40 < *(uint *)(iVar5 + 1));
            }
          }
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            FUN_100298d0(*(undefined4 *)(local_24 + local_3c * 4));
          }
          FUN_1002ee90(1);
          for (iVar5 = FUN_10027060(); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x85)) {
            local_40 = 0;
            if (*(int *)(iVar5 + 1) != 0) {
              local_38 = (undefined4 *)(iVar5 + 0x45);
              do {
                piVar3 = (int *)*local_38;
                if (*(int *)(*(int *)(*piVar3 + *(int *)(iVar2 + 0x94) * 4) + 1) < (int)local_48) {
                  uVar11 = 0;
                  FUN_10026e40(&local_2c,0);
                  iVar6 = (**(code **)(*param_1 + 0x5c))
                                    (local_2c,CONCAT22(uVar11,(undefined2)local_28));
                  if (iVar6 == -1) {
                    iVar6 = *param_1;
                    uVar10 = 0;
                    uVar9 = local_28;
                    uVar7 = FUN_10033260(0);
                    (**(code **)(iVar6 + 0x74))(uVar7,uVar9,uVar10);
                  }
                  else {
                    *(uint *)(*(int *)(*piVar3 + *(int *)(iVar2 + 0x90) * 4) + 1) = local_48;
                  }
                  iVar6 = *(int *)(iVar2 + 0x94);
                  iVar1 = *piVar3;
                  uVar4 = FUN_100436c0();
                  *(uint *)(*(int *)(iVar1 + iVar6 * 4) + 1) = uVar4 % 1000 + 15000 + local_48;
                }
                local_40 = local_40 + 1;
                local_38 = local_38 + 1;
              } while (local_40 < *(uint *)(iVar5 + 1));
            }
          }
        }
      }
      local_3c = local_3c + 1;
      uVar4 = thunk_FUN_1002f110();
    } while (local_3c < uVar4);
  }
  local_c = 0xffffffff;
  FUN_10027180();
  ExceptionList = pvStack_14;
  return;
}


/* END FUNCTION 0x1002f760 */
