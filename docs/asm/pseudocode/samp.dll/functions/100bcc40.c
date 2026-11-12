/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bcc40
 * Name: FUN_100bcc40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_100bcc40(int param_1)

{
  void *pvVar1;
  undefined4 *_Memory;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_8 = operator_new(0x23);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8[3] = 0;
    local_8[5] = 0;
    local_8[4] = 0;
    *(undefined1 *)(local_8 + 6) = 0;
    *(undefined1 *)((int)local_8 + 0x19) = 0;
    *(undefined1 *)((int)local_8 + 0x22) = 0;
    *(undefined4 *)((int)local_8 + 0x1e) = 0;
    *(undefined4 *)((int)local_8 + 0x1a) = 0;
    *local_8 = 0;
    local_8[1] = 0;
    *(undefined2 *)(local_8 + 2) = 0xffff;
    *(undefined2 *)((int)local_8 + 10) = 0x1803;
  }
  pvVar1 = (void *)FUN_100bc900();
  *local_8 = 0xf;
  FUN_100bc710(local_8,pvVar1);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
  }
  FUN_100bc710(local_8,*(undefined4 *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 0x20) != 0) {
    _Memory = operator_new(0x23);
    if (_Memory == (undefined4 *)0x0) {
      _Memory = (undefined4 *)0x0;
    }
    else {
      _Memory[3] = 0;
      _Memory[5] = 0;
      _Memory[4] = 0;
      *(undefined1 *)(_Memory + 6) = 0;
      *(undefined1 *)((int)_Memory + 0x19) = 0;
      *(undefined1 *)((int)_Memory + 0x22) = 0;
      *(undefined4 *)((int)_Memory + 0x1e) = 0;
      *(undefined4 *)((int)_Memory + 0x1a) = 0;
      *_Memory = 0;
      _Memory[1] = 0;
      *(undefined2 *)(_Memory + 2) = 0xffff;
      *(undefined2 *)((int)_Memory + 10) = 0x1803;
    }
    *_Memory = 0x253f2f9;
    local_4 = 0x37505050;
    FUN_100bc150(&local_4,4);
    FUN_100bc150(*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x12) << 2);
    _Memory[1] = _Memory[5];
    FUN_100bca90(0x253f2f9);
    FUN_100bc710(*(undefined4 *)(param_1 + 0x50),_Memory);
    if ((*(char *)((int)_Memory + 0x19) != '\0') &&
       (pvVar1 = (void *)_Memory[3], pvVar1 != (void *)0x0)) {
      _free(pvVar1);
      _Memory[3] = 0;
    }
    _free(_Memory);
  }
  FUN_100bc710(local_8,*(undefined4 *)(param_1 + 0x50));
  return local_8;
}


/* END FUNCTION 0x100bcc40 */
