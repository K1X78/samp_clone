/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044aa0
 * Name: FUN_10044aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10044aa0(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xc9 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0xcd + param_2 * 4);
  *param_3 = *(undefined2 *)(iVar2 + 5);
  *(undefined2 *)(iVar5 + 5 + *(int *)(iVar5 + 1) * 2) = *(undefined2 *)(iVar2 + 5);
  puVar1 = (undefined2 *)(iVar2 + 5);
  *(undefined4 *)(iVar5 + 0x45 + *(int *)(iVar5 + 1) * 4) = *(undefined4 *)(iVar2 + 0x45);
  puVar4 = (undefined4 *)(iVar2 + 0x45);
  *(int *)(iVar5 + 1) = *(int *)(iVar5 + 1) + 1;
  iVar5 = 0;
  puVar3 = puVar1;
  if (*(int *)(iVar2 + 1) != 1 && -1 < *(int *)(iVar2 + 1) + -1) {
    do {
      *puVar3 = puVar3[1];
      *puVar4 = puVar4[1];
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < *(int *)(iVar2 + 1) + -1);
  }
  *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + -1;
  *(undefined2 *)(param_1 + 3 + param_2 * 2) = *puVar1;
  param_3[1] = *puVar1;
  return;
}


/* END FUNCTION 0x10044aa0 */
