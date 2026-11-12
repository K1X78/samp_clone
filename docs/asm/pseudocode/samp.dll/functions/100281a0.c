/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100281a0
 * Name: FUN_100281a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100281a0(int *param_1,uint param_2)

{
  void *_Dst;
  
  if (param_2 < (uint)param_1[1]) {
    _Dst = (void *)(*param_1 + param_2 * 0x24);
    _memmove(_Dst,(void *)((int)_Dst + 0x24),((param_1[1] - param_2) + -1) * 0x24);
    param_1[1] = param_1[1] + -1;
  }
  return;
}


/* END FUNCTION 0x100281a0 */
