/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042c900
 * Name: FUN_0042c900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_0042c900(undefined4 *param_1)

{
  undefined1 uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined3 extraout_var;
  uint uVar6;
  int extraout_ECX;
  int extraout_EDX;
  bool bVar7;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  bVar7 = false;
  local_18 = 0;
  uVar2 = FUN_004105f0((int *)(in_EAX + 0x5c));
  if (uVar2 != 0) {
    return uVar2;
  }
  if (0 < (int)param_1[1]) {
    do {
      iVar3 = FUN_0040d050();
      if ((iVar3 != 0) && (bVar7 = true, extraout_ECX != 1)) {
        local_18 = local_18 + 1;
      }
    } while (extraout_ECX + 1 < extraout_EDX);
    if (((bVar7) && ((code *)param_1[0x2a] != (code *)0x0)) &&
       (iVar3 = (*(code *)param_1[0x2a])(param_1[0x29]), iVar3 != 0)) {
      return 0x13;
    }
  }
  uVar6 = 0;
  pcVar4 = (char *)FUN_0040d030();
  uVar2 = FUN_00408380(pcVar4);
  if ((uVar2 == 0) || (local_18 < 2)) {
    iVar5 = 0;
    iVar3 = 0;
    do {
      if ((int)param_1[1] <= iVar5) break;
      if (*(int *)(iVar3 + 4 + param_1[2]) != 0) {
        uVar6 = FUN_0042ac80(0);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar6 == 0);
    iVar3 = 0;
    if (uVar6 == 0) {
      iVar5 = 0;
      while (iVar3 < (int)param_1[1]) {
        if (*(int *)(iVar5 + 4 + param_1[2]) != 0) {
          uVar6 = FUN_004281d0();
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x10;
        if (uVar6 != 0) {
          return uVar6;
        }
      }
      if (uVar6 == 0) {
        FUN_00410670();
      }
    }
    return uVar6;
  }
  local_18 = *param_1;
  iStack_10 = 0;
  FUN_0040d030();
  iStack_1c = 0;
  uStack_8 = 0;
  iStack_4 = 0;
  do {
    FUN_00408130((int)param_1);
    FUN_00412de0(4,(undefined1 *)&iStack_14);
    iVar3 = FUN_00418920((undefined **)"%s-mj%08X");
    if (iVar3 == 0) {
      return 7;
    }
    uVar2 = FUN_00407c50();
    if (uVar2 != 0) goto LAB_0042cb4a;
  } while (iStack_c != 0);
  uVar2 = FUN_00417ac0(iVar3,&iStack_1c,0x4016,0);
  if (uVar2 == 0) {
    iStack_20 = 0;
    if (0 < (int)param_1[1]) {
      iStack_14 = 0;
      do {
        iVar5 = FUN_0040d050();
        if (((iVar5 != 0) && (pcVar4 = (char *)FUN_0040d040(), pcVar4 != (char *)0x0)) &&
           (*pcVar4 != '\0')) {
          if ((iStack_10 == 0) && (uVar1 = FUN_0040cbb0(), CONCAT31(extraout_var,uVar1) == 0)) {
            iStack_10 = 1;
          }
          FUN_00408380(pcVar4);
          uVar2 = FUN_00407af0();
          uVar6 = FUN_00408380(pcVar4);
          uVar6 = uVar6 + 1;
          bVar7 = CARRY4(uStack_8,uVar6);
          uStack_8 = uStack_8 + uVar6;
          iStack_4 = iStack_4 + ((int)uVar6 >> 0x1f) + (uint)bVar7;
          if (uVar2 != 0) goto LAB_0042cb38;
        }
        iStack_20 = iStack_20 + 1;
        iStack_14 = iStack_14 + 0x10;
      } while (iStack_20 < (int)param_1[1]);
      if (((iStack_10 != 0) && (uVar6 = FUN_00407bb0(), (uVar6 & 0x400) == 0)) &&
         (uVar2 = FUN_00407b30(), uVar2 != 0)) {
LAB_0042cb38:
        FUN_004123a0();
        FUN_00407c40();
        goto LAB_0042cb4a;
      }
    }
    iStack_20 = 0;
    if (uVar2 == 0) {
      iVar5 = 0;
      do {
        if ((int)param_1[1] <= iStack_20) break;
        if (*(int *)(param_1[2] + 4 + iVar5) != 0) {
          uVar2 = FUN_0042ac80(iVar3);
        }
        iStack_20 = iStack_20 + 1;
        iVar5 = iVar5 + 0x10;
      } while (uVar2 == 0);
    }
    FUN_004123a0();
    if (uVar2 == 0) {
      uVar2 = FUN_00407c40();
      FUN_00408130((int)param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      FUN_00407d90();
      iVar3 = 0;
      if (0 < (int)param_1[1]) {
        iVar5 = 0;
        do {
          if (*(int *)(iVar5 + 4 + param_1[2]) != 0) {
            FUN_004281d0();
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar3 < (int)param_1[1]);
      }
      FUN_00407da0();
      FUN_00410670();
      return 0;
    }
  }
LAB_0042cb4a:
  FUN_00408130((int)param_1);
  return uVar2;
}


/* END FUNCTION 0x0042c900 */
