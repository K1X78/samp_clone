/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045bb00
 * Name: FUN_0045bb00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0045bb00(int param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0xd4 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0xd0 + param_2 * 4);
  *param_3 = *(undefined2 *)(iVar1 + 8);
  param_1 = *(int *)(iVar1 + 4);
  if (0 < param_1) {
    puVar5 = (undefined4 *)(iVar1 + 0x48 + param_1 * 4);
    puVar4 = (undefined2 *)(iVar1 + 8 + param_1 * 2);
    do {
      *puVar4 = puVar4[-1];
      *puVar5 = puVar5[-1];
      puVar4 = puVar4 + -1;
      puVar5 = puVar5 + -1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *(undefined2 *)(iVar1 + 8) = *(undefined2 *)(iVar2 + 6 + *(int *)(iVar2 + 4) * 2);
  *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar2 + 0x44 + *(int *)(iVar2 + 4) * 4);
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  *(undefined2 *)(iVar3 + 8 + param_2 * 2) = *(undefined2 *)(iVar1 + 8);
  param_3[1] = *(undefined2 *)(iVar1 + 8);
  return;
}


/* END FUNCTION 0x0045bb00 */
