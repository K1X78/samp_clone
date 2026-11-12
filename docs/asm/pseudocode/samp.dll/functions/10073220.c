/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073220
 * Name: FUN_10073220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10073220(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar9 = local_88;
    puVar7 = local_84;
    FUN_10001010(puVar7,puVar9);
    uVar2 = FUN_100af1d0(puVar7,puVar9);
    if (*(char *)(param_1 + 0xa3) == '\0') {
      if ((uVar2 & 8) == 0) {
        (**(code **)(*DAT_102ac9d0 + 0x30))(DAT_102ac9d0,1);
        uVar8 = 3;
      }
      else {
        uVar8 = 0;
      }
      FUN_100a0530(uVar8,1);
    }
    else {
      (**(code **)(*DAT_102ac9d0 + 0x30))(DAT_102ac9d0,0);
    }
    if (DAT_102aca24 != 0) {
      if (*(int *)(param_1 + 0x78) == 1) {
        uVar1 = *(ushort *)(param_1 + 0x88);
        iVar3 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
        if (((uVar1 < 0x835) && (*(int *)(iVar3 + 4 + (uint)uVar1 * 4) != 0)) &&
           (*(int *)(iVar3 + 0x20d4 + (uint)uVar1 * 4) != 0)) {
          FUN_1009e950(&uStack_80);
          fVar5 = (float10)FUN_1009efd0();
          iVar3 = thunk_FUN_100726d0(&uStack_80,(float)(fVar5 * (float10)0.125));
          if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 0x84) = 1;
          }
        }
      }
      else if (*(int *)(param_1 + 0x78) == 2) {
        uVar8 = *(undefined4 *)(param_1 + 0x8a);
        FUN_10001010(uVar8);
        iVar3 = FUN_10013580(uVar8);
        uVar8 = *(undefined4 *)(param_1 + 0x8a);
        FUN_10001010(uVar8);
        iVar4 = FUN_100715d0(uVar8);
        if (iVar3 != 0) {
          FUN_1009e950(&uStack_80);
          fVar5 = (float10)FUN_1009efd0();
          if (*(int *)(param_1 + 0x7c) == 0) {
            uVar8 = *(undefined4 *)(iVar4 + 4);
            puVar6 = &uStack_40;
            FUN_10001010(puVar6,uVar8);
            FUN_100ae810(puVar6,uVar8);
            uStack_70 = uStack_30;
            uStack_6c = uStack_2c;
            uStack_68 = uStack_28;
            uStack_80 = uStack_40;
            uStack_7c = uStack_3c;
            uStack_78 = uStack_38;
            uStack_60 = uStack_20;
            uStack_5c = uStack_1c;
            uStack_58 = uStack_18;
          }
          iVar3 = thunk_FUN_100726d0(&uStack_80,(float)fVar5 * 0.125);
          if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 0x84) = 1;
          }
        }
      }
      if (*(char *)(param_1 + 0xa3) == '\0') {
        FUN_10071b40();
      }
    }
  }
  return;
}


/* END FUNCTION 0x10073220 */
