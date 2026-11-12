/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045bc0
 * Name: FUN_10045bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __fastcall FUN_10045bc0(int param_1)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    pvVar1 = operator_new(0x151);
    return pvVar1;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return pvVar1;
}


/* END FUNCTION 0x10045bc0 */
