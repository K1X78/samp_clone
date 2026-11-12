/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002f6d0
 * Name: FUN_1002f6d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002f6d0(void)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = thunk_FUN_1002f110();
  if (iVar1 != 0) {
    do {
      FUN_1002f560(uVar4);
      FUN_10029c60();
      puVar2 = (undefined4 *)FUN_1002f560(uVar4);
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        FUN_1002ee20();
        _free(_Memory);
      }
      uVar4 = uVar4 + 1;
      uVar3 = thunk_FUN_1002f110();
    } while (uVar4 < uVar3);
  }
  FUN_1002f570();
  return;
}


/* END FUNCTION 0x1002f6d0 */
