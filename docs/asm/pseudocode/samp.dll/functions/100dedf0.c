/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dedf0
 * Name: FUN_100dedf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dedf0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_2 + 0xc);
  if (*(int *)(param_2 + 8) == 2) {
    (*(code *)PTR__free_101554bc)(*puVar1);
    *puVar1 = 0;
  }
  if (*(int *)(param_2 + 8) != 0) {
    iVar2 = FUN_100f0e30(puVar1);
    if (iVar2 != 0) {
      FUN_100dece0();
    }
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


/* END FUNCTION 0x100dedf0 */
