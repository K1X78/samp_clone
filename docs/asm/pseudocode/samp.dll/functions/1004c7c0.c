/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004c7c0
 * Name: FUN_1004c7c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004c7c0(void)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = FUN_1004ade0();
  if (iVar1 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_1004adc0(uVar4);
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        FUN_1004c4c0();
        _free(_Memory);
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_1004ade0();
    } while (uVar4 < uVar3);
  }
  FUN_1004add0();
  FUN_1004ac90();
  return;
}


/* END FUNCTION 0x1004c7c0 */
