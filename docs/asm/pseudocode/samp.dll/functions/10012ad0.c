/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10012ad0
 * Name: FUN_10012ad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_10012ad0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_1f48 [1000];
  int local_fa8 [1001];
  
  local_fa8[999] = 0x10012ae0;
  pfVar6 = local_1f48;
  for (iVar3 = 1000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 1;
  }
  piVar5 = local_fa8;
  for (iVar3 = 1000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  iVar3 = 0;
  iVar7 = 0;
  if (-1 < *param_1) {
    piVar5 = param_1 + 0x835;
    do {
      if ((((piVar5[-0x834] != 0) && (iVar3 < 1000)) &&
          (iVar8 = *piVar5, *(char *)(iVar8 + 0x49) != '\0')) && (*(char *)(iVar8 + 0x6c) != '\0'))
      {
        local_fa8[iVar3] = iVar8;
        fVar9 = (float10)FUN_1009efd0();
        local_1f48[iVar3] = (float)fVar9;
        iVar3 = iVar3 + 1;
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar7 <= *param_1);
  }
  iVar7 = iVar3 + -1;
  iVar8 = iVar7;
  if (0 < iVar7) {
    do {
      iVar4 = 0;
      if (3 < iVar7) {
        do {
          if (local_1f48[iVar4] < local_1f48[iVar4 + 1]) {
            fVar1 = local_1f48[iVar4 + 1];
            iVar2 = local_fa8[iVar4];
            local_1f48[iVar4 + 1] = local_1f48[iVar4];
            local_1f48[iVar4] = fVar1;
            local_fa8[iVar4] = local_fa8[iVar4 + 1];
            local_fa8[iVar4 + 1] = iVar2;
          }
          if (local_1f48[iVar4 + 1] < local_1f48[iVar4 + 2]) {
            fVar1 = local_1f48[iVar4 + 2];
            iVar2 = local_fa8[iVar4 + 1];
            local_1f48[iVar4 + 2] = local_1f48[iVar4 + 1];
            local_1f48[iVar4 + 1] = fVar1;
            local_fa8[iVar4 + 1] = local_fa8[iVar4 + 2];
            local_fa8[iVar4 + 2] = iVar2;
          }
          if (local_1f48[iVar4 + 2] < local_1f48[iVar4 + 3]) {
            fVar1 = local_1f48[iVar4 + 3];
            iVar2 = local_fa8[iVar4 + 2];
            local_1f48[iVar4 + 3] = local_1f48[iVar4 + 2];
            local_1f48[iVar4 + 2] = fVar1;
            local_fa8[iVar4 + 2] = local_fa8[iVar4 + 3];
            local_fa8[iVar4 + 3] = iVar2;
          }
          if (local_1f48[iVar4 + 3] < local_1f48[iVar4 + 4]) {
            fVar1 = local_1f48[iVar4 + 4];
            iVar2 = local_fa8[iVar4 + 3];
            local_1f48[iVar4 + 4] = local_1f48[iVar4 + 3];
            local_1f48[iVar4 + 3] = fVar1;
            local_fa8[iVar4 + 3] = local_fa8[iVar4 + 4];
            local_fa8[iVar4 + 4] = iVar2;
          }
          iVar4 = iVar4 + 4;
        } while (iVar4 < iVar7 + -3);
      }
      for (; iVar4 < iVar7; iVar4 = iVar4 + 1) {
        if (local_1f48[iVar4] < local_1f48[iVar4 + 1]) {
          fVar1 = local_1f48[iVar4 + 1];
          iVar2 = local_fa8[iVar4];
          local_1f48[iVar4 + 1] = local_1f48[iVar4];
          local_1f48[iVar4] = fVar1;
          local_fa8[iVar4] = local_fa8[iVar4 + 1];
          local_fa8[iVar4 + 1] = iVar2;
        }
      }
      iVar7 = iVar7 + -1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      if (local_fa8[iVar7] != 0) {
        FUN_100a9b80();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  return;
}


/* END FUNCTION 0x10012ad0 */
