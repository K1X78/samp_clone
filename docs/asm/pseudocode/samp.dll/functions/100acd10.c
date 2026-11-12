/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100acd10
 * Name: FUN_100acd10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100acd10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x2a4) + 0x730) != 0) {
      (*(code *)0x5393f0)();
    }
    if ((((*(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 0x100) != 0) &&
        (iVar1 = *(int *)(*(int *)(param_1 + 0x2a4) + 0x58c), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x490) != 0)) {
      (*(code *)0x5393f0)();
    }
  }
  return;
}


/* END FUNCTION 0x100acd10 */
