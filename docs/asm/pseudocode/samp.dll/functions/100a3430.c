/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a3430
 * Name: FUN_100a3430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a3430(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_102aca24 == 0) {
    return 1;
  }
  DAT_1018e5d4 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  DAT_1018eb18 = *(int **)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e);
  DAT_1018e568 = FUN_1001e650(DAT_1018e8d0);
  if ((((DAT_1018e568 == 0xffff) || (1999 < DAT_1018e568)) ||
      (*(int *)(DAT_1018e5d4 + 0x3074 + (uint)DAT_1018e568 * 4) == 0)) ||
     ((DAT_1018e81c = *(int *)(DAT_1018e5d4 + 0x1134 + (uint)DAT_1018e568 * 4),
      *(int *)(DAT_1018e81c + 0x60) != 0 ||
      (*(short *)(*(int *)(DAT_1018e81c + 0x4c) + 0x22) == 0x23a)))) {
    DAT_1018e568 = DAT_1018e568;
    return 0;
  }
  if (DAT_1018eb18 != (int *)0x0) {
    if ((*DAT_1018eb18 != 0) && (iVar2 = FUN_100acb10(), iVar2 != 0)) {
      return 0;
    }
    if (((DAT_1018eb18 != (int *)0x0) && (*DAT_1018eb18 != 0)) &&
       (iVar2 = FUN_100aca60(), iVar2 != 0)) {
      return 0;
    }
  }
  iVar2 = *(int *)(*(int *)(DAT_1018e81c + 0x4c) + 0x460);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x598) != 0) {
      return 0;
    }
    uVar3 = FUN_100137c0(iVar2);
    iVar2 = FUN_100010b0(uVar3);
    if ((iVar2 != 0) && (iVar2 = FUN_1000e300(uVar3), iVar2 != 0)) {
      return 0;
    }
  }
  if ((*DAT_1018eb18 != 0) && (cVar1 = FUN_100ab870(), cVar1 == '.')) {
    FUN_100abc80(0,0);
  }
  FUN_10005920(DAT_1018e568,0);
  return 1;
}


/* END FUNCTION 0x100a3430 */
