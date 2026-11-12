/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ddac0
 * Name: FUN_100ddac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100ddac0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(0x168);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    puVar4 = puVar2;
    for (iVar3 = 0x5a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *puVar2 = uVar1;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[1] = param_1;
    if (param_1[3] != 0) {
      *(undefined4 **)(param_1[3] + 8) = puVar2;
      param_1[3] = puVar2;
      return puVar2;
    }
    param_1[2] = puVar2;
    param_1[3] = puVar2;
  }
  return puVar2;
}


/* END FUNCTION 0x100ddac0 */
