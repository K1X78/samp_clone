/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10095a60
 * Name: FUN_10095a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10095a60(int *param_1,int param_2)

{
  void *_Dst;
  
  if ((-1 < param_2) && (param_2 < param_1[1])) {
    _Dst = (void *)(param_2 * 0x130 + *param_1);
    _memmove(_Dst,(void *)((int)_Dst + 0x130),(param_1[1] - param_2) * 0x130 - 0x130);
    param_1[1] = param_1[1] + -1;
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x10095a60 */
