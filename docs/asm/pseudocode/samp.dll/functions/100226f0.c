/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100226f0
 * Name: thunk_FUN_10021ed0
 * Status: ok
 * Single JMP forwarder to 0x10021ed0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_10021ed0(int *param_1,uint param_2)

{
  void *_Dst;
  
  if (param_2 < (uint)param_1[1]) {
    _Dst = (void *)(param_2 * 0xb + *param_1);
    _memmove(_Dst,(void *)((int)_Dst + 0xb),((param_1[1] - param_2) + -1) * 0xb);
    param_1[1] = param_1[1] + -1;
  }
  return;
}


/* END FUNCTION 0x100226f0 */
