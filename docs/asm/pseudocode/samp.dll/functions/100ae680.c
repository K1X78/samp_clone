/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae680
 * Name: FUN_100ae680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ae680(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  code *local_8;
  
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (piVar1[6] != 0)) {
    local_8 = (code *)0x7c51a0;
    if (DAT_102ac9b8 != 1) {
      local_8 = (code *)0x7c51e0;
    }
    iVar2 = (*(code *)0x734a40)(piVar1[6]);
    iVar3 = (*local_8)(iVar2,param_3);
    puVar5 = (undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 0x40);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


/* END FUNCTION 0x100ae680 */
