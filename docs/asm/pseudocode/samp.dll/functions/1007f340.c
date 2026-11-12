/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007f340
 * Name: FUN_1007f340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1007f340(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  int iStack_ac;
  int iStack_a8;
  float fStack_a4;
  int iStack_a0;
  undefined1 auStack_94 [12];
  int iStack_88;
  undefined4 auStack_84 [18];
  undefined4 auStack_3c [15];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  FUN_1007e000(0);
  piVar3 = (int *)FUN_1007d360();
  if (param_3 == (undefined4 *)0x0) {
    puVar7 = auStack_3c;
    for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    param_3 = auStack_3c;
  }
  FUN_1007e060(auStack_84,param_2,param_3);
  fStack_a4 = -1.0;
  iStack_a0 = 0;
  piVar4 = (int *)FUN_10082120();
  iStack_a8 = 0;
  if (0 < piVar4[1]) {
    do {
      puVar7 = *(undefined4 **)(*piVar4 + iStack_a8 * 4);
      (**(code **)(*piVar3 + 0x20))(piVar3,*puVar7,auStack_94);
      iStack_ac = 0;
      if (0 < (int)puVar7[0x158]) {
        do {
          iVar5 = *(int *)(puVar7[0x157] + iStack_ac * 4);
          iVar6 = 0;
          if (0 < *(int *)(iVar5 + 0x13c)) {
            do {
              iVar1 = *(int *)(*(int *)(iVar5 + 0x138) + iVar6 * 4);
              if ((((*(int *)(iVar1 + 0x10) == 0) || (*(int *)(iVar1 + 8) == iStack_88)) &&
                  (cVar2 = FUN_1007c550(iVar1,param_2,param_3), cVar2 != '\0')) &&
                 (fVar8 = (float10)FUN_1007c7f0(iVar1,auStack_84,auStack_94),
                 (float10)fStack_a4 < fVar8)) {
                fStack_a4 = (float)fVar8;
                iStack_a0 = iVar1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(iVar5 + 0x13c));
          }
          iStack_ac = iStack_ac + 1;
        } while (iStack_ac < (int)puVar7[0x158]);
      }
      iStack_a8 = iStack_a8 + 1;
    } while (iStack_a8 < piVar4[1]);
    if (iStack_a0 != 0) {
      FUN_1007e250(auStack_84,iStack_a0,param_2,param_3);
      puVar7 = auStack_84;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_1 = *puVar7;
        puVar7 = puVar7 + 1;
        param_1 = param_1 + 1;
      }
      return 0;
    }
  }
  return 0x80040902;
}


/* END FUNCTION 0x1007f340 */
