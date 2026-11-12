/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004334e0
 * Name: FUN_004334e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004334e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar4 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = FUN_00418b70();
  if (iVar6 == 0) {
    uVar7 = FUN_0041d7c0();
    return uVar7;
  }
  FUN_00407e50(*(int *)(param_1 + 0x44));
  FUN_00420a50(0);
  FUN_00410660();
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0042f990(5,(undefined **)"unable to close due to unfinalised statements");
    FUN_00407e90(*(int *)(param_1 + 0x44));
    return 5;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar9 = (int *)(*(int *)(param_1 + 8) + 4);
    do {
      if ((*piVar9 != 0) && (bVar5 = FUN_0040d080(*piVar9), CONCAT31(extraout_var,bVar5) != 0)) {
        FUN_0042f990(5,(undefined **)0x4b80f0);
        FUN_00407e90(*(int *)(param_1 + 0x44));
        return 5;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 4;
    } while (iVar6 < *(int *)(param_1 + 4));
  }
  FUN_004114f0();
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar8 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 4 + iVar8);
      iVar10 = *(int *)(param_1 + 8) + iVar8;
      if (iVar1 != 0) {
        FUN_0042d3b0(iVar1);
        *(undefined4 *)(iVar10 + 4) = 0;
        if (iVar8 != 0x10) {
          *(undefined4 *)(iVar10 + 0xc) = 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 4));
  }
  FUN_00420a50(0);
  piVar9 = (int *)(param_1 + 0x134);
  param_1 = 0x17;
  do {
    iVar6 = *piVar9;
    while (iVar8 = iVar6, iVar8 != 0) {
      iVar6 = *(int *)(iVar8 + 0x1c);
      do {
        iVar8 = *(int *)(iVar8 + 8);
        FUN_00408130(iVar4);
      } while (iVar8 != 0);
    }
    piVar9 = piVar9 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  for (puVar2 = *(undefined4 **)(iVar4 + 0x198); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    puVar11 = (undefined4 *)(puVar2[2] + 0x10);
    iVar6 = 3;
    do {
      if ((code *)*puVar11 != (code *)0x0) {
        (*(code *)*puVar11)(puVar11[-2]);
      }
      puVar11 = puVar11 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_00408130(iVar4);
  }
  FUN_00408ff0();
  for (puVar2 = *(undefined4 **)(iVar4 + 0x11c); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    pcVar3 = *(code **)(puVar2[2] + 0xc);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*(undefined4 *)(puVar2[2] + 8));
    }
    FUN_00408130(iVar4);
  }
  FUN_00408ff0();
  FUN_0042f990(0,(undefined **)0x0);
  if (*(int *)(iVar4 + 0xd0) != 0) {
    FUN_0040d430();
  }
  FUN_0040fa60();
  *(undefined4 *)(iVar4 + 0x38) = 0xb5357930;
  FUN_00408130(iVar4);
  FUN_00407e90(*(int *)(iVar4 + 0x44));
  *(undefined4 *)(iVar4 + 0x38) = 0x9f3c2d33;
  FUN_00407e30(*(int *)(iVar4 + 0x44));
  if (*(char *)(iVar4 + 0xeb) != '\0') {
    FUN_004080d0(*(int *)(iVar4 + 0xf8));
  }
  FUN_004080d0(iVar4);
  return 0;
}


/* END FUNCTION 0x004334e0 */
