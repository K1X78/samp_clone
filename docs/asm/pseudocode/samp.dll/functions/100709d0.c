/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100709d0
 * Name: FUN_100709d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100709d0(int param_1)

{
  void *_Memory;
  
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    _free(*(void **)(param_1 + 4));
  }
  if (((*(int *)(param_1 + 0x10) != 0) || (*(int *)(param_1 + 0x18) != 0)) ||
     (*(int *)(param_1 + 0x14) != 0)) {
    FUN_10070940();
  }
  _Memory = *(void **)(param_1 + 8);
  if ((_Memory != DAT_102aca2c) && (_Memory != (void *)0x0)) {
    FUN_1006ab40();
    _free(_Memory);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


/* END FUNCTION 0x100709d0 */
