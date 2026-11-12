/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e2750
 * Name: FUN_100e2750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e2750(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_4;
  
  iVar7 = param_2 + 0x1e;
  uVar1 = *param_1;
  if ((param_1[0x3c] == 2) && (param_1[(uint)(param_1[0x67] != -1) * 4 + 0x81] != 2)) {
    iVar6 = param_1[0x39];
  }
  else {
    iVar6 = param_1[0x28];
  }
  FUN_100d8ae0(uVar1,"schannel: shutting down SSL/TLS connection with %s port %hu\n",iVar6,
               param_1[0x40]);
  piVar2 = (int *)param_1[iVar7 * 4 + 3];
  if ((*piVar2 != 0) && (piVar2[1] != 0)) {
    local_1c = &local_34;
    local_34 = 1;
    local_14 = 1;
    local_10 = &local_24;
    local_24 = 4;
    local_20 = 2;
    local_18 = 0;
    iVar4 = (**(code **)(DAT_102acadc + 0x28))(piVar2[1],&local_18);
    if (iVar4 != 0) {
      uVar5 = FUN_100c8280(param_1,iVar4);
      FUN_100d8ba0(uStack_4,"schannel: ApplyControlToken failure: %s",uVar5);
    }
    if (iVar6 == 0) {
      return 0x1b;
    }
    puVar3 = (undefined4 *)param_1[iVar7 * 4 + 3];
    local_34 = 0;
    iStack_30 = 0;
    local_14 = 0;
    puStack_c = &stack0xffffffc8;
    local_10 = (undefined4 *)0x1;
    iVar4 = puVar3[1];
    iVar6 = (**(code **)(DAT_102acadc + 0x18))
                      (*puVar3,iVar4,iVar6,puVar3[0xe],0,0,0,0,iVar4,&local_14,puVar3 + 0xf,
                       iVar4 + 8);
    if ((iVar6 == 0) || (iVar6 == 0x90317)) {
      iVar6 = FUN_100d9150(param_1,param_1[param_2 + 0x66],uStack_28,iStack_30,&param_2);
      (**(code **)(DAT_102acadc + 0x40))(uStack_28);
      if ((iVar6 != 0) || (iStack_30 != param_2)) {
        uVar5 = FUN_100c7960(iVar6,param_2);
        FUN_100d8ae0(uVar1,"schannel: failed to send close msg: %s (bytes written: %zd)\n",uVar5);
      }
    }
  }
  if (*(int *)(param_1[iVar7 * 4 + 3] + 4) != 0) {
    FUN_100d8ae0(uVar1,"schannel: clear security context handle\n");
    (**(code **)(DAT_102acadc + 0x24))(*(undefined4 *)(param_1[iVar7 * 4 + 3] + 4));
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1[iVar7 * 4 + 3] + 4));
    *(undefined4 *)(param_1[iVar7 * 4 + 3] + 4) = 0;
  }
  if (*(int *)param_1[iVar7 * 4 + 3] != 0) {
    FUN_100cea10(param_1);
    iVar6 = *(int *)param_1[iVar7 * 4 + 3];
    iVar4 = *(int *)(iVar6 + 0x10) + -1;
    *(int *)(iVar6 + 0x10) = iVar4;
    if (iVar4 == 0) {
      (**(code **)(DAT_102acadc + 0x10))(iVar6);
      (*(code *)PTR__free_101554bc)(iVar6);
    }
    FUN_100cea30(param_1);
    *(undefined4 *)param_1[iVar7 * 4 + 3] = 0;
  }
  if (*(int *)(param_1[iVar7 * 4 + 3] + 0x2c) != 0) {
    (*(code *)PTR__free_101554bc)(*(int *)(param_1[iVar7 * 4 + 3] + 0x2c));
    *(undefined4 *)(param_1[iVar7 * 4 + 3] + 0x2c) = 0;
    *(undefined4 *)(param_1[iVar7 * 4 + 3] + 0x1c) = 0;
    *(undefined4 *)(param_1[iVar7 * 4 + 3] + 0x24) = 0;
    *(undefined4 *)(param_1[iVar7 * 4 + 3] + 0x34) = 0;
  }
  if (*(int *)(param_1[iVar7 * 4 + 3] + 0x30) != 0) {
    (*(code *)PTR__free_101554bc)(*(int *)(param_1[iVar7 * 4 + 3] + 0x30));
    *(undefined4 *)(param_1[iVar7 * 4 + 3] + 0x30) = 0;
    *(undefined4 *)(param_1[iVar7 * 4 + 3] + 0x20) = 0;
    *(undefined4 *)(param_1[iVar7 * 4 + 3] + 0x28) = 0;
  }
  return 0;
}


/* END FUNCTION 0x100e2750 */
