/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae710
 * Name: FUN_100ae710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ae710(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *local_c;
  
  piVar2 = *(int **)(param_1 + 0x2a4);
  if (((piVar2 != (int *)0x0) && (*piVar2 != 0x863c40)) && (piVar2[6] != 0)) {
    local_c = (code *)0x7c51a0;
    if (DAT_102ac9b8 != 1) {
      local_c = (code *)0x7c51e0;
    }
    iVar3 = (*(code *)0x734a40)(piVar2[6]);
    iVar4 = (*local_c)(iVar3,param_3);
    puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) + iVar4 * 0x40);
    puVar6 = puVar5;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar1 = puVar5 + 3;
    *puVar1 = *puVar1 & 0xfffdfffc;
  }
  return;
}


/* END FUNCTION 0x100ae710 */
