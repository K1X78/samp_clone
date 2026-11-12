/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10001350
 * Name: FUN_10001350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10001350(int param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [64];
  
  iVar4 = FUN_10001010();
  if ((iVar4 != 0) && (DAT_102aca24 != 0)) {
    iVar4 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    if (DAT_102ac9ec != 0) {
      FUN_1006b6b0();
    }
    puVar6 = (ushort *)(param_1 + 0x19);
    piVar7 = (int *)(param_1 + 0xe800);
    local_78 = 0x800;
    do {
      if (*piVar7 != 0) {
        uVar3 = *(uint *)((int)puVar6 + -0x15);
        if ((*(char **)((int)puVar6 + -0x19) != (char *)0x0) &&
           (**(char **)((int)puVar6 + -0x19) != '\0')) {
          uVar2 = *puVar6;
          if (uVar2 == 0xffff) {
            uVar2 = puVar6[1];
            if (uVar2 == 0xffff) {
              fVar8 = (float10)FUN_1009f0f0(*(undefined4 *)((int)puVar6 + -0x11),
                                            *(undefined4 *)((int)puVar6 + -0xd),
                                            *(undefined4 *)((int)puVar6 + -9));
              if (fVar8 < (float10)*(float *)((int)puVar6 + -5) !=
                  (fVar8 == (float10)*(float *)((int)puVar6 + -5))) {
                local_70 = *(float *)((int)puVar6 + -0x11);
                local_6c = *(float *)((int)puVar6 + -0xd);
                local_68 = *(float *)((int)puVar6 + -9);
LAB_1000157e:
                uVar10 = *(undefined4 *)((int)puVar6 + -0x15);
                uVar9 = *(undefined4 *)((int)puVar6 + -0x19);
                uVar1 = *(undefined1 *)((int)puVar6 + -1);
LAB_10001592:
                FUN_1006b6d0(&local_70,uVar9,uVar10,(uVar3 & 0xff000000) == 0xff000000,uVar1);
              }
            }
            else {
              iVar5 = FUN_10001150(uVar2);
              if (iVar5 != 0) {
                iVar5 = FUN_10001120(uVar2);
                if (iVar5 != 0) {
                  fVar8 = (float10)FUN_1009ef00();
                  if (fVar8 < (float10)*(float *)((int)puVar6 + -5) !=
                      (fVar8 == (float10)*(float *)((int)puVar6 + -5))) {
                    FUN_1009e950(local_40);
                    local_58 = *(undefined4 *)((int)puVar6 + -0x11);
                    local_54 = *(undefined4 *)((int)puVar6 + -0xd);
                    local_50 = *(undefined4 *)((int)puVar6 + -9);
                    FUN_100b4850(&local_4c,local_40,&local_58);
                    local_70 = local_4c;
                    uVar1 = *(undefined1 *)((int)puVar6 + -1);
                    local_6c = local_48;
                    uVar10 = *(undefined4 *)((int)puVar6 + -0x15);
                    local_68 = local_44;
                    uVar9 = *(undefined4 *)((int)puVar6 + -0x19);
                    goto LAB_10001592;
                  }
                }
              }
            }
          }
          else if ((uVar2 < 0x3ec) && (*(int *)(iVar4 + 0xfd6 + (uint)uVar2 * 4) != 0)) {
            FUN_100010f0(uVar2);
            iVar5 = FUN_10001080();
            if (iVar5 != 0) {
              iVar5 = FUN_100010f0(uVar2);
              if (*(int *)(iVar5 + 4) != 0) {
                fVar8 = (float10)FUN_1009ef00();
                if (fVar8 < (float10)*(float *)((int)puVar6 + -5) !=
                    (fVar8 == (float10)*(float *)((int)puVar6 + -5))) {
                  FUN_100ae080(8,&local_64);
                  local_70 = local_64 + *(float *)((int)puVar6 + -0x11);
                  local_68 = local_5c;
                  local_6c = local_60 + *(float *)((int)puVar6 + -0xd);
                  fVar8 = (float10)FUN_1009efd0();
                  local_68 = (float)(fVar8 * (float10)0.05 + (float10)*(float *)((int)puVar6 + -9) +
                                    (float10)local_68);
                  goto LAB_1000157e;
                }
              }
            }
          }
        }
      }
      piVar7 = piVar7 + 1;
      puVar6 = (ushort *)((int)puVar6 + 0x1d);
      local_78 = local_78 + -1;
    } while (local_78 != 0);
    if (DAT_102ac9ec != 0) {
      FUN_1006b6c0();
    }
  }
  return;
}


/* END FUNCTION 0x10001350 */
