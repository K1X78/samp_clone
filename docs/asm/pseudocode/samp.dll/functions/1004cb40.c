/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004cb40
 * Name: FUN_1004cb40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004cb40(undefined4 param_1,undefined2 param_2)

{
  void *_Memory;
  
  _Memory = (void *)FUN_1004af40(param_1,param_2);
  if (_Memory != (void *)0x0) {
    FUN_1004b320(&param_1);
    FUN_1004c4c0();
    _free(_Memory);
  }
  return;
}


/* END FUNCTION 0x1004cb40 */
