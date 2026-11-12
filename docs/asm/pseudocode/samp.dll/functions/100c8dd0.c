/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8dd0
 * Name: FUN_100c8dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c8dd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)(unaff_EBX + 0x148);
  puVar5 = (undefined4 *)(param_1 + 0x148);
  for (iVar3 = 0x16e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x5a0);
  puVar5 = puVar4;
  for (iVar3 = 0x3a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 0;
  do {
    iVar1 = FUN_100c9370(puVar4,*(undefined4 *)((unaff_EBX - param_1) + (int)puVar4));
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 0x38);
  if ((*(int *)(unaff_EBX + 400) != 0 || *(int *)(unaff_EBX + 0x194) != 0) &&
     (*(int *)(unaff_EBX + 0x684) != 0)) {
    uVar2 = FUN_100d9a70(*(int *)(unaff_EBX + 400),*(int *)(unaff_EBX + 0x194));
    iVar3 = FUN_100d9960(*(undefined4 *)(unaff_EBX + 0x684),uVar2);
    *(int *)(param_1 + 0x684) = iVar3;
    if (iVar3 == 0) {
      return 0x1b;
    }
    *(int *)(param_1 + 0x188) = iVar3;
  }
  return 0;
}


/* END FUNCTION 0x100c8dd0 */
