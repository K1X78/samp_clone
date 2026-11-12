/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ced40
 * Name: FUN_100ced40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ced40(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int local_1c;
  int iStack_14;
  int iStack_10;
  int *local_8;
  
  iVar6 = *param_1;
  piVar9 = *(int **)(iVar6 + 0x4874);
  local_1c = piVar9[5];
  if ((param_1[0x3c] == 2) && (param_1[param_4 + 0xc1] == 0)) {
    iVar3 = param_1[0x39];
    local_8 = param_1 + 0x94;
    bVar2 = true;
  }
  else {
    local_8 = param_1 + 0x88;
    iVar3 = param_1[0x28];
    bVar2 = false;
  }
  iVar3 = (*(code *)PTR___strdup_101554c4)(iVar3);
  if (iVar3 != 0) {
    if (param_1[0xa3] == 0) {
      iStack_14 = 0;
    }
    else {
      iStack_14 = (*(code *)PTR___strdup_101554c4)(param_1[0x2d]);
      if (iStack_14 == 0) {
        (*(code *)PTR__free_101554bc)(iVar3);
        return 0x1b;
      }
    }
    if (param_1[0xa4] == 0) {
      iStack_10 = -1;
    }
    else {
      iStack_10 = param_1[0x41];
    }
    pbVar4 = *(byte **)(iVar6 + 0x6c);
    if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 0x10) == 0)) {
      pbVar4 = (byte *)(iVar6 + 0x4878);
    }
    else {
      pbVar4 = pbVar4 + 100;
    }
    uVar1 = *(uint *)(iVar6 + 0x4c4);
    uVar7 = 1;
    if (1 < uVar1) {
      iVar8 = 0x50;
      piVar5 = (int *)(*(int *)(iVar6 + 0x4874) + 100);
      do {
        if (piVar5[-2] == 0) break;
        if (*piVar5 < local_1c) {
          local_1c = *(int *)(*(int *)(iVar6 + 0x4874) + 0x14 + iVar8);
          piVar9 = (int *)(*(int *)(iVar6 + 0x4874) + iVar8);
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x50;
        piVar5 = piVar5 + 0x14;
      } while (uVar7 < uVar1);
    }
    if (uVar7 == uVar1) {
      if (piVar9[3] != 0) {
        (**(code **)(PTR_DAT_10155510 + 0x44))(piVar9[3]);
        piVar9[3] = 0;
        piVar9[5] = 0;
        FUN_100ce770(piVar9 + 8);
        (*(code *)PTR__free_101554bc)(*piVar9);
        *piVar9 = 0;
        (*(code *)PTR__free_101554bc)(piVar9[1]);
        piVar9[1] = 0;
      }
    }
    else {
      piVar9 = (int *)(uVar7 * 0x50 + *(int *)(iVar6 + 0x4874));
    }
    piVar9[4] = param_3;
    piVar9[3] = param_2;
    piVar9[5] = *(int *)pbVar4;
    (*(code *)PTR__free_101554bc)(*piVar9);
    (*(code *)PTR__free_101554bc)(piVar9[1]);
    *piVar9 = iVar3;
    piVar9[1] = iStack_14;
    piVar9[7] = iStack_10;
    if (bVar2) {
      iVar6 = param_1[0x3f];
    }
    else {
      iVar6 = param_1[0x40];
    }
    piVar9[6] = iVar6;
    piVar9[2] = *(int *)param_1[200];
    iVar6 = FUN_100ce670(local_8,piVar9 + 8);
    if (iVar6 != 0) {
      return 0;
    }
    piVar9[3] = 0;
    (*(code *)PTR__free_101554bc)(iVar3);
    (*(code *)PTR__free_101554bc)(iStack_14);
  }
  return 0x1b;
}


/* END FUNCTION 0x100ced40 */
