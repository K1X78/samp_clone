/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0010
 * Name: FUN_100e0010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e0010(undefined2 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *_Memory;
  undefined2 *puVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x18) + 4);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    _Memory = _calloc(1,0x20);
    if (_Memory == (void *)0x0) break;
    puVar3 = _calloc(1,0x10);
    if (puVar3 == (undefined2 *)0x0) {
      _free(_Memory);
      return 8;
    }
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = uVar1;
    *puVar3 = 2;
    *(undefined4 *)((int)_Memory + 4) = 2;
    *(undefined4 *)((int)_Memory + 8) = 2;
    *(undefined4 *)((int)_Memory + 0xc) = uVar2;
    *(undefined4 *)((int)_Memory + 0x10) = 0x10;
    *(undefined2 **)((int)_Memory + 0x18) = puVar3;
    *(undefined4 *)((int)_Memory + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(void **)(param_2 + 0x1c) = _Memory;
    param_2 = *(int *)((int)_Memory + 0x1c);
  }
  return 8;
}


/* END FUNCTION 0x100e0010 */
