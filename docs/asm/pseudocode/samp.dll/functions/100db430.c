/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100db430
 * Name: FUN_100db430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100db430(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5b4) == 0) {
    if ((param_2 != 0) && (*(int *)(param_1 + 0x710) != 0)) {
      FUN_100d9bb0(*(int *)(param_1 + 0x710));
      *(undefined4 *)(param_1 + 0x710) = 0;
    }
    FUN_100dec30(param_1,2,2);
  }
  else {
    if (*(int *)(param_1 + 0x710) != 0) {
      FUN_100db3b0(param_1);
    }
    FUN_100dec30(param_1,2,2);
    iVar2 = FUN_100dae90(*(undefined4 *)(param_1 + 0x718));
    if (iVar2 != 0) {
      FUN_100d8ae0(param_1,"WARNING: failed to save cookies in %s\n",
                   *(undefined4 *)(param_1 + 0x5b4));
    }
  }
  if ((param_2 != 0) &&
     (((*(int *)(param_1 + 0x6c) == 0 ||
       (*(int *)(param_1 + 0x718) != *(int *)(*(int *)(param_1 + 0x6c) + 0x58))) &&
      (puVar1 = *(undefined4 **)(param_1 + 0x718), puVar1 != (undefined4 *)0x0)))) {
    (*(code *)PTR__free_101554bc)(puVar1[1]);
    FUN_100dacd0(*puVar1);
    (*(code *)PTR__free_101554bc)(puVar1);
  }
  FUN_100dec70(param_1,2);
  return;
}


/* END FUNCTION 0x100db430 */
