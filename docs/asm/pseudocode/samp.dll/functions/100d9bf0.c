/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9bf0
 * Name: FUN_100d9bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * FUN_100d9bf0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar3 = (int *)0x0;
  do {
    if (param_1 == (undefined4 *)0x0) {
      return piVar3;
    }
    iVar5 = (*(code *)PTR___strdup_101554c4)(*param_1);
    if (iVar5 == 0) goto LAB_100d9c70;
    piVar6 = (int *)(*(code *)PTR__malloc_101554b8)(8);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
LAB_100d9c52:
      (*(code *)PTR__free_101554bc)(iVar5);
      if (piVar6 == (int *)0x0) {
LAB_100d9c70:
        FUN_100d9bb0(piVar3);
        return (int *)0x0;
      }
    }
    else {
      piVar6[1] = 0;
      *piVar6 = iVar5;
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while (piVar1 = piVar4, piVar1 != (int *)0x0) {
          piVar2 = piVar1;
          piVar4 = (int *)piVar1[1];
        }
        piVar2[1] = (int)piVar6;
        piVar6 = piVar3;
      }
      if (piVar6 == (int *)0x0) goto LAB_100d9c52;
    }
    param_1 = (undefined4 *)param_1[1];
    piVar3 = piVar6;
  } while( true );
}


/* END FUNCTION 0x100d9bf0 */
