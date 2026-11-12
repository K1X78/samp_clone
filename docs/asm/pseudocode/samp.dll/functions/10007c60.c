/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10007c60
 * Name: FUN_10007c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10007c60(int param_1,byte param_2)

{
  void *_Memory;
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if ((*(int *)(param_1 + 0x200 + uVar1 * 4) != 0) &&
     (_Memory = *(void **)(param_1 + uVar1 * 4), _Memory != (void *)0x0)) {
    *(undefined4 *)(param_1 + 0x200 + uVar1 * 4) = 0;
    _free(_Memory);
    *(undefined4 *)(param_1 + uVar1 * 4) = 0;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10007c60 */
