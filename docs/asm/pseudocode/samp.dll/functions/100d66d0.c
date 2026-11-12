/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d66d0
 * Name: FUN_100d66d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d66d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    uVar7 = FUN_100d8500();
    iVar6 = (int)((ulonglong)uVar7 >> 0x20) + (param_2 % 1000) * 1000;
    iVar5 = (int)uVar7 + param_2 / 1000;
    if (999999 < iVar6) {
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1000000;
    }
    for (piVar2 = *(int **)(param_1 + 0x49b8); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (*(int *)(*piVar2 + 0x14) == param_3) {
        FUN_100e89e0(param_1 + 0x49b8,piVar2,0);
        break;
      }
    }
    FUN_100d6650();
    if ((*(int *)(param_1 + 0x4994) != 0) || (*(int *)(param_1 + 0x4998) != 0)) {
      iVar3 = FUN_100d8520(iVar5,iVar6,*(undefined4 *)(param_1 + 0x4994),
                           *(undefined4 *)(param_1 + 0x4998));
      if (0 < iVar3) {
        return;
      }
      iVar3 = FUN_100ee690(*(undefined4 *)(iVar1 + 0x5c),param_1 + 0x499c,
                           (undefined4 *)(iVar1 + 0x5c));
      if (iVar3 != 0) {
        FUN_100d8ae0(param_1,"Internal error removing splay node = %d\n",iVar3);
      }
    }
    *(int *)(param_1 + 0x4994) = iVar5;
    *(int *)(param_1 + 0x4998) = iVar6;
    *(int *)(param_1 + 0x49b4) = param_1;
    uVar4 = FUN_100ee500(*(undefined4 *)(param_1 + 0x4994),*(undefined4 *)(param_1 + 0x4998),
                         *(undefined4 *)(iVar1 + 0x5c),param_1 + 0x499c);
    *(undefined4 *)(iVar1 + 0x5c) = uVar4;
  }
  return;
}


/* END FUNCTION 0x100d66d0 */
