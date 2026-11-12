/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f10c0
 * Name: FUN_100f10c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f10c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar2 = param_1;
  if (((((param_1 == (int *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
      ((piVar1 = (int *)param_1[7], piVar1 == (int *)0x0 || ((int *)*piVar1 != param_1)))) ||
     ((piVar1[1] < 0x3f34 || (0x3f53 < piVar1[1])))) {
    return 0xfffffffe;
  }
  if ((param_1[1] == 0) && ((uint)piVar1[0x10] < 8)) {
    return 0xfffffffb;
  }
  if (piVar1[1] != 0x3f53) {
    piVar1[1] = 0x3f53;
    uVar5 = piVar1[0x10] & 7;
    uVar3 = piVar1[0x10] - uVar5;
    iVar6 = 0;
    piVar1[0xf] = piVar1[0xf] << (sbyte)uVar5;
    piVar1[0x10] = uVar3;
    while (7 < uVar3) {
      *(char *)((int)&param_1 + iVar6) = (char)piVar1[0xf];
      piVar1[0xf] = (uint)piVar1[0xf] >> 8;
      uVar3 = piVar1[0x10] - 8;
      iVar6 = iVar6 + 1;
      piVar1[0x10] = uVar3;
    }
    piVar1[0x1b] = 0;
    FUN_100f1060(piVar1 + 0x1b,iVar6);
  }
  iVar4 = FUN_100f1060(piVar1 + 0x1b,piVar2[1]);
  iVar6 = piVar2[2];
  piVar2[1] = piVar2[1] - iVar4;
  *piVar2 = *piVar2 + iVar4;
  piVar2[2] = iVar6 + iVar4;
  if (piVar1[0x1b] != 4) {
    return 0xfffffffd;
  }
  param_1 = (int *)piVar2[5];
  FUN_100ef2e0(piVar2);
  piVar2[2] = iVar6 + iVar4;
  piVar2[5] = (int)param_1;
  piVar1[1] = 0x3f3f;
  return 0;
}


/* END FUNCTION 0x100f10c0 */
