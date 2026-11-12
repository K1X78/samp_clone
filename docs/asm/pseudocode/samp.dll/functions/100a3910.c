/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a3910
 * Name: FUN_100a3910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a3910(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar4 = (int *)FUN_100b3860();
  bVar3 = false;
  if (DAT_102aca24 == 0) {
    return 0;
  }
  piVar2 = (int *)*param_1;
  if (((piVar2 != piVar4) && (param_2 != (int *)0x0)) && (*param_2 == 0x86c0a8)) {
    return 1;
  }
  if (param_2 == piVar4) {
    bVar3 = true;
  }
  else if (piVar2 != piVar4) {
    return 0;
  }
  iVar6 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if (bVar3) {
    iVar7 = *(int *)(*(int *)(iVar6 + 0x1e) + 0x2de);
    if (iVar7 != 0) {
      if (*(int **)(iVar7 + 0x40) == piVar2) {
        return 1;
      }
      if (param_1[3] == 0x36) {
        return 1;
      }
    }
    uVar5 = FUN_100a3840(piVar2);
    FUN_100066b0(uVar5,param_1[1],param_1[3],param_1[2]);
  }
  else {
    uVar5 = FUN_100a3840(param_2);
    if ((short)uVar5 == -1) {
      uVar8 = FUN_100a38e0(param_2);
      if ((short)uVar8 != -1) {
        FUN_100068d0(uVar8,param_1[1],param_1[3],param_1[2]);
        return 1;
      }
    }
    else {
      FUN_100067c0(uVar5,param_1[1],param_1[3],param_1[2]);
      iVar7 = FUN_100010f0(uVar5);
      if (*(int *)(iVar7 + 0x1c) != 0) {
        return 1;
      }
    }
  }
  if (((*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x22) != '\0') &&
      (cVar1 = *(char *)(*(int *)(iVar6 + 0x1e) + 0x130), cVar1 != -1)) &&
     (((short)uVar5 != -1 && (iVar6 = FUN_100010f0(uVar5), *(char *)(iVar6 + 0x19) == cVar1)))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100a3910 */
