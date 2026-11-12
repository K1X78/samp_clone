/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f4eb0
 * Name: FUN_100f4eb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f4eb0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                char *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_EDI;
  undefined4 uVar5;
  int iVar6;
  char *pcStack_60;
  int *piStack_5c;
  char *pcStack_58;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  char acStack_30 [4];
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  local_44 = 0;
  local_40 = 0;
  local_48 = 0;
  if ((*(int *)(param_7 + 0xc) != 0) && (*(int *)(param_7 + 4) == 0)) {
    pcStack_58 = (char *)0x100f4ed9;
    FUN_100f4e30();
    return 0x43;
  }
  if (*(int *)(param_7 + 0x30) == 0) {
    pcStack_58 = (char *)param_5;
    piStack_5c = (int *)param_4;
    pcStack_60 = (char *)0x100f4efc;
    iVar2 = FUN_100f8010();
    *(int *)(param_7 + 0x30) = iVar2;
    if (iVar2 == 0) {
      return 0x1b;
    }
  }
  if (*(int *)(param_7 + 0x38) == 0) {
    pcStack_58 = "Negotiate";
    piStack_5c = (int *)0x100f4f1d;
    iVar2 = (**(code **)(DAT_102acadc + 0x44))();
    *(int *)(param_7 + 4) = iVar2;
    if (iVar2 != 0) {
      return 4;
    }
    *(undefined4 *)(param_7 + 0x34) = *(undefined4 *)(param_5 + 8);
    piStack_5c = (int *)param_5;
    pcStack_60 = (char *)0x100f4f43;
    (**(code **)(DAT_102acadc + 0x40))();
    pcStack_60 = *(char **)(param_7 + 0x34);
    iVar2 = (*(code *)PTR__malloc_101554b8)();
    *(int *)(param_7 + 0x38) = iVar2;
    if (iVar2 == 0) {
      return 0x1b;
    }
  }
  if (*(int *)(param_7 + 8) == 0) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      *(undefined4 *)(param_7 + 0x2c) = 0;
    }
    else {
      piStack_5c = (int *)param_3;
      pcStack_60 = param_2;
      pcStack_58 = (char *)(param_7 + 0x10);
      iVar2 = FUN_100cd4b0();
      if (iVar2 != 0) {
        return iVar2;
      }
      *(int *)(param_7 + 0x2c) = param_7 + 0x10;
      local_44 = 0;
    }
    pcStack_58 = (char *)0x8;
    piStack_5c = (int *)0x100f4fa6;
    puVar3 = (undefined4 *)(*(code *)PTR__malloc_101554b8)();
    *(undefined4 **)(param_7 + 8) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 0x1b;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    piStack_5c = *(int **)(param_7 + 8);
    pcStack_58 = auStack_38;
    pcStack_60 = (char *)0x0;
    iVar2 = (**(code **)(DAT_102acadc + 0xc))(0,"Negotiate",2,0,*(undefined4 *)(param_7 + 0x2c),0);
    *(int *)(param_7 + 4) = iVar2;
    if (iVar2 != 0) {
      return 0x43;
    }
    puVar3 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(8);
    *(undefined4 **)(param_7 + 0xc) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 0x1b;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  if ((param_6 != (char *)0x0) && (*param_6 != '\0')) {
    if (*param_6 != '=') {
      pcStack_58 = (char *)&local_40;
      piStack_5c = &local_48;
      pcStack_60 = param_6;
      local_44 = FUN_100e3c50();
      if (local_44 != 0) {
        return local_44;
      }
    }
    if (local_48 == 0) {
      pcStack_58 = "SPNEGO handshake failure (empty challenge message)\n";
      piStack_5c = (int *)param_1;
      pcStack_60 = (char *)0x100f5058;
      FUN_100d8ae0();
      return 0x3d;
    }
    iStack_10 = local_48;
    puStack_4 = &uStack_18;
    pcStack_58 = (char *)local_40;
    uStack_c = 0;
    uStack_8 = 1;
    uStack_14 = 2;
    piStack_5c = (int *)0x100f508d;
    uStack_18 = FUN_100d9a10();
  }
  pcStack_58 = *(char **)(param_7 + 0x34);
  uStack_1c = *(undefined4 *)(param_7 + 0x38);
  puStack_28 = &uStack_24;
  acStack_30[0] = '\0';
  acStack_30[1] = '\0';
  acStack_30[2] = '\0';
  acStack_30[3] = '\0';
  iStack_2c = 1;
  uStack_20 = 2;
  piStack_5c = (int *)0x100f50bc;
  uStack_24 = FUN_100d9a10();
  if (local_48 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_7 + 0xc);
  }
  pcStack_58 = auStack_38;
  piStack_5c = (int *)auStack_3c;
  pcStack_60 = acStack_30;
  iVar6 = 0;
  uVar5 = 0x10;
  uVar4 = (**(code **)(DAT_102acadc + 0x18))
                    (*(undefined4 *)(param_7 + 8),uVar4,*(undefined4 *)(param_7 + 0x30),0x10,0,0x10,
                     -(uint)(local_48 != 0) & (uint)&uStack_c,0,*(undefined4 *)(param_7 + 0xc));
  *(undefined4 *)(param_7 + 4) = uVar4;
  (*(code *)PTR__free_101554bc)(uVar5);
  iVar1 = iStack_2c;
  iVar2 = *(int *)(param_7 + 4);
  if (-1 < iVar2) {
    if ((iVar2 == 0x90313) || (iVar2 == 0x90314)) {
      iVar2 = (**(code **)(DAT_102acadc + 0x20))(*(undefined4 *)(param_7 + 0xc),&pcStack_60);
      *(int *)(param_7 + 4) = iVar2;
      if (iVar2 < 0) {
        return 0x38;
      }
    }
    *(undefined4 *)(param_7 + 0x3c) = unaff_EDI;
    return iVar6;
  }
  uVar4 = FUN_100c8280(*(undefined4 *)(iStack_2c + 8),iVar2);
  FUN_100d8ba0(iVar1,"InitializeSecurityContext failed: %s",uVar4);
  return 0x1b;
}


/* END FUNCTION 0x100f4eb0 */
