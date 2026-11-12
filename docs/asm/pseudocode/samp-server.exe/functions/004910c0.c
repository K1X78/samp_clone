/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004910c0
 * Name: FUN_004910c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * FUN_004910c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b1981;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x30);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_00490a40(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}


/* END FUNCTION 0x004910c0 */
