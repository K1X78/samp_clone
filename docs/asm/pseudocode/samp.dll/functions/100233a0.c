/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100233a0
 * Name: FUN_100233a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100233a0(void)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = thunk_FUN_100218b0();
  if (iVar1 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_10022420(uVar4);
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        FUN_10022880();
        _free(_Memory);
      }
      uVar4 = uVar4 + 1;
      uVar3 = thunk_FUN_100218b0();
    } while (uVar4 < uVar3);
  }
  FUN_10022870();
  FUN_10022340();
  return;
}


/* END FUNCTION 0x100233a0 */
