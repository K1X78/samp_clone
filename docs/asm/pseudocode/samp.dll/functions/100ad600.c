/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad600
 * Name: FUN_100ad600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_100ad600(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_1009f210();
    if (iVar1 != 0) {
      return *(int *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x10) != 0;
    }
  }
  return false;
}


/* END FUNCTION 0x100ad600 */
