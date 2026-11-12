/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bbf00
 * Name: FUN_100bbf00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100bbf00(int *param_1)

{
  int iVar1;
  char cVar2;
  int *_Memory;
  void *pvVar3;
  void *_Memory_00;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1[0xe];
  _Memory_00 = (void *)0x0;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  FUN_100bc1d0(&local_c,0xc);
  if ((local_c == 1) && (local_8 == 4)) {
    local_10 = 0;
    FUN_100bc1d0(&local_10,4);
    if (local_10 != 1) {
      if (*param_1 == 0) {
        *param_1 = 0xabe6;
      }
      return 0;
    }
    _Memory = (int *)FUN_100bb170(param_1[0xe] + 0xc);
    if (_Memory != (int *)0x0) {
      if (*_Memory == 0xf) {
        FUN_100bc1d0(&local_c,0xc);
        if (local_c == 1) {
          pvVar3 = operator_new(0xa1);
          if (pvVar3 != (void *)0x0) {
            _Memory_00 = (void *)FUN_100bbe80();
          }
          cVar2 = FUN_100bd700(_Memory + 3,*(undefined2 *)((int)_Memory + 10));
          if (cVar2 == '\0') {
            if (*param_1 == 0) {
              *param_1 = *(int *)((int)_Memory_00 + 2);
            }
            param_1[1] = *(int *)((int)_Memory_00 + 6);
            FUN_1000d620();
            _free(_Memory_00);
            return 0;
          }
          FUN_100bbe20(_Memory_00);
        }
      }
      if ((*(char *)((int)_Memory + 0x19) != '\0') && ((void *)_Memory[3] != (void *)0x0)) {
        _free((void *)_Memory[3]);
        _Memory[3] = 0;
      }
      _free(_Memory);
    }
    return 1;
  }
  if (*param_1 == 0) {
    *param_1 = 0xabe7;
  }
  return 0;
}


/* END FUNCTION 0x100bbf00 */
