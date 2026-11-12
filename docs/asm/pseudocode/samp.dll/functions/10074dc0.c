/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10074dc0
 * Name: FUN_10074dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074dc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  undefined *puVar10;
  uint uVar11;
  
  if ((DAT_102aca24 != 0) && (*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x38) != '\0')) {
    FUN_1006c7c0();
    iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    puVar10 = &DAT_1017eb88;
    FUN_10001010(&DAT_1017eb88);
    FUN_1009e950(puVar10);
    iVar2 = *(int *)(iVar1 + 0x22);
    uVar7 = 0;
    if (-1 < iVar2) {
      do {
        if ((((((ushort)uVar7 < 0x3ec) && (*(int *)(iVar1 + 0xfd6 + (uVar7 & 0xffff) * 4) == 1)) &&
             (iVar3 = *(int *)(iVar1 + (uVar7 & 0xffff) * 4 + 0x26), iVar3 != 0)) &&
            ((iVar3 = *(int *)(iVar3 + 8), iVar3 != 0 && (*(int *)(iVar3 + 4) != 0)))) &&
           ((*(char *)(iVar3 + 0x1a) != '\0' &&
            ((*(int *)(iVar3 + 0x10) != 0 &&
             (fVar8 = (float10)FUN_1009efd0(),
             fVar9 = (float10)*(float *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x27),
             fVar8 < fVar9 != (fVar8 == fVar9))))))) {
          if ((*(char *)(iVar3 + 0x1a) == '\x13') &&
             ((*(int *)(iVar3 + 8) != 0 && (iVar4 = FUN_100b7940(), iVar4 != 0)))) {
            FUN_1009e950(&DAT_1017e988);
            DAT_1017ebcc = DAT_1017e9b8;
            DAT_1017ebd0 = DAT_1017e9bc;
            DAT_1017ebd4 = DAT_1017e9c0;
          }
          else {
            iVar4 = FUN_1009f210();
            if (iVar4 == 0) goto LAB_1007501a;
            DAT_1017ebcc = 0.0;
            DAT_1017ebd0 = 0.0;
            DAT_1017ebd4 = 0.0;
            FUN_100ae080(8,&DAT_1017ebcc);
          }
          _DAT_1017ebf4 = DAT_1017ebcc;
          _DAT_1017ebf8 = DAT_1017ebd0;
          _DAT_1017ebfc = DAT_1017ebd4;
          iVar4 = FUN_1009c400();
          iVar6 = 0;
          if (*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x2f) != '\0') {
            iVar6 = FUN_100b1f10(&DAT_1011c7a4,(double)_DAT_1017ebf4,(double)_DAT_1017ebf8,
                                 (double)_DAT_1017ebfc,(double)*(float *)(iVar4 + 0xc),
                                 (double)*(float *)(iVar4 + 0x10),(double)*(float *)(iVar4 + 0x14),1
                                 ,0,0,1,0);
          }
          if ((*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x2f) == '\0') || (iVar6 != 0)) {
            uVar11 = uVar7;
            uVar5 = FUN_100170d0(uVar7);
            _sprintf(&DAT_1017eb08,"%s (%d)",uVar5,uVar11);
            if (*(int *)(iVar3 + 0x1c) == 0) {
              uVar5 = FUN_10015fd0();
              fVar9 = (float10)FUN_1009efd0(*(undefined1 *)(DAT_102aca24 + 0x234),uVar5);
              FUN_10015e30((float)fVar9);
              FUN_1006c7e0();
            }
          }
        }
LAB_1007501a:
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 <= iVar2);
    }
    FUN_1006c7d0();
  }
  return;
}


/* END FUNCTION 0x10074dc0 */
