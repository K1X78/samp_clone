/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e33f0
 * Name: FUN_100e33f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100e38e9) */
/* WARNING: Removing unreachable block (ram,0x100e3486) */
/* WARNING: Removing unreachable block (ram,0x100e34bc) */
/* WARNING: Removing unreachable block (ram,0x100e38ff) */

int FUN_100e33f0(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [72];
  
  iVar1 = *param_1;
  iVar10 = *(int *)(iVar1 + 0x830) % 6;
  uVar17 = 0;
  bVar3 = false;
  uVar12 = FUN_100d8500();
  iVar5 = (int)uVar12;
  iVar4 = FUN_100d8570(uVar12,*(undefined4 *)(iVar1 + 0x788),*(undefined4 *)(iVar1 + 0x78c));
  *(int *)(iVar1 + 0x75c) = iVar4;
  lVar13 = __alldiv(iVar4,iVar4 >> 0x1f,1000000,0);
  lVar15 = lVar13;
  if (lVar13 < 1) {
    lVar15 = 1;
  }
  uVar14 = __alldiv(*(undefined4 *)(iVar1 + 0x738),*(undefined4 *)(iVar1 + 0x73c),lVar15);
  *(undefined8 *)(iVar1 + 0x760) = uVar14;
  lVar15 = lVar13;
  if (lVar13 < 1) {
    lVar15 = 1;
  }
  iVar4 = *(int *)(iVar1 + 0x744);
  uVar9 = *(uint *)(iVar1 + 0x740);
  uVar14 = __alldiv(uVar9,iVar4,lVar15);
  *(undefined8 *)(iVar1 + 0x768) = uVar14;
  if (*(int *)(iVar1 + 0x720) != iVar5) {
    uVar7 = *(uint *)(iVar1 + 0x738);
    iVar2 = *(int *)(iVar1 + 0x73c);
    *(int *)(iVar1 + 0x720) = iVar5;
    *(uint *)(iVar1 + 2000 + iVar10 * 8) = uVar9 + uVar7;
    *(uint *)(iVar1 + 0x7d4 + iVar10 * 8) = iVar4 + iVar2 + (uint)CARRY4(uVar9,uVar7);
    *(int *)(iVar1 + 0x800 + iVar10 * 8) = iVar5;
    *(int *)(iVar1 + 0x804 + iVar10 * 8) = (int)((ulonglong)uVar12 >> 0x20);
    iVar4 = *(int *)(iVar1 + 0x830) + 1;
    bVar3 = true;
    *(int *)(iVar1 + 0x830) = iVar4;
    iVar5 = 6;
    if (iVar4 < 6) {
      iVar5 = iVar4;
    }
    if (iVar5 == 1) {
      *(uint *)(iVar1 + 0x748) = *(uint *)(iVar1 + 0x760) + *(uint *)(iVar1 + 0x768);
      *(uint *)(iVar1 + 0x74c) =
           *(int *)(iVar1 + 0x764) + *(int *)(iVar1 + 0x76c) +
           (uint)CARRY4(*(uint *)(iVar1 + 0x760),*(uint *)(iVar1 + 0x768));
    }
    else {
      if (iVar4 < 6) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 % 6;
      }
      iVar5 = FUN_100d8520(uVar12,*(undefined4 *)(iVar1 + 0x800 + iVar4 * 8),
                           *(undefined4 *)(iVar1 + 0x804 + iVar4 * 8));
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      uVar9 = *(uint *)(iVar1 + 2000 + iVar10 * 8);
      uVar7 = *(uint *)(iVar1 + 2000 + iVar4 * 8);
      iVar10 = *(int *)(iVar1 + 0x7d4 + iVar10 * 8);
      iVar4 = *(int *)(iVar1 + 0x7d4 + iVar4 * 8);
      uVar6 = uVar9 - uVar7;
      uVar9 = (uint)(uVar9 < uVar7);
      iVar2 = iVar10 - iVar4;
      iVar11 = iVar2 - uVar9;
      if ((iVar11 < 0) ||
         ((iVar11 == 0 || SBORROW4(iVar10,iVar4) != SBORROW4(iVar2,uVar9) && (uVar6 < 0x418938)))) {
        uVar12 = __allmul(uVar6,iVar11,1000,0);
        uVar12 = __alldiv(uVar12,iVar5,iVar5 >> 0x1f);
        *(undefined8 *)(iVar1 + 0x748) = uVar12;
      }
      else {
        uVar12 = FUN_100f9324();
        *(undefined8 *)(iVar1 + 0x748) = uVar12;
      }
    }
  }
  if ((*(uint *)(iVar1 + 0x758) & 0x10) != 0) {
    return 0;
  }
  if (*(code **)(iVar1 + 0x1bc) != (code *)0x0) {
    iVar5 = (**(code **)(iVar1 + 0x1bc))
                      (*(undefined4 *)(iVar1 + 0x1f0),*(undefined4 *)(iVar1 + 0x728),
                       *(undefined4 *)(iVar1 + 0x72c),*(undefined4 *)(iVar1 + 0x738),
                       *(undefined4 *)(iVar1 + 0x73c),*(undefined4 *)(iVar1 + 0x730),
                       *(undefined4 *)(iVar1 + 0x734),*(undefined4 *)(iVar1 + 0x740),
                       *(undefined4 *)(iVar1 + 0x744));
    if (iVar5 == 0) {
      return 0;
    }
    FUN_100d8ba0(iVar1,"Callback aborted");
    return iVar5;
  }
  if (*(code **)(iVar1 + 0x1b8) != (code *)0x0) {
    iVar5 = (**(code **)(iVar1 + 0x1b8))
                      (*(undefined4 *)(iVar1 + 0x1f0),(double)*(longlong *)(iVar1 + 0x728),
                       (double)*(longlong *)(iVar1 + 0x738),(double)*(longlong *)(iVar1 + 0x730),
                       (double)*(longlong *)(iVar1 + 0x740));
    if (iVar5 == 0) {
      return 0;
    }
    FUN_100d8ba0(iVar1,"Callback aborted");
    return iVar5;
  }
  if (!bVar3) {
    return 0;
  }
  if (-1 < (char)*(uint *)(iVar1 + 0x758)) {
    if (*(int *)(iVar1 + 0x4ae8) != 0 || *(int *)(iVar1 + 0x4aec) != 0) {
      FUN_100cd390(*(undefined4 *)(iVar1 + 0x148),"** Resuming transfer from byte position %I64d\n",
                   *(int *)(iVar1 + 0x4ae8),*(int *)(iVar1 + 0x4aec));
    }
    FUN_100cd390(*(undefined4 *)(iVar1 + 0x148),
                 "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                );
    *(uint *)(iVar1 + 0x758) = *(uint *)(iVar1 + 0x758) | 0x80;
  }
  lVar15 = 0;
  uVar12 = 0;
  if ((*(byte *)(iVar1 + 0x758) & 0x20) != 0) {
    iVar5 = *(int *)(iVar1 + 0x76c);
    lVar15 = 0;
    uVar12 = 0;
    if ((-1 < iVar5) && ((0 < iVar5 || (lVar15 = 0, uVar12 = 0, *(int *)(iVar1 + 0x768) != 0)))) {
      iVar4 = *(int *)(iVar1 + 0x734);
      uVar9 = *(uint *)(iVar1 + 0x730);
      uVar14 = *(undefined8 *)(iVar1 + 0x730);
      lVar15 = __alldiv(uVar9,iVar4,*(int *)(iVar1 + 0x768),iVar5);
      uVar12 = 0;
      if (-1 < iVar4) {
        if ((iVar4 < 1) && (uVar9 < 0x2711)) {
          uVar12 = 0;
          if ((iVar4 < 0) || ((iVar4 < 1 && (uVar12 = 0, uVar9 == 0)))) goto LAB_100e3825;
          uVar12 = __allmul(*(undefined4 *)(iVar1 + 0x740),*(undefined4 *)(iVar1 + 0x744),100,0);
        }
        else {
          uVar14 = __alldiv(uVar9,iVar4,100,0);
          uVar12 = *(undefined8 *)(iVar1 + 0x740);
        }
        uVar12 = __alldiv(uVar12,uVar14);
      }
    }
  }
LAB_100e3825:
  if ((*(byte *)(iVar1 + 0x758) & 0x40) == 0) {
LAB_100e38d7:
    lVar16 = 0;
  }
  else {
    iVar5 = *(int *)(iVar1 + 0x764);
    if ((iVar5 < 0) || ((iVar5 < 1 && (*(int *)(iVar1 + 0x760) == 0)))) goto LAB_100e38d7;
    iVar4 = *(int *)(iVar1 + 0x72c);
    uVar9 = *(uint *)(iVar1 + 0x728);
    lVar16 = __alldiv(uVar9,iVar4,*(int *)(iVar1 + 0x760),iVar5);
    uVar17 = 0;
    if (-1 < iVar4) {
      if ((iVar4 < 1) && (uVar9 < 0x2711)) {
        uVar17 = 0;
        if ((-1 < iVar4) && ((0 < iVar4 || (uVar17 = 0, uVar9 != 0)))) {
          uVar17 = __allmul(*(undefined4 *)(iVar1 + 0x738),*(undefined4 *)(iVar1 + 0x73c),100,0);
          uVar17 = __alldiv(uVar17,uVar9,iVar4);
        }
      }
      else {
        uVar17 = __alldiv(uVar9,iVar4,100,0);
        uVar17 = __alldiv(*(undefined4 *)(iVar1 + 0x738),*(undefined4 *)(iVar1 + 0x73c),uVar17);
      }
    }
  }
  if (lVar16 < lVar15) {
    lVar16 = lVar15;
  }
  if (lVar16 < 1) {
    lVar15 = 0;
  }
  else {
    lVar15 = lVar16 - lVar13;
  }
  puVar18 = local_60;
  FUN_100e2ce0();
  FUN_100e2ce0(local_54,lVar16,puVar18,lVar15);
  FUN_100e2ce0(local_48,lVar13);
  if ((*(uint *)(iVar1 + 0x758) & 0x20) == 0) {
    uVar9 = *(uint *)(iVar1 + 0x740);
    iVar5 = *(int *)(iVar1 + 0x744);
  }
  else {
    uVar9 = *(uint *)(iVar1 + 0x730);
    iVar5 = *(int *)(iVar1 + 0x734);
  }
  if ((*(uint *)(iVar1 + 0x758) & 0x40) == 0) {
    uVar7 = *(uint *)(iVar1 + 0x738);
    iVar4 = *(int *)(iVar1 + 0x73c);
  }
  else {
    uVar7 = *(uint *)(iVar1 + 0x728);
    iVar4 = *(int *)(iVar1 + 0x72c);
  }
  uVar6 = uVar7 + uVar9;
  iVar5 = iVar4 + iVar5 + (uint)CARRY4(uVar7,uVar9);
  iVar10 = *(uint *)(iVar1 + 0x738) + *(uint *)(iVar1 + 0x740);
  iVar4 = *(int *)(iVar1 + 0x73c) + *(int *)(iVar1 + 0x744) +
          (uint)CARRY4(*(uint *)(iVar1 + 0x738),*(uint *)(iVar1 + 0x740));
  uVar14 = 0;
  if (-1 < iVar5) {
    if ((iVar5 < 1) && (uVar6 < 0x2711)) {
      uVar14 = 0;
      if ((iVar5 < 0) || ((iVar5 < 1 && (uVar14 = 0, uVar6 == 0)))) goto LAB_100e39f9;
      uVar14 = __allmul(iVar10,iVar4,100,0);
      uVar19 = CONCAT44(iVar5,uVar6);
    }
    else {
      uVar19 = __alldiv(uVar6,iVar5,100,0);
      uVar14 = CONCAT44(iVar4,iVar10);
    }
    uVar14 = __alldiv(uVar14,uVar19);
  }
LAB_100e39f9:
  uVar8 = FUN_100e2e20(*(undefined4 *)(iVar1 + 0x748),*(undefined4 *)(iVar1 + 0x74c));
  FUN_100e2e20(*(undefined4 *)(iVar1 + 0x768),*(undefined4 *)(iVar1 + 0x76c),local_54,local_48,
               local_60,uVar8);
  uVar8 = FUN_100e2e20();
  uVar8 = FUN_100e2e20(*(undefined4 *)(iVar1 + 0x740),*(undefined4 *)(iVar1 + 0x744),uVar8);
  uVar8 = FUN_100e2e20(*(undefined4 *)(iVar1 + 0x738),*(undefined4 *)(iVar1 + 0x73c),uVar12,uVar8);
  uVar8 = FUN_100e2e20(uVar6,iVar5,uVar17,uVar8);
  FUN_100cd390(*(undefined4 *)(iVar1 + 0x148),
               "\r%3I64d %s  %3I64d %s  %3I64d %s  %s  %s %s %s %s %s",uVar14,uVar8);
  _fflush(*(FILE **)(iVar1 + 0x148));
  return 0;
}


/* END FUNCTION 0x100e33f0 */
