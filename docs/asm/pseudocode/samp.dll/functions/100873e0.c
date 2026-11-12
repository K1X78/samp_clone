/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100873e0
 * Name: FUN_100873e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100873e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x162)) {
    piVar3 = *(int **)(param_1 + 0x15e);
    do {
      piVar1 = (int *)*piVar3;
      if (*(char *)((int)piVar1 + 7) != '\0') {
        FUN_10084880();
                    /* WARNING: Could not recover jumptable at 0x10087419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        DAT_10180610 = piVar1;
        (**(code **)(*piVar1 + 0x20))();
        return;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x162));
  }
  return;
}


/* END FUNCTION 0x100873e0 */
