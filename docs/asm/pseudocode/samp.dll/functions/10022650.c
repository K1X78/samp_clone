/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022650
 * Name: thunk_FUN_10021c70
 * Status: ok
 * Single JMP forwarder to 0x10021c70; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_10021c70(int *param_1,uint param_2)

{
  void *_Dst;
  
  if (param_2 < (uint)param_1[1]) {
    _Dst = (void *)(param_2 * 9 + *param_1);
    _memmove(_Dst,(void *)((int)_Dst + 9),((param_1[1] - param_2) + -1) * 9);
    param_1[1] = param_1[1] + -1;
  }
  return;
}


/* END FUNCTION 0x10022650 */
