/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0f90
 * Name: FUN_100e0f90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e0f90(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  uint uStack_a4;
  int *piStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  int *piStack_94;
  int *piStack_90;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined1 local_6c [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  int local_38 [4];
  int iStack_28;
  undefined4 local_18;
  uint local_8;
  
  iVar4 = param_2 + 0x1e;
  piVar5 = (int *)*param_1;
  local_74 = 0xffffffff;
  local_78 = 0;
  if ((param_1[0x3c] == 2) && (param_1[(uint)(param_1[0x67] != -1) * 4 + 0x81] != 2)) {
    local_7c = param_1[0x39];
  }
  else {
    local_7c = param_1[0x28];
  }
  piStack_90 = (int *)param_1[0x40];
  piStack_94 = (int *)local_7c;
  pcStack_98 = "schannel: SSL/TLS connection with %s port %hu (step 1/3)\n";
  piStack_a0 = (int *)0x100e1014;
  pcStack_9c = (char *)piVar5;
  local_70 = (int)piVar5;
  FUN_100d8ae0();
  piStack_a0 = (int *)0x1;
  uStack_a4 = 2;
  iVar2 = FUN_100df9f0(5,1);
  if (iVar2 != 0) {
    piStack_90 = (int *)0x10126100;
    pcStack_98 = (char *)0x100e1033;
    piStack_94 = piVar5;
    FUN_100d8ae0();
  }
  *(undefined4 *)(param_1[iVar4 * 4 + 3] + 0x4c) = 0;
  *(undefined4 *)param_1[iVar4 * 4 + 3] = 0;
  if ((param_1[0x3c] == 2) && (param_1[(uint)(param_1[0x67] != -1) * 4 + 0x81] != 2)) {
    iVar2 = piVar5[0x11c];
  }
  else {
    iVar2 = piVar5[0x102];
  }
  if (iVar2 != 0) {
    piStack_90 = param_1;
    piStack_94 = (int *)0x100e1082;
    FUN_100cea10();
    piStack_94 = (int *)param_2;
    pcStack_98 = (char *)0x0;
    pcStack_9c = (char *)&local_78;
    piStack_a0 = param_1;
    uStack_a4 = 0x100e1096;
    iVar2 = FUN_100cea50();
    if (iVar2 == 0) {
      piStack_90 = (int *)0x101260d0;
      *(undefined4 *)param_1[iVar4 * 4 + 3] = local_78;
      pcStack_98 = (char *)0x100e10b1;
      piStack_94 = piVar5;
      FUN_100d8ae0();
      *(int *)(*(int *)param_1[iVar4 * 4 + 3] + 0x10) =
           *(int *)(*(int *)param_1[iVar4 * 4 + 3] + 0x10) + 1;
      pcStack_98 = *(char **)(*(int *)param_1[iVar4 * 4 + 3] + 0x10);
      pcStack_9c = "schannel: incremented credential handle refcount = %d\n";
      uStack_a4 = 0x100e10cd;
      piStack_a0 = piVar5;
      FUN_100d8ae0();
    }
    piStack_90 = param_1;
    piStack_94 = (int *)0x100e10d6;
    FUN_100cea30();
  }
  if (*(int *)param_1[iVar4 * 4 + 3] == 0) {
    piVar6 = local_38;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    local_38[0] = 4;
    if (param_1[0x8a] == 0) {
      local_8 = 0x1808;
LAB_100e1148:
      piStack_90 = (int *)0x10126028;
    }
    else {
      local_8 = (-(uint)(piVar5[0x10a] != 0) & 0x1600) + 0x220;
      if (piVar5[0x10a] != 0) goto LAB_100e1148;
      piStack_90 = (int *)0x10126064;
    }
    pcStack_98 = (char *)0x100e1153;
    piStack_94 = piVar5;
    FUN_100d8ae0();
    if (param_1[0x8b] == 0) {
      local_8 = local_8 | 4;
      piStack_90 = (int *)0x10125fa0;
      pcStack_98 = (char *)0x100e117c;
      piStack_94 = piVar5;
      FUN_100d8ae0();
    }
    switch(param_1[0x88]) {
    case 0:
    case 1:
      local_18 = 0xa80;
      break;
    case 2:
      local_18 = 8;
      break;
    case 3:
      local_18 = 0x20;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      piStack_90 = (int *)0x100e11aa;
      iVar2 = FUN_100e0e90();
      piVar5 = (int *)local_70;
      if (iVar2 != 0) {
        return iVar2;
      }
      break;
    default:
      piStack_90 = (int *)0x10125ed8;
      pcStack_98 = (char *)0x100e1293;
      piStack_94 = piVar5;
      FUN_100d8ba0();
      return 0x23;
    }
    piStack_90 = (int *)0x18;
    piStack_94 = (int *)0x100e11be;
    uVar3 = (*(code *)PTR__malloc_101554b8)();
    *(undefined4 *)param_1[iVar4 * 4 + 3] = uVar3;
    puVar1 = *(undefined4 **)param_1[iVar4 * 4 + 3];
    if (puVar1 == (undefined4 *)0x0) goto LAB_100e132d;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(*(int *)param_1[iVar4 * 4 + 3] + 0x10) = 1;
    piStack_94 = *(int **)param_1[iVar4 * 4 + 3];
    piStack_90 = (int *)((int)piStack_94 + 8);
    pcStack_98 = (char *)0x0;
    pcStack_9c = (char *)0x0;
    piStack_a0 = local_38;
    uStack_a4 = 0;
    piStack_90 = (int *)(**(code **)(DAT_102acadc + 0xc))
                                  (0,"Microsoft Unified Security Protocol Provider",2);
    if (piStack_90 != (int *)0x0) {
      if (piStack_90 == (int *)0x80090322) {
        piStack_94 = param_1;
        pcStack_98 = (char *)0x100e122f;
        pcStack_98 = (char *)FUN_100c8280();
        pcStack_9c = "schannel: SNI or certificate check failed: %s";
      }
      else {
        piStack_94 = param_1;
        pcStack_98 = (char *)0x100e1254;
        pcStack_98 = (char *)FUN_100c8280();
        pcStack_9c = "schannel: AcquireCredentialsHandle failed: %s";
      }
      uStack_a4 = 0x100e1260;
      piStack_a0 = piVar5;
      FUN_100d8ba0();
      piStack_90 = *(int **)param_1[iVar4 * 4 + 3];
      piStack_94 = (int *)0x100e126f;
      (*(code *)PTR__free_101554bc)();
      *(undefined4 *)param_1[iVar4 * 4 + 3] = 0;
      return 0x23;
    }
  }
  piStack_90 = (int *)local_6c;
  piStack_94 = (int *)local_7c;
  pcStack_98 = (char *)0x2;
  pcStack_9c = (char *)0x100e12b6;
  iVar2 = FUN_100e0e40();
  if (iVar2 != 0) {
    piStack_90 = (int *)0x10125e9c;
    pcStack_98 = (char *)0x100e12c8;
    piStack_94 = piVar5;
    FUN_100d8ae0();
  }
  uStack_40 = 1;
  uStack_4c = 1;
  puStack_3c = &uStack_5c;
  puStack_48 = &uStack_68;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_44 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  piStack_90 = (int *)0x10;
  *(undefined4 *)(param_1[iVar4 * 4 + 3] + 0x38) = 0x811c;
  piStack_94 = (int *)0x100e131a;
  uVar3 = (*(code *)PTR__malloc_101554b8)();
  *(undefined4 *)(param_1[iVar4 * 4 + 3] + 4) = uVar3;
  puVar1 = *(undefined4 **)(param_1[iVar4 * 4 + 3] + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    if (local_7c == 0) {
      return 0x1b;
    }
    puVar1 = (undefined4 *)param_1[iVar4 * 4 + 3];
    pcStack_9c = (char *)puVar1[1];
    piStack_90 = (int *)((int)pcStack_9c + 8);
    piStack_94 = puVar1 + 0xf;
    pcStack_98 = (char *)&uStack_50;
    piStack_a0 = (int *)0x0;
    uStack_a4 = -(uint)(puVar1[0x13] != 0) & (uint)&uStack_44;
    iVar8 = 0;
    iVar2 = (**(code **)(DAT_102acadc + 0x18))(*puVar1,0,local_7c,puVar1[0xe],0);
    if (iVar2 == 0x90312) {
      FUN_100d8ae0(piVar5,"schannel: sending initial handshake data: sending %lu bytes...\n",
                   pcStack_98);
      iVar2 = FUN_100d9150(param_1,param_1[iStack_28 + 0x66],piStack_90,pcStack_98,&uStack_a4);
      (**(code **)(DAT_102acadc + 0x40))(piStack_90);
      if ((iVar2 == 0) && (pcStack_9c == (char *)iVar8)) {
        FUN_100d8ae0(piVar5,"schannel: sent initial handshake data: sent %zd bytes\n",iVar8);
        *(undefined4 *)(param_1[iVar4 * 4 + 3] + 0x40) = 0;
        *(undefined4 *)(param_1[iVar4 * 4 + 3] + 0x44) = 0;
        *(undefined4 *)(param_1[iVar4 * 4 + 3] + 0x48) = 0;
        *(undefined4 *)(param_1[iVar4 * 4 + 3] + 0x34) = 0;
        param_1[iVar4 * 4 + 2] = 1;
        return 0;
      }
      FUN_100d8ba0(piVar5,"schannel: failed to send initial handshake data: sent %zd of %lu bytes",
                   iVar8,pcStack_9c);
      return 0x23;
    }
    if (iVar2 == -0x7ff6fcde) {
      uVar3 = FUN_100c8280(param_1,0x80090322);
      pcVar7 = "schannel: SNI or certificate check failed: %s";
    }
    else {
      uVar3 = FUN_100c8280(param_1,iVar2);
      pcVar7 = "schannel: initial InitializeSecurityContext failed: %s";
    }
    FUN_100d8ba0(piVar5,pcVar7,uVar3);
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1[iVar4 * 4 + 3] + 4));
    *(undefined4 *)(param_1[iVar4 * 4 + 3] + 4) = 0;
    return 0x23;
  }
LAB_100e132d:
  piStack_90 = (int *)0x10125e78;
  pcStack_98 = (char *)0x100e1338;
  piStack_94 = piVar5;
  FUN_100d8ba0();
  return 0x1b;
}


/* END FUNCTION 0x100e0f90 */
