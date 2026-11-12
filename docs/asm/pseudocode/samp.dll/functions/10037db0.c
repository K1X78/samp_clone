/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037db0
 * Name: FUN_10037db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10037db0(int param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc(0x15);
  *(undefined4 *)((int)pvVar1 + 0x10) = 0;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  *(undefined1 *)((int)pvVar1 + 0x14) = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)((int)pvVar1 + 0x10) = param_2;
    *(int *)((int)pvVar1 + 8) = param_1;
    *(undefined1 *)((int)pvVar1 + 0x14) = 1;
  }
  return;
}


/* END FUNCTION 0x10037db0 */
