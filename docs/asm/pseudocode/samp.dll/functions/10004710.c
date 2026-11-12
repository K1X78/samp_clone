/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10004710
 * Name: FUN_10004710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10004710(int param_1)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [48];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  char local_110 [268];
  
  if (DAT_10156ac8 != '\0') {
    pcVar3 = local_110;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    *pcVar3 = '\0';
    FUN_1006b6b0();
    if (*(ushort *)(param_1 + 0x108) != 0xffff) {
      _sprintf(local_110,"CAMERA_TARGET_TYPE_OBJECT: ID(%u)",(uint)*(ushort *)(param_1 + 0x108));
      iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
      uVar1 = *(ushort *)(param_1 + 0x108);
      if (((uVar1 < 0x835) && (*(int *)(iVar2 + 4 + (uint)uVar1 * 4) != 0)) &&
         (*(int *)(iVar2 + 0x20d4 + (uint)uVar1 * 4) != 0)) {
        FUN_1009e950(local_150);
        if (DAT_102ac9f0 != 0) {
          FUN_100717c0(local_150,0x3f800000);
        }
        local_15c = local_120;
        local_158 = local_11c;
        local_154 = local_118;
        FUN_1006b6d0(&local_15c,local_110,0xffd47b75,1,0);
      }
    }
    if (*(ushort *)(param_1 + 0x10a) != 0xffff) {
      _sprintf(local_110,"CAMERA_TARGET_TYPE_VEHICLE: ID(%u)",(uint)*(ushort *)(param_1 + 0x10a));
      iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
      uVar1 = *(ushort *)(param_1 + 0x10a);
      if (((uVar1 < 2000) && (*(int *)(iVar2 + 0x3074 + (uint)uVar1 * 4) != 0)) &&
         (*(int *)(iVar2 + 0x1134 + (uint)uVar1 * 4) != 0)) {
        FUN_1009e950(local_150);
        if (DAT_102ac9f0 != 0) {
          FUN_100717c0(local_150,0x3f800000);
        }
        local_15c = local_120;
        local_158 = local_11c;
        local_154 = local_118;
        FUN_1006b6d0(&local_15c,local_110,0xffd47b75,1,0);
      }
    }
    if (*(ushort *)(param_1 + 0x10c) != 0xffff) {
      _sprintf(local_110,"CAMERA_TARGET_TYPE_PLAYER: ID(%u)",(uint)*(ushort *)(param_1 + 0x10c));
      if (((*(ushort *)(param_1 + 0x10c) < 0x3ed) &&
          (iVar2 = *(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x26 +
                           (uint)*(ushort *)(param_1 + 0x10c) * 4), iVar2 != 0)) &&
         ((iVar2 = *(int *)(iVar2 + 8), iVar2 != 0 && (*(int *)(iVar2 + 4) != 0)))) {
        FUN_1009e950(local_150);
        if (DAT_102ac9f0 != 0) {
          FUN_100717c0(local_150,0x3f800000);
        }
        local_15c = local_120;
        local_158 = local_11c;
        local_154 = local_118;
        FUN_1006b6d0(&local_15c,local_110,0xffd47b75,1,0);
      }
    }
    if (*(ushort *)(param_1 + 0x10e) != 0xffff) {
      _sprintf(local_110,"CAMERA_TARGET_TYPE_ACTOR: ID(%u)",(uint)*(ushort *)(param_1 + 0x10e));
      uVar1 = *(ushort *)(param_1 + 0x10e);
      iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 4);
      if (((uVar1 < 1000) && (*(int *)(iVar2 + 0xfa4 + (uint)uVar1 * 4) != 0)) &&
         (*(int *)(iVar2 + 4 + (uint)uVar1 * 4) != 0)) {
        FUN_1009e950(local_150);
        if (DAT_102ac9f0 != 0) {
          FUN_100717c0(local_150,0x3f800000);
        }
        local_15c = local_120;
        local_158 = local_11c;
        local_154 = local_118;
        FUN_1006b6d0(&local_15c,local_110,0xffd47b75,1,0);
      }
    }
    FUN_1006b6c0();
  }
  return;
}


/* END FUNCTION 0x10004710 */
