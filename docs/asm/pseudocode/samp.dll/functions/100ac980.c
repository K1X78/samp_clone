/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac980
 * Name: FUN_100ac980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ac980(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  if ((((iVar1 != 0) && ((*(uint *)(iVar1 + 0x46c) & 0x100) == 0)) &&
      (piVar2 = *(int **)(*(int *)(iVar1 + 0x47c) + 0x10), piVar2 != (int *)0x0)) &&
     (*piVar2 == 0x8705c4)) {
    (*(code *)0x6801d0)(1);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x10) = 0;
  }
  return;
}


/* END FUNCTION 0x100ac980 */
