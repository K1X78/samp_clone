/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055d80
 * Name: FUN_10055d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10055d80(int *param_1,uint param_2)

{
  void *_Dst;
  
  if (param_2 < (uint)param_1[1]) {
    _Dst = (void *)(*param_1 + param_2 * 4);
    _memmove(_Dst,(void *)((int)_Dst + 4),(param_1[1] - param_2) * 4 - 4);
    param_1[1] = param_1[1] + -1;
  }
  return;
}


/* END FUNCTION 0x10055d80 */
