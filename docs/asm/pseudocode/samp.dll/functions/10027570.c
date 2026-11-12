/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027570
 * Name: FUN_10027570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10027570(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x91 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x8d + param_2 * 4);
  *param_3 = *(undefined4 *)(iVar1 + 5);
  iVar4 = *(int *)(iVar1 + 1);
  if (0 < iVar4) {
    puVar3 = (undefined4 *)(iVar1 + 5 + iVar4 * 4);
    do {
      *puVar3 = puVar3[-1];
      puVar3[0x10] = puVar3[0xf];
      puVar3 = puVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(iVar1 + 5) = *(undefined4 *)(iVar2 + 1 + *(int *)(iVar2 + 1) * 4);
  *(undefined4 *)(iVar1 + 0x45) = *(undefined4 *)(iVar2 + 0x41 + *(int *)(iVar2 + 1) * 4);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + -1;
  *(undefined4 *)(param_1 + 5 + param_2 * 4) = *(undefined4 *)(iVar1 + 5);
  param_3[1] = *(undefined4 *)(iVar1 + 5);
  return;
}


/* END FUNCTION 0x10027570 */
