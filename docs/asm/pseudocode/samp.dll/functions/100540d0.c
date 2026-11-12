/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100540d0
 * Name: FUN_100540d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100540d0(void)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115bc8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  uVar4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = thunk_FUN_10053910();
  if (iVar1 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_10053b80(uVar4);
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        FUN_10026a60();
        _free(_Memory);
      }
      uVar4 = uVar4 + 1;
      uVar3 = thunk_FUN_10053910();
    } while (uVar4 < uVar3);
  }
  local_4 = 0xffffffff;
  FUN_10053e30();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x100540d0 */
