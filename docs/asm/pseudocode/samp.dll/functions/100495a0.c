/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100495a0
 * Name: FUN_100495a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x1004967a) */

void __thiscall
FUN_100495a0(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,int param_5,
            uint param_6,int param_7,undefined4 param_8)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 in_stack_ffffffd0;
  undefined2 uVar15;
  undefined4 uVar14;
  undefined1 local_15;
  undefined4 *local_14;
  undefined8 local_10;
  
  iVar7 = *(int *)(param_1 + 0x41e);
  uVar8 = *(uint *)(param_1 + 0x41a);
  if ((param_7 <= iVar7) && ((param_7 < iVar7 || (param_6 <= uVar8)))) {
    *(uint *)(param_1 + 0x41a) = param_6;
    *(int *)(param_1 + 0x41e) = param_7;
    return;
  }
  local_10 = (double)CONCAT44((param_7 - iVar7) - (uint)(param_6 < uVar8),param_6 - uVar8);
  dVar2 = (double)(longlong)local_10 * 1e-06 * *(double *)(param_1 + 0x452) +
          *(double *)(param_1 + 0x45a);
  *(double *)(param_1 + 0x45a) = dVar2;
  if (*(double *)(param_1 + 0x452) < dVar2) {
    *(undefined8 *)(param_1 + 0x45a) = *(undefined8 *)(param_1 + 0x452);
  }
  *(uint *)(param_1 + 0x41a) = param_6;
  *(int *)(param_1 + 0x41e) = param_7;
  FUN_10043b70();
  cVar5 = FUN_10043e20();
  if (cVar5 == '\0') {
    iVar7 = *(int *)(param_1 + 0xb6);
    uVar8 = *(uint *)(param_1 + 0xb2);
    if ((iVar7 <= param_7) &&
       ((((iVar7 < param_7 || (uVar8 < param_6)) && (uVar8 != 0 || iVar7 != 0)) &&
        ((longlong)((ulonglong)*(uint *)(param_1 + 0x2d3) * 1000) <
         CONCAT44((param_7 - iVar7) - (uint)(param_6 < uVar8),param_6 - uVar8))))) {
      *(undefined1 *)(param_1 + 0x2cb) = 1;
      return;
    }
  }
  local_14 = (undefined4 *)(param_5 * 8 + 0xe0);
  local_10 = (double)(int)local_14;
  if (*(double *)(param_1 + 0x452) < local_10) {
    local_10 = *(double *)(param_1 + 0x452);
  }
  if (local_10 < *(double *)(param_1 + 0x45a)) {
    do {
      uVar15 = (undefined2)((uint)in_stack_ffffffd0 >> 0x10);
      piVar11 = (int *)(param_1 + 0xba);
      FUN_1001f3b0();
      uVar14 = CONCAT22(uVar15,param_4);
      FUN_10047b30(piVar11,param_5,&local_15,param_6,param_7,param_3,uVar14,param_8);
      if (*piVar11 < 1) break;
      if ((*(int *)(param_1 + 0x6ea) == 0) && (*(int *)(param_1 + 0x6ee) == 0)) {
        in_stack_ffffffd0 = CONCAT22((short)((uint)uVar14 >> 0x10),param_4);
        FUN_100437d0(param_2,param_3,in_stack_ffffffd0,piVar11);
      }
      else {
        puVar6 = operator_new(0x5e0);
        uVar9 = *piVar11 + 7 >> 3;
        puVar12 = *(undefined4 **)(param_1 + 0xc6);
        puVar13 = puVar6;
        for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        puVar6[0x175] = *(int *)(param_1 + 0xba) + 7 >> 3;
        *(ulonglong *)(puVar6 + 0x176) =
             (ulonglong)*(uint *)(param_1 + 0x6ea) * 1000 + CONCAT44(param_7,param_6);
        local_14 = puVar6;
        if (*(int *)(param_1 + 0x6ee) != 0) {
          uVar9 = FUN_100436c0();
          uVar9 = uVar9 % *(uint *)(param_1 + 0x6ee);
          uVar8 = puVar6[0x176];
          puVar6[0x176] = uVar8 + uVar9;
          puVar6[0x177] = puVar6[0x177] + (uint)CARRY4(uVar8,uVar9);
        }
        in_stack_ffffffd0 = 0x100497fa;
        FUN_10044140(puVar6);
      }
      local_14 = (undefined4 *)(*(int *)(param_1 + 0xba) + 0xe0);
      *(double *)(param_1 + 0x45a) = *(double *)(param_1 + 0x45a) - (double)(int)local_14;
    } while (local_10 < *(double *)(param_1 + 0x45a));
  }
  cVar5 = *(char *)(param_1 + 0x462);
  bVar1 = *(double *)(param_1 + 0x45a) < local_10;
  *(bool *)(param_1 + 0x462) = bVar1;
  if ((bVar1) && (cVar5 == '\0')) {
    uVar8 = *(int *)(param_1 + 0x2cd) * 2000;
    uVar9 = uVar8 + param_6;
    *(undefined4 *)(param_1 + 0x43e) = 0;
    *(undefined4 *)(param_1 + 0x43a) = 0;
    iVar7 = param_7 + (uint)CARRY4(uVar8,param_6);
    *(uint *)(param_1 + 0x42a) = uVar9;
    *(uint *)(param_1 + 0x422) = uVar9 + 250000;
    *(int *)(param_1 + 0x42e) = iVar7;
    iVar10 = *(int *)(param_1 + 0x432) + 1;
    *(uint *)(param_1 + 0x426) = iVar7 + (uint)(0xfffc2f6f < uVar9);
    *(int *)(param_1 + 0x432) = iVar10;
    if (iVar10 == -1) {
      *(undefined4 *)(param_1 + 0x432) = 0;
    }
  }
  if ((param_7 < *(int *)(param_1 + 0x426)) ||
     ((param_7 <= *(int *)(param_1 + 0x426) && (param_6 < *(uint *)(param_1 + 0x422)))))
  goto LAB_10049ba2;
  iVar7 = *(int *)(param_1 + 0x43e);
  iVar10 = *(int *)(param_1 + 0x43a);
  if (iVar10 + iVar7 == 0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    fVar3 = (float)iVar10;
    if (iVar10 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar4 = (float)iVar7;
    if (iVar7 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    local_14 = (undefined4 *)(fVar3 / (fVar4 + fVar3));
  }
  if (bVar1) {
    if ((float)local_14 < 0.02 == ((float)local_14 == 0.02)) {
      *(undefined8 *)(param_1 + 0x44a) = *(undefined8 *)(param_1 + 0x452);
    }
    else {
      *(undefined8 *)(param_1 + 0x442) = *(undefined8 *)(param_1 + 0x452);
    }
    if ((float)local_14 == 0.0) {
      iVar7 = *(int *)(param_1 + 0x436) + 1;
      *(int *)(param_1 + 0x436) = iVar7;
      if (iVar7 == 10) {
        *(undefined8 *)(param_1 + 0x44a) = 0;
        goto LAB_10049a09;
      }
    }
    else {
LAB_10049a09:
      *(undefined4 *)(param_1 + 0x436) = 0;
    }
    if (*(double *)(param_1 + 0x44a) == 0.0) {
      dVar2 = *(double *)(param_1 + 0x452) + *(double *)(param_1 + 0x452);
    }
    else {
      if ((0.2 < (float)local_14) &&
         (dVar2 = *(double *)(param_1 + 0x442) * 0.5, *(double *)(param_1 + 0x442) = dVar2,
         dVar2 < 144400.0)) {
        *(undefined8 *)(param_1 + 0x442) = 0x4101a08000000000;
      }
      dVar2 = (*(double *)(param_1 + 0x44a) - *(double *)(param_1 + 0x442)) * 0.5;
      if (dVar2 < 36100.0) {
        if ((float)local_14 == 0.0) {
          *(double *)(param_1 + 0x44a) = *(double *)(param_1 + 0x44a) * 1.5;
        }
        else if (0.02 <= (float)local_14) {
          if (((float)local_14 < 0.04) &&
             (dVar2 = *(double *)(param_1 + 0x442) * 0.9, *(double *)(param_1 + 0x442) = dVar2,
             dVar2 < 144400.0)) {
            *(undefined8 *)(param_1 + 0x442) = 0x4101a08000000000;
          }
        }
        else {
          *(double *)(param_1 + 0x44a) = *(double *)(param_1 + 0x44a) * 1.05;
        }
        dVar2 = (*(double *)(param_1 + 0x44a) - *(double *)(param_1 + 0x442)) * 0.5;
      }
      dVar2 = dVar2 + *(double *)(param_1 + 0x442);
    }
LAB_10049b35:
    *(double *)(param_1 + 0x452) = dVar2;
  }
  else if (0.02 < (float)local_14) {
    *(double *)(param_1 + 0x44a) = *(double *)(param_1 + 0x452);
    if ((float)local_14 <= 0.2) {
      dVar2 = 0.9;
    }
    else {
      dVar2 = 0.5;
    }
    *(double *)(param_1 + 0x442) = *(double *)(param_1 + 0x442) * dVar2;
    if (*(double *)(param_1 + 0x442) < 144400.0) {
      *(undefined8 *)(param_1 + 0x442) = 0x4101a08000000000;
    }
    *(undefined4 *)(param_1 + 0x436) = 0;
    dVar2 = (*(double *)(param_1 + 0x452) - *(double *)(param_1 + 0x442)) * 0.5 +
            *(double *)(param_1 + 0x442);
    goto LAB_10049b35;
  }
  uVar8 = *(int *)(param_1 + 0x2cd) * 2000;
  uVar9 = uVar8 + param_6;
  iVar10 = param_7 + (uint)CARRY4(uVar8,param_6) + (uint)(0xfff85edf < uVar9);
  *(uint *)(param_1 + 0x42a) = uVar9 + 500000;
  *(uint *)(param_1 + 0x422) = uVar9 + 750000;
  *(int *)(param_1 + 0x42e) = iVar10;
  iVar7 = *(int *)(param_1 + 0x432) + 1;
  *(undefined4 *)(param_1 + 0x43a) = 0;
  *(undefined4 *)(param_1 + 0x43e) = 0;
  *(uint *)(param_1 + 0x426) = iVar10 + (uint)(0xfffc2f6f < uVar9 + 500000);
  *(int *)(param_1 + 0x432) = iVar7;
  if (iVar7 == -1) {
    *(undefined4 *)(param_1 + 0x432) = 0;
  }
LAB_10049ba2:
  uVar8 = 0;
  if (*(int *)(param_1 + 0x6da) != 0) {
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x6d6) + uVar8 * 4);
      iVar10 = *(int *)(iVar7 + 0x5dc);
      if ((param_7 < iVar10) || ((param_7 <= iVar10 && (param_6 <= *(uint *)(iVar7 + 0x5d8))))) {
        uVar8 = uVar8 + 1;
      }
      else {
        FUN_1001f3b0();
        iVar7 = *(int *)(*(int *)(param_1 + 0x6d6) + uVar8 * 4);
        FUN_1001fb50(iVar7,*(undefined4 *)(iVar7 + 0x5d4));
        FUN_100437d0(param_2,param_3,param_4,param_1 + 0xba);
        _free(*(void **)(*(int *)(param_1 + 0x6d6) + uVar8 * 4));
        if (uVar8 != *(int *)(param_1 + 0x6da) - 1U) {
          *(undefined4 *)(*(int *)(param_1 + 0x6d6) + uVar8 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x6d6) + -4 + *(int *)(param_1 + 0x6da) * 4);
        }
        *(int *)(param_1 + 0x6da) = *(int *)(param_1 + 0x6da) + -1;
      }
    } while (uVar8 < *(uint *)(param_1 + 0x6da));
  }
  return;
}


/* END FUNCTION 0x100495a0 */
