/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f3080
 * Name: FUN_100f3080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f3080(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  int local_144;
  undefined1 local_140 [4];
  int iStack_13c;
  int iStack_138;
  byte *pbStack_128;
  byte *pbStack_124;
  char *pcStack_114;
  char *pcStack_110;
  undefined1 uStack_10b;
  int iStack_108;
  char *pcStack_ec;
  char *pcStack_e8;
  undefined1 uStack_e3;
  int iStack_e0;
  undefined1 auStack_dc [24];
  char *pcStack_c4;
  char *pcStack_c0;
  undefined1 uStack_bb;
  int iStack_b8;
  char *pcStack_b0;
  char *pcStack_ac;
  undefined1 uStack_a7;
  int iStack_a4;
  undefined1 local_a0 [160];
  
  iVar3 = *param_1;
  if ((*(int *)(iVar3 + 0x440) == 0) && (param_2 != 0)) {
    return 0;
  }
  local_144 = iVar3;
  iVar1 = FUN_100f2950(local_140,param_3,param_4);
  if (iVar1 != 0) {
    return 0x1b;
  }
  iVar1 = FUN_100f2900(local_a0);
  if (iVar1 == 0) {
    return 0x1b;
  }
  if (*(int *)(iVar3 + 0x440) != 0) {
    FUN_100cf340(iVar3,param_2,"Subject",iVar1);
  }
  if (param_2 == 0) {
    FUN_100d8ae0(iVar3,"%2d Subject: %s\n",0,iVar1);
  }
  (*(code *)PTR__free_101554bc)(iVar1);
  iVar1 = FUN_100f2900(auStack_dc);
  if (iVar1 == 0) {
    return 0x1b;
  }
  if (*(int *)(iVar3 + 0x440) != 0) {
    FUN_100cf340(iVar3,param_2,"Issuer",iVar1);
  }
  if (param_2 == 0) {
    FUN_100d8ae0(iVar3,"   Issuer: %s\n",iVar1);
  }
  (*(code *)PTR__free_101554bc)(iVar1);
  uVar5 = 0;
  for (; pbStack_128 < pbStack_124; pbStack_128 = pbStack_128 + 1) {
    uVar5 = uVar5 << 8 | (uint)*pbStack_128;
  }
  if (*(int *)(iVar3 + 0x440) != 0) {
    iVar1 = FUN_100cd220(&DAT_1012a788,uVar5);
    if (iVar1 == 0) {
      return 0x1b;
    }
    FUN_100cf340(iVar3,param_2,"Version",iVar1);
    (*(code *)PTR__free_101554bc)(iVar1);
  }
  if (param_2 == 0) {
    FUN_100d8ae0(iVar3,"   Version: %lu (0x%lx)\n",uVar5 + 1,uVar5);
  }
  if (iStack_108 != 0) {
    return 0x1b;
  }
  switch(uStack_10b) {
  case 1:
    if ((int)pcStack_110 - (int)pcStack_114 == 1) {
      pcVar2 = "TRUE";
      if (*pcStack_114 == '\0') {
        pcVar2 = "FALSE";
      }
      uVar5 = (*(code *)PTR___strdup_101554c4)(pcVar2);
    }
    else {
      uVar5 = 0;
    }
    break;
  case 2:
  case 10:
    uVar5 = FUN_100f1c90();
    break;
  case 3:
    if (pcStack_114 + 1 <= pcStack_110) goto LAB_100f3298;
    uVar5 = 0;
    break;
  case 4:
LAB_100f3298:
    uVar5 = FUN_100f1c10();
    break;
  case 5:
    uVar5 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
    break;
  case 6:
    uVar5 = FUN_100f20e0(pcStack_114,1);
    break;
  default:
    return 0x1b;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    iVar1 = FUN_100f1cf0(&uStack_150,pcStack_110);
    uVar5 = (iVar1 < 0) - 1 & uStack_150;
    break;
  case 0x17:
    uVar5 = FUN_100f2250();
    break;
  case 0x18:
    uVar5 = FUN_100f2160(pcStack_110);
  }
  if (uVar5 == 0) {
    return 0x1b;
  }
  if (*(int *)(iVar3 + 0x440) != 0) {
    FUN_100cf340(iVar3,param_2,"Serial Number",uVar5);
  }
  if (param_2 == 0) {
    FUN_100d8ae0(iVar3,"   Serial Number: %s\n",uVar5);
  }
  (*(code *)PTR__free_101554bc)(uVar5);
  iVar1 = FUN_100f2c70();
  if (iVar1 == 0) {
    return 0x1b;
  }
  if (*(int *)(iVar3 + 0x440) != 0) {
    FUN_100cf340(iVar3,param_2,"Signature Algorithm",iVar1);
  }
  if (param_2 == 0) {
    FUN_100d8ae0(iVar3,"   Signature Algorithm: %s\n",iVar1);
  }
  (*(code *)PTR__free_101554bc)(iVar1);
  if (iStack_b8 != 0) {
    return 0x1b;
  }
  switch(uStack_bb) {
  case 1:
    if ((int)pcStack_c0 - (int)pcStack_c4 == 1) {
      pcVar2 = "TRUE";
      if (*pcStack_c4 == '\0') {
        pcVar2 = "FALSE";
      }
      uVar5 = (*(code *)PTR___strdup_101554c4)(pcVar2);
    }
    else {
      uVar5 = 0;
    }
    break;
  case 2:
  case 10:
    uVar5 = FUN_100f1c90();
    break;
  case 3:
    if (pcStack_c4 + 1 <= pcStack_c0) goto LAB_100f3472;
    uVar5 = 0;
    break;
  case 4:
LAB_100f3472:
    uVar5 = FUN_100f1c10();
    break;
  case 5:
    uVar5 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
    break;
  case 6:
    uVar5 = FUN_100f20e0(pcStack_c4,1);
    break;
  default:
    return 0x1b;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    iVar1 = FUN_100f1cf0(&uStack_150,pcStack_c0);
    uVar5 = (iVar1 < 0) - 1 & uStack_150;
    break;
  case 0x17:
    uVar5 = FUN_100f2250();
    break;
  case 0x18:
    uVar5 = FUN_100f2160(pcStack_c0);
  }
  if (uVar5 == 0) {
    return 0x1b;
  }
  if (*(int *)(iVar3 + 0x440) != 0) {
    FUN_100cf340(iVar3,param_2,"Start Date",uVar5);
  }
  if (param_2 == 0) {
    FUN_100d8ae0(iVar3,"   Start Date: %s\n",uVar5);
  }
  (*(code *)PTR__free_101554bc)(uVar5);
  if (iStack_a4 != 0) {
    return 0x1b;
  }
  switch(uStack_a7) {
  case 1:
    if ((int)pcStack_ac - (int)pcStack_b0 == 1) {
      pcVar2 = "TRUE";
      if (*pcStack_b0 == '\0') {
        pcVar2 = "FALSE";
      }
      uVar5 = (*(code *)PTR___strdup_101554c4)(pcVar2);
    }
    else {
      uVar5 = 0;
    }
    break;
  case 2:
  case 10:
    uVar5 = FUN_100f1c90();
    break;
  case 3:
    if (pcStack_b0 + 1 <= pcStack_ac) goto LAB_100f3615;
    uVar5 = 0;
    break;
  case 4:
LAB_100f3615:
    uVar5 = FUN_100f1c10();
    break;
  case 5:
    uVar5 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
    break;
  case 6:
    uVar5 = FUN_100f20e0(pcStack_b0,1);
    break;
  default:
    return 0x1b;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    iVar1 = FUN_100f1cf0(&uStack_150,pcStack_ac);
    uVar5 = (iVar1 < 0) - 1 & uStack_150;
    break;
  case 0x17:
    uVar5 = FUN_100f2250();
    break;
  case 0x18:
    uVar5 = FUN_100f2160(pcStack_ac);
  }
  if (uVar5 == 0) {
    return 0x1b;
  }
  if (*(int *)(iVar3 + 0x440) != 0) {
    FUN_100cf340(iVar3,param_2,"Expire Date",uVar5);
  }
  if (param_2 == 0) {
    FUN_100d8ae0(iVar3,"   Expire Date: %s\n",uVar5);
  }
  (*(code *)PTR__free_101554bc)(uVar5);
  iVar1 = FUN_100f2c70();
  if (iVar1 == 0) {
    return 0x1b;
  }
  if (*(int *)(iVar3 + 0x440) != 0) {
    FUN_100cf340(iVar3,param_2,"Public Key Algorithm",iVar1);
  }
  if (param_2 == 0) {
    FUN_100d8ae0(iVar3,"   Public Key Algorithm: %s\n",iVar1);
  }
  FUN_100f2e60(iVar1);
  (*(code *)PTR__free_101554bc)(iVar1);
  if (iStack_e0 != 0) {
    return 0x1b;
  }
  switch(uStack_e3) {
  case 1:
    if ((int)pcStack_e8 - (int)pcStack_ec == 1) {
      pcVar2 = "TRUE";
      if (*pcStack_ec == '\0') {
        pcVar2 = "FALSE";
      }
      uVar5 = (*(code *)PTR___strdup_101554c4)(pcVar2);
    }
    else {
      uVar5 = 0;
    }
    break;
  case 2:
  case 10:
    uVar5 = FUN_100f1c90();
    break;
  case 3:
    if (pcStack_ec + 1 <= pcStack_e8) goto LAB_100f380e;
    uVar5 = 0;
    break;
  case 4:
LAB_100f380e:
    uVar5 = FUN_100f1c10();
    break;
  case 5:
    uVar5 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
    break;
  case 6:
    uVar5 = FUN_100f20e0(pcStack_ec,1);
    break;
  default:
    goto switchD_100f3220_caseD_7;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    iVar1 = FUN_100f1cf0(&uStack_150,pcStack_e8);
    uVar5 = (iVar1 < 0) - 1 & uStack_150;
    break;
  case 0x17:
    uVar5 = FUN_100f2250();
    break;
  case 0x18:
    uVar5 = FUN_100f2160(pcStack_e8);
  }
  if (uVar5 != 0) {
    if (*(int *)(iVar3 + 0x440) != 0) {
      FUN_100cf340(iVar3,param_2,"Signature",uVar5);
    }
    if (param_2 == 0) {
      FUN_100d8ae0(iVar3,"   Signature: %s\n",uVar5);
    }
    (*(code *)PTR__free_101554bc)(uVar5);
    iVar3 = FUN_100e3f20(iVar3,iStack_13c,iStack_138 - iStack_13c,&uStack_14c,&uStack_148);
    if (iVar3 == 0) {
      iVar3 = (*(code *)PTR__malloc_101554b8)((uStack_148 + 0x3f >> 6) + uStack_148 + 0x37);
      if (iVar3 == 0) {
        (*(code *)PTR__free_101554bc)(uStack_14c);
        return 0x1b;
      }
      iVar1 = FUN_100f2c00();
      uVar5 = 0;
      if (uStack_148 != 0) {
        do {
          iVar4 = FUN_100f2c00();
          iVar1 = iVar1 + iVar4;
          uVar5 = uVar5 + 0x40;
        } while (uVar5 < uStack_148);
      }
      iVar4 = FUN_100f2c00();
      *(undefined1 *)(iVar4 + iVar3 + iVar1) = 0;
      (*(code *)PTR__free_101554bc)(uStack_14c);
      iVar1 = local_144;
      if (*(int *)(local_144 + 0x440) != 0) {
        FUN_100cf340(local_144,param_2,&DAT_1012a634,iVar3);
      }
      if (param_2 == 0) {
        FUN_100d8ae0(iVar1,&DAT_101251c4,iVar3);
      }
      (*(code *)PTR__free_101554bc)(iVar3);
      iVar3 = 0;
    }
    return iVar3;
  }
switchD_100f3220_caseD_7:
  return 0x1b;
}


/* END FUNCTION 0x100f3080 */
