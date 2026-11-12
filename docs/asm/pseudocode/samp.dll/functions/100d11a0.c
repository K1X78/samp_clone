/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d11a0
 * Name: FUN_100d11a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * FUN_100d11a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined8 uVar4;
  
  iVar3 = *(int *)(PTR_DAT_10155510 + 0xc);
  piVar1 = (int *)(*(code *)PTR__calloc_101554c8)(1,iVar3 * 4 + 0x640);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = iVar3 * 4 + 0x640;
  piVar1[0x7b] = (int)(piVar1 + 400);
  piVar1[0x7f] = (int)piVar1 + iVar3 * -3 + iVar2;
  piVar1[0x87] = (int)piVar1 + (iVar2 - iVar3);
  piVar1[0x83] = (int)piVar1 + iVar3 * -2 + iVar2;
  piVar1[200] = (int)&PTR_s_<no_protocol>_101242a8;
  piVar1[0x66] = -1;
  piVar1[0x67] = -1;
  piVar1[0x68] = -1;
  piVar1[0x69] = -1;
  piVar1[0x13] = -1;
  piVar1[0x3f] = -1;
  piVar1[0x40] = -1;
  FUN_100dc080(piVar1,1);
  uVar4 = FUN_100d8500();
  *(undefined8 *)(piVar1 + 100) = uVar4;
  *piVar1 = unaff_EDI;
  piVar1[0x3c] = *(int *)(unaff_EDI + 0x4c8);
  piVar1[0x34] = 4;
  if ((*(char **)(unaff_EDI + 0x5f4) == (char *)0x0) || (**(char **)(unaff_EDI + 0x5f4) == '\0')) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  piVar1[0xa5] = iVar3;
  if ((iVar3 == 0) || (((iVar2 = piVar1[0x3c], iVar2 != 0 && (iVar2 != 1)) && (iVar2 != 2)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  piVar1[0xa6] = iVar2;
  if ((iVar3 == 0) || (iVar2 != 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  piVar1[0xa7] = iVar3;
  if ((*(char **)(unaff_EDI + 0x5f8) != (char *)0x0) && (**(char **)(unaff_EDI + 0x5f8) != '\0')) {
    piVar1[0xa5] = 1;
    piVar1[0xa7] = 1;
  }
  piVar1[0xa9] = (uint)(*(int *)(unaff_EDI + 0x650) != 0);
  piVar1[0xb1] = *(int *)(unaff_EDI + 0x504);
  piVar1[0xa8] = (uint)(*(int *)(unaff_EDI + 0x644) != 0);
  piVar1[0xb4] = *(int *)(unaff_EDI + 0x558);
  piVar1[0xb5] = *(int *)(unaff_EDI + 0x55c);
  piVar1[0x8c] = *(int *)(unaff_EDI + 0x404);
  piVar1[0x8a] = *(int *)(unaff_EDI + 0x3fc);
  piVar1[0x8b] = *(int *)(unaff_EDI + 0x400);
  piVar1[0x98] = *(int *)(unaff_EDI + 0x46c);
  piVar1[0x96] = *(int *)(unaff_EDI + 0x464);
  piVar1[0x97] = *(int *)(unaff_EDI + 0x468);
  piVar1[0xca] = *(int *)(unaff_EDI + 0x4dc);
  iVar3 = FUN_100d5880(*(undefined4 *)(unaff_EDI + 100),1);
  if ((iVar3 != 0) && (piVar1[0xee] == 0)) {
    iVar3 = (*(code *)PTR__calloc_101554c8)(0x4000,1);
    piVar1[0xee] = iVar3;
    if (iVar3 == 0) goto LAB_100d13ef;
  }
  FUN_100e8940(piVar1 + 0xe6,&DAT_100d1190);
  FUN_100e8940(piVar1 + 0xea,&DAT_100d1190);
  if (*(int *)(unaff_EDI + 0x5c0) != 0) {
    iVar3 = (*(code *)PTR___strdup_101554c4)(*(int *)(unaff_EDI + 0x5c0));
    piVar1[0x187] = iVar3;
    if (iVar3 == 0) {
LAB_100d13ef:
      FUN_100e8a60(piVar1 + 0xe6,0);
      FUN_100e8a60(piVar1 + 0xea,0);
      (*(code *)PTR__free_101554bc)(piVar1[0xee]);
      (*(code *)PTR__free_101554bc)(piVar1[0x187]);
      (*(code *)PTR__free_101554bc)(piVar1);
      return (int *)0x0;
    }
  }
  piVar1[0x189] = *(int *)(unaff_EDI + 0x19c);
  *(undefined2 *)(piVar1 + 0x188) = *(undefined2 *)(unaff_EDI + 0x198);
  piVar1[0x10] = *(int *)(unaff_EDI + 0x1d8);
  piVar1[0x11] = *(int *)(unaff_EDI + 0x1dc);
  return piVar1;
}


/* END FUNCTION 0x100d11a0 */
