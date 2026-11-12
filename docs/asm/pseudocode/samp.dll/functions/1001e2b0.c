/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e2b0
 * Name: FUN_1001e2b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1001e2b0(int param_1,ushort param_2)

{
  void *_Memory;
  uint uVar1;
  
  uVar1 = (uint)param_2;
  _Memory = *(void **)(param_1 + 0x2400 + uVar1 * 4);
  if (_Memory != (void *)0x0) {
    FUN_100b2b50();
    _free(_Memory);
    *(undefined4 *)(param_1 + 0x2400 + uVar1 * 4) = 0;
    *(undefined4 *)(param_1 + uVar1 * 4) = 0;
  }
  return;
}


/* END FUNCTION 0x1001e2b0 */
