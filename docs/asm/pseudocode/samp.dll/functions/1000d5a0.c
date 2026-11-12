/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d5a0
 * Name: FUN_1000d5a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1000d5a0(int *param_1,uint param_2)

{
  void *_Memory;
  
  if ((param_2 < (uint)param_1[1]) &&
     (_Memory = *(void **)(*param_1 + param_2 * 4), _Memory != (void *)0x0)) {
    _free(_Memory);
    FUN_1000cfc0(param_2);
    return param_2;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x1000d5a0 */
