/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f3d60
 * Name: FUN_100f3d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f3d60(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 **ppuVar5;
  undefined4 ***pppuVar6;
  char *unaff_retaddr;
  undefined4 **ppuVar7;
  undefined4 uVar8;
  undefined4 ***pppuStack_c8;
  undefined1 *puStack_c4;
  int **ppiStack_c0;
  char **ppcStack_bc;
  undefined4 uStack_b8;
  char *pcStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char **ppcStack_a8;
  undefined4 uStack_a4;
  undefined4 **ppuStack_a0;
  char *pcStack_9c;
  undefined4 **ppuStack_98;
  char *pcStack_8c;
  char **ppcStack_88;
  undefined4 **ppuStack_84;
  char *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  int local_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char **ppcStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char *apcStack_28 [8];
  int iStack_8;
  
  local_74 = (undefined4 *)0x0;
  local_78 = (char *)0x0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (int)pcVar2 - (int)(param_2 + 1);
  if ((local_6c != 0) && (*param_2 != '=')) {
    ppuStack_84 = &local_74;
    ppcStack_88 = &local_78;
    pcStack_8c = param_2;
    iVar3 = FUN_100e3c50();
    if (iVar3 == 0) {
      if (local_78 == (char *)0x0) goto LAB_100f3db5;
      ppuStack_84 = &local_70;
      ppcStack_88 = (char **)0x1012a7e0;
      pcStack_8c = (char *)0x100f3de8;
      iVar3 = (**(code **)(DAT_102acadc + 0x44))();
      if (iVar3 != 0) {
        (*(code *)PTR__free_101554bc)();
        return 4;
      }
      local_74 = *(undefined4 **)(local_78 + 8);
      pcStack_8c = local_78;
      (**(code **)(DAT_102acadc + 0x40))();
      puVar4 = (undefined1 *)(*(code *)PTR__malloc_101554b8)();
      if (puVar4 == (undefined1 *)0x0) {
        (*(code *)PTR__free_101554bc)();
        return 0x1b;
      }
      ppuStack_98 = *(undefined4 ***)(*(int *)(iStack_8 + 8) + 0xa0);
      pcStack_9c = param_2;
      ppuStack_a0 = (undefined4 **)0x100f3e62;
      ppuVar5 = (undefined4 **)FUN_100f8010();
      if (ppuVar5 == (undefined4 **)0x0) {
        ppuStack_98 = (undefined4 **)0x100f3e72;
        (*(code *)PTR__free_101554bc)();
        ppuStack_98 = ppuStack_84;
        pcStack_9c = (char *)0x100f3e7d;
        (*(code *)PTR__free_101554bc)();
        return 0x1b;
      }
      if ((unaff_retaddr == (char *)0x0) || (*unaff_retaddr == '\0')) {
        pppuVar6 = (undefined4 ***)0x0;
      }
      else {
        ppuStack_98 = (undefined4 **)apcStack_28;
        pcStack_9c = (char *)param_1;
        uStack_a4 = 0x100f3eb0;
        iVar3 = FUN_100cd4b0();
        if (iVar3 != 0) {
          pcStack_9c = (char *)0x100f3ec0;
          ppuStack_98 = ppuVar5;
          (*(code *)PTR__free_101554bc)();
          ppuStack_a0 = (undefined4 **)0x100f3ec7;
          pcStack_9c = puVar4;
          (*(code *)PTR__free_101554bc)();
          ppuStack_a0 = ppuStack_84;
          uStack_a4 = 0x100f3ed2;
          (*(code *)PTR__free_101554bc)();
          return iVar3;
        }
        pppuVar6 = (undefined4 ***)apcStack_28;
      }
      ppuStack_98 = (undefined4 **)&puStack_68;
      pcStack_9c = (char *)&local_70;
      ppuStack_a0 = (undefined4 **)0x0;
      uStack_a4 = 0;
      uStack_ac = 0;
      uStack_b0 = 2;
      pcStack_b4 = "WDigest";
      uStack_b8 = 0;
      ppcStack_bc = (char **)0x100f3f05;
      ppcStack_a8 = (char **)pppuVar6;
      iVar3 = (**(code **)(DAT_102acadc + 0xc))();
      if (iVar3 != 0) {
        ppiStack_c0 = (int **)0x100f3f0f;
        ppcStack_bc = (char **)pppuVar6;
        FUN_100cd5c0();
        puStack_c4 = (undefined1 *)0x100f3f16;
        ppiStack_c0 = ppuVar5;
        (*(code *)PTR__free_101554bc)();
        pppuStack_c8 = (undefined4 ***)0x100f3f1d;
        puStack_c4 = puVar4;
        (*(code *)PTR__free_101554bc)();
        pppuStack_c8 = (undefined4 ***)ppcStack_a8;
        (*(code *)PTR__free_101554bc)();
        return 0x43;
      }
      uStack_58 = 0;
      puStack_50 = &uStack_64;
      ppcStack_bc = (char **)uStack_a4;
      uStack_54 = 1;
      uStack_60 = 2;
      ppcStack_5c = ppcStack_a8;
      ppiStack_c0 = (int **)0x100f3f67;
      uStack_64 = FUN_100d9a10();
      local_74 = &local_70;
      ppiStack_c0 = (int **)pcStack_9c;
      local_78 = (char *)0x1;
      local_6c = 2;
      puStack_c4 = (undefined1 *)0x100f3f95;
      puStack_68 = puVar4;
      local_70 = (undefined4 *)FUN_100d9a10();
      ppcStack_bc = &pcStack_8c;
      ppiStack_c0 = (int **)&ppuStack_98;
      puStack_c4 = &stack0xffffff84;
      pppuStack_c8 = &ppuStack_84;
      uVar8 = 0;
      ppuVar7 = ppuVar5;
      iVar3 = (**(code **)(DAT_102acadc + 0x18))(&stack0xffffff6c,0,ppuVar5,0,0,0,&uStack_58,0);
      if ((iVar3 == 0x90313) || (iVar3 == 0x90314)) {
        (**(code **)(DAT_102acadc + 0x20))(&puStack_c4,&uStack_ac);
      }
      else if ((iVar3 != 0) && (iVar3 != 0x90312)) {
        (**(code **)(DAT_102acadc + 0x10))(&puStack_c4);
        FUN_100cd5c0(pppuVar6);
        (*(code *)PTR__free_101554bc)(ppuVar5);
        (*(code *)PTR__free_101554bc)(puVar4);
        (*(code *)PTR__free_101554bc)(uVar8);
        return 0x38;
      }
      iVar3 = FUN_100e3f20(ppcStack_5c,puVar4,ppuStack_a0,uStack_48,uStack_44);
      (**(code **)(DAT_102acadc + 0x24))(&pcStack_b4);
      (**(code **)(DAT_102acadc + 0x10))(&pppuStack_c8);
      FUN_100cd5c0(pppuVar6);
      (*(code *)PTR__free_101554bc)(ppuVar5);
      (*(code *)PTR__free_101554bc)(puVar4);
      (*(code *)PTR__free_101554bc)(ppuVar7);
    }
    return iVar3;
  }
LAB_100f3db5:
  ppuStack_84 = (undefined4 **)0x1012a7e8;
  ppcStack_88 = (char **)param_1;
  pcStack_8c = (char *)0x100f3dc7;
  FUN_100d8ae0();
  return 0x3d;
}


/* END FUNCTION 0x100f3d60 */
