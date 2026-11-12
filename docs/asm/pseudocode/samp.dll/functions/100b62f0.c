/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b62f0
 * Name: FUN_100b62f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b62f0(code *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (((param_1 != (code *)0x0) && (*(int *)param_1 != 0x863c40)) &&
     (piVar1 = (int *)((int)param_1 + 0x18), *piVar1 != 0)) {
    param_1 = (code *)0x7c51a0;
    if (DAT_102ac9b8 != 1) {
      param_1 = (code *)0x7c51e0;
    }
    iVar2 = (*(code *)0x734a40)(*piVar1);
    iVar3 = (*param_1)(iVar2,param_3);
    puVar5 = (undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 0x40);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100b62f0 */
