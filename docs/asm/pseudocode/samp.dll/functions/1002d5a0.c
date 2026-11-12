/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d5a0
 * Name: FUN_1002d5a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002d5a0(void)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar1 = thunk_FUN_1002cff0();
  if (iVar1 != 0) {
    do {
      piVar2 = (int *)FUN_1002d290(uVar5);
      if (*(char *)(*piVar2 + 0x61d) != '\0') {
        puVar3 = (undefined4 *)FUN_1002d290(uVar5);
        _free(*(void **)*puVar3);
      }
      puVar3 = (undefined4 *)FUN_1002d290(uVar5);
      _Memory = (void *)*puVar3;
      if (_Memory != (void *)0x0) {
        FUN_1002c560();
        _free(_Memory);
      }
      uVar5 = uVar5 + 1;
      uVar4 = thunk_FUN_1002cff0();
    } while (uVar5 < uVar4);
  }
  FUN_1002d2a0();
  return;
}


/* END FUNCTION 0x1002d5a0 */
