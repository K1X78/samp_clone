/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bdd80
 * Name: FUN_100bdd80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bdd80(int *param_1,int param_2)

{
  int *_Memory;
  int iVar1;
  
  _Memory = (int *)FUN_100bda10(param_2 + 0xc);
  do {
    if (_Memory == (int *)0x0) {
      return 1;
    }
    if (*_Memory == 1) {
      iVar1 = FUN_100bdb20(_Memory);
      if (iVar1 == 0) goto LAB_100bddde;
    }
    else if (*_Memory == 0x15) {
      iVar1 = FUN_100bdb60(_Memory);
      if (iVar1 == 0) {
        FUN_1000b850();
        _free(_Memory);
        if (*param_1 == 0) {
          *param_1 = 0xd2f2;
        }
        return 0;
      }
    }
    else {
LAB_100bddde:
      FUN_1000b850();
      _free(_Memory);
    }
    _Memory = (int *)FUN_100bda10(param_2 + 0xc);
  } while( true );
}


/* END FUNCTION 0x100bdd80 */
