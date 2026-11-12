/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100275f0
 * Name: FUN_100275f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100275f0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x8d + param_2 * 4);
  iVar4 = *(int *)(param_1 + 0x89 + param_2 * 4);
  *param_3 = *(undefined4 *)(iVar2 + 5);
  puVar1 = (undefined4 *)(iVar2 + 5);
  *(undefined4 *)(iVar4 + 5 + *(int *)(iVar4 + 1) * 4) = *(undefined4 *)(iVar2 + 5);
  *(undefined4 *)(iVar4 + 0x45 + *(int *)(iVar4 + 1) * 4) = *(undefined4 *)(iVar2 + 0x45);
  *(int *)(iVar4 + 1) = *(int *)(iVar4 + 1) + 1;
  iVar4 = 0;
  puVar3 = puVar1;
  if (*(int *)(iVar2 + 1) != 1 && -1 < *(int *)(iVar2 + 1) + -1) {
    do {
      *puVar3 = puVar3[1];
      puVar3[0x10] = puVar3[0x11];
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(iVar2 + 1) + -1);
  }
  *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + -1;
  *(undefined4 *)(param_1 + 1 + param_2 * 4) = *puVar1;
  param_3[1] = *puVar1;
  return;
}


/* END FUNCTION 0x100275f0 */
