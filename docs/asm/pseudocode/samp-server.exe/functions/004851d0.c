/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004851d0
 * Name: FUN_004851d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004851d0(void *param_1)

{
  ushort uVar1;
  void *this;
  void *this_00;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  void *this_01;
  int iVar12;
  int *piVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  float10 fVar17;
  int local_1c;
  
  this = *(void **)(DAT_004fc438 + 0x20);
  this_00 = *(void **)(DAT_004fc438 + 0xc);
  iVar10 = *(int *)(DAT_004fc438 + 8);
  iVar2 = *(int *)(DAT_004fc438 + 0x10);
  iVar3 = *(int *)(DAT_004fc438 + 0x28);
  if (*(ushort *)((int)param_1 + 0x2d53) < 1000) {
    local_1c = *(int *)(iVar10 + (uint)*(ushort *)((int)param_1 + 0x2d53) * 4);
  }
  else {
    local_1c = 0;
  }
  fVar5 = _DAT_004ebcfc * _DAT_004ebcfc;
  if ((((this_00 != (void *)0x0) && (iVar10 != 0)) && (this != (void *)0x0)) && (iVar2 != 0)) {
    FUN_00484c20((int)param_1);
    iVar16 = *(int *)((int)this_00 + 0x5e94);
    uVar15 = 1;
    if (0 < iVar16) {
      do {
        uVar14 = (ushort)uVar15;
        if (uVar14 < 2000) {
          pfVar11 = *(float **)((int)this_00 + (uVar15 & 0xffff) * 4 + 0x3f54);
          iVar7 = *(int *)((int)this_00 + (uVar15 & 0xffff) * 4 + 0xd4);
        }
        else {
          pfVar11 = (float *)0x0;
          iVar7 = 0;
        }
        if (((pfVar11 == (float *)0x0) || (*(int *)((int)pfVar11 + 0x7a) == 0)) ||
           ((local_1c != iVar7 ||
            ((*(int *)((int)pfVar11 + 0x82) == 0x239 || (*(int *)((int)pfVar11 + 0x82) == 0x23a)))))
           ) {
          if (uVar14 < 2000) {
            cVar6 = *(char *)((uVar15 & 0xffff) + 0x53d + (int)param_1);
LAB_0048531b:
            if (cVar6 != '\0') {
              FUN_00483a20(param_1,uVar15);
            }
          }
        }
        else {
          fVar17 = FUN_004899a0(pfVar11,*(float *)((int)param_1 + 0x2cfd),
                                *(float *)((int)param_1 + 0x2d01));
          if (fVar17 < (float10)fVar5 == (fVar17 == (float10)fVar5)) {
            if (uVar15 != *(ushort *)((int)param_1 + 0x3022)) {
              uVar8 = FUN_00465b90(param_1,uVar14);
              cVar6 = (char)uVar8;
              goto LAB_0048531b;
            }
          }
          else {
            uVar8 = FUN_00465b90(param_1,uVar14);
            if ((char)uVar8 == '\0') {
              FUN_00483aa0(param_1,uVar15,'\0');
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 <= iVar16);
    }
    iVar16 = *(int *)(iVar10 + 0x30d50);
    uVar15 = 0;
    if (-1 < iVar16) {
      do {
        if (uVar15 != *(ushort *)((int)param_1 + 0x2d53)) {
          uVar14 = (ushort)uVar15;
          if (uVar14 < 1000) {
            iVar7 = *(int *)(iVar10 + 0x25d84 + (uVar15 & 0xffff) * 4);
            iVar12 = *(int *)(iVar10 + (uVar15 & 0xffff) * 4);
          }
          else {
            iVar7 = 0;
            iVar12 = 0;
          }
          if ((((iVar7 == 0) || (cVar6 = *(char *)(iVar7 + 0x2f95), cVar6 == '\0')) ||
              (cVar6 == '\t')) || (local_1c != iVar12)) {
            if (uVar14 < 1000) {
              cVar6 = *(char *)((uVar15 & 0xffff) + 0x155 + (int)param_1);
              goto LAB_00485439;
            }
          }
          else {
            if (cVar6 == '\x03') {
              uVar1 = *(ushort *)(iVar7 + 0x3022);
              iVar7 = FUN_00463dc0(this_00,uVar1);
              if ((iVar7 == 0) ||
                 (pfVar11 = (float *)FUN_00467470(this_00,uVar1), pfVar11 == (float *)0x0))
              goto LAB_00485443;
              fVar17 = FUN_004899a0(pfVar11,*(float *)((int)param_1 + 0x2cfd),
                                    *(float *)((int)param_1 + 0x2d01));
            }
            else {
              fVar17 = FUN_00484170(iVar7,*(float *)((int)param_1 + 0x2cfd),
                                    *(float *)((int)param_1 + 0x2d01));
            }
            if (fVar17 < (float10)fVar5 == (fVar17 == (float10)fVar5)) {
              uVar8 = FUN_00465bb0(param_1,uVar14);
              cVar6 = (char)uVar8;
LAB_00485439:
              if (cVar6 != '\0') {
                FUN_00483c10(param_1,uVar15);
              }
            }
            else {
              uVar8 = FUN_00465bb0(param_1,uVar14);
              if ((char)uVar8 == '\0') {
                FUN_00483b80(param_1,uVar14);
              }
            }
          }
        }
LAB_00485443:
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 <= iVar16);
    }
    uVar15 = 0;
    do {
      uVar14 = (ushort)uVar15;
      if (uVar14 < 0x400) {
        if (*(int *)((int)this + (uVar15 & 0xffff) * 4) == 0) {
          if (uVar14 < 0x400) {
            cVar6 = *(char *)((uVar15 & 0xffff) + 0x14dd + (int)param_1);
            goto LAB_00485530;
          }
        }
        else if (*(short *)(((uVar15 & 0xffff) + 0x7d) * 0x21 + (int)this) == -1) {
          uVar9 = FUN_00483600(this,uVar14);
          if ((short)uVar9 != -1) {
            uVar9 = FUN_00483600(this,uVar14);
            uVar8 = FUN_00465b90(param_1,(ushort)uVar9);
            cVar6 = (char)uVar8;
            goto joined_r0x004854d0;
          }
          iVar10 = FUN_004835b0(this,uVar14);
          if ((local_1c != *(int *)(iVar10 + 0x19)) ||
             (fVar4 = *(float *)(iVar10 + 0x14), fVar17 = (float10)FUN_00484130(),
             (float10)fVar4 * (float10)fVar4 < fVar17)) goto LAB_004854a6;
LAB_0048550c:
          uVar8 = FUN_00463d60(param_1,uVar14);
          if ((char)uVar8 == '\0') {
            FUN_00483c90(param_1,uVar15);
          }
        }
        else {
          uVar8 = FUN_004835d0(this,uVar14);
          if ((ushort)uVar8 < 1000) {
            cVar6 = *(char *)((uVar8 & 0xffff) + 0x155 + (int)param_1);
joined_r0x004854d0:
            if (cVar6 != '\0') goto LAB_0048550c;
          }
LAB_004854a6:
          uVar8 = FUN_00463d60(param_1,uVar14);
          cVar6 = (char)uVar8;
LAB_00485530:
          if (cVar6 != '\0') {
            FUN_00483ce0(param_1,uVar15);
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 0x400);
    iVar10 = *(int *)(iVar2 + 0x1c000);
    iVar16 = 0;
    if (-1 < iVar10) {
      pfVar11 = (float *)(iVar2 + 8);
      piVar13 = (int *)(iVar2 + 0x18000);
      do {
        if (iVar16 < 0x1000) {
          if ((piVar13[-0x1000] == 0) ||
             (((*piVar13 != -1 && (local_1c != *piVar13)) ||
              (fVar17 = FUN_00484170((int)param_1,*pfVar11,pfVar11[1]),
              fVar17 < (float10)fVar5 == (fVar17 == (float10)fVar5))))) {
            if (*(char *)(iVar16 + 0x18dd + (int)param_1) != '\0') {
              FUN_00483d60(param_1,iVar16);
            }
          }
          else if (*(char *)(iVar16 + 0x18dd + (int)param_1) == '\0') {
            FUN_00483d20(this_01,iVar16);
          }
        }
        iVar16 = iVar16 + 1;
        piVar13 = piVar13 + 1;
        pfVar11 = pfVar11 + 5;
      } while (iVar16 <= iVar10);
    }
    iVar10 = *(int *)(iVar3 + 12000);
    uVar15 = 0;
    if (-1 < iVar10) {
      do {
        if (((ushort)uVar15 < 1000) &&
           (uVar8 = uVar15 & 0xffff, *(int *)(iVar3 + 4000 + uVar8 * 4) != 0)) {
          iVar2 = *(int *)(iVar3 + 8000 + uVar8 * 4);
          if ((iVar2 == 0) || (local_1c != *(int *)(iVar3 + uVar8 * 4))) {
            cVar6 = *(char *)(uVar8 + 0x28dd + (int)param_1);
          }
          else {
            fVar17 = FUN_0048f2c0(iVar2,*(float *)((int)param_1 + 0x2cfd),
                                  *(float *)((int)param_1 + 0x2d01));
            cVar6 = *(char *)(uVar8 + 0x28dd + (int)param_1);
            if (fVar17 < (float10)fVar5 != (fVar17 == (float10)fVar5)) {
              if (cVar6 == '\0') {
                FUN_00483df0(param_1,(ushort)uVar15);
              }
              goto LAB_0048565f;
            }
          }
          if (cVar6 != '\0') {
            FUN_00483e70(param_1,uVar15);
          }
        }
LAB_0048565f:
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 <= iVar10);
    }
  }
  return;
}


/* END FUNCTION 0x004851d0 */
