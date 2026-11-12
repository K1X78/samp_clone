/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064d80
 * Name: FUN_10064d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10064d80(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_10064d80();
    _free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    FUN_10064d80();
    _free(pvVar1);
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


/* END FUNCTION 0x10064d80 */
