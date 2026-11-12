/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00437170
 * Name: FUN_00437170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00437170(int *param_1,undefined4 *param_2,void *param_3,uint param_4,uint param_5,int *param_6,
            uint *param_7,uint *param_8)

{
  double dVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  param_7[3] = 0;
  param_7[4] = 0;
  param_7[5] = 0;
  param_7[6] = 0;
  param_7[7] = 0;
  param_7[8] = 0;
  param_7[9] = 0;
  *param_7 = 0x8000000;
  puVar5 = (uint *)*param_8;
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)FUN_0041d440(param_1,(int)param_2,(int)param_3,param_6);
    *param_8 = (uint)puVar5;
    if (puVar5 == (uint *)0x0) {
      return;
    }
  }
  puVar2 = (undefined4 *)puVar5[4];
  iVar8 = 0;
  if (0 < (int)*puVar5) {
    iVar6 = puVar5[1] + 5;
    do {
      *(bool *)iVar6 =
           (*(uint *)(param_2[7] + 0x18 + *(int *)(iVar6 + 3) * 0x28) & param_4) == 0 &&
           (*(uint *)(param_2[7] + 0x1c + *(int *)(iVar6 + 3) * 0x28) & param_5) == 0;
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar8 < (int)*puVar5);
  }
  puVar9 = puVar2;
  for (iVar8 = (*puVar5 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  if (puVar5[7] != 0) {
    FUN_004080d0(puVar5[6]);
  }
  puVar5[10] = 0xa2879f2e;
  puVar5[0xb] = 0x546d42ae;
  uVar3 = puVar5[2];
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  if (param_6 == (int *)0x0) {
    puVar5[2] = 0;
  }
  iVar8 = FUN_0041d580();
  if (iVar8 == 0) {
    iVar8 = 0;
    if (0 < (int)*puVar5) {
      piVar7 = (int *)(puVar5[1] + 8);
      do {
        if (0 < (int)puVar2[iVar8 * 2]) {
          iVar6 = *piVar7;
          iVar4 = param_2[7];
          param_7[8] = param_7[8] | *(uint *)(iVar4 + 0x18 + iVar6 * 0x28);
          param_7[9] = param_7[9] | *(uint *)(iVar4 + 0x1c + iVar6 * 0x28);
        }
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 3;
      } while (iVar8 < (int)*puVar5);
    }
    dVar1 = *(double *)(puVar5 + 10);
    fVar10 = (float10)dVar1;
    if ((param_6 != (int *)0x0) && (puVar5[8] == 0)) {
      fVar10 = FUN_00410820(dVar1);
      fVar10 = (fVar10 + (float10)1.0) * (float10)dVar1;
    }
    if ((float10)5e+98 < fVar10) {
      fVar10 = (float10)5e+98;
    }
    *(double *)(param_7 + 4) = (double)fVar10;
    param_7[2] = (uint)puVar5;
    if (puVar5[8] != 0) {
      *param_7 = *param_7 | 0x1000000;
    }
    param_7[1] = 0;
    puVar5[2] = uVar3;
    FUN_00436f60(param_3,param_1,param_2,(int)param_3,param_4,param_5,(int)param_6,param_7);
  }
  return;
}


/* END FUNCTION 0x00437170 */
