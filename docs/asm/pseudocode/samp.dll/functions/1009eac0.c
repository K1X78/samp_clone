/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009eac0
 * Name: FUN_1009eac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009eac0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) {
    iVar2 = piVar1[6];
    if ((piVar1 != (int *)0x0) && ((iVar2 != 0 && (piVar1[5] != 0)))) {
      (*(code *)0x59ad70)(*(int *)(iVar2 + 4) + 0x10,iVar2,piVar1[5],piVar1);
      (*(code *)0x532b00)();
    }
  }
  return;
}


/* END FUNCTION 0x1009eac0 */
