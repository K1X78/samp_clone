/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037d90
 * Name: FUN_10037d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10037d90(int param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1 + 0x15);
  *(int *)((int)pvVar1 + 8) = param_1;
  *(int *)((int)pvVar1 + 0x10) = (int)pvVar1 + 0x15;
  *(undefined1 *)((int)pvVar1 + 0x14) = 0;
  return;
}


/* END FUNCTION 0x10037d90 */
