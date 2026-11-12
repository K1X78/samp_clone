/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac2e0
 * Name: FUN_100ac2e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ac2e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x2a4) != 0)) &&
     ((*(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 0x100) == 0)) {
    iVar1 = FUN_100ac2b0();
    if ((iVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) != 0)) {
      (*(code *)0x601230)(0);
    }
  }
  return;
}


/* END FUNCTION 0x100ac2e0 */
