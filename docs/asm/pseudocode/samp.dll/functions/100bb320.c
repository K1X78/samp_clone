/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bb320
 * Name: FUN_100bb320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bb320(int *param_1,int param_2)

{
  undefined4 *_Memory;
  int iVar1;
  
  _Memory = (undefined4 *)FUN_100bb170(param_2 + 0xc);
  do {
    if (_Memory == (undefined4 *)0x0) {
      return 1;
    }
    switch(*_Memory) {
    case 1:
      iVar1 = FUN_100bb2e0(_Memory);
      goto LAB_100bb356;
    default:
      goto switchD_100bb347_caseD_2;
    case 3:
      iVar1 = FUN_100bb300(_Memory);
LAB_100bb356:
      if (iVar1 == 0) {
switchD_100bb347_caseD_2:
        FUN_1000b850();
        _free(_Memory);
      }
      break;
    case 0xe:
      iVar1 = FUN_100bb280(_Memory);
      if (iVar1 == 0) {
        FUN_1000b850();
        _free(_Memory);
        if (*param_1 == 0) {
          *param_1 = 0xabf0;
        }
        return 0;
      }
      break;
    case 0x14:
      iVar1 = FUN_100bb2c0(_Memory);
      if (iVar1 == 0) {
        FUN_1000b850();
        _free(_Memory);
        if (*param_1 == 0) {
          *param_1 = 0xabf1;
        }
        return 0;
      }
      break;
    case 0x1a:
      iVar1 = FUN_100bb2a0(_Memory);
      if (iVar1 == 0) {
        FUN_1000b850();
        _free(_Memory);
        if (*param_1 == 0) {
          *param_1 = 0xabef;
        }
        return 0;
      }
    }
    _Memory = (undefined4 *)FUN_100bb170(param_2 + 0xc);
  } while( true );
}


/* END FUNCTION 0x100bb320 */
