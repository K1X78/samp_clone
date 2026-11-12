/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8b50
 * Name: FUN_100a8b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a8b50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x40);
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, iVar1 != 0x863c40)) {
    (**(code **)(iVar1 + 0x44))(iVar1,piVar2);
    (*(code *)0x553260)(piVar2);
  }
  return;
}


/* END FUNCTION 0x100a8b50 */
