/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066c70
 * Name: FUN_10066c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10066c70(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)param_1 + 0x11e);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 10;
    piVar1[3] = 0x28;
    (**(code **)(*piVar1 + 0x4c))();
    iVar2 = *(int *)((int)param_1 + 0x63e2);
    piVar1 = *(int **)((int)param_1 + 0x11e);
    iVar3 = *param_1;
    piVar1[4] = 0x14;
    piVar1[5] = (iVar2 + 1) * iVar3 + -0x3c;
    (**(code **)(*piVar1 + 0x4c))();
    FUN_100886d0(1,100);
    *(int *)(*(int *)((int)param_1 + 0x11e) + 0x92) = *param_1;
    FUN_10084e80();
    FUN_10084da0();
    *(int *)(*(int *)((int)param_1 + 0x11e) + 0x8e) = 100 - *param_1;
    FUN_10084e80();
    FUN_10084da0();
    return;
  }
  return;
}


/* END FUNCTION 0x10066c70 */
