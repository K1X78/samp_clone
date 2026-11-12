/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5320
 * Name: FUN_100e5320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e5320(int *param_1,int *param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  piVar5 = param_2;
  iVar1 = param_2[(int)param_5 + 0x66];
  iVar2 = *(int *)(*param_2 + 0x140);
  puVar8 = (undefined4 *)*param_1;
  piVar3 = (int *)param_1[2];
  piVar9 = (int *)((int)piVar3 - param_4);
  piVar6 = piVar3;
  if ((((*(byte *)(param_2[200] + 0x44) & 1) != 0) || (param_2[0x3c] == 2)) &&
     (param_2[0x60] != 0x14)) {
    if ((int *)0x3fff < piVar3) {
      piVar6 = (int *)0x4000;
    }
    puVar10 = (undefined4 *)(*param_2 + 0x858);
    for (uVar7 = (uint)piVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = (uint)piVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar8 = (undefined4 *)(*param_2 + 0x858);
  }
  param_5 = piVar9;
  param_4 = FUN_100d8660(param_2,iVar1,puVar8,piVar6,&param_2);
  if (param_4 == 0) {
    param_5 = param_2;
    if (piVar9 < param_2) {
      param_5 = piVar9;
    }
    uVar7 = (int)param_2 - (int)param_5;
    if ((*(int *)(*piVar5 + 0x548) != 0) &&
       (FUN_100d89b0(*piVar5,2,puVar8,param_5,piVar5), uVar7 != 0)) {
      FUN_100d89b0(*piVar5,4,(undefined1 *)((int)param_5 + (int)puVar8),uVar7,piVar5);
    }
    *param_3 = *param_3 + (int)param_2;
    if (iVar2 == 0) {
      if (param_2 != piVar3) {
        return 0x37;
      }
      FUN_100e9030(piVar5);
    }
    else {
      uVar4 = *(uint *)(iVar2 + 0x28);
      *(uint *)(iVar2 + 0x28) = uVar4 + uVar7;
      *(uint *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + (uint)CARRY4(uVar4,uVar7);
      if (param_2 != piVar3) {
        iVar1 = *param_1;
        *(undefined4 *)(iVar2 + 0x198) = *(undefined4 *)(*piVar5 + 0x4b10);
        *(undefined4 *)(iVar2 + 0x19c) = *(undefined4 *)(*piVar5 + 0x4b14);
        *(undefined4 *)(iVar2 + 0x1a0) = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)(iVar2 + 0x1a8) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(iVar2 + 0x1ac) = *(undefined4 *)(iVar2 + 0xc);
        *(undefined1 **)(*piVar5 + 0x4b10) = &LAB_100e51d0;
        *(int **)(*piVar5 + 0x4b14) = piVar5;
        *(int **)(iVar2 + 0x1b4) = param_1;
        *(int *)(iVar2 + 0x10) = iVar1 + (int)param_2;
        *(int *)(iVar2 + 8) = (int)piVar3 - (int)param_2;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x1b0) = 1;
        return 0;
      }
      *(undefined4 *)(iVar2 + 0x1b0) = 2;
    }
  }
  (*(code *)PTR__free_101554bc)(*param_1);
  (*(code *)PTR__free_101554bc)(param_1);
  return param_4;
}


/* END FUNCTION 0x100e5320 */
