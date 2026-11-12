/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ed90
 * Name: FUN_1009ed90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1009ed90(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  uVar3 = 0;
  iVar4 = 0;
  iVar2 = FUN_100a07b0(param_2);
  if ((iVar2 == 0) && (iVar2 = FUN_100b41a0(param_2), iVar2 == 0)) {
    FUN_100a0780(param_2,2);
    FUN_100a07a0();
    iVar2 = FUN_100a07b0(param_2);
    while (iVar2 == 0) {
      Sleep(1);
      iVar4 = iVar4 + 1;
      if (200 < iVar4) {
        if (DAT_102aca10 == 0) {
          return 0;
        }
        FUN_10067b60(DAT_102aca10,"Warning: Model %u wouldn\'t load in time!",param_2);
        return 0;
      }
      iVar2 = FUN_100a07b0(param_2);
    }
    uVar3 = 1;
  }
  piVar1 = *(int **)(param_1 + 0x40);
  (**(code **)(*piVar1 + 0x20))();
  *(short *)((int)piVar1 + 0x22) = (short)param_2;
  (**(code **)(*piVar1 + 0x14))(param_2);
  return uVar3;
}


/* END FUNCTION 0x1009ed90 */
