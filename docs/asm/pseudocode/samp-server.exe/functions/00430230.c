/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00430230
 * Name: FUN_00430230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00430230(char *param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 uVar6;
  int extraout_EDX;
  int *unaff_EBX;
  char local_41;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  byte local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  byte local_10;
  char local_f;
  
  local_3c = 0;
  local_2c = 0;
  piVar3 = (int *)FUN_0041c720();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  FUN_0040ea90();
  if (((param_1[2] & 0x20U) == 0) && (unaff_EBX[0x6b] == 0)) {
    unaff_EBX[0x12] = unaff_EBX[0x12] + 1;
    FUN_00414e50(0x1a);
    local_3c = FUN_00414e70(1,7);
  }
  if (*param_1 == 'H') {
    if (param_2 != 0) {
      FUN_00414e70(0,10);
    }
    local_41 = FUN_004157b0();
    *(int *)(param_1 + 0x18) = unaff_EBX[0x11];
    unaff_EBX[0x11] = unaff_EBX[0x11] + 1;
    local_24 = FUN_00414e70(*(undefined4 *)(param_1 + 0x18),0x29);
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
    local_18 = 0;
    local_14 = (int *)0x0;
    local_1c = 0x10000;
    if ((param_1[3] & 8U) == 0) {
      piVar1 = *(int **)(param_1 + 0x10);
      if (piVar1 != (int *)0x0) {
        if (local_41 == '\0') {
          local_41 = 'b';
        }
        local_14 = FUN_004300f0(*(char **)(param_1 + 8));
        local_30 = FUN_0040ec00();
        local_40 = FUN_0040ec00();
        FUN_00414e70(0,10);
        local_38 = (undefined4 *)piVar1[3];
        iVar5 = *piVar1;
        if (0 < *piVar1) {
          do {
            local_34 = iVar5;
            pcVar2 = (char *)*local_38;
            if ((local_3c != 0) && (iVar5 = FUN_00415ba0((int)pcVar2), iVar5 == 0)) {
              FUN_004150c0(local_3c + -1,piVar3);
              local_3c = 0;
            }
            if ((param_3 == 0) || (iVar5 = FUN_0040e6e0(pcVar2,&local_28), iVar5 == 0)) {
              iVar5 = FUN_00437710(unaff_EBX,pcVar2,local_30);
              if (param_3 == 0) {
                FUN_004197c0(1,iVar5,0x1e,&local_41,1);
                thunk_FUN_0040ea60(1);
                FUN_00414e70(*(undefined4 *)(param_1 + 0x18),0x46);
              }
              else {
                FUN_0040d5c0();
                FUN_00414e70(iVar5,0x15);
                FUN_00414dd0(0x37,*(undefined4 *)(param_1 + 0x18),local_40,iVar5);
              }
            }
            else {
              FUN_00414dd0(0x38,*(undefined4 *)(param_1 + 0x18),local_40,local_28);
            }
            local_38 = local_38 + 5;
            local_34 = local_34 + -1;
            iVar5 = local_34;
          } while (local_34 != 0);
        }
        FUN_0040ec20(local_38,(int)unaff_EBX);
        FUN_0040ec20(extraout_ECX_00,extraout_EDX);
      }
    }
    else {
      FUN_0040fcc0(extraout_ECX,*(undefined4 *)(param_1 + 0x18),7);
      local_f = local_41;
      iVar5 = FUN_00443d60(unaff_EBX,*(int **)(param_1 + 0x10),&local_10);
      if (iVar5 != 0) {
        return 0;
      }
      if (((int *)**(int **)(param_1 + 0x10) != (int *)0x0) &&
         (0 < *(int *)**(int **)(param_1 + 0x10))) {
        local_14 = FUN_00430190();
      }
    }
    if (param_3 == 0) {
      FUN_00415110(-6,(char *)local_20,piVar3);
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0x10);
    iVar5 = unaff_EBX[0x12] + 1;
    unaff_EBX[0x12] = iVar5;
    FUN_0040fcc0(iVar5,iVar5,0);
    if (*param_1 == 't') {
      local_20[0] = 6;
      uVar6 = 10;
    }
    else {
      local_20[0] = 3;
      uVar6 = 7;
    }
    FUN_00414e70(0,uVar6);
    FUN_004158d0(*unaff_EBX,piVar1[10]);
    puVar4 = FUN_0041a0a0(unaff_EBX);
    piVar1[10] = (int)puVar4;
    iVar5 = FUN_00443d60(unaff_EBX,piVar1,local_20);
    if (iVar5 != 0) {
      return 0;
    }
    local_2c = local_1c;
  }
  if (local_3c != 0) {
    FUN_0040d680(piVar3);
  }
  FUN_0040eaa0(1);
  return local_2c;
}


/* END FUNCTION 0x00430230 */
