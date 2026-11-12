/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005a020
 * Name: FUN_1005a020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1005a020(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint local_194;
  int local_190 [100];
  
  piVar5 = local_190;
  for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar5 = (int *)(param_2 + 4);
  piVar1 = piVar5;
  if (0xf < *(uint *)(param_2 + 0x18)) {
    piVar1 = (int *)*piVar5;
  }
  piVar4 = piVar5;
  if (0xf < *(uint *)(param_2 + 0x18)) {
    piVar4 = (int *)*piVar5;
  }
  FUN_10057d90(&local_194,piVar4,*(int *)(param_2 + 0x14) + (int)piVar1);
  if ((1 < param_3) && (param_3 < 0x11)) {
    do {
      FUN_10059440(param_3,&local_194);
      iVar3 = local_194 + 0x30;
      if (9 < local_194) {
        iVar3 = local_194 + 0x37;
      }
      piVar4 = piVar5;
      piVar1 = piVar5;
      if (0xf < *(uint *)(param_2 + 0x18)) {
        piVar4 = (int *)*piVar5;
        piVar1 = (int *)*piVar5;
      }
      if (piVar1 != (int *)0x0) {
        piVar1 = (int *)((int)piVar1 - (int)piVar4);
      }
      FUN_10057df0(piVar1,1,iVar3);
      uVar2 = 0;
      while (local_190[uVar2] == 0) {
        uVar2 = uVar2 + 1;
        if (99 < uVar2) {
          return;
        }
      }
    } while( true );
  }
  return;
}


/* END FUNCTION 0x1005a020 */
