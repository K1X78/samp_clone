/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dfd40
 * Name: FUN_100dfd40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * FUN_100dfd40(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  void *_Memory;
  undefined2 *puVar1;
  
  _Memory = _calloc(1,0x20);
  if (_Memory != (void *)0x0) {
    puVar1 = _calloc(1,0x10);
    if (puVar1 != (undefined2 *)0x0) {
      puVar1[1] = param_3;
      *(undefined4 *)(puVar1 + 2) = param_4;
      *puVar1 = 2;
      *(undefined2 **)((int)_Memory + 0x18) = puVar1;
      *(undefined4 *)((int)_Memory + 4) = 2;
      *(undefined4 *)((int)_Memory + 8) = param_1;
      *(undefined4 *)((int)_Memory + 0xc) = param_2;
      *(undefined4 *)((int)_Memory + 0x10) = 0x10;
      return _Memory;
    }
    _free(_Memory);
  }
  return (void *)0x0;
}


/* END FUNCTION 0x100dfd40 */
