/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce0d0
 * Name: FUN_100ce0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100ce0d0(int param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_4;
  
  piVar1 = (int *)(*(code *)PTR__calloc_101554c8)(1,0x48);
  uStack_4 = 0xc;
  *(int **)(param_1 + 0x558) = piVar1;
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x548) = in_EAX;
    *(undefined4 *)(param_1 + 0x550) = 0;
    *(undefined4 *)(param_1 + 0x554) = 0;
    *(undefined4 *)(param_1 + 0x54c) = 0;
    *piVar1 = 0;
    iVar2 = FUN_100cdea0(param_2);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x558) = 0;
      (*(code *)PTR__free_101554bc)(piVar1);
      puVar3 = (undefined4 *)FUN_100fdc77();
      *puVar3 = 0xc;
      return 0;
    }
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x544));
    iVar2 = (*(code *)PTR___strdup_101554c4)(param_2);
    *(int *)(param_1 + 0x544) = iVar2;
    if (iVar2 != 0) {
      piVar1[4] = 0;
      iVar2 = FUN_100e0d10(FUN_100cdf90,piVar1 + 3);
      *piVar1 = iVar2;
      if (iVar2 != 0) {
        return 1;
      }
      piVar1[4] = 1;
      puVar3 = (undefined4 *)FUN_100fdc77();
      uStack_4 = *puVar3;
    }
    FUN_100ce050((int *)(param_1 + 0x544));
  }
  puVar3 = (undefined4 *)FUN_100fdc77();
  *puVar3 = uStack_4;
  return 0;
}


/* END FUNCTION 0x100ce0d0 */
