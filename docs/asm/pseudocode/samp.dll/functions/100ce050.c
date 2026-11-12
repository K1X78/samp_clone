/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce050
 * Name: FUN_100ce050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ce050(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)piVar1[3]);
    iVar2 = piVar1[4];
    piVar1[4] = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)piVar1[3]);
    if (iVar2 == 0) {
      FUN_100e0d40(*piVar1);
    }
    else {
      if (*piVar1 != 0) {
        FUN_100e0d50(piVar1);
      }
      FUN_100cde50();
      (*(code *)PTR__free_101554bc)(param_1[5]);
    }
  }
  param_1[5] = 0;
  (*(code *)PTR__free_101554bc)(*param_1);
  *param_1 = 0;
  return;
}


/* END FUNCTION 0x100ce050 */
