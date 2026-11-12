/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae8b0
 * Name: FUN_100ae8b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ae8b0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_10155134;
  do {
    piVar2 = *(int **)(param_1 + 0x2a4);
    iVar3 = puVar5[-1];
    if (((piVar2 != (int *)0x0) && (*piVar2 != 0x863c40)) && (piVar2[6] != 0)) {
      iVar4 = (*(code *)0x734a40)(piVar2[6]);
      puVar1 = (undefined4 *)
               (*(int *)(*(int *)(iVar4 + 0x20) + 0x24) * iVar3 + 0x4c + *(int *)(iVar4 + 0x20));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
        puVar1[3] = puVar5[3];
      }
    }
    puVar5 = puVar5 + 5;
  } while ((int)puVar5 < 0x10155224);
  if (*(int *)(param_1 + 0x2a4) != 0) {
    (*(code *)0x532b20)();
  }
  return;
}


/* END FUNCTION 0x100ae8b0 */
