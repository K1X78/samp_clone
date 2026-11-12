/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10046d00
 * Name: thunk_FUN_10045e50
 * Status: ok
 * Single JMP forwarder to 0x10045e50; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_10045e50(int *param_1,uint param_2)

{
  void *_Dst;
  
  if (param_2 < (uint)param_1[1]) {
    _Dst = (void *)(*param_1 + param_2 * 4);
    _memmove(_Dst,(void *)((int)_Dst + 4),(param_1[1] - param_2) * 4 - 4);
    param_1[1] = param_1[1] + -1;
  }
  return;
}


/* END FUNCTION 0x10046d00 */
