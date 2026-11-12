/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033fc0
 * Name: thunk_FUN_1003a760
 * Status: ok
 * Single JMP forwarder to 0x1003a760; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall thunk_FUN_1003a760(int *param_1,char param_2)

{
  void *pvVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    return 0;
  }
  if (param_2 == '\0') {
    pvVar1 = *(void **)((int)param_1 + 0x7d5);
    if (pvVar1 != (void *)0x0) {
      FUN_10026a60();
      _free(pvVar1);
      *(undefined4 *)((int)param_1 + 0x7d5) = 0;
    }
  }
  else {
    pvVar1 = *(void **)((int)param_1 + 0x7d1);
    if (pvVar1 != (void *)0x0) {
      FUN_10026a60();
      _free(pvVar1);
      *(undefined4 *)((int)param_1 + 0x7d1) = 0;
      return 1;
    }
  }
  return 1;
}


/* END FUNCTION 0x10033fc0 */
