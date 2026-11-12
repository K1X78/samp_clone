/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce2e0
 * Name: FUN_100ce2e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ce2e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = param_1[0x156];
  iVar4 = *param_1;
  *param_2 = 0;
  if (iVar1 == 0) {
    return 6;
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar1 + 0xc));
  iVar2 = *(int *)(iVar1 + 0x10);
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar1 + 0xc));
  if (iVar2 != 0) {
    iVar1 = param_1[0x156];
    FUN_100e0c10(param_1,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
    *(undefined4 *)(iVar1 + 0x20) = 0;
    if (param_1[0x153] == 0) {
      uVar3 = FUN_100ce1d0();
      FUN_100ce050(param_1 + 0x151);
      return uVar3;
    }
    FUN_100ce050(param_1 + 0x151);
    *param_2 = param_1[0x153];
    return 0;
  }
  uVar5 = FUN_100d8500(*(undefined4 *)(iVar4 + 0x790),*(undefined4 *)(iVar4 + 0x794));
  iVar4 = FUN_100d8520(uVar5);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (*(int *)(iVar1 + 4) == 0) {
    *(undefined4 *)(iVar1 + 4) = 1;
  }
  else if (*(int *)(iVar1 + 8) <= iVar4) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) * 2;
  }
  if (0xfa < *(uint *)(iVar1 + 4)) {
    *(undefined4 *)(iVar1 + 4) = 0xfa;
  }
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 4) + iVar4;
  FUN_100d66d0(*param_1,*(int *)(iVar1 + 4),1);
  return 0;
}


/* END FUNCTION 0x100ce2e0 */
