/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100863c0
 * Name: FUN_100863c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100863c0(int *param_1,int param_2)

{
  void *_Dst;
  
  if ((-1 < param_2) && (param_2 < param_1[1])) {
    _Dst = (void *)(*param_1 + param_2 * 4);
    _memmove(_Dst,(void *)((int)_Dst + 4),(param_1[1] - param_2) * 4 - 4);
    param_1[1] = param_1[1] + -1;
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x100863c0 */
