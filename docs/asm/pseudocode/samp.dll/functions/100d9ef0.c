/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9ef0
 * Name: FUN_100d9ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d9ef0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = FID_conflict___time32(0);
  puVar2 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)0x0;
  while (puVar3 = puVar4, puVar4 = puVar2, puVar4 != (undefined4 *)0x0) {
    iVar1 = puVar4[7];
    puVar2 = (undefined4 *)*puVar4;
    if (((puVar4[6] != 0 || iVar1 != 0) && (iVar1 <= (int)uVar5 >> 0x1f)) &&
       ((iVar1 < (int)uVar5 >> 0x1f || ((uint)puVar4[6] < uVar5)))) {
      if (puVar3 == (undefined4 *)0x0) {
        *param_1 = puVar2;
      }
      else {
        *puVar3 = puVar2;
      }
      param_1[3] = param_1[3] + -1;
      (*(code *)PTR__free_101554bc)(puVar4[8]);
      (*(code *)PTR__free_101554bc)(puVar4[5]);
      (*(code *)PTR__free_101554bc)(puVar4[3]);
      (*(code *)PTR__free_101554bc)(puVar4[4]);
      (*(code *)PTR__free_101554bc)(puVar4[1]);
      (*(code *)PTR__free_101554bc)(puVar4[2]);
      (*(code *)PTR__free_101554bc)(puVar4[0xb]);
      (*(code *)PTR__free_101554bc)(puVar4[10]);
      (*(code *)PTR__free_101554bc)(puVar4);
      puVar4 = puVar3;
    }
  }
  return;
}


/* END FUNCTION 0x100d9ef0 */
