/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100db3b0
 * Name: FUN_100db3b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100db3b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x710);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_100dec30(param_1,2,2);
    do {
      iVar1 = FUN_100db030(param_1,*puVar2,*(undefined4 *)(param_1 + 0x718),
                           *(undefined4 *)(param_1 + 0x3b4));
      if (iVar1 == 0) {
        FUN_100d8ae0(param_1,"ignoring failed cookie_init for %s\n",*puVar2);
      }
      else {
        *(int *)(param_1 + 0x718) = iVar1;
      }
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != (undefined4 *)0x0);
    FUN_100d9bb0(*(undefined4 *)(param_1 + 0x710));
    *(undefined4 *)(param_1 + 0x710) = 0;
    FUN_100dec70(param_1,2);
  }
  return;
}


/* END FUNCTION 0x100db3b0 */
