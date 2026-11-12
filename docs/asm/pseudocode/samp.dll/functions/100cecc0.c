/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cecc0
 * Name: FUN_100cecc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cecc0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(*param_1 + 0x4c4);
  uVar2 = 0;
  if (uVar1 != 0) {
    puVar3 = *(undefined4 **)(*param_1 + 0x4874);
    while (puVar3[3] != param_2) {
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0x14;
      if (uVar1 <= uVar2) {
        return;
      }
    }
    if (puVar3[3] != 0) {
      (**(code **)(PTR_DAT_10155510 + 0x44))(puVar3[3]);
      puVar3[3] = 0;
      puVar3[5] = 0;
      FUN_100ce770(puVar3 + 8);
      (*(code *)PTR__free_101554bc)(*puVar3);
      *puVar3 = 0;
      (*(code *)PTR__free_101554bc)(puVar3[1]);
      puVar3[1] = 0;
    }
  }
  return;
}


/* END FUNCTION 0x100cecc0 */
