/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e00a0
 * Name: FUN_100e00a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e00a0(void *param_1)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x14));
    }
    if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x18));
    }
    pvVar1 = *(void **)((int)param_1 + 0x1c);
    _free(param_1);
    param_1 = pvVar1;
  }
  return;
}


/* END FUNCTION 0x100e00a0 */
