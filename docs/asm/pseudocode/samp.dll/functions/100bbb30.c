/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bbb30
 * Name: FUN_100bbb30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100bbb30(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  int *_Memory;
  int iVar3;
  uint local_10;
  int local_c [3];
  
  iVar3 = param_1[0xd];
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined1 *)(iVar3 + 0x18) = 0;
    FUN_100bc1d0(local_c,0xc);
    if (local_c[0] == 1) {
      local_10 = 0;
      FUN_100bc1d0(&local_10,4);
      uVar1 = local_10;
      if (0xff < local_10) {
        if (*param_1 == 0) {
          *param_1 = 0xabec;
        }
        param_1[1] = local_10;
        return 0;
      }
      pvVar2 = _calloc(local_10,0x38);
      param_1[0x12] = (int)pvVar2;
      FUN_100bc1d0(pvVar2,uVar1 * 0x38);
      _Memory = (int *)FUN_100bb170(param_1[0xd] + 0xc);
      while( true ) {
        if (_Memory == (int *)0x0) {
          return 1;
        }
        if (((*_Memory == 3) && (_Memory[1] != 0)) && (iVar3 = FUN_100bbaa0(_Memory), iVar3 == 0))
        break;
        FUN_1000b850();
        _free(_Memory);
        _Memory = (int *)FUN_100bb170(param_1[0xd] + 0xc);
      }
      FUN_1000b850();
      _free(_Memory);
      if (*param_1 == 0) {
        *param_1 = 0xabee;
      }
      return 0;
    }
    if (*param_1 == 0) {
      *param_1 = 0xabe7;
    }
    param_1[1] = 1;
  }
  return 0;
}


/* END FUNCTION 0x100bbb30 */
