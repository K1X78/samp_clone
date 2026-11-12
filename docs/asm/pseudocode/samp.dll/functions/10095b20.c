/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10095b20
 * Name: FUN_10095b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10095b20(int *param_1,int param_2)

{
  void *_Dst;
  
  if ((-1 < param_2) && (param_2 < param_1[1])) {
    _Dst = (void *)(param_2 * 0x3c + *param_1);
    _memmove(_Dst,(void *)((int)_Dst + 0x3c),(param_1[1] - param_2) * 0x3c - 0x3c);
    param_1[1] = param_1[1] + -1;
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x10095b20 */
