/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bbcc0
 * Name: FUN_100bbcc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100bbcc0(int param_1)

{
  char *pcVar1;
  void *_Memory;
  void *pvVar2;
  undefined4 *_Memory_00;
  undefined4 *local_8;
  undefined4 local_4;
  
  _Memory_00 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar1 = (char *)**(undefined4 **)(param_1 + 0x24);
    if ((pcVar1 != (char *)0x0) && ((*pcVar1 != '\0' || (pcVar1[1] != '\0')))) {
      pvVar2 = operator_new(0x23);
      if (pvVar2 == (void *)0x0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        local_8 = (undefined4 *)FUN_100bb0b0();
      }
      pvVar2 = operator_new(0x23);
      if (pvVar2 != (void *)0x0) {
        _Memory_00 = (undefined4 *)FUN_100bb0b0();
      }
      *local_8 = 0x1a;
      *_Memory_00 = 1;
      local_4 = 1;
      FUN_100bc150(&local_4,4);
      _Memory_00[1] = _Memory_00[5];
      pvVar2 = (void *)FUN_100bcc40();
      FUN_100bb940(local_8,_Memory_00);
      FUN_100bb940(local_8,pvVar2);
      if ((*(char *)((int)_Memory_00 + 0x19) != '\0') &&
         (_Memory = (void *)_Memory_00[3], _Memory != (void *)0x0)) {
        _free(_Memory);
        _Memory_00[3] = 0;
      }
      _free(_Memory_00);
      if (pvVar2 != (void *)0x0) {
        if ((*(char *)((int)pvVar2 + 0x19) != '\0') &&
           (*(void **)((int)pvVar2 + 0xc) != (void *)0x0)) {
          _free(*(void **)((int)pvVar2 + 0xc));
          *(undefined4 *)((int)pvVar2 + 0xc) = 0;
        }
        _free(pvVar2);
      }
      pvVar2 = *(void **)(param_1 + 0x38);
      if (pvVar2 != (void *)0x0) {
        if ((*(char *)((int)pvVar2 + 0x19) != '\0') &&
           (*(void **)((int)pvVar2 + 0xc) != (void *)0x0)) {
          _free(*(void **)((int)pvVar2 + 0xc));
          *(undefined4 *)((int)pvVar2 + 0xc) = 0;
        }
        _free(pvVar2);
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      *(undefined4 **)(param_1 + 0x38) = local_8;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100bbcc0 */
