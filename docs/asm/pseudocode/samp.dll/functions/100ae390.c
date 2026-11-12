/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae390
 * Name: FUN_100ae390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ae390(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (piVar1[6] != 0)) {
    iVar2 = FUN_100ae2e0();
    if (iVar2 != 0) {
      uVar3 = FUN_100ae1f0(iVar2);
      return uVar3;
    }
    uVar3 = FUN_100ae2a0();
    return uVar3;
  }
  return 0;
}


/* END FUNCTION 0x100ae390 */
