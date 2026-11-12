/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032890
 * Name: FUN_10032890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10032890(int param_1)

{
  int iVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  _Memory = *(undefined4 **)(param_1 + 4);
  while (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) == 1) {
      _free((void *)**(undefined4 **)(param_1 + 4));
      _free(*(void **)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      puVar2 = _Memory;
    }
    else {
      puVar2 = (undefined4 *)_Memory[1];
      if ((puVar2 == (undefined4 *)0x0) &&
         (puVar2 = (undefined4 *)_Memory[2], puVar2 == (undefined4 *)0x0)) {
        puVar2 = (undefined4 *)FUN_100326c0(*_Memory);
        puVar2 = (undefined4 *)*puVar2;
        if ((undefined4 *)puVar2[1] == _Memory) {
          puVar2[1] = 0;
        }
        else {
          puVar2[2] = 0;
        }
        _free((void *)*_Memory);
        _free(_Memory);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
    }
    _Memory = puVar2;
    iVar1 = *(int *)(param_1 + 0xc);
  }
  return;
}


/* END FUNCTION 0x10032890 */
