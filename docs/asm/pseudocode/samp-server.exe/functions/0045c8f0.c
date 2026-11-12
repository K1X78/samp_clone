/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c8f0
 * Name: FUN_0045c8f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __fastcall FUN_0045c8f0(int param_1)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    pvVar1 = operator_new(0x154);
    return pvVar1;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return pvVar1;
}


/* END FUNCTION 0x0045c8f0 */
