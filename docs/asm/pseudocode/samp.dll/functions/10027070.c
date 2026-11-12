/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027070
 * Name: FUN_10027070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10027070(code *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  for (iVar1 = FUN_10027060(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x85)) {
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 1)) {
      puVar2 = (undefined4 *)(iVar1 + 0x45);
      do {
        (*param_1)(*puVar2,iVar3);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < *(int *)(iVar1 + 1));
    }
  }
  return;
}


/* END FUNCTION 0x10027070 */
