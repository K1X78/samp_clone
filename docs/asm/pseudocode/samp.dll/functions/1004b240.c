/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004b240
 * Name: thunk_FUN_1004ae50
 * Status: ok
 * Single JMP forwarder to 0x1004ae50; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_1004ae50(int *param_1,uint param_2)

{
  void *_Dst;
  
  if (param_2 < (uint)param_1[1]) {
    _Dst = (void *)(param_2 * 9 + *param_1);
    _memmove(_Dst,(void *)((int)_Dst + 9),((param_1[1] - param_2) + -1) * 9);
    param_1[1] = param_1[1] + -1;
  }
  return;
}


/* END FUNCTION 0x1004b240 */
