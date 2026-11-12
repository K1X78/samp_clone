/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5bd0
 * Name: FUN_100e5bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100e5bd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_1;
  iVar1 = *param_1;
  iVar3 = *(int *)(iVar1 + 0xe8);
  iVar5 = 0;
  iVar4 = 0;
  param_1 = (int *)0x0;
  if ((99 < iVar3) && (iVar3 < 200)) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x498c) != 0) {
    return -(uint)(*(int *)(iVar1 + 0x51c) != 0) & 0x16;
  }
  if ((piVar2[0xa8] != 0) &&
     (((iVar3 == 0x191 || ((piVar2[0xb2] != 0 && (iVar3 < 300)))) &&
      (iVar4 = FUN_100e4a30(), iVar4 == 0)))) {
    *(undefined4 *)(iVar1 + 0x498c) = 1;
  }
  if (((piVar2[0xa9] != 0) &&
      ((*(int *)(iVar1 + 0xe8) == 0x197 || ((piVar2[0xb2] != 0 && (*(int *)(iVar1 + 0xe8) < 300)))))
      ) && (iVar5 = FUN_100e4a30(), iVar5 == 0)) {
    *(undefined4 *)(iVar1 + 0x498c) = 1;
  }
  if ((iVar4 == 0) && (iVar5 == 0)) {
    if (((*(int *)(iVar1 + 0xe8) < 300) && (*(int *)(iVar1 + 0x4968) == 0)) &&
       ((piVar2[0xb2] != 0 && ((*(int *)(iVar1 + 1000) != 1 && (*(int *)(iVar1 + 1000) != 6)))))) {
      iVar3 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(iVar1 + 0x700));
      *(int *)(iVar1 + 0x124) = iVar3;
      if (iVar3 == 0) {
        return 0x1b;
      }
      *(undefined4 *)(iVar1 + 0x4968) = 1;
    }
  }
  else {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x124));
    *(undefined4 *)(iVar1 + 0x124) = 0;
    iVar3 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(iVar1 + 0x700));
    *(int *)(iVar1 + 0x124) = iVar3;
    if (iVar3 == 0) {
      return 0x1b;
    }
    if ((((*(int *)(iVar1 + 1000) != 1) && (*(int *)(iVar1 + 1000) != 6)) && (piVar2[0xb3] == 0)) &&
       (param_1 = (int *)FUN_100e4ab0(piVar2), param_1 != (int *)0x0)) {
      return (uint)param_1;
    }
  }
  iVar3 = FUN_100e5170();
  if (iVar3 == 0) {
    return (uint)param_1;
  }
  FUN_100d8ba0(iVar1,"The requested URL returned error: %d",*(undefined4 *)(iVar1 + 0xe8));
  return 0x16;
}


/* END FUNCTION 0x100e5bd0 */
