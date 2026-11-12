/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ebea0
 * Name: FUN_100ebea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ebea0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_18;
  undefined1 local_c [12];
  
  uVar1 = *(undefined4 *)(param_1 + 0x838);
  iVar5 = -1;
  local_18 = 0;
  uVar6 = FUN_100d8500();
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_100dec30(param_1,5,2);
  }
  FUN_100e4560(uVar1,local_c);
  iVar3 = FUN_100e4580(local_c);
  while (iVar3 != 0) {
    for (piVar2 = *(int **)(*(int *)(iVar3 + 0xc) + 8); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[2]) {
      iVar3 = *piVar2;
      if ((*(int *)(iVar3 + 0x48) == 0) &&
         (iVar4 = FUN_100d8520(uVar6,*(undefined4 *)(iVar3 + 0x188),*(undefined4 *)(iVar3 + 0x18c)),
         iVar5 < iVar4)) {
        iVar5 = iVar4;
        local_18 = iVar3;
      }
    }
    iVar3 = FUN_100e4580(local_c);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_100dec70(param_1,5);
  }
  return local_18;
}


/* END FUNCTION 0x100ebea0 */
