/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041e980
 * Name: FUN_0041e980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0041e980(void *this,undefined4 *param_1)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int unaff_EBX;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  
  if (5 < in_EAX) {
    if (100 < in_EAX) {
      return 0xf;
    }
    FUN_00407cd0();
  }
  if (this == (void *)0x0) {
    iVar2 = FUN_0041e8a0(param_1);
    if (iVar2 == 5) {
      if (**(int **)(unaff_EBX + 0x14) == 0) {
        return -1;
      }
      iVar2 = FUN_0040bcd0();
      if (iVar2 == 0) {
        FUN_0040bd00();
        return -1;
      }
      if (iVar2 == 5) {
        return 0x105;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  piVar3 = (int *)FUN_0040ba80();
  if ((this == (void *)0x0) && (*piVar3 == *(int *)(unaff_EBX + 0x30))) {
    iVar2 = FUN_0040bcd0();
    FUN_00407be0();
    if (iVar2 == 0) {
      piVar3 = (int *)FUN_0040ba90();
      iVar2 = 0xc;
      bVar9 = true;
      piVar8 = (int *)(unaff_EBX + 0x20);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *piVar3 == *piVar8;
        piVar3 = piVar3 + 1;
        piVar8 = piVar8 + 1;
      } while (bVar9);
      if (!bVar9) {
        FUN_0040bd00();
        return -1;
      }
      *(undefined2 *)(unaff_EBX + 0x1a) = 0;
      return 0;
    }
    if (iVar2 != 5) {
      return iVar2;
    }
  }
  uVar7 = 0;
  iVar2 = 0;
  iVar4 = 1;
  puVar6 = (uint *)(piVar3 + 2);
  do {
    uVar1 = *puVar6;
    if ((uVar7 <= uVar1) && (uVar1 <= *(uint *)(unaff_EBX + 0x30))) {
      iVar2 = iVar4;
      uVar7 = uVar1;
    }
    iVar4 = iVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar4 < 5);
  if (iVar2 == 0) {
    iVar4 = FUN_0040bd20();
    if (iVar4 == 0) {
      piVar3[2] = *(uint *)(unaff_EBX + 0x30);
      FUN_0040bd50();
      return -1;
    }
  }
  else {
    if (uVar7 < *(uint *)(unaff_EBX + 0x30)) {
      iVar4 = 1;
      do {
        iVar5 = FUN_0040bd20();
        if (iVar5 == 0) {
          uVar7 = *(uint *)(unaff_EBX + 0x30);
          piVar3[iVar4 + 1] = uVar7;
          FUN_0040bd50();
          iVar2 = iVar4;
          break;
        }
        if (iVar5 != 5) {
          return iVar5;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 5);
    }
    iVar4 = FUN_0040bcd0();
    if (iVar4 == 0) {
      FUN_00407be0();
      if (piVar3[iVar2 + 1] == uVar7) {
        piVar3 = (int *)FUN_0040ba90();
        iVar4 = 0xc;
        bVar9 = true;
        piVar8 = (int *)(unaff_EBX + 0x20);
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar9 = *piVar3 == *piVar8;
          piVar3 = piVar3 + 1;
          piVar8 = piVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          *(short *)(unaff_EBX + 0x1a) = (short)iVar2;
          return 0;
        }
      }
      FUN_0040bd00();
      return -1;
    }
  }
  if (iVar4 != 5) {
    return iVar4;
  }
  return -1;
}


/* END FUNCTION 0x0041e980 */
