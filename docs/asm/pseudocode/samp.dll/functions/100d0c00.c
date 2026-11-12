/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0c00
 * Name: FUN_100d0c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d0c00(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  
  if ((*(int *)(param_2 + 0x390) == 0) || (iVar5 = FUN_100e8f10(param_1,param_2), iVar5 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(int *)(param_2 + 0x394) == 0) || (iVar5 = FUN_100e8f40(param_1,param_2), iVar5 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  puVar1 = (undefined4 *)(param_2 + 0x3a8);
  if (puVar1 != (undefined4 *)0x0) {
    for (piVar2 = (int *)*puVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (*piVar2 == param_1) {
        FUN_100e89e0(puVar1,piVar2,0);
        if (bVar3) {
          FUN_100e9040(param_2);
        }
        break;
      }
    }
  }
  piVar2 = (int *)(param_2 + 0x398);
  if ((piVar2 != (int *)0x0) && (piVar6 = (int *)*piVar2, piVar6 != (int *)0x0)) {
    while (*piVar6 != param_1) {
      piVar6 = (int *)piVar6[2];
      if (piVar6 == (int *)0x0) {
        return;
      }
    }
    FUN_100e89e0(piVar2,piVar6,0);
    if (bVar4) {
      FUN_100e9030(param_2);
    }
  }
  return;
}


/* END FUNCTION 0x100d0c00 */
