/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae5e0
 * Name: FUN_100ae5e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ae5e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (piVar1[6] != 0)) {
    iVar2 = (*(code *)0x734a40)(piVar1[6]);
    return *(undefined4 *)(iVar2 + 4);
  }
  return 0;
}


/* END FUNCTION 0x100ae5e0 */
