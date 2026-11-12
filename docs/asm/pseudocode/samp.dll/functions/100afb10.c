/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100afb10
 * Name: FUN_100afb10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100afb10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x500) != 0 || (*(int *)(param_1 + 0x2e6) != 0)))) {
    *(undefined4 *)(param_1 + 0x2e6) = 0;
    (*(code *)0x5e6010)(iVar1);
  }
  return;
}


/* END FUNCTION 0x100afb10 */
