/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110960
 * Name: FUN_10110960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * FUN_10110960(undefined4 param_1,undefined4 param_2)

{
  void *_Memory;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  _Memory = operator_new(0x20);
  if (_Memory == (void *)0x0) {
    _Memory = (void *)0x0;
  }
  else {
    uVar1 = FUN_10111170(param_1,0);
    uVar2 = FUN_10111170(param_2,0);
    iVar3 = FUN_101109e0(uVar1,_Memory,uVar2);
    if (iVar3 == 0) {
      _free(_Memory);
      _Memory = (void *)0x0;
    }
  }
  return _Memory;
}


/* END FUNCTION 0x10110960 */
