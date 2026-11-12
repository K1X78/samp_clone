/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100844b0
 * Name: FUN_100844b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100844b0(int *param_1)

{
  char cVar1;
  
  if (DAT_10180610 != param_1) {
    cVar1 = (**(code **)(*param_1 + 0x1c))();
    if (cVar1 != '\0') {
      if (DAT_10180610 != (int *)0x0) {
        (**(code **)(*DAT_10180610 + 0x24))();
      }
      (**(code **)(*param_1 + 0x20))();
      DAT_10180610 = param_1;
    }
  }
  return;
}


/* END FUNCTION 0x100844b0 */
