/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100884d0
 * Name: FUN_100884d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100884d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  undefined4 uVar2;
  BOOL BVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  if (*(int *)(param_1 + 0xa6) != 0) {
    fVar5 = (float10)FUN_1007d450();
    dVar1 = (double)fVar5;
    BVar3 = PtInRect((RECT *)(param_1 + 0x4e),*(POINT *)(param_1 + 0x9e));
    if (BVar3 == 0) {
      BVar3 = PtInRect((RECT *)(param_1 + 0x5e),*(POINT *)(param_1 + 0x9e));
      if (BVar3 == 0) goto LAB_100885f7;
      if (*(int *)(param_1 + 0xa6) == 2) {
        if (dVar1 - *(double *)(param_1 + 0xaa) <= 0.33) goto LAB_100885f7;
        FUN_10088230(1);
        *(undefined4 *)(param_1 + 0xa6) = 4;
      }
      else {
        if ((*(int *)(param_1 + 0xa6) != 4) || (dVar1 - *(double *)(param_1 + 0xaa) <= 0.05))
        goto LAB_100885f7;
        FUN_10088230(1);
      }
    }
    else if (*(int *)(param_1 + 0xa6) == 1) {
      if (dVar1 - *(double *)(param_1 + 0xaa) <= 0.33) goto LAB_100885f7;
      FUN_10088230(0xffffffff);
      *(undefined4 *)(param_1 + 0xa6) = 3;
    }
    else {
      if ((*(int *)(param_1 + 0xa6) != 3) || (dVar1 - *(double *)(param_1 + 0xaa) <= 0.05))
      goto LAB_100885f7;
      FUN_10088230(0xffffffff);
    }
    *(double *)(param_1 + 0xaa) = dVar1;
  }
LAB_100885f7:
  uVar4 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar4 = 2;
  }
  else if ((*(char *)(param_1 + 0x3c) == '\0') || (*(char *)(param_1 + 0x4d) == '\0')) {
    uVar4 = 1;
  }
  else if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_1 + 6) != '\0') {
      uVar4 = 3;
    }
  }
  else {
    uVar4 = 4;
  }
  uVar2 = **(undefined4 **)(param_1 + 0x20);
  FUN_10085f40(uVar4,param_3,0x3f4ccccd);
  FUN_10086e20(uVar2,param_1 + 0x6e);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4);
  FUN_10085f40(uVar4,param_3,0x3f4ccccd);
  FUN_10086e20(uVar2,param_1 + 0x4e);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
  FUN_10085f40(uVar4,param_3,0x3f4ccccd);
  FUN_10086e20(uVar2,param_1 + 0x5e);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc);
  FUN_10085f40(uVar4,param_3,0x3f4ccccd);
  FUN_10086e20(uVar2,param_1 + 0x7e);
  return;
}


/* END FUNCTION 0x100884d0 */
