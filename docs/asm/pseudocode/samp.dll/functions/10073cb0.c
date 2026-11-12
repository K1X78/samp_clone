/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073cb0
 * Name: FUN_10073cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073cb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  undefined *puVar11;
  
  if ((DAT_102aca24 != 0) && (*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x38) != '\0')) {
    iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    puVar11 = &DAT_1017eb88;
    FUN_10001010(&DAT_1017eb88);
    FUN_1009e950(puVar11);
    FUN_1006d0f0();
    iVar2 = *(int *)(iVar1 + 0x22);
    uVar8 = 0;
    if (-1 < iVar2) {
      do {
        if (((((ushort)uVar8 < 0x3ec) && (*(int *)(iVar1 + 0xfd6 + (uVar8 & 0xffff) * 4) == 1)) &&
            (iVar3 = *(int *)(iVar1 + (uVar8 & 0xffff) * 4 + 0x26), iVar3 != 0)) &&
           (((iVar3 = *(int *)(iVar3 + 8), iVar3 != 0 && (*(int *)(iVar3 + 4) != 0)) &&
            ((*(char *)(iVar3 + 0x1a) != '\0' &&
             ((*(int *)(iVar3 + 0x10) != 0 &&
              (fVar9 = (float10)FUN_1009efd0(),
              fVar10 = (float10)*(float *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x27),
              fVar9 < fVar10 != (fVar9 == fVar10))))))))) {
          if ((*(char *)(iVar3 + 0x1a) == '\x13') &&
             ((*(int *)(iVar3 + 8) != 0 && (iVar6 = FUN_100b7940(), iVar6 != 0)))) {
            FUN_1009e950(&DAT_1017e988);
            DAT_1017ebcc = DAT_1017e9b8;
            DAT_1017ebd0 = DAT_1017e9bc;
            DAT_1017ebd4 = DAT_1017e9c0;
          }
          else {
            iVar6 = FUN_1009f210();
            if (iVar6 == 0) goto LAB_10073ee9;
            DAT_1017ebcc = 0.0;
            DAT_1017ebd0 = 0.0;
            DAT_1017ebd4 = 0.0;
            FUN_100ae080(8,&DAT_1017ebcc);
          }
          _DAT_1017ebf4 = DAT_1017ebcc;
          _DAT_1017ebf8 = DAT_1017ebd0;
          _DAT_1017ebfc = DAT_1017ebd4;
          iVar6 = FUN_1009c400();
          iVar7 = 0;
          if (*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x2f) != '\0') {
            iVar7 = FUN_100b1f10(&DAT_1011c7a4,(double)_DAT_1017ebf4,(double)_DAT_1017ebf8,
                                 (double)_DAT_1017ebfc,(double)*(float *)(iVar6 + 0xc),
                                 (double)*(float *)(iVar6 + 0x10),(double)*(float *)(iVar6 + 0x14),1
                                 ,0,0,1,0);
          }
          if (((*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x2f) == '\0') || (iVar7 != 0)) &&
             (*(int *)(iVar3 + 0x1c) == 0)) {
            uVar4 = *(undefined4 *)(iVar3 + 0x1b0);
            uVar5 = *(undefined4 *)(iVar3 + 0x1ac);
            fVar10 = (float10)FUN_1009efd0();
            FUN_1006cae0(&DAT_1017ebf4,uVar4,uVar5,(float)fVar10);
          }
        }
LAB_10073ee9:
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 <= iVar2);
    }
    FUN_1006c790();
  }
  return;
}


/* END FUNCTION 0x10073cb0 */
