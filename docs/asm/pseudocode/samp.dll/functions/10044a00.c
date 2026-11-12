/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044a00
 * Name: FUN_10044a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10044a00(int param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0xd1 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0xcd + param_2 * 4);
  *param_3 = *(undefined2 *)(iVar1 + 5);
  param_1 = *(int *)(iVar1 + 1);
  if (0 < param_1) {
    puVar5 = (undefined4 *)(iVar1 + 0x45 + param_1 * 4);
    puVar4 = (undefined2 *)(iVar1 + 5 + param_1 * 2);
    do {
      *puVar4 = puVar4[-1];
      *puVar5 = puVar5[-1];
      puVar4 = puVar4 + -1;
      puVar5 = puVar5 + -1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *(undefined2 *)(iVar1 + 5) = *(undefined2 *)(iVar2 + 3 + *(int *)(iVar2 + 1) * 2);
  *(undefined4 *)(iVar1 + 0x45) = *(undefined4 *)(iVar2 + 0x41 + *(int *)(iVar2 + 1) * 4);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + -1;
  *(undefined2 *)(iVar3 + 5 + param_2 * 2) = *(undefined2 *)(iVar1 + 5);
  param_3[1] = *(undefined2 *)(iVar1 + 5);
  return;
}


/* END FUNCTION 0x10044a00 */
