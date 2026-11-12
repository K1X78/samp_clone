/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f5b10
 * Name: FUN_100f5b10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f5b10(undefined4 param_1,uint param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((in_EAX != (undefined4 *)0x0) && (param_2 != 0)) {
    puVar1 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(param_2 + 1);
    if (puVar1 == (undefined4 *)0x0) {
      return 0x1b;
    }
    puVar4 = puVar1;
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *in_EAX;
      in_EAX = in_EAX + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)in_EAX;
      in_EAX = (undefined4 *)((int)in_EAX + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined1 *)((int)puVar1 + param_2) = 0;
    uVar2 = FUN_100ddb20(param_1,puVar1);
    (*(code *)PTR__free_101554bc)(puVar1);
    return uVar2;
  }
  uVar2 = FUN_100ddb20(param_1);
  return uVar2;
}


/* END FUNCTION 0x100f5b10 */
