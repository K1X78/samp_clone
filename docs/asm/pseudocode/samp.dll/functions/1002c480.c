/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002c480
 * Name: FUN_1002c480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1002c480(int param_1,int param_2,undefined4 param_3)

{
  FILE *_File;
  uint uVar1;
  undefined1 *_Memory;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    _File = (FILE *)FUN_100f9cc9(param_1,&DAT_10118e1c);
    if (_File != (FILE *)0x0) {
      _fseek(_File,0,2);
      uVar1 = _ftell(_File);
      _fseek(_File,0,0);
      if (0xfffff < (int)uVar1) {
        _Memory = operator_new(uVar1);
      }
      else {
        _Memory = &stack0xffffffec;
      }
      FUN_1002b560(param_2,_Memory,uVar1,uVar1,param_3);
      _fclose(_File);
      if (0xfffff < (int)uVar1) {
        _free(_Memory);
      }
    }
  }
  return;
}


/* END FUNCTION 0x1002c480 */
