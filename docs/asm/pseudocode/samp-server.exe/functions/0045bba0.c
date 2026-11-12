/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045bba0
 * Name: FUN_0045bba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0045bba0(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xcc + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0xd0 + param_2 * 4);
  *param_3 = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)(iVar5 + 8 + *(int *)(iVar5 + 4) * 2) = *(undefined2 *)(iVar2 + 8);
  puVar1 = (undefined2 *)(iVar2 + 8);
  *(undefined4 *)(iVar5 + 0x48 + *(int *)(iVar5 + 4) * 4) = *(undefined4 *)(iVar2 + 0x48);
  puVar4 = (undefined4 *)(iVar2 + 0x48);
  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
  iVar5 = 0;
  puVar3 = puVar1;
  if (*(int *)(iVar2 + 4) != 1 && -1 < *(int *)(iVar2 + 4) + -1) {
    do {
      *puVar3 = puVar3[1];
      *puVar4 = puVar4[1];
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < *(int *)(iVar2 + 4) + -1);
  }
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  *(undefined2 *)(param_1 + 6 + param_2 * 2) = *puVar1;
  param_3[1] = *puVar1;
  return;
}


/* END FUNCTION 0x0045bba0 */
